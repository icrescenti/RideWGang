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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<21> Local_40[4];
	struct<52> Local_125[4];
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	struct<44> Local_336 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_380 = -1082130432;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 1065353216;
	var uLocal_385 = 1;
	struct<691> Local_386 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = -1;
	var uLocal_1087 = 1;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = -1;
	var uLocal_1099 = 1;
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
	var uLocal_1110 = -1;
	var uLocal_1111 = 1;
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
	var uLocal_1122 = -1;
	var uLocal_1123 = 1;
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
	var uLocal_1134 = -1;
	var uLocal_1135 = 1;
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
	var uLocal_1146 = -1;
	var uLocal_1147 = 1;
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
	var uLocal_1158 = -1;
	var uLocal_1159 = 1;
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
	var uLocal_1170 = -1;
	var uLocal_1171 = 1;
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
	var uLocal_1182 = -1;
	var uLocal_1183 = 1;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = -1;
	var uLocal_1195 = 1;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = -1;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1;
	var uLocal_1219 = 1;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = -1;
	var uLocal_1231 = 1;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = -1;
	var uLocal_1243 = 1;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = -1;
	var uLocal_1255 = 1;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = -1;
	var uLocal_1267 = 1;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = -1;
	var uLocal_1279 = 1;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = -1;
	var uLocal_1291 = 1;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = 1;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1;
	var uLocal_1315 = 1;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1;
	var uLocal_1327 = 1;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = -1;
	var uLocal_1339 = 1;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = -1;
	var uLocal_1351 = 1;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = -1;
	var uLocal_1363 = 1;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = -1;
	var uLocal_1375 = 1;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = 1;
	var uLocal_1388 = 0;
	struct<141> Local_1389 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1065353216;
	var uLocal_1546 = 1119092736;
	var uLocal_1547 = 1092616192;
	var uLocal_1548 = 1085276160;
	struct<21> Local_1549 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	vector3 vLocal_1578[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<7> Local_1618[3];
	int iLocal_1640 = 0;
	int iLocal_1641 = 0;
	int iLocal_1642 = 0;
	int iLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	float fLocal_1646 = 0f;
	float fLocal_1647 = 0f;
	int iLocal_1648 = 0;
	struct<8> Local_1649[3];
	struct<31> Local_1674 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	int iLocal_1707 = 0;
	int iLocal_1708 = 0;
	int iLocal_1709 = 0;
	var uLocal_1710 = 6;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	int iLocal_1759[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1768[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_1778[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	var uLocal_1790[3] = { 0, 0, 0 };
	int iLocal_1794[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1805[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	var uLocal_1820 = 0;
	int iLocal_1821 = 0;
	int iLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = -1;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 1097859072;
	var uLocal_1841 = 1000;
	var uLocal_1842 = 1067450368;
	var uLocal_1843 = 5000;
	var uLocal_1844 = 42;
	var uLocal_1845 = 1103626240;
	var uLocal_1846 = 1077936128;
	var uLocal_1847 = 1106247680;
	var uLocal_1848 = 1103101952;
	var uLocal_1849 = 1097859072;
	var uLocal_1850 = 1103626240;
	var uLocal_1851 = 0;
	int iLocal_1852 = 0;
	int iLocal_1853 = 0;
	int iLocal_1854 = 0;
	int iLocal_1855 = 0;
	int iLocal_1856 = 0;
	struct<82> Local_1857 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 1, 0, 0, 24 } ;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = -1082130432;
	var uLocal_2042 = -1082130432;
	var uLocal_2043 = 1103626240;
	var uLocal_2044 = -1067450368;
	var uLocal_2045 = 1097859072;
	var uLocal_2046 = 1073741824;
	var uLocal_2047 = 4000;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 1073741824;
	int iLocal_2070 = 0;
	struct<136> Local_2071 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1109393408, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_27 = 1;
	iLocal_28 = 2;
	iLocal_29 = -1;
	Local_1389.f_136 = 1;
	Local_1389.f_137 = uScriptParam_0;
	Local_1389.f_138 = 64;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_1389.f_136);
		return;
	}
	Local_386.f_4 = { -439.9877f, 501.6415f, 97.94789f };
	Local_386.f_7 = { -464.5924f, 469.1017f, 80f };
	Local_386.f_10 = { -387.3216f, 532.1035f, 125f };
	iLocal_1853 = func_4();
	func_5(1);
	func_7(4, func_6(Local_1389.f_136));
	if (func_8(Local_1389.f_136, 33554432))
	{
		func_5(4);
		func_9(Local_1389.f_136, 33554432);
	}
	func_7(64, !func_10(Local_1389.f_136, 64));
	func_12(256, func_11(Local_1389.f_136));
	func_7(2, func_13(Local_1389.f_136));
	func_7(16, func_14(&iLocal_1789));
	func_7(8, func_10(Local_1389.f_136, 128));
	func_7(256, !func_8(Local_1389.f_136, 131072));
	func_7(2048, func_15(64));
	func_7(4096, func_8(Local_1389.f_136, 64));
	func_7(8192, func_8(Local_1389.f_136, 128));
	func_7(131072, func_8(Local_1389.f_136, 2));
	func_5(8388608);
	func_16(0, &Local_1389, 0);
	func_12(64, func_17());
	func_18();
	func_3(Local_1389.f_136);
	func_19(&Local_1389, 32, ((func_10(Local_1389.f_136, 524288) || func_10(Local_1389.f_136, 1048576)) || func_10(Local_1389.f_136, 2097152)));
	if (!func_20(&Local_1389, 32))
	{
		iLocal_1759[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.8f, 500.2f, 98.8f, 0f, 0f, 0f, 30.76097f, 33.35877f, 15.06476f, "Castor's Ridge - companionVolume");
	}
	if (func_20(&Local_1389, 32))
	{
		if (!func_21(256))
		{
			iVar0 = 16;
			func_22(((*Global_1392194)[Local_1389.f_136 /*10*/])->f_6, iVar0);
		}
	}
	else
	{
		func_23(((*Global_1392194)[Local_1389.f_136 /*10*/])->f_6);
	}
	iLocal_18 = func_24(Local_1389.f_136);
	if (!func_8(Local_1389.f_136, 2097152))
	{
		func_25(Local_1389.f_136, 2097152);
	}
	func_19(&Local_1389, 2048, iLocal_18 == 5);
	if (iLocal_18 < 4)
	{
		func_26();
	}
	if (iLocal_18 == 1 && !func_27(8))
	{
		iLocal_1759[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.4236f, 503.3533f, 98.76091f, 0f, 0f, 1.506823f, 5.272687f, 2.633899f, 3.570507f, "Castor's Ridge - volFrame");
		iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.2235f, 501.9597f, 99.17344f, 0f, 0f, 1.506823f, 6.000473f, 4.019011f, 5.080577f, "Castor's Ridge - volBlocking");
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.4028f, 502.0049f, 101.2801f, 0f, 0f, 2.529653f, 5.277621f, 1f, 1.514907f, "Castor's Ridge - volFrameTrigger");
		if (func_20(&Local_1389, 32))
		{
			func_28();
		}
	}
	else if (iLocal_18 == 2 && !func_27(8))
	{
		iLocal_1759[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-448.6899f, 508.8307f, 100.9918f, 0f, 0f, 1.631845f, 9.986375f, 8.676397f, 4.074053f, "Castor's Ridge - volFollow");
	}
	else if (iLocal_18 == 3 && !func_27(8))
	{
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.7617f, 502.7154f, 98.70467f, 0f, 0f, 1.799746f, 3.666057f, 1.748832f, 3.458851f, "Castor's Ridge - volStairs");
		iLocal_1759[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Castor's Ridge - volFollow");
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_1759[4]), -436.1921f, 513.9036f, 100.7752f, 0f, 0f, -28.38637f, 13.09126f, 8.676397f, 4.074053f);
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_1759[4]), -455.4126f, 509.8932f, 100.7752f, 0f, 0f, 51.85447f, 13.09126f, 8.676397f, 4.074053f);
		VOLUME::_0x39816F6F94F385AD(&(iLocal_1759[4]), -444.5037f, 509.3485f, 100.6195f, 0f, 0f, 1.838882f, 5.715972f, 3.997581f, 8.804232f);
		VOLUME::_0x39816F6F94F385AD(&(iLocal_1759[4]), -449.1066f, 518.0027f, 100.8164f, 0f, 0f, 23.93622f, 13.16835f, 5.263707f, 8.498951f);
		POPULATION::_0xB56D41A694E42E86(&(iLocal_1759[4]), 2048, 0, 0, -1, -1, 0);
	}
	else if (iLocal_18 == 4 || iLocal_18 == 5)
	{
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.7643f, 500.9564f, 99.21016f, 0f, 0f, 2.481348f, 3.629966f, 1.99332f, 4.66624f, "Castor's Ridge - volNav");
		iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.4818f, 497.02f, 99.15102f, 0f, 0f, 2.391671f, 3.361284f, 5.955622f, 2.877767f, "Castor's Ridge - volHall");
	}
	if ((iLocal_18 == 5 || func_20(&Local_1389, 32)) || (iLocal_18 == 4 && func_27(8)))
	{
		func_29(Local_1389.f_138, 32);
		func_30(Local_1389.f_138);
	}
	else
	{
		func_31(Local_1389.f_138, 32);
	}
	if (iLocal_18 >= 4 || func_20(&Local_1389, 32))
	{
		func_29(65, 32);
		func_29(66, 32);
		func_30(65);
		func_30(66);
	}
	else
	{
		func_31(65, 32);
		func_31(66, 32);
		func_32(65);
		func_32(66);
	}
	if (func_8(Local_1389.f_136, 1048576))
	{
		func_31(67, 32);
		func_31(68, 32);
		func_32(65);
		func_32(66);
	}
	else
	{
		func_33(67);
		func_33(68);
		func_29(67, 32);
		func_29(68, 32);
	}
	func_34(Local_1389.f_136, Local_1389.f_137, &Local_386, &Local_1389, 1, 1);
	if (func_27(16))
	{
		iVar1 = 2;
	}
	if (iLocal_18 == 3 && !func_10(Local_1389.f_136, 4))
	{
		func_35();
	}
	func_36();
	func_37();
	func_38(&iVar1);
	func_39(&Local_1389);
	func_40(&Local_1389, 1);
	func_41(&Local_1389, 21);
	if (func_27(2))
	{
		Local_1549.f_3 = 1;
	}
	if (iLocal_18 != 5)
	{
	}
	else
	{
		func_42(&Local_1389, 512);
		func_43(32768);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_1856 = 1;
	}
	while (true)
	{
		func_44();
		func_46(iLocal_1856, 9781/*func_45*/, 0);
		if (!iLocal_1856)
		{
			switch (iLocal_1821)
			{
				case 0:
					if (!func_20(&Local_1389, 32) && Local_386.f_3 < (iVar1 + (Local_386.f_1 + Local_386) + 3))
					{
						func_47(((3 + (Local_386 + Local_386.f_1)) + iVar1), &Local_386);
					}
					else if (func_48())
					{
						iLocal_1821 = 1;
					}
					break;
				case 1:
					func_49(32);
					if (!func_50(1) && func_51())
					{
						if (func_20(&Local_1389, 32))
						{
							func_43(1);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && func_27(64))
						{
							bVar2 = func_50(32);
							func_53(1, func_52(&bVar2, &iLocal_1819));
							func_53(32, bVar2);
							if (func_50(1))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							func_43(1);
						}
					}
					else if (!func_50(256) && func_51())
					{
						if (func_20(&Local_1389, 32))
						{
							func_43(256);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && func_27(64))
						{
							bVar3 = func_50(32);
							func_53(256, func_54(&bVar3, &iLocal_1819));
							func_53(32, bVar3);
							if (func_50(256))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							func_43(256);
						}
					}
					else if (!func_50(2))
					{
						if (func_55(Local_1389.f_138, 32) || func_20(&Local_1389, 32))
						{
							func_43(2);
						}
						else
						{
							func_56(Local_1389.f_138, 1, 0, 0, 0, 0);
							func_53(2, func_57(Local_1389.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(func_58(Local_1389.f_138), 301, false);
								PED::SET_PED_CONFIG_FLAG(func_58(Local_1389.f_138), 297, true);
								PED::SET_PED_CONFIG_FLAG(func_58(Local_1389.f_138), 315, true);
								PED::SET_PED_CONFIG_FLAG(func_58(Local_1389.f_138), 146, true);
								func_59(&(Local_1389.f_35), func_58(Local_1389.f_138), "HOME_FOREMAN", 0);
							}
						}
					}
					else if (!func_50(4))
					{
						if ((iLocal_18 >= 4 || func_55(65, 32)) || func_20(&Local_1389, 32))
						{
							func_43(4);
						}
						else
						{
							func_56(65, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || func_27(8))
							{
								func_53(4, func_57(65, 1, 1));
							}
							else
							{
								func_53(4, !ENTITY::IS_ENTITY_DEAD(func_58(65)));
								if (!ENTITY::IS_ENTITY_DEAD(func_58(65)))
								{
									PED::SET_PED_CONFIG_FLAG(func_58(65), 301, false);
									PED::SET_PED_CONFIG_FLAG(func_58(65), 297, true);
									PED::SET_PED_CONFIG_FLAG(func_58(65), 146, true);
								}
							}
						}
					}
					else if (!func_50(8))
					{
						if ((iLocal_18 >= 4 || func_55(66, 32)) || func_20(&Local_1389, 32))
						{
							func_43(8);
						}
						else
						{
							func_56(66, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || func_27(8))
							{
								func_53(8, func_57(66, 1, 1));
							}
							else
							{
								func_53(8, !ENTITY::IS_ENTITY_DEAD(func_58(66)));
								if (!ENTITY::IS_ENTITY_DEAD(func_58(66)))
								{
									PED::SET_PED_CONFIG_FLAG(func_58(66), 301, false);
									PED::SET_PED_CONFIG_FLAG(func_58(66), 297, true);
									PED::SET_PED_CONFIG_FLAG(func_58(66), 146, true);
								}
							}
						}
					}
					if (!func_50(16))
					{
						if (func_60(&Local_386))
						{
							if (ENTITY::DOES_ENTITY_EXIST((Local_386.f_690[3 /*12*/])->f_8))
							{
								ENTITY::SET_ENTITY_COLLISION((Local_386.f_690[3 /*12*/])->f_8, false, false);
								ENTITY::SET_ENTITY_VISIBLE((Local_386.f_690[3 /*12*/])->f_8, false);
							}
							func_43(16);
						}
					}
					func_59(&(Local_1389.f_35), Global_35, "ARTHUR", 0);
					Local_2071.f_33 = { Local_1389.f_35 };
					Local_1857.f_81 = { Local_1389.f_35 };
					func_61(Local_1389.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && func_50(1)) && func_50(2)) && func_50(4)) && func_50(8)) && func_50(16)) && func_50(256)) && func_62()) && func_63()) || func_20(&Local_1389, 32))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(Local_1389.f_138), -1976316465);
							func_64();
							func_65();
						}
						iLocal_1821 = 2;
					}
					break;
				case 2:
					if (func_20(&Local_1389, 128) && func_66(Local_1389.f_136, func_27(4)))
					{
						func_67(0);
						func_68(&Local_1389, 128);
					}
					if (iLocal_18 != 5 && func_16(iLocal_1640, &Local_1389, 5))
					{
						func_37();
					}
					func_69(&Local_1389, &Local_386);
					if (!func_20(&Local_1389, 2))
					{
						func_70(&iLocal_1768, &fLocal_1778, &Local_1389, 64, 66, &uLocal_1820, &iLocal_1640, 10, -1082130432, !func_21(2097152));
						func_71(&iLocal_1768);
						func_71(&iLocal_1794);
						func_72();
						if (func_73(&uLocal_33, 3))
						{
							func_74(vLocal_1578[11 /*3*/]);
						}
						if (func_75())
						{
							func_76(&Local_1389, &iLocal_1640, 3000, 10);
						}
						if ((!func_27(16) && !func_20(&Local_1389, 32)) && func_27(4))
						{
							func_77(&Local_1389, 0, 1073741824, 1071644672);
						}
						if (func_78())
						{
							func_79();
							func_80();
							func_81();
							func_82(&Local_1549, &Local_1389, 1);
							if (iLocal_18 >= 4)
							{
								func_83(&(iLocal_1759[1]));
							}
							else if (iLocal_18 >= 3)
							{
								func_84(&Local_1389);
							}
							if (!func_85())
							{
								func_42(&Local_1389, 4096);
							}
							func_86();
							func_87(&uLocal_1790);
							func_88(&Local_1389);
							func_89(&uLocal_30, 1);
							iVar4 = func_58(Local_1389.f_138);
							iVar5 = func_58(65);
							iVar6 = func_58(66);
							func_90(&iVar4, &iVar5, &iVar6, 1);
							AUDIO::STOP_PED_SPEAKING(iVar4, false);
							AUDIO::STOP_PED_SPEAKING(iVar5, false);
							AUDIO::STOP_PED_SPEAKING(iVar6, false);
							PED::SET_PED_CONFIG_FLAG(iVar4, 277, false);
							PED::SET_PED_CONFIG_FLAG(iVar5, 277, false);
							PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
							if (func_91(1))
							{
								func_42(&Local_1389, 4096);
								func_42(&Local_1389, 16384);
								func_92();
							}
							else
							{
								func_25(Local_1389.f_136, 1024);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
							func_68(&Local_1389, 65536);
							MAP::DISPLAY_RADAR(true);
							HUD::DISPLAY_HUD(true);
							func_93(0);
							iVar7 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1905235087, Global_35, 1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
							if (!func_20(&Local_1389, 4096) && !func_50(524288))
							{
								if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[0])))
								{
									func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[1])))
								{
									func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[2])))
								{
									func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if ((func_20(&Local_1389, 4096) || func_50(524288)) && func_20(&Local_1389, 8192))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1549) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_1549.f_20[0 /*4*/]))
								{
									func_94(&(Local_1389.f_35), Local_1549.f_20[0 /*4*/], Local_1549, Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[0])))
								{
									func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[1])))
								{
									func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[2])))
								{
									func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							func_42(&Local_1389, 2);
							func_96(Local_1389.f_136, 3);
							func_97(&Local_1389);
							iVar8 = 0;
							while (iVar8 < iLocal_1768)
							{
								if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[iVar8])))
								{
									if (func_99(func_98(&(iLocal_1768[iVar8]), 0)))
									{
										if (func_55(func_98(&(iLocal_1768[iVar8]), 0), 32))
										{
										}
										else
										{
											if (!func_100(func_98(&(iLocal_1768[iVar8]), 0), 0))
											{
												func_57(func_98(&(iLocal_1768[iVar8]), 0), 1, 1);
											}
											PED::SET_PED_CONFIG_FLAG(&(iLocal_1768[iVar8]), 277, false);
										}
										iVar8++;
										func_101(1);
										func_102();
										func_103();
										func_106(&Local_1389, &iLocal_1768, &uLocal_1790, 0, func_104(131072, 1056964608, 1065353216), 3, iVar7, 1, func_20(&Local_1389, 4096), 0, func_105(&Local_1389, Local_1389.f_28), 1051260355);
										if (func_107(822112047))
										{
											iVar4 = func_108("HMSTD_FOREMAN");
										}
										else
										{
											iVar4 = func_58(Local_1389.f_138);
										}
										iVar9 = func_109(iVar4, 0, 1, 0);
										if (!WEAPON::IS_WEAPON_VALID(iVar9))
										{
											iVar9 = func_104(131072, 1056964608, 1065353216);
										}
										if (func_110(iVar4, 0, 1))
										{
											PED::SET_PED_ACCURACY(iVar4, 55);
										}
										func_111(&Local_1389, iVar4, uLocal_1790[0], (func_20(&Local_1389, 4096) && !func_27(16)), iVar9, 0);
										if (iLocal_18 != 4)
										{
										}
										else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0])))
										{
											func_112(&(iLocal_1794[0]), Global_35);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iLocal_1794[0]);
										}
										func_42(&Local_1389, 128);
										Jump @4477; //curOff = 4335
										func_113(&iLocal_1768, &Local_1389);
										func_114();
										func_115();
										if (iLocal_18 != 4)
										{
										}
										else
										{
											if ((!func_107(965958659) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0]))) && PED::_IS_MOUNT_SEAT_FREE(&(iLocal_1794[0]), -1))
											{
												func_116(&(iLocal_1794[0]), 1, Global_35, "HMSTD_HORSE");
											}
											if (ENTITY::DOES_ENTITY_EXIST((Local_386.f_690[0 /*12*/])->f_8))
											{
												MISC::_0x8BB99B85444544D9((Local_386.f_690[0 /*12*/])->f_8, func_117(-1506205562));
											}
										}
										func_103();
										iVar10 = Local_1389.f_139;
										if (!func_27(-2147483648))
										{
											if (func_118(&Local_1389, &iLocal_1768, &iLocal_1768, &(Local_1389.f_139), 1, 0))
											{
												if (!func_50(32768))
												{
													func_42(&Local_1389, 4);
												}
											}
											else if (!func_20(&Local_1389, 8) && !func_119(Local_1389.f_138, 0))
											{
												if (!func_50(32768))
												{
													func_42(&Local_1389, 8);
												}
											}
										}
										if (iVar10 != Local_1389.f_139)
										{
											if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[0])))
											{
												func_94(&(Local_1389.f_35), "HOME_AGGRO", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
											}
											else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[1])))
											{
												func_94(&(Local_1389.f_35), "HOME_DEAD_1", &(iLocal_1768[1]), Global_35, 0, 0, 1, 1);
											}
											else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1768[2])))
											{
												func_95(&(iLocal_1768[2]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
											}
										}
										if (!func_20(&Local_1389, 2))
										{
											func_120(&Local_1549);
											if (func_121(&Local_1549, 1))
											{
												func_122(&Local_1389, &Local_1549, Local_40[3 /*21*/], Local_125[3 /*52*/]);
											}
											else
											{
												func_123(&Local_1549, 4);
											}
											if (func_124())
											{
												func_45();
											}
										}
										func_125();
										if (func_126())
										{
											iLocal_1856 = 1;
										}
										BUILTIN::WAIT(Local_1389.f_30);
									}
								}
							}
						}
					}
			}
		}
	}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-621282815, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-908732483, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2006823758, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(244605245, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(261151632, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-718375739, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1468840253, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(861452355, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-270282311, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-603631438, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1192733433, false);
}

void func_3(int iParam0)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!func_129(iVar0, 8))
	{
		func_130(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(func_131(iParam0, func_24(iParam0)), 100f);
	func_132(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
}

int func_4()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_5(int iParam0)
{
	func_133(&uLocal_14, iParam0);
}

int func_6(var uParam0)
{
	int iVar0;

	if (func_134(30336, 1, 1) && !func_135())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_136(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_137() && func_138() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_5(iParam0);
	}
	else
	{
		func_139(iParam0);
	}
}

bool func_8(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return ((Global_40.f_9096[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_9(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_8(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_5 = ((Global_40.f_9096[iParam0 /*12*/])->f_5 - ((Global_40.f_9096[iParam0 /*12*/])->f_5 && iParam1));
}

bool func_10(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return ((Global_40.f_9096[iParam0 /*12*/])->f_4 && iParam1) != 0;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if ((Global_40.f_9096[iParam0 /*12*/])->f_10 < 0)
	{
		return 0;
	}
	if (func_10(iParam0, 4194304))
	{
		return 0;
	}
	func_140(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return 0;
	}
	return 1;
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_141(iParam0);
	}
	else
	{
		func_142(iParam0);
	}
}

int func_13(int iParam0)
{
	int iVar0;

	if ((Global_40.f_9096[iParam0 /*12*/])->f_9 == -1)
	{
		return 0;
	}
	if ((Global_40.f_9096[iParam0 /*12*/])->f_10 < 0)
	{
		return 0;
	}
	if (func_10(iParam0, 524288))
	{
		return 0;
	}
	if (!func_8(iParam0, 16777216))
	{
		func_96(iParam0, 2);
		return 1;
	}
	iVar0 = (&Global_40.f_9096[iParam0 /*12*/] - (Global_40.f_9096[iParam0 /*12*/])->f_9);
	if (iVar0 >= 2)
	{
		if (func_8(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_143(iParam0))
	{
		if (func_8(iParam0, 32768))
		{
			func_9(iParam0, 32768);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_8(iParam0, 32768))
	{
		func_9(iParam0, 32768);
	}
	return 1;
}

int func_14(int iParam0)
{
	int iVar0;

	if (!Global_1935630->f_12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
			if (func_144(&iVar0))
			{
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_15(int iParam0)
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
	iVar0 = func_146(func_145());
	if (func_147(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_147(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = MISC::_0x4BEB42AEBCA732E9();
		iVar8 = MISC::_0x51021D36F62AAA83();
		MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_148(iVar7) || func_149(iVar7));
		bVar5 = (func_148(iVar8) || func_149(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_20(uParam1, 256))
			{
				bVar6 = true;
			}
			func_42(uParam1, 256);
		}
		else if (bVar4)
		{
			if (func_150(iVar7) || func_151(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_20(uParam1, 256))
				{
					bVar6 = true;
				}
				func_68(uParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_150(iVar8) || func_151(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_20(uParam1, 256))
				{
					bVar6 = true;
				}
				func_42(uParam1, 256);
			}
		}
		else
		{
			if (func_20(uParam1, 256))
			{
				bVar6 = true;
			}
			func_68(uParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return 0;
}

int func_17()
{
	if (!func_27(2048))
	{
		return 1;
	}
	if (func_20(&Local_1389, 256))
	{
		return 1;
	}
	if (!func_27(256))
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	float fVar0;

	if (!VOLUME::_0xF6A8A652A6B186CD(iLocal_1852) && !func_152(Local_1389.f_136))
	{
		if (iLocal_18 == 2 && !func_27(8))
		{
			fVar0 = 180f;
		}
		else
		{
			fVar0 = 100f;
		}
		iLocal_1852 = func_153(Global_1898092->f_26.f_5, "Castor's Ridge", 1, 0, 0, 0, -1082130432);
	}
}

void func_19(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_42(uParam0, iParam1);
	}
	else
	{
		func_68(uParam0, iParam1);
	}
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0->f_29 && iParam1) != 0;
}

bool func_21(int iParam0)
{
	return func_154(uLocal_16, iParam0);
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			((*Global_1935475)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]))
		{
			(*Global_1935475)[iVar0 /*2*/] = iParam0;
			((*Global_1935475)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_23(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			(*Global_1935475)[iVar0 /*2*/] = 0;
			((*Global_1935475)[iVar0 /*2*/])->f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0 /*12*/]);
}

void func_25(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_8(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_5 = ((Global_40.f_9096[iParam0 /*12*/])->f_5 || iParam1);
}

void func_26()
{
	func_156(&iLocal_1707, func_155(), 12f, 2, -1, 0);
	func_156(&iLocal_1708, func_155(), 5f, 1, -1, 0);
}

bool func_27(int iParam0)
{
	return func_154(uLocal_14, iParam0);
}

void func_28()
{
	vector3 vVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[6])))
	{
		vVar0 = { VOLUME::_0x3E2A25B2416DD67E(&(iLocal_1759[1])) };
		vVar0.f_1 = (vVar0.y + 1f);
		vVar0.x = (vVar0.x + 0.5f);
		vVar0.f_2 = (vVar0.z + 0.5f);
		iLocal_1759[6] = VOLUME::_0x0EB78C2B156635B1(-1612834106, VOLUME::_0xF70F00013A62F866(&(iLocal_1759[1])), VOLUME::_0x18675BC914891122(&(iLocal_1759[1])), vVar0);
	}
}

void func_29(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_30(int iParam0)
{
	int iVar0;

	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_159(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_159(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_159(iParam0));
	return 1;
}

void func_31(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_32(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_159(iParam0));
	return 1;
}

void func_33(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	(Global_24886[iParam0 /*2*/])->f_1 = func_145();
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		_NAMESPACE48::_0x0B3A99AB6713AA52(func_159(iParam0));
	}
}

void func_34(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uParam3->f_136 = uParam0;
	uParam3->f_137 = iParam1;
	func_42(uParam3, 128);
	func_160(iParam1, 1);
	if (bParam5)
	{
		func_161(((*Global_1392194)[uParam3->f_136 /*10*/])->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_162(((*Global_1392194)[uParam3->f_136 /*10*/])->f_6, 0);
		func_163(((*Global_1392194)[uParam3->f_136 /*10*/])->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_164(&iVar1, &iVar2, func_8(1, 1048576));
	}
	else
	{
		func_165(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_99(iVar3) && !func_55(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_32(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_166(iParam1, iVar1, iVar2, 1);
	}
	if (!func_20(uParam3, 32))
	{
		_NAMESPACE48::_0xB173599D61FAEB31();
	}
}

void func_35()
{
	(Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6 = 0;
}

void func_36()
{
	func_2();
	switch (iLocal_18)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1468840253, true);
			break;
		case 2:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(861452355, true);
			break;
	}
	if (iLocal_18 < 4)
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1192733433, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-270282311, true);
	}
	if (func_20(&Local_1389, 32) || func_20(&Local_1389, 2))
	{
		return;
	}
	switch (iLocal_18)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-621282815, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 2:
			if (func_27(4096) || func_27(8))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2006823758, true);
			}
			else
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-908732483, true);
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 3:
			if (func_27(8192) || func_27(8))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(244605245, true);
			}
			else
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(261151632, true);
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 4:
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-718375739, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5);
}

void func_37()
{
	int iVar0;

	if (func_20(&Local_1389, 256))
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman_Shelter");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
	}
	else if ((iLocal_18 == 3 || iLocal_18 == 2) && !func_10(Local_1389.f_136, 128))
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
	}
	else
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(65), "EventAreas/CastorsPond/HMSTD_Worker");
		_NAMESPACE48::_0x187D65F3AEC5D679(func_157(66), "EventAreas/CastorsPond/HMSTD_Worker");
	}
	iVar0 = func_58(64);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
	iVar0 = func_58(65);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
	iVar0 = func_58(66);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
}

int func_38(int iParam0)
{
	if (func_20(&Local_1389, 32))
	{
		return 1;
	}
	switch (iLocal_18)
	{
		case 1:
			Local_386 = 0;
			break;
		case 2:
			Local_386 = 0;
			if (!func_10(Local_1389.f_136, 64) && func_27(4))
			{
				Local_386.f_1 = 4;
				*iParam0 = (*iParam0 + Local_386.f_1);
				(Local_386.f_369[0 /*32*/])->f_6 = { -471.161f, 494.0929f, 98.39474f };
				(Local_386.f_369[0 /*32*/])->f_9 = -75.62f;
				(Local_386.f_369[0 /*32*/])->f_1 = joaat("a_m_m_smhthug_01");
				(Local_386.f_369[0 /*32*/])->f_3 = -1414706886;
				(Local_386.f_369[0 /*32*/])->f_15 = { -493.8461f, 475.8383f, 97.53687f };
				(Local_386.f_369[0 /*32*/])->f_18 = -27.61f;
				(Local_386.f_369[0 /*32*/])->f_12 = -1038436471;
				(Local_386.f_369[1 /*32*/])->f_6 = { -471.6009f, 495.1383f, 98.64632f };
				(Local_386.f_369[1 /*32*/])->f_9 = -77.64f;
				(Local_386.f_369[1 /*32*/])->f_1 = joaat("a_m_m_smhthug_01");
				(Local_386.f_369[1 /*32*/])->f_3 = -1185717114;
				(Local_386.f_369[1 /*32*/])->f_15 = { -488.6204f, 471.2552f, 95.98804f };
				(Local_386.f_369[1 /*32*/])->f_18 = -25.83f;
				(Local_386.f_369[1 /*32*/])->f_12 = -1038436471;
				(Local_386.f_369[2 /*32*/])->f_6 = { -472.1612f, 496.9294f, 98.96235f };
				(Local_386.f_369[2 /*32*/])->f_9 = -82.48f;
				(Local_386.f_369[2 /*32*/])->f_1 = joaat("a_m_m_smhthug_01");
				(Local_386.f_369[2 /*32*/])->f_3 = -418660362;
				(Local_386.f_369[2 /*32*/])->f_15 = { -490.7553f, 480.6002f, 97.61851f };
				(Local_386.f_369[2 /*32*/])->f_18 = 143.66f;
				(Local_386.f_369[2 /*32*/])->f_12 = -1038436471;
				(Local_386.f_369[3 /*32*/])->f_6 = { -468.4569f, 499.7347f, 98.83929f };
				(Local_386.f_369[3 /*32*/])->f_9 = -89.7f;
				(Local_386.f_369[3 /*32*/])->f_1 = joaat("a_m_m_smhthug_01");
				(Local_386.f_369[3 /*32*/])->f_3 = -188589213;
				(Local_386.f_369[3 /*32*/])->f_15 = { -486.4112f, 476.0952f, 96.62942f };
				(Local_386.f_369[3 /*32*/])->f_18 = 158.82f;
				(Local_386.f_369[3 /*32*/])->f_12 = -1038436471;
			}
			else
			{
				Local_386.f_1 = 0;
			}
			break;
		case 3:
			Local_386 = 0;
			break;
		case 4:
			Local_386 = 0;
			if (!func_27(8))
			{
				Local_386.f_1 = 1;
				(Local_386.f_369[0 /*32*/])->f_6 = { -447.632f, 498.775f, 97.0966f };
				(Local_386.f_369[0 /*32*/])->f_9 = -91.61f;
				(Local_386.f_369[0 /*32*/])->f_1 = -1038436471;
			}
			break;
	}
	return 0;
}

void func_39(var uParam0)
{
	func_167(uParam0);
	func_168(uParam0, 10f, 1);
	func_169(uParam0, 1);
	func_170(uParam0, 1);
	func_171(uParam0, 1);
	func_40(uParam0, 1);
	func_172(uParam0, 0);
	func_173(uParam0, 0);
	func_174(uParam0, 1);
	func_175(uParam0, 1);
	func_176(uParam0, 1);
	func_177(uParam0, 1);
	func_178(uParam0, 1);
	func_179(uParam0, 1);
	func_180(uParam0, 1.25f);
	func_181(uParam0, 1);
	func_182(uParam0, 1);
	func_183(uParam0, 1);
	func_184(uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 256);
	}
	else
	{
		func_132(&(uParam0->f_1), 256);
	}
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_42(var uParam0, int iParam1)
{
	if (func_20(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 || iParam1);
}

void func_43(int iParam0)
{
	func_133(&uLocal_15, iParam0);
}

void func_44()
{
	if (!func_21(2048))
	{
		if (func_186(Global_35, ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 1, 0))
		{
			func_141(2048);
			StringCopy(&(Global_1894899->f_162), "SETTLEMENT_CASTORS_RIDGE", 64);
		}
	}
	else if (!func_186(Global_35, ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 1, 0))
	{
		func_142(2048);
		StringCopy(&(Global_1894899->f_162), "", 64);
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iLocal_1854)
	{
		case 0:
			func_89(&uLocal_30, 1);
			if (func_21(2048))
			{
				StringCopy(&(Global_1894899->f_162), "", 64);
			}
			if (func_27(4) && func_27(131072))
			{
				func_187();
			}
			if (func_20(&Local_1389, 16384))
			{
				if (!func_20(&Local_1389, 32768))
				{
					func_188(Local_1389.f_136);
				}
				else
				{
					func_25(Local_1389.f_136, 1024);
				}
			}
			func_82(&Local_1549, &Local_1389, 0);
			TASK::RESET_SCENARIO_TYPES_ENABLED();
			if (func_10(Local_1389.f_136, 128))
			{
				iVar0 = func_58(Local_1389.f_138);
				func_189(&iVar0);
				iVar0 = func_58(65);
				func_189(&iVar0);
				iVar0 = func_58(66);
				func_189(&iVar0);
			}
			break;
		case 1:
			if ((func_8(Local_1389.f_136, 128) && func_27(262144)) && (func_190(Global_35, iLocal_1789, 0) || func_191(0)))
			{
				func_9(Local_1389.f_136, 128);
				func_192(Local_1389.f_136, 16384);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1855);
			}
			func_193();
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1817))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1817);
			}
			if (VOLUME::_0xF6A8A652A6B186CD(iLocal_1852))
			{
				VOLUME::_0xFDFECC6EE4491E11(iLocal_1852);
			}
			func_164(&uVar3, &iVar4, func_8(Local_1389.f_136, 1048576));
			iVar2 = uVar3;
			while (iVar2 <= iVar4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_58(iVar2)))
				{
					PED::_0x935CF6E42BAF7F4D(func_58(iVar2));
					iVar1 = TASK::_0xDF7993356F52359A(func_58(iVar2), 0);
					if (TASK::_0x841475AC96E794D1(iVar1))
					{
						TASK::_0x81948DFE4F5A0283(iVar1);
					}
				}
				iVar2++;
			}
			break;
		case 3:
			if (iLocal_18 == 2 && func_10(Local_1389.f_136, 64))
			{
				func_194(1);
				if (func_195())
				{
					if (!func_8(Local_1389.f_136, 64))
					{
						func_25(Local_1389.f_136, 64);
					}
					if (!func_10(Local_1389.f_136, 128))
					{
						func_84(&Local_1389);
					}
				}
				else if (!func_8(Local_1389.f_136, 64) && !func_10(Local_1389.f_136, 128))
				{
					func_196(func_58(Local_1389.f_138), 0, 0);
					func_196(func_58(65), 0, 0);
					func_196(func_58(66), 0, 0);
					iVar5 = 0;
					while (iVar5 < Local_386.f_1)
					{
						if (iVar5 == 0)
						{
							func_196(&(iLocal_1794[iVar5]), 0, 0);
						}
						else
						{
							func_197(iLocal_1794[iVar5]);
						}
						iVar5++;
					}
					func_42(&Local_1389, 4);
					func_84(&Local_1389);
					func_192(Local_1389.f_136, 8388608);
				}
			}
			if (!func_20(&Local_1389, 2))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					if (func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, func_198(iVar6, 0)))
					{
						iVar7 = 0;
						while (iVar7 < 3)
						{
							func_132(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iVar6, iVar7));
							iVar7++;
						}
					}
					iVar6++;
				}
			}
			break;
		case 4:
			if (func_27(512))
			{
				func_9(Local_1389.f_136, 2);
			}
			func_9(Local_1389.f_136, 8192);
			func_199();
			if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_58(Local_1389.f_138), 707888648);
			}
			func_101(1);
			if (iLocal_18 == 4 && func_10(Local_1389.f_136, 128))
			{
				func_200(Local_1389.f_136, 33554432);
			}
			func_2();
			iVar5 = 0;
			while (iVar5 < 8)
			{
				func_83(&(iLocal_1759[iVar5]));
				iVar5++;
			}
			break;
		case 5:
			func_201(Local_1389.f_136, &Local_386, &Local_1389);
			func_202(&Local_386);
			HUD::_0xAA03F130A637D923(func_203());
			HUD::_0xAA03F130A637D923(func_204());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_1854++;
}

void func_46(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_205(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_47(int iParam0, int iParam1)
{
	PED::_0xF008E0BA1FE1D644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

int func_48()
{
	switch (iLocal_1822)
	{
		case 0:
			if (!func_206())
			{
				return 0;
			}
			if (!func_20(&Local_1389, 32))
			{
				func_207(&(Local_386.f_15));
				func_207(&(Local_386.f_304));
				func_207(&(Local_386.f_369));
				func_208(&Local_1389);
				func_209();
				func_210();
				if (func_27(4))
				{
					func_211(&Local_2071);
					func_212(&Local_1857);
				}
			}
			func_213();
			func_214(&(Local_386.f_690));
			func_156(&iLocal_1709, func_215(), 13.5f, 2, -1, 0);
			HUD::_0xF66090013DE648D5(func_203());
			HUD::_0xF66090013DE648D5(func_204());
			iLocal_1822 = 1;
			break;
		case 1:
			if (!func_51())
			{
			}
			if (!func_216())
			{
			}
			if (!func_62())
			{
			}
			if (!func_63())
			{
			}
			if ((iLocal_18 == 4 && func_10(Local_1389.f_136, 128)) || iLocal_18 > 4)
			{
				if (!func_217(1))
				{
					return 0;
				}
			}
			if (!func_218())
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_49(int iParam0)
{
	func_219(&uLocal_15, iParam0);
}

bool func_50(int iParam0)
{
	return func_154(uLocal_15, iParam0);
}

int func_51()
{
	if (((!func_220(&(Local_386.f_15)) || !func_220(&(Local_386.f_304))) || !func_220(&(Local_386.f_369))) || !func_221(&Local_1389))
	{
		return 0;
	}
	return 1;
}

int func_52(bool bParam0, var uParam1)
{
	if (*bParam0)
	{
		return 0;
	}
	if (PED::_0x5C16855277819BBF() > Local_386.f_1)
	{
		if (*uParam1 < Local_386.f_1)
		{
			if ((Local_386.f_369[*uParam1 /*32*/])->f_1 != 0)
			{
				iLocal_1794[*uParam1] = func_222((Local_386.f_369[*uParam1 /*32*/])->f_1, Local_386.f_369[*uParam1 /*32*/], (Local_386.f_369[*uParam1 /*32*/])->f_6, (Local_386.f_369[*uParam1 /*32*/])->f_9, 1, 0, 1, 0, 1);
				DECORATOR::DECOR_SET_BOOL(&(iLocal_1794[*uParam1]), "bIgnoreThisPed", true);
			}
			*uParam1++;
			*bParam0 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_43(iParam0);
	}
	else
	{
		func_49(iParam0);
	}
}

int func_54(bool bParam0, int iParam1)
{
	if (*bParam0)
	{
		return 0;
	}
	if (*iParam1 < Local_386.f_1)
	{
		if ((Local_386.f_369[*iParam1 /*32*/])->f_12 != 0)
		{
			(Local_386.f_369[*iParam1 /*32*/])->f_11 = func_222((Local_386.f_369[*iParam1 /*32*/])->f_12, Local_386.f_369[*iParam1 /*32*/], (Local_386.f_369[*iParam1 /*32*/])->f_15, (Local_386.f_369[*iParam1 /*32*/])->f_18, 1, 1, 1, 0, 1);
			DECORATOR::DECOR_SET_BOOL((Local_386.f_369[*iParam1 /*32*/])->f_11, "bIgnoreThisPed", true);
		}
		*iParam1++;
		*bParam0 = 1;
		return 0;
	}
	return 1;
	return 0;
}

bool func_55(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_56(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_158(func_157(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		func_223(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_119(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_224(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_225(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_159(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_159(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_159(iParam0), 0);
	}
	if (!func_225(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_159(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	func_226(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_58(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, !bParam1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, bParam2);
		_NAMESPACE48::_0x6759BEE6762E140B(func_159(iParam0));
		if (!bParam1)
		{
			func_227(iVar0, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_58(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_158(func_157(iParam0)))
	{
		return func_228(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_229(iParam0), 0);
}

void func_59(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_230(uParam0, iParam1, sParam2))
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

bool func_60(var uParam0)
{
	return func_232(func_231(), &(uParam0->f_690), 0, 0, 0, -1, 1);
}

void func_61(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (bParam1)
	{
		func_130(iVar0, 8);
		func_132(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
	}
	else
	{
		func_233(iVar0, 8);
		func_185(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
	}
}

int func_62()
{
	if (!func_234(&uLocal_1710))
	{
		return 0;
	}
	if (!func_235())
	{
		return 0;
	}
	return 1;
}

int func_63()
{
	if (!HUD::_0xD0976CC34002DB57(func_203()))
	{
		return 0;
	}
	if (!HUD::_0xD0976CC34002DB57(func_204()))
	{
		return 0;
	}
	return 1;
}

void func_64()
{
	vector3 vVar0;
	var uVar3;

	func_236();
	if (!func_27(4) || func_27(2))
	{
		return;
	}
	PED::_0xFC3DB99C8144CD81(func_58(Local_1389.f_138), ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 0, 0, 0);
	if (iLocal_18 < 4)
	{
		PED::_0xFC3DB99C8144CD81(func_58(65), ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 0, 0, 0);
		PED::_0xFC3DB99C8144CD81(func_58(66), ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 0, 0, 0);
	}
	if (func_10(Local_1389.f_136, 128))
	{
		func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
		if (!(iLocal_18 == 3 && func_8(Local_1389.f_136, 2)) && func_27(2048))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_58(65)))
			{
				func_239(&vVar0, &uVar3);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58(65), 0, 1);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(func_58(65), vVar0, 2f, -1, 0, 0, 0, 0);
			}
			func_240(66, 1);
		}
		else
		{
			func_240(65, 1);
			func_240(66, 1);
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 2:
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58(Local_1389.f_138), 0, 1);
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58(65), 0, 1);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58(66), 0, 1);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 3:
				func_238(func_58(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824);
				func_238(func_58(65), func_237(65), 0f, 2, 1073741824);
				func_238(func_58(66), func_237(66), 0f, 2, 1073741824);
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_58(Local_1389.f_138), 0, 1);
					func_238(func_58(Local_1389.f_138), func_241(), func_242(), 2, 1073741824);
				}
				break;
			case 5:
				break;
		}
	}
}

void func_65()
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(func_58(65), true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(func_58(66), true, true);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return MISC::_0x1B065A2BF7953815(0) != 1;
}

void func_67(bool bParam0)
{
	int iVar0;

	iVar0 = func_24(1);
	if (func_10(1, 128))
	{
		func_243(1, 0);
	}
	else
	{
		if (iVar0 > 4)
		{
			func_243(1, 0);
		}
		if (func_8(1, 32768))
		{
			func_243(1, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 3:
					if (func_8(1, 128))
					{
						func_243(1, 0);
					}
					else if (func_8(1, 256))
					{
						if (bParam0 || !func_10(1, 268435456))
						{
							func_244(1);
							func_245(1, 0, "HOME_JOURN01", 0, !bParam0);
							func_200(1, 268435456);
						}
					}
					else
					{
						func_243(1, 0);
					}
					break;
				default:
					func_243(1, 0);
					break;
			}
		}
	}
}

void func_68(var uParam0, int iParam1)
{
	if (!func_20(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 - (uParam0->f_29 && iParam1));
}

int func_69(var uParam0, var uParam1)
{
	if (!Global_1935630->f_12 && func_186(Global_35, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 1, 0))
	{
		if (!func_20(uParam0, 64))
		{
			func_42(uParam0, 64);
			func_246(uParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

void func_70(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_55(iVar0, 32))
			{
				iVar1 = func_58(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (PED::IS_PED_HUMAN(iVar1))
					{
						(*uParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = func_247(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(iVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(iVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 7, 0, 1);
						func_248(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(iVar1, fParam8);
						}
					}
					else
					{
						func_249(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_71(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uParam0[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_72()
{
	int iVar0;
	struct<21> Var1;
	char* sVar30;
	int iVar31;

	if (!func_21(8192))
	{
		if (func_21(4096) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			func_141(4096);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			sVar30 = func_250(&Var1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
			{
				AUDIO::_0xEF51242E35242B47(sVar30);
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_251(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_252(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_141(8192);
			}
		}
	}
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 648122183))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_74(var uParam0)
{
	func_253(uParam0, 0f);
}

int func_75()
{
	if (func_27(65536))
	{
		return 0;
	}
	if (func_27(16))
	{
		return 0;
	}
	if (iLocal_18 == 4)
	{
		return 0;
	}
	return 1;
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if ((*iParam1 % iParam3) == 0)
	{
		if (uParam0->f_137 == 76)
		{
			func_164(&uVar1, &iVar2, func_8(1, 1048576));
		}
		else
		{
			func_165(uParam0->f_137, &uVar1, &iVar2, 0, 0);
		}
		iVar0 = uVar1;
		while (iVar0 <= iVar2)
		{
			if (func_99(iVar0) && func_100(iVar0, 0))
			{
				iVar3 = func_58(iVar0);
				if (!func_254(iVar3, 1435919172) && !TASK::GET_IS_TASK_ACTIVE(iVar3, 3))
				{
					func_255(iVar0, uParam0, iParam2, 1);
				}
			}
			iVar0++;
		}
	}
}

void func_77(var uParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;

	if (func_256(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = ((*Global_1392194)[uParam0->f_136 /*10*/])->f_6;
	}
	if (func_186(Global_35, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam2);
	}
	iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
	if (func_186(iVar0, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, fParam3);
	}
}

int func_78()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_50(524288))
	{
		return 1;
	}
	if (func_121(&Local_1549, 2))
	{
		return 1;
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		if (Global_1935630->f_23)
		{
			return 1;
		}
	}
	iVar0 = uLocal_1644;
	func_257(&Local_1389, 1);
	if (func_258(&iLocal_1768, &Local_1389, &(Local_1389.f_28), &uLocal_1644, 0, 2, 1))
	{
		if (func_259(&(Local_1389.f_28)) || Local_1389.f_28 == 4)
		{
			if (func_27(16))
			{
				if (Local_1389.f_28 == 8)
				{
					func_42(&Local_1389, 8192);
					return 1;
				}
			}
			if ((func_21(1024) && Local_1389.f_10 == &iLocal_1768[0]) && Local_1389.f_28 == 65536)
			{
				func_260(&Local_1389, &(Local_1389.f_28));
				func_261(&Local_1389, &(Local_1389.f_28));
				func_262(vLocal_1578[9 /*3*/]);
				return 0;
			}
			if (func_50(16384))
			{
				if (Local_1389.f_28 == 65536 || Local_1389.f_28 == 512)
				{
					func_260(&Local_1389, &(Local_1389.f_28));
					return 0;
				}
				else if (Local_1389.f_28 == 8192)
				{
					func_42(&Local_1389, 8192);
					return 1;
				}
			}
			if (!func_121(&Local_1549, 1))
			{
				if (!func_50(4096))
				{
					func_93(0);
				}
				func_264(&Local_1549, &Local_1389, Local_1389.f_28, 43436/*func_263*/, 0, 0);
				func_265(&Local_1549, 256);
				if (Local_1549 == &iLocal_1768[0])
				{
					StringCopy(Local_1549.f_20[0 /*4*/], func_250(&Local_1549), 32);
					func_265(&Local_1549, 32);
				}
				else if (Local_1549 == &iLocal_1768[1])
				{
					StringCopy(Local_1549.f_20[0 /*4*/], func_251(&Local_1549, 0), 32);
					StringCopy(Local_1549.f_20[1 /*4*/], func_251(&Local_1549, 1), 32);
					func_265(&Local_1549, 32);
				}
				else if (Local_1549 == &iLocal_1768[2])
				{
					StringCopy(Local_1549.f_20[0 /*4*/], func_252(&Local_1549, 0), 32);
					StringCopy(Local_1549.f_20[1 /*4*/], func_252(&Local_1549, 1), 32);
					func_265(&Local_1549, 32);
				}
				if ((((((Local_1549.f_16 == 5 || Local_1549.f_16 == 6) || Local_1549.f_16 == 2) || Local_1389.f_28 == 8) || Local_1389.f_28 == 64) || Local_1389.f_28 == 2) || Local_1389.f_28 == 4)
				{
					func_43(524288);
					func_42(&Local_1389, 8192);
					return 1;
				}
			}
			else
			{
				func_265(&Local_1549, 512);
			}
			func_260(&Local_1389, &(Local_1389.f_28));
			return 0;
		}
		else if (func_121(&Local_1549, 2))
		{
		}
		else if (Local_1389.f_28 == 65536)
		{
			func_260(&Local_1389, &(Local_1389.f_28));
			func_261(&Local_1389, &(Local_1389.f_28));
			return 0;
		}
		else if (Local_1389.f_28 == 32)
		{
			if (!func_266(&Local_1389))
			{
				if (Local_1549 == &iLocal_1768[1])
				{
					StringCopy(Local_1549.f_20[0 /*4*/], func_267(), 32);
					func_42(&Local_1389, 8192);
				}
				else if (Local_1549 == &iLocal_1768[2])
				{
					StringCopy(Local_1549.f_20[0 /*4*/], func_268(), 32);
					func_42(&Local_1389, 8192);
				}
				func_43(524288);
				func_42(&Local_1389, 4096);
			}
			else
			{
				if (iLocal_18 == 2)
				{
					iVar2 = 0;
					while (iVar2 < Global_1935630->f_39)
					{
						if (func_269(&(Global_1935630->f_34[iVar2]), &iLocal_1768))
						{
							bVar1 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (!bVar1)
					{
						func_260(&Local_1389, &(Local_1389.f_28));
						func_261(&Local_1389, &(Local_1389.f_28));
						return 0;
					}
				}
				iVar3 = PED::_0xB65A4DAB460A19BD(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iVar3 = PED::_0xD0B7AEB56229D317(Global_35);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iVar3 = func_270(Global_35);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (&iLocal_1768[0] != iVar3)
					{
						Local_1549 = &iLocal_1768[0];
						Local_1549.f_16 = 2;
						StringCopy(Local_1549.f_20[0 /*4*/], func_250(&Local_1549), 32);
						func_42(&Local_1389, 8192);
						func_43(524288);
					}
				}
			}
		}
		else if (Local_1389.f_28 == 2)
		{
			iVar4 = PED::_0xB65A4DAB460A19BD(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar4 = PED::_0xD0B7AEB56229D317(Global_35);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar4 = func_270(Global_35);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (&iLocal_1768[0] != iVar4)
				{
					Local_1549 = &iLocal_1768[0];
					Local_1549.f_16 = 2;
					StringCopy(Local_1549.f_20[0 /*4*/], func_250(&Local_1549), 32);
					func_42(&Local_1389, 8192);
					func_43(524288);
				}
			}
		}
		else if (Local_1389.f_28 == 1024)
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), -1103472584, 0, 0, 0, 0, 0, 0, 0);
			func_271(1);
			LAW::_0x710448D44A64C213(1);
		}
		return 1;
	}
	if (func_272())
	{
		Local_1389.f_28 = 2;
		return 1;
	}
	if (func_273(&Local_1389, &Local_1549, 43436/*func_263*/) && !func_274())
	{
		if (!func_121(&Local_1549, 1))
		{
			Local_1549.f_16 = 7;
			func_93(0);
			func_264(&Local_1549, &Local_1389, Local_1389.f_28, 43436/*func_263*/, 0, 0);
			func_265(&Local_1549, 256);
			if (Local_1549.f_1 >= 3)
			{
				func_265(&Local_1549, 2);
			}
			if (func_121(&Local_1549, 2))
			{
				Local_1389.f_28 = 1024;
				func_123(&Local_1549, 16);
				func_42(&Local_1389, 8192);
				func_43(524288);
				Local_1549 = &iLocal_1768[0];
				StringCopy(Local_1549.f_20[0 /*4*/], func_250(&Local_1549), 32);
				func_265(&Local_1549, 32);
			}
			else if (Local_1549 == &iLocal_1768[0])
			{
				StringCopy(Local_1549.f_20[0 /*4*/], func_250(&Local_1549), 32);
				func_265(&Local_1549, 32);
			}
			else if (Local_1549 == &iLocal_1768[1])
			{
				StringCopy(Local_1549.f_20[0 /*4*/], func_251(&Local_1549, 0), 32);
				StringCopy(Local_1549.f_20[1 /*4*/], func_251(&Local_1549, 1), 32);
				func_265(&Local_1549, 32);
			}
			else if (Local_1549 == &iLocal_1768[2])
			{
				StringCopy(Local_1549.f_20[0 /*4*/], func_252(&Local_1549, 0), 32);
				StringCopy(Local_1549.f_20[1 /*4*/], func_252(&Local_1549, 1), 32);
				func_265(&Local_1549, 32);
			}
		}
		else
		{
			func_265(&Local_1549, 512);
		}
	}
	if (func_275())
	{
		return 1;
	}
	if (!func_27(16) && FIRE::IS_EXPLOSION_IN_SPHERE(-1, func_215(), 21f))
	{
		return 1;
	}
	if (iLocal_18 == 4)
	{
		if (func_258(&iLocal_1794, &Local_1389, &(Local_1389.f_28), &uLocal_1645, 0, (Local_386.f_1 - 1), 1))
		{
			return 1;
		}
	}
	iVar5 = func_276(iVar0 + 1, 2);
	iVar0 = iVar0;
	while (iVar0 <= iVar5)
	{
		if (&fLocal_1778[iVar0] < Local_1389.f_19 && func_277(&(iLocal_1768[iVar0]), &Local_1389, 0, &(fLocal_1778[iVar0])))
		{
			func_74(vLocal_1578[9 /*3*/]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_278(vLocal_1578[9 /*3*/], 10f))
	{
		func_261(&Local_1389, &(Local_1389.f_28));
	}
	return 0;
}

void func_79()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_279(iVar0, 1, 1);
		iVar0++;
	}
}

void func_80()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_280(iLocal_1768[iVar0], Local_40[iVar0 /*21*/], Local_125[iVar0 /*52*/], 1, 1);
		iVar0++;
	}
}

void func_81()
{
	func_281((Local_386.f_690[0 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[1 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[2 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[9 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[10 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[11 /*12*/])->f_8, 0, 1);
	func_281((Local_386.f_690[12 /*12*/])->f_8, 0, 1);
}

void func_82(int iParam0, var uParam1, bool bParam2)
{
	func_262(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_123(iParam0, 1);
	func_123(iParam0, 4);
	func_123(iParam0, 32);
	func_123(iParam0, 128);
	func_123(iParam0, 64);
	func_123(iParam0, 8);
	func_123(iParam0, 256);
	func_123(iParam0, 512);
	iParam0->f_13 = 0;
	iParam0->f_18 = 0;
	if (!bParam2)
	{
		*iParam0 = 0;
		StringCopy(iParam0->f_20[0 /*4*/], "", 32);
		StringCopy(iParam0->f_20[1 /*4*/], "", 32);
		iParam0->f_16 = -1;
	}
	if (iParam0->f_19 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iParam0->f_19);
	}
	iParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_83(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_84(var uParam0)
{
	if (!func_127(uParam0->f_136))
	{
		return;
	}
	func_200(uParam0->f_136, 128);
	func_25(uParam0->f_136, 65536);
	func_42(uParam0, 128);
	func_282(30, 0, 1);
}

int func_85()
{
	int iVar0;

	if (func_50(524288))
	{
		return 1;
	}
	if (((Local_1389.f_28 == 2 || Local_1389.f_28 == 1) || Local_1389.f_28 == 1024) || Local_1389.f_28 == 512)
	{
		return 1;
	}
	if (Local_1389.f_28 == 32)
	{
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (func_269(&(Global_1935630->f_34[iVar0]), &iLocal_1768))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_86()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_283();
}

void func_87(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_284((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_88(var uParam0)
{
	if (func_285(uParam0->f_32))
	{
		func_286(&(uParam0->f_32), 1, 1);
	}
	if (func_285(uParam0->f_33))
	{
		func_286(&(uParam0->f_33), 1, 1);
	}
	if (func_285(uParam0->f_34))
	{
		func_286(&(uParam0->f_34), 1, 1);
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if ((*Global_1955500)[*uParam0 /*16*/])->f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD()
		{
			if (func_287(1, 1) == *uParam0)
			{
				func_288(-1, 1, 1);
			}
			if (bParam1)
			{
				func_83(((*Global_1955500)[*uParam0 /*16*/])->f_1);
			}
			(*Global_1955500)[*uParam0 /*16*/] = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_2 = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_90(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(&(iLocal_1794[iVar0]), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
			PED::SET_PED_ACCURACY(&(iLocal_1794[iVar0]), iLocal_1642);
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, !bParam3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam1, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, !bParam3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam2, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam2, !bParam3);
	}
}

bool func_91(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_92()
{
	if (iLocal_18 == 2 && !func_27(8))
	{
		func_289(&uLocal_1805, 0);
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
		func_262(vLocal_1578[0 /*3*/]);
	}
}

void func_93(int iParam0)
{
	func_291(1, iParam0, 0);
}

int func_94(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	bool bVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_292(iParam2, iParam3, 1, 1) < 70f || iParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_292(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			bVar3 = true;
		}
		func_74(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_293(sParam1))
			{
				return 1;
			}
		}
		else if (func_294(uParam0, cVar0, bVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_95(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_295(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_96(int iParam0, int iParam1)
{
	(Global_40.f_9096[iParam0 /*12*/])->f_9 = &Global_40.f_9096[iParam0 /*12*/];
	(Global_40.f_9096[iParam0 /*12*/])->f_10 = (Global_40.f_9096[iParam0 /*12*/])->f_3;
	func_296(iParam0, iParam1, 0, 0, 0, 1);
	func_25(iParam0, 32768);
	func_9(iParam0, 16777216);
	func_192(iParam0, 4194304);
}

void func_97(var uParam0)
{
	func_260(uParam0, &(uParam0->f_28));
	func_297(uParam0, 1);
	func_175(uParam0, 0);
	func_298(uParam0, 0);
	func_299(uParam0, 0);
	func_300(uParam0, 0);
}

int func_98(int iParam0, bool bParam1)
{
	return func_301(iParam0, Global_1894899->f_2, bParam1);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_100(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_302(iParam0) && iParam1)
	{
		return 0;
	}
	return func_55(iParam0, 1);
}

void func_101(int iParam0)
{
	if (func_27(2097152) || iParam0)
	{
		if (func_110(iLocal_1788, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
			func_303(iLocal_1788, 0);
		}
		func_139(2097152);
	}
}

void func_102()
{
	if (!func_27(8))
	{
		switch (iLocal_18)
		{
			case 1:
				func_304();
				break;
			case 4:
				func_305();
				break;
		}
	}
	else
	{
		func_306();
		func_307(Local_1618[0 /*7*/]);
	}
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((ENTITY::DOES_ENTITY_EXIST((Local_386.f_690[0 /*12*/])->f_8) && func_308(Local_1618[0 /*7*/])) && OBJECT::_0xB6CBD40F8EA69E8A((Local_386.f_690[0 /*12*/])->f_8))
	{
		if (!func_27(1024) && (ENTITY::HAS_ANIM_EVENT_FIRED((Local_386.f_690[0 /*12*/])->f_8, 137477946) || func_186(Global_35, &(iLocal_1759[2]), 1, 0)))
		{
			func_5(1024);
		}
		if (!func_27(512) && ENTITY::HAS_ANIM_EVENT_FIRED((Local_386.f_690[0 /*12*/])->f_8, 296703555))
		{
			func_5(512);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_386.f_690[0 /*12*/])->f_8, 886554851))
		{
			PAD::SET_PAD_SHAKE(0, 200, func_309());
			func_28();
			if (!func_21(16384))
			{
				func_141(16384);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_386.f_690[0 /*12*/])->f_8, -394031553))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(false);
			if (ITEMSET::IS_ITEMSET_VALID(iVar0))
			{
				iVar1 = ENTITY::_0x886171A12F400B89(&(iLocal_1759[1]), iVar0, 1);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
					if (MISC::_GET_SCRIPT_HANDLE_TYPE(iVar3) == 9)
					{
						iVar4 = MISC::_0x3FFB15534067DCD4(iVar3);
						if (!func_20(&Local_1389, 2) && iVar4 == func_58(66))
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							if (func_310(&iVar4, &((Local_386.f_690[0 /*12*/])->f_8)))
							{
								if (PED::IS_PED_HUMAN(iVar4) && iVar4 != Global_35)
								{
									func_43(524288);
								}
								func_196(iVar4, 0, 0);
							}
						}
					}
					iVar2++;
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_311(iParam0, 8192) && func_311(iParam0, 16384)) && func_311(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = joaat("weapon_shotgun_sawedoff");
	iVar3 = 0;
	if (!func_311(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_311(iParam0, 8192))
	{
		if (!func_312(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_311(iParam0, 131072) && func_313(iVar2))
	{
		if (!func_312(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_312(iVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return iVar3;
}

int func_105(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return -1361146315;
		case 1024:
			return 1923998736;
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return -1810065318;
		case 512:
			return -1547772340;
		case 2:
		case 32:
		case 2048:
			if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_10, Global_35, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[0])))
			{
				return -16106300;
			}
			else if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
			{
				return 195938434;
			}
			else
			{
				return 1352191066;
			}
			break;
		case 4096:
			return -2130852007;
		case 1:
		case 128:
			return -493957506;
		case 16384:
			return 0;
	}
	return -1361146315;
}

int func_106(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_20(uParam0, 4096));
	if (uParam0->f_136 == 1)
	{
		func_164(&uVar4, &iVar5, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &uVar4, &iVar5, 1, 0);
	}
	iVar3 = uVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_99(iVar3))
		{
		}
		else if (iVar3 == uParam0->f_138)
		{
		}
		else if (func_55(iVar3, 32))
		{
		}
		else
		{
			iVar6 = func_58(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !func_269(iVar6, &(uParam0->f_140)))
			{
				(*iParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				func_57(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 0, 0, 0);
				if ((func_314(iVar6, (iParam3 == -1 || iVar1 < iParam3), (iParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, 1269650476);
					func_315(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (func_316(iVar6))
					{
						iVar7 = func_317(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (func_318(&iVar6, iVar7, (iParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_312(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (func_312(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !func_316(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, -401180987);
					if ((iParam7 || func_247(iVar6, 1, 1) < 15f) || func_320())
					{
						TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						func_321(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_107(int iParam0)
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

int func_108(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(&Global_1396084);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, &Global_1396084);
		if (MISC::_0xBDC6E364C9C78178(iVar2))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar2, "pedRoam_hashKey") == iVar0)
				{
					iVar4 = MISC::_0x3FFB15534067DCD4(iVar2);
					DECORATOR::DECOR_REMOVE(iVar4, "pedRoam_hashKey");
					ITEMSET::REMOVE_FROM_ITEMSET(iVar2, &Global_1396084);
					return iVar4;
				}
			}
		}
		iVar3++;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_110(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_322(iParam0, iParam1);
}

void func_111(var uParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = 831283580;
	}
	bParam3 = (bParam3 || func_20(uParam0, 4096));
	if (WEAPON::_0xCB690F680A3EA971(iParam1, 4))
	{
		bParam3 = false;
	}
	func_323(iParam1);
	func_284(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0xFC3DB99C8144CD81(iParam1, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, true);
		if (bParam3)
		{
			PED::_0xEEED8FAFEC331A70(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, -401180987);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam5, 4, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, 1269650476);
			}
			PED::_0x802092B07E3B1EEA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			func_315(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_316(iParam1))
			{
				iParam4 = func_317(iParam1);
			}
			if (PED::IS_PED_HUMAN(iParam1))
			{
				bVar2 = func_109(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_312(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(iParam1))
			{
				if (func_312(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(iParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_319(), 0.5f, 0, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(iParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, iParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, iParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	if (func_322(iParam0, 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam0, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 518218985, 1) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, 500f, -1, 0, 3f, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
				}
			}
		}
	}
}

int func_113(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_110(iParam0[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0[iVar0], "bCowering"))
			{
				if ((func_324(iParam0[iVar0], 0, uParam1, &(uParam1->f_28), 0, 0) || func_325(iParam0[iVar0], uParam1, &(uParam1->f_28), 0)) || func_292(iParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (uParam1->f_28 != 32 || func_326((*iParam0)[iVar0], uParam1, 1097859072))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0[iVar0], -401180987);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						PED::SET_PED_KEEP_TASK(iParam0[iVar0], true);
						DECORATOR::DECOR_REMOVE(iParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_114()
{
	int iVar0;

	iVar0 = func_58(Local_1389.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_327(&iVar0))
		{
			func_328(iVar0, func_104(131072, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
	}
}

void func_115()
{
	int iVar0;

	if (func_329(&iVar0))
	{
		if (func_330(iVar0, &(Local_1618[2 /*7*/]), "Son", 0, 0, 1, 0))
		{
			func_111(&Local_1389, iVar0, uLocal_1790[1], 1, 0, Global_35);
			func_49(131072);
		}
	}
}

int func_116(int iParam0, int iParam1, int iParam2, char* sParam3)
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
		func_331(iParam0, 0);
		func_332(iParam0, iParam1);
		func_333(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_107(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_334())
	{
		return 0;
	}
	if (!func_335(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_118(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (uParam0->f_136 == 1)
	{
		func_164(&uVar1, &iVar2, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &uVar1, &iVar2, 1, 0);
	}
	iVar0 = uVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_99(iVar0))
		{
		}
		else if (func_55(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_58(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (func_336(uParam0, iVar3))
					{
						DECORATOR::DECOR_SET_BOOL(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_20(uParam0, 32768))
						{
							func_42(uParam0, 32768);
						}
					}
				}
				else if (!func_20(uParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
					{
						func_42(uParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !DECORATOR::DECOR_EXIST_ON(iParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_336(uParam0, iParam5))
			{
				DECORATOR::DECOR_SET_BOOL(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_20(uParam0, 32768))
				{
					func_42(uParam0, 32768);
				}
			}
		}
		else if (!func_20(uParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam5, Global_35, 1, 1))
			{
				func_42(uParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1[iVar4]) && !DECORATOR::DECOR_EXIST_ON(iParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam1[iVar4]))
			{
				if (func_336(uParam0, iParam1[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL(iParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_20(uParam0, 32768))
					{
						func_42(uParam0, 32768);
					}
				}
			}
			else if (!func_20(uParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1[iVar4], Global_35, 1, 1))
				{
					func_42(uParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2[iVar4]) && !DECORATOR::DECOR_EXIST_ON(iParam2[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam2[iVar4]))
			{
				if (func_336(uParam0, iParam2[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL(iParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_20(uParam0, 32768))
					{
						func_42(uParam0, 32768);
					}
				}
			}
			else if (!func_20(uParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam2[iVar4], Global_35, 1, 1))
				{
					func_42(uParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return 1;
	}
	return 0;
}

bool func_119(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_228(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_159(iParam0));
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_337(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_338(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_339(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iVar0 < (iParam0->f_3 - 1))
			{
				iParam0->f_9[iVar0] = &iParam0->f_9[iVar0 + 1];
			}
			else
			{
				iParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		iParam0->f_1 = (iParam0->f_1 - 1);
		if (iParam0->f_1 <= 0)
		{
			iParam0->f_1 = 0;
			func_123(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_121(int iParam0, int iParam1)
{
	return func_147(iParam0->f_17, iParam1);
}

void func_122(var uParam0, int iParam1, int* iParam2, var uParam3)
{
	int iVar0;
	char* sVar1;

	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		func_82(iParam1, uParam0, 0);
		return;
	}
	func_340(iParam1);
	if (func_121(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_341(iParam1, 7);
		}
		func_123(iParam1, 4);
	}
	if (func_121(iParam1, 256))
	{
		func_342(iParam1, iParam2, uParam3, 0);
	}
	if (func_121(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_74(&(iParam1->f_6));
			func_341(iParam1, 2);
		}
		iParam1->f_2++;
		func_123(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_74(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_341(iParam1, 9);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_98(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (iParam1->f_5 == -1 && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, false);
			}
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(*iParam1, 250);
			AUDIO::STOP_PED_SPEAKING(*iParam1, true);
			PED::_0xA7DC9266ED6A4E51(*iParam1);
			EVENT::_0x6B9C5C38838FB6E6(*iParam1);
			if (PED::IS_PED_RAGDOLL(*iParam1))
			{
				func_265(iParam1, 8);
			}
			if (!func_344(*iParam1, 1))
			{
				sVar1 = func_345(uParam0->f_136, -1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					func_346(*iParam1, sVar1, 0);
				}
			}
			if (func_121(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_347(*iParam1))
			{
				TASK::TASK_DISMOUNT_ANIMAL(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*iParam1, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(*iParam1, 0, 0);
			}
			func_341(iParam1, 1);
			break;
		case 1:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (func_348(&(iParam1->f_6)) < 5f && ((func_254(*iParam1, 501393341) || func_254(*iParam1, -828834893)) || func_254(*iParam1, 451360105)))
			{
				return;
			}
			func_74(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_341(iParam1, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				PED::_0x62FDAD5E01D2DD47(*iParam1, Global_36, 3, 0);
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_349(iParam1) && (func_350(*iParam1, Global_35, 1) > 9f || WEAPON::_0xCB690F680A3EA971(*iParam1, 4)))
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 2f, 2f, 0);
					TASK::TASK_STAND_STILL(0, 500);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					TASK::TASK_STAND_STILL(0, 500);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_351(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20[0 /*4*/]))
			{
				if (func_121(iParam1, 32))
				{
					func_94(&(uParam0->f_35), iParam1->f_20[0 /*4*/], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_95(*iParam1, Global_35, iParam1->f_20[0 /*4*/], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_95(*iParam1, Global_35, func_352(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_341(iParam1, 3);
			}
			else
			{
				func_341(iParam1, 2);
			}
			break;
		case 3:
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_341(iParam1, 5);
			break;
		case 4:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_341(iParam1, 5);
			break;
		case 5:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_355(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_348(&(iParam1->f_6)) < 10f)
				{
					func_341(iParam1, 3);
					return;
				}
				else
				{
					func_265(iParam1, 2);
					func_341(iParam1, 9);
					return;
				}
			}
			func_74(&(iParam1->f_6));
			func_341(iParam1, 7);
			break;
		case 2:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1)) || func_354(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_348(&(iParam1->f_6)) < 25f) && func_254(*iParam1, 242628503)) && func_350(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
						if (!func_121(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
						{
							TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_121(iParam1, 16))
						{
							TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
							if (!func_121(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
							{
								TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
							}
						}
						else
						{
							switch (iParam1->f_1)
							{
								case 1:
									TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
									break;
								case 2:
									TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
									if (!func_121(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
									{
										TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
						if (func_121(iParam1, 16))
						{
							TASK::TASK_AIM_AT_ENTITY(*iParam1, Global_35, -1, 0, 0);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						break;
				}
			}
			func_74(&(iParam1->f_6));
			func_351(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20[1 /*4*/]))
			{
				if (func_121(iParam1, 32))
				{
					func_94(&(uParam0->f_35), iParam1->f_20[1 /*4*/], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_95(*iParam1, Global_35, iParam1->f_20[1 /*4*/], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_95(*iParam1, Global_35, func_352(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_341(iParam1, 6);
					break;
				default:
					func_341(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_121(iParam1, 4) && func_254(*iParam1, -1942934348)) && func_348(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_348(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_74(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			func_341(iParam1, 7);
			break;
		case 7:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_353(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_121(iParam1, 4) && func_254(*iParam1, -1942934348)) && func_348(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(func_356(Global_35)))
			{
				func_265(iParam1, 2);
			}
			func_74(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_341(iParam1, 9);
				return;
			}
			if (!func_121(iParam1, 64))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
			}
			func_341(iParam1, 8);
			break;
		case 8:
			if (func_99(iParam1->f_5))
			{
				if (!func_100(iParam1->f_5, 0))
				{
					func_343(iParam1->f_5);
				}
			}
			if (func_358(&(iParam1->f_6), func_357(iParam1)))
			{
				AUDIO::STOP_PED_SPEAKING(*iParam1, false);
				if (!func_121(iParam1, 64) && !func_121(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_240(iParam1->f_5, 1);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
				func_341(iParam1, 9);
			}
			break;
		case 9:
			func_359(iParam1, iParam2, uParam3);
			func_82(iParam1, uParam0, 0);
			break;
	}
}

void func_123(int iParam0, int iParam1)
{
	func_185(&(iParam0->f_17), iParam1);
}

int func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_20(&Local_1389, 32))
	{
		func_360();
		return 0;
	}
	func_236();
	iVar0 = func_58(Local_1389.f_138);
	if (!func_50(2097152))
	{
		if (iLocal_18 < 5)
		{
			func_361(0);
			func_279(0, 1, 1);
			if (iLocal_18 < 4)
			{
				func_361(1);
				func_279(1, 1, 1);
				func_361(2);
				func_279(2, 1, 1);
			}
		}
		func_43(2097152);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iLocal_1768[0] = iVar0;
		fLocal_1778[0] = func_247(iVar0, 1, 1);
		func_59(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
		func_362(&iVar0);
	}
	if (iLocal_18 < 5)
	{
		func_363(&Local_2071);
	}
	if (!func_27(4))
	{
		func_364();
		return 0;
	}
	if (!func_27(2) && !func_55(Local_1389.f_138, 32))
	{
		bVar3 = func_27(1);
		func_366(func_58(Local_1389.f_138), uLocal_1790[0], &Local_1389, func_27(8), &bVar3, 1, func_365());
		func_7(1, bVar3);
	}
	if (iLocal_18 < 4)
	{
		iVar1 = func_58(65);
		iVar2 = func_58(66);
		iLocal_1768[1] = iVar1;
		iLocal_1768[2] = iVar2;
		func_59(&(Local_1389.f_35), func_58(65), "HOME_SON1", 0);
		func_59(&(Local_1389.f_35), func_58(66), "HOME_SON2", 0);
		fLocal_1778[1] = func_247(iVar1, 1, 1);
		fLocal_1778[2] = func_247(iVar2, 1, 1);
		func_367(&iVar1, &iVar2);
	}
	Local_2071.f_33 = { Local_1389.f_35 };
	Local_1857.f_81 = { Local_1389.f_35 };
	if (func_27(8))
	{
		if (iLocal_18 == 4)
		{
			return func_368();
		}
		else if (!func_8(Local_1389.f_136, 2))
		{
			if (!func_27(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
		}
	}
	func_371();
	switch (iLocal_18)
	{
		case 1:
			if (!func_27(2))
			{
				return func_372(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 2:
			if (func_27(64))
			{
				return func_373(&iVar0, &iVar1, &iVar2);
			}
			else if (!func_27(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 3:
			if (!func_27(2))
			{
				if (func_27(131072))
				{
					return func_374(&iVar0, &iVar1, &iVar2);
				}
				else
				{
					return func_375(&iVar0, &iVar1, &iVar2);
				}
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 4:
			if (!func_27(2))
			{
				return func_376(&iVar0);
			}
			else
			{
				return func_377(&iVar0);
			}
			break;
		case 5:
			return func_368();
	}
	return 0;
}

void func_125()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_1768)
	{
		func_378(iLocal_1768[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1794)
	{
		func_378(iLocal_1794[iVar0]);
		iVar0++;
	}
}

int func_126()
{
	if (func_20(&Local_1389, 1024))
	{
		return 1;
	}
	if (iLocal_1856)
	{
		return 1;
	}
	if (iLocal_1821 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return 0;
	}
	if (func_379(iLocal_1856))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_129(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_130(int iParam0, int iParam1)
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

Vector3 func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_133(var uParam0, int iParam1)
{
	func_380(uParam0, iParam1);
}

int func_134(int iParam0, bool bParam1, int iParam2)
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
		if (func_381())
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
		iVar0 = func_382(&(Global_1898164->f_1[0 /*5*/]));
		if (func_383(iVar0) && func_384(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_385(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_135()
{
	return func_386(64);
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_387(iVar0) || func_388(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_137()
{
	return Global_1310750->f_16077 != 0;
}

int func_138()
{
	return Global_1310750->f_16071;
}

void func_139(int iParam0)
{
	func_219(&uLocal_14, iParam0);
}

void func_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_389(iParam0, (Global_40.f_9096[iParam0 /*12*/])->f_10, uParam1, uParam2, uParam3, uParam4);
}

void func_141(int iParam0)
{
	func_133(&uLocal_16, iParam0);
}

void func_142(int iParam0)
{
	func_219(&uLocal_16, iParam0);
}

bool func_143(int iParam0)
{
	if (!func_127(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/])->f_3 > (Global_40.f_9096[iParam0 /*12*/])->f_10;
}

int func_144(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bLostLogs") && DECORATOR::DECOR_GET_BOOL(*iParam0, "bLostLogs"))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("logwagon"))
	{
		return 0;
	}
	if (func_390(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	return &Global_1899515;
}

int func_146(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_147(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_148(int iParam0)
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

int func_149(int iParam0)
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

int func_150(int iParam0)
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

int func_151(int iParam0)
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

int func_152(int iParam0)
{
	if ((func_10(iParam0, 524288) || func_10(iParam0, 1048576)) || func_10(iParam0, 2097152))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_391(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

bool func_154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_155()
{
	return -426.3027f, 498.6826f, 97.12895f;
}

void func_156(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_392(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_392(uParam0))
		{
		}
	}
}

int func_157(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_158(int iParam0)
{
	return iParam0 != 0;
}

int func_159(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_160(int iParam0, int iParam1)
{
	if (!func_393(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_185(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_162(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_163(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

void func_164(var uParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		*uParam0 = 64;
		*uParam1 = 66;
	}
	else
	{
		*uParam0 = 67;
		*uParam1 = 68;
	}
}

int func_165(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1() != -1;
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

int func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_393(iParam0))
	{
		return 1;
	}
	if (func_129(iParam0, 16))
	{
		return 1;
	}
	if (func_394(iParam0) && !func_395(iParam0))
	{
	}
	if (func_165(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_99(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_99(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_394(iParam0) || func_395(iParam0)) || func_396(&Global_1897950))
			{
				func_223(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_167(var uParam0)
{
	func_299(uParam0, 0);
	func_174(uParam0, 0);
	func_40(uParam0, 1);
	func_177(uParam0, 1);
	func_172(uParam0, 0);
	func_182(uParam0, 1);
	func_397(uParam0, 1, 1, 1);
}

void func_168(var uParam0, float fParam1, bool bParam2)
{
	uParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_398(uParam0, fParam1);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 4);
	}
	else
	{
		func_132(&(uParam0->f_1), 4);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 2);
	}
	else
	{
		func_132(&(uParam0->f_1), 2);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 1);
	}
	else
	{
		func_132(&(uParam0->f_1), 1);
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 128);
	}
	else
	{
		func_132(&(uParam0->f_1), 128);
	}
}

void func_173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 1024);
	}
	else
	{
		func_132(&(uParam0->f_1), 1024);
	}
}

void func_174(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 2048);
	}
	else
	{
		func_132(&(uParam0->f_1), 2048);
	}
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 32);
	}
	else
	{
		func_185(uParam0, 32);
	}
}

void func_176(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 8);
	}
	else
	{
		func_132(&(uParam0->f_1), 8);
	}
}

void func_177(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 16);
	}
	else
	{
		func_185(uParam0, 67108864);
		func_185(uParam0, 16);
	}
}

void func_178(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 8);
	}
	else
	{
		func_185(uParam0, 8);
	}
}

void func_179(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 1024);
	}
	else
	{
		func_185(uParam0, 1024);
	}
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_19 = fParam1;
}

void func_181(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 128);
	}
	else
	{
		func_185(uParam0, 128);
	}
}

void func_182(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 256);
	}
	else
	{
		func_185(uParam0, 256);
	}
}

void func_183(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 2);
	}
	else
	{
		func_185(uParam0, 2);
	}
}

void func_184(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 131072);
	}
	else
	{
		func_185(uParam0, 131072);
	}
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_186(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_187()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_188(int iParam0)
{
	(Global_40.f_9096[iParam0 /*12*/])->f_9 = -1;
	(Global_40.f_9096[iParam0 /*12*/])->f_10 = -1;
	func_9(iParam0, 32768);
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = PLAYER::_0x0139637A3BFF8B6D(*iParam0, &iVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), iVar1, iVar0);
	}
}

int func_190(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1789))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1789))
	{
		return 1;
	}
	if (iParam0 && !func_390(&iLocal_1789))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_1789) < 10)
	{
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_1789, Global_35, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_10(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_4 = ((Global_40.f_9096[iParam0 /*12*/])->f_4 - ((Global_40.f_9096[iParam0 /*12*/])->f_4 && iParam1));
}

void func_193()
{
	func_399(&iLocal_1707, 0);
	func_399(&iLocal_1708, 0);
	func_399(&iLocal_1709, 0);
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		func_400("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
		func_401(4);
	}
	else if (!func_402(4))
	{
		if (func_402(2))
		{
			if (!func_403(vLocal_1578[6 /*3*/]))
			{
				func_74(vLocal_1578[6 /*3*/]);
			}
			else if (func_348(vLocal_1578[6 /*3*/]) > 20f)
			{
				func_400("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
				func_401(4);
			}
		}
	}
}

int func_195()
{
	if (func_1() == -1)
	{
		if (func_404() || func_405())
		{
			return 1;
		}
	}
	else if (func_406(1, 255))
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, bool bParam1, bool bParam2)
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

void func_197(int* iParam0)
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

int func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 8;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 32;
				case 2:
					return 64;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 1:
					return 256;
				case 2:
					return 512;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_199()
{
	func_407(23);
}

void func_200(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_10(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_4 = ((Global_40.f_9096[iParam0 /*12*/])->f_4 || iParam1);
}

void func_201(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_42(uParam2, 128);
	func_61(iParam0, 0);
	func_160(uParam2->f_137, 0);
	func_408(uParam2);
	func_200(iParam0, 2048);
	func_68(uParam2, 64);
	if (uParam2->f_137 == 76)
	{
		func_164(&uVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam2->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(func_58(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = uVar0;
	Global_1898092->f_26.f_8 = uParam2->f_29;
	Global_1898092->f_26.f_2 = uParam2->f_136;
	Global_1898092->f_26.f_1 = uParam2->f_137;
	func_409(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam1->f_690[iVar3 /*12*/])->f_8))
		{
			OBJECT::DELETE_OBJECT(&((uParam1->f_690[iVar3 /*12*/])->f_8));
		}
		iVar3++;
	}
	if (func_285(uParam2->f_32))
	{
		func_286(&(uParam2->f_32), 1, 1);
	}
	if (func_285(uParam2->f_33))
	{
		func_286(&(uParam2->f_33), 1, 1);
	}
	if (func_285(uParam2->f_34))
	{
		func_286(&(uParam2->f_34), 1, 1);
	}
	if ((*uParam1 + uParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*uParam1 + uParam1->f_1));
	}
	if (func_410(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		func_200(uParam2->f_136, 4194304);
	}
	func_86();
	if (func_20(uParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_202(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0x62DE46F061CAA468();
	if (uParam0->f_3 > iVar0)
	{
		uParam0->f_3 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(uParam0->f_3);
	uParam0->f_3 = 0;
}

char* func_203()
{
	return "HMSTD";
}

char* func_204()
{
	return "HSTDAUD";
}

int func_205(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_411(iVar0))
	{
		return 0;
	}
	if (func_412(iVar0, 1) || func_412(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (iLocal_18 < 5)
	{
		return 1;
	}
	if ((func_4() - iLocal_1853) > 10000)
	{
		return 1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[3])))
	{
		return 0;
	}
	if (VOLUME::_0xEE1D6FF54CAF7714(&(iLocal_1759[3]), func_159(68)))
	{
		return 1;
	}
	func_413(67, &(iLocal_1759[3]), 1);
	func_413(68, &(iLocal_1759[3]), 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(&(iLocal_1759[3]), 0, 1);
	VOLUME::_0x53D05D60E5F5B40C(&(iLocal_1759[3]), 0, 1, func_159(68));
	return 1;
}

void func_207(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_414(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_414(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_208(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (uParam0->f_137 == 76)
	{
		func_164(&uVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (func_99(iVar2) && !func_55(iVar2, 32))
		{
			uVar3 = func_229(iVar2);
			func_414(&uVar3);
		}
		iVar2++;
	}
}

void func_209()
{
	switch (iLocal_18)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_210()
{
	if (iLocal_18 == 5)
	{
		return;
	}
	if (func_27(2))
	{
		func_416(Local_1618[2 /*7*/], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else if (func_27(8))
	{
		func_416(Local_1618[0 /*7*/], "script@proc@eventareas@castorsPond@stageTwo_Father", func_415(0), 0);
		func_416(Local_1618[2 /*7*/], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				func_416(Local_1618[0 /*7*/], "script@proc@eventareas@castorsPond@stageOne_All", func_415(0), 0);
				break;
			case 2:
				break;
			case 3:
				func_416(Local_1618[0 /*7*/], "script@proc@eventareas@castorsPond@stageThreeFather", func_415(0), 0);
				func_416(Local_1618[1 /*7*/], "script@proc@eventareas@castorsPond@stageThreeGiveMoney", func_415(1), 64);
				func_416(Local_1618[2 /*7*/], "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
				break;
			case 4:
				if (func_417())
				{
					func_416(Local_1618[0 /*7*/], "script@proc@eventareas@castorsPond@stagefour", func_415(0), 0);
				}
				else
				{
					func_416(Local_1618[0 /*7*/], "script@proc@eventareas@castorsPond@stageTwo_Father", "PBL_intro_idle", 0);
				}
				break;
		}
	}
}

void func_211(var uParam0)
{
	uParam0->f_132 = 1;
	*uParam0 = -3.5f;
	if (func_10(Local_1389.f_136, 128))
	{
		if (func_27(2))
		{
			if (iLocal_18 == 3 && func_27(16))
			{
				uParam0->f_1 = "HOME_LN01ANW";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
			else
			{
				uParam0->f_1 = "HOME_LN01ANA";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
		}
		else if ((iLocal_18 == 3 && func_8(Local_1389.f_136, 128)) && !func_21(64))
		{
			uParam0->f_1 = "HOME_NJI";
			uParam0->f_135 = "HOME_NJIP";
			uParam0->f_5 = "HOME_NJIN";
		}
		else if (func_320())
		{
			uParam0->f_1 = "HMSTD_IG2NJ";
			uParam0->f_135 = "HMSTD_RESP";
			uParam0->f_5 = "HOME2_POS_AO";
			uParam0->f_3 = "HMSTD_IG2NJ2";
		}
		else
		{
			uParam0->f_1 = "HMSTD_IG2NJA";
			uParam0->f_135 = "HMSTD_RESPA";
			uParam0->f_5 = "HOME2_NEG_AO";
			uParam0->f_3 = "HMSTD_IG2NJA2";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else if (func_27(2))
	{
		if (iLocal_18 == 3 && func_27(16))
		{
			uParam0->f_1 = "HOME_LN01ANW";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		else
		{
			uParam0->f_1 = "HOME_LN01ANA";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				uParam0->f_1 = "HOME_LN01A";
				uParam0->f_3 = "HOME_LN02A";
				break;
			case 2:
				break;
			case 3:
				if (!func_10(Local_1389.f_136, 64))
				{
					uParam0->f_1 = "HMSTD_IG3_ASK";
				}
				else
				{
					uParam0->f_1 = "HMSTD_ASK_2";
				}
				break;
			case 4:
				if (func_417())
				{
					uParam0->f_1 = "HOME_LN01E";
				}
				else
				{
					uParam0->f_1 = "HOME_LN01EA";
					uParam0->f_135 = "HOME_LN02EAP";
					uParam0->f_5 = "HOME_LN02EAN";
				}
				break;
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
}

void func_212(var uParam0)
{
	uParam0->f_179 = 1;
	switch (iLocal_18)
	{
		case 2:
			StringCopy(&(uParam0->f_34), "HOME_THXA", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMA", 64);
			uParam0->f_72 = 100;
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
		case 3:
			StringCopy(&(uParam0->f_34), "HOME_THXB", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMB", 64);
			uParam0->f_79 = 0;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			uParam0->f_187 = -3.5f;
			uParam0->f_182 = 0;
			break;
		case 4:
			StringCopy(&(uParam0->f_34), "HOME_THXC", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMC", 64);
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
	}
}

void func_213()
{
	int iVar0;
	int iVar1;

	if (iLocal_18 < 4)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, func_198(iVar0, iVar1)))
				{
					(Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_7 = -1404171522;
					*(Local_386.f_690[func_418(iVar0, iVar1) /*12*/]) = { func_419(iVar0, iVar1) };
					(Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_4 = { func_420(iVar0, iVar1) };
					(Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_10 = 0;
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_11), 1);
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_11), 64);
					func_133(&((Local_386.f_690[func_418(iVar0, iVar1) /*12*/])->f_11), 2);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	if (func_27(8) || func_27(2))
	{
		if (iLocal_18 < 4)
		{
			if (func_27(256))
			{
				(Local_386.f_690[1 /*12*/])->f_7 = joaat("p_cigarette_cs01x");
				*(Local_386.f_690[1 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[1 /*12*/])->f_3 = -105f;
				(Local_386.f_690[1 /*12*/])->f_10 = 0;
			}
			(Local_386.f_690[2 /*12*/])->f_7 = joaat("p_hammer03x");
			*(Local_386.f_690[2 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[2 /*12*/])->f_3 = -105f;
			(Local_386.f_690[2 /*12*/])->f_10 = 0;
			(Local_386.f_690[4 /*12*/])->f_7 = -1404171522;
			*(Local_386.f_690[4 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[4 /*12*/])->f_3 = -105f;
			(Local_386.f_690[4 /*12*/])->f_10 = 0;
			(Local_386.f_690[5 /*12*/])->f_7 = -1404171522;
			*(Local_386.f_690[5 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[5 /*12*/])->f_3 = -105f;
			(Local_386.f_690[5 /*12*/])->f_10 = 0;
			(Local_386.f_690[6 /*12*/])->f_7 = -1404171522;
			*(Local_386.f_690[6 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[6 /*12*/])->f_3 = -105f;
			(Local_386.f_690[6 /*12*/])->f_10 = 0;
			(Local_386.f_690[7 /*12*/])->f_7 = -1404171522;
			*(Local_386.f_690[7 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[7 /*12*/])->f_3 = -105f;
			(Local_386.f_690[7 /*12*/])->f_10 = 0;
			(Local_386.f_690[8 /*12*/])->f_7 = -1404171522;
			*(Local_386.f_690[8 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[8 /*12*/])->f_3 = -105f;
			(Local_386.f_690[8 /*12*/])->f_10 = 0;
			(Local_386.f_690[9 /*12*/])->f_7 = joaat("p_nailsingle01x");
			*(Local_386.f_690[9 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[9 /*12*/])->f_3 = -105f;
			(Local_386.f_690[9 /*12*/])->f_10 = 0;
			(Local_386.f_690[10 /*12*/])->f_7 = joaat("p_nailsingle01x");
			*(Local_386.f_690[10 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[10 /*12*/])->f_3 = -105f;
			(Local_386.f_690[10 /*12*/])->f_10 = 0;
			(Local_386.f_690[11 /*12*/])->f_7 = joaat("p_nailsingle01x");
			*(Local_386.f_690[11 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[11 /*12*/])->f_3 = -105f;
			(Local_386.f_690[11 /*12*/])->f_10 = 0;
			(Local_386.f_690[12 /*12*/])->f_7 = joaat("p_nailsingle01x");
			*(Local_386.f_690[12 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
			(Local_386.f_690[12 /*12*/])->f_3 = -105f;
			(Local_386.f_690[12 /*12*/])->f_10 = 0;
			if (iLocal_18 == 1)
			{
				if (func_20(&Local_1389, 32))
				{
					if (func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, 1))
					{
						(Local_386.f_690[0 /*12*/])->f_7 = 1620657627;
						*(Local_386.f_690[0 /*12*/]) = { func_421() };
						(Local_386.f_690[0 /*12*/])->f_3 = func_422();
					}
					else if (func_8(Local_1389.f_136, 4194304))
					{
						(Local_386.f_690[0 /*12*/])->f_7 = 0;
					}
					else
					{
						(Local_386.f_690[0 /*12*/])->f_7 = 1620657627;
						*(Local_386.f_690[0 /*12*/]) = { func_423() };
						(Local_386.f_690[0 /*12*/])->f_4 = { func_424() };
					}
					func_133(&((Local_386.f_690[0 /*12*/])->f_11), 2);
				}
				else
				{
					func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), 1);
					(Local_386.f_690[0 /*12*/])->f_7 = 1620657627;
					*(Local_386.f_690[0 /*12*/]) = { func_421() };
					(Local_386.f_690[0 /*12*/])->f_3 = func_422();
				}
				(Local_386.f_690[0 /*12*/])->f_10 = 0;
				func_133(&((Local_386.f_690[0 /*12*/])->f_11), 1);
				func_133(&((Local_386.f_690[0 /*12*/])->f_11), 64);
				if (func_10(Local_1389.f_136, 128))
				{
					func_133(&((Local_386.f_690[0 /*12*/])->f_11), 2);
				}
			}
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				(Local_386.f_690[0 /*12*/])->f_7 = 1620657627;
				*(Local_386.f_690[0 /*12*/]) = { func_421() };
				(Local_386.f_690[0 /*12*/])->f_3 = func_422();
				(Local_386.f_690[0 /*12*/])->f_10 = 0;
				func_133(&((Local_386.f_690[0 /*12*/])->f_11), 1);
				func_133(&((Local_386.f_690[0 /*12*/])->f_11), 64);
				if (func_10(Local_1389.f_136, 128))
				{
					func_133(&((Local_386.f_690[0 /*12*/])->f_11), 2);
				}
				if (!func_10(Local_1389.f_136, 128))
				{
					(Local_386.f_690[1 /*12*/])->f_7 = joaat("p_cigarette_cs01x");
				}
				else
				{
					(Local_386.f_690[1 /*12*/])->f_7 = 0;
				}
				*(Local_386.f_690[1 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[1 /*12*/])->f_3 = -105f;
				(Local_386.f_690[1 /*12*/])->f_10 = 0;
				if (!func_10(Local_1389.f_136, 128))
				{
					(Local_386.f_690[2 /*12*/])->f_7 = joaat("p_hammer03x");
				}
				else
				{
					(Local_386.f_690[2 /*12*/])->f_7 = 0;
				}
				*(Local_386.f_690[2 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[2 /*12*/])->f_3 = -105f;
				(Local_386.f_690[2 /*12*/])->f_10 = 0;
				if (!func_10(Local_1389.f_136, 128))
				{
					(Local_386.f_690[3 /*12*/])->f_7 = 1077976463;
				}
				else
				{
					(Local_386.f_690[3 /*12*/])->f_7 = 0;
				}
				*(Local_386.f_690[3 /*12*/]) = { -438.4642f, 508.0584f, 97.86085f };
				(Local_386.f_690[3 /*12*/])->f_3 = -174.79f;
				(Local_386.f_690[3 /*12*/])->f_10 = 0;
				func_133(&((Local_386.f_690[3 /*12*/])->f_11), 1);
				func_133(&((Local_386.f_690[3 /*12*/])->f_11), 2);
				break;
			case 3:
				if (!func_10(Local_1389.f_136, 128))
				{
					(Local_386.f_690[0 /*12*/])->f_7 = joaat("p_cs_billstack01x");
				}
				else
				{
					(Local_386.f_690[0 /*12*/])->f_7 = 0;
				}
				*(Local_386.f_690[0 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[0 /*12*/])->f_3 = -105f;
				(Local_386.f_690[0 /*12*/])->f_10 = 0;
				(Local_386.f_690[2 /*12*/])->f_7 = joaat("p_hammer03x");
				*(Local_386.f_690[2 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[2 /*12*/])->f_3 = -105f;
				(Local_386.f_690[2 /*12*/])->f_10 = 0;
				(Local_386.f_690[4 /*12*/])->f_7 = -1404171522;
				*(Local_386.f_690[4 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[4 /*12*/])->f_3 = -105f;
				(Local_386.f_690[4 /*12*/])->f_10 = 0;
				(Local_386.f_690[5 /*12*/])->f_7 = -1404171522;
				*(Local_386.f_690[5 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[5 /*12*/])->f_3 = -105f;
				(Local_386.f_690[5 /*12*/])->f_10 = 0;
				(Local_386.f_690[6 /*12*/])->f_7 = -1404171522;
				*(Local_386.f_690[6 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[6 /*12*/])->f_3 = -105f;
				(Local_386.f_690[6 /*12*/])->f_10 = 0;
				(Local_386.f_690[7 /*12*/])->f_7 = -1404171522;
				*(Local_386.f_690[7 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[7 /*12*/])->f_3 = -105f;
				(Local_386.f_690[7 /*12*/])->f_10 = 0;
				(Local_386.f_690[8 /*12*/])->f_7 = -1404171522;
				*(Local_386.f_690[8 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[8 /*12*/])->f_3 = -105f;
				(Local_386.f_690[8 /*12*/])->f_10 = 0;
				(Local_386.f_690[9 /*12*/])->f_7 = joaat("p_nailsingle01x");
				*(Local_386.f_690[9 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[9 /*12*/])->f_3 = -105f;
				(Local_386.f_690[9 /*12*/])->f_10 = 0;
				(Local_386.f_690[10 /*12*/])->f_7 = joaat("p_nailsingle01x");
				*(Local_386.f_690[10 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[10 /*12*/])->f_3 = -105f;
				(Local_386.f_690[10 /*12*/])->f_10 = 0;
				(Local_386.f_690[11 /*12*/])->f_7 = joaat("p_nailsingle01x");
				*(Local_386.f_690[11 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[11 /*12*/])->f_3 = -105f;
				(Local_386.f_690[11 /*12*/])->f_10 = 0;
				(Local_386.f_690[12 /*12*/])->f_7 = joaat("p_nailsingle01x");
				*(Local_386.f_690[12 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
				(Local_386.f_690[12 /*12*/])->f_3 = -105f;
				(Local_386.f_690[12 /*12*/])->f_10 = 0;
				break;
			case 4:
				if (func_417())
				{
					(Local_386.f_690[0 /*12*/])->f_7 = joaat("p_cs_billstack01x");
					*(Local_386.f_690[0 /*12*/]) = { -442.2039f, 497.12f, 98.7195f };
					(Local_386.f_690[0 /*12*/])->f_3 = -1.93f;
					(Local_386.f_690[0 /*12*/])->f_10 = 0;
				}
				else
				{
					(Local_386.f_690[1 /*12*/])->f_7 = joaat("p_cigarette_cs01x");
					*(Local_386.f_690[1 /*12*/]) = { -439.4445f, 507.9429f, 96.03515f };
					(Local_386.f_690[1 /*12*/])->f_3 = -105f;
					(Local_386.f_690[1 /*12*/])->f_10 = 0;
				}
				break;
		}
	}
}

void func_214(var uParam0)
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

Vector3 func_215()
{
	return -439.4356f, 498.2648f, 97.93082f;
}

int func_216()
{
	if (!func_425(&(Local_386.f_690)))
	{
		return 0;
	}
	return 1;
}

int func_217(bool bParam0)
{
	switch (iLocal_19)
	{
		case 0:
			iLocal_1817 = INTERIOR::GET_INTERIOR_AT_COORDS(func_426());
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1817);
			iLocal_19 = 1;
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1817) && INTERIOR::IS_INTERIOR_READY(iLocal_1817))
			{
				if (bParam0)
				{
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1817, "cas_housewares"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1817, "cas_housewares", 0);
					}
				}
				else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1817, "cas_housewares"))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1817, "cas_housewares", 1);
				}
				iLocal_19 = 2;
				return 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_218()
{
	if (iLocal_18 == 2)
	{
		if ((AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_IDLE") && AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_START")) && AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_ACTION"))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_219(var uParam0, int iParam1)
{
	func_427(uParam0, iParam1);
}

bool func_220(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_428((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_221(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_137 == 76)
	{
		func_164(&uVar0, &iVar1, func_8(1, 1048576));
	}
	else
	{
		func_165(uParam0->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (func_99(iVar2) && !func_55(iVar2, 32))
		{
			iVar3 = func_229(iVar2);
			if (!func_429(iVar3))
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_222(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_430(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_431(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_432(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_432(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_433(iVar0))
		{
			func_346(iVar0, &(uParam1->f_23), 0);
		}
		if (func_433(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_434(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_435(&(uParam1->f_22)));
			func_196(iVar0, func_436(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_437(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_438(&(uParam1->f_22)))
		{
			func_439(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_440(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_154(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_433(iVar0))
		{
			func_442(iVar0, !func_441(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_443(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_444(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_444(&(uParam1->f_22)));
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

int func_223(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_55(iParam0, 32) && !bParam1)
	{
		func_445(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_157(iParam0)));
		if (func_1() == -1)
		{
			if (func_55(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_159(iParam0));
				func_31(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_159(iParam0));
		}
		return 0;
	}
	if (!func_446(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		func_31(iParam0, 128);
		return 1;
	}
	func_445(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_157(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_159(iParam0));
	if (func_55(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_159(iParam0));
		func_31(iParam0, 2048);
	}
	return 1;
}

int func_224(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_159(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_159(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_225(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_447(iParam0, 1))
	{
		return 0;
	}
	if (func_158(func_157(iParam0)))
	{
		iVar1 = func_159(iParam0);
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
	if ((iParam4 && !func_302(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_29(iParam0, 1);
	func_448(iParam0);
	if (bParam3)
	{
		func_29(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_227(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_228(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0);
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

int func_229(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

bool func_230(var uParam0, int iParam1, char* sParam2)
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

Vector3 func_231()
{
	return 0f, 0f, 0f;
}

int func_232(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
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
		else if (((*uParam3)[iVar0 /*12*/])->f_7 != 0 && !func_154(((*uParam3)[iVar0 /*12*/])->f_11, 16))
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
					if (func_154(((*uParam3)[iVar0 /*12*/])->f_11, 64))
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
					if (!func_154(((*uParam3)[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *((*uParam3)[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *((*uParam3)[iVar0 /*12*/]) };
					}
					if (!func_154(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						func_449(&vVar5, ((*uParam3)[iVar0 /*12*/])->f_10);
					}
					if (func_154(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_225(((*uParam3)[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, ((*uParam3)[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { ((*uParam3)[iVar0 /*12*/])->f_4 };
					}
					if (func_154(((*uParam3)[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_450((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION(((*uParam3)[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_154(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						if (((*uParam3)[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29(((*uParam3)[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_154(((*uParam3)[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam3)[iVar0 /*12*/])->f_8, true);
				}
				if (func_154(((*uParam3)[iVar0 /*12*/])->f_11, 32))
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

void func_233(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

int func_234(var uParam0)
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

int func_235()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(Local_1618[iVar1 /*7*/])))
		{
			if (!func_451(Local_1618[iVar1 /*7*/]))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}

void func_236()
{
	if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)))
	{
		if (!func_344(func_58(Local_1389.f_138), 1))
		{
			func_346(func_58(Local_1389.f_138), "HOME_FOREMAN", 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_58(65)))
	{
		if (!func_344(func_58(65), 1))
		{
			func_346(func_58(65), "HOME_SON1", 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_58(66)))
	{
		if (!func_344(func_58(66), 1))
		{
			func_346(func_58(66), "HOME_SON2", 0);
		}
	}
}

Vector3 func_237(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return -448.439f, 498.22f, 97.101f;
		case 65:
			return -447.9209f, 502.1195f, 97.09232f;
		case 66:
			return -448.263f, 496.549f, 97.108f;
		default:
			break;
	}
	return -448.276f, 501.427f, 97.088f;
}

void func_238(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_452(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_433(iParam0))
	{
		if (func_453(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
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
				func_238(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_238(iVar2, vParam1, fParam4, iParam5, iParam6);
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
		if (func_433(iParam0))
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

void func_239(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iLocal_18)
	{
		case 1:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -438.3227f, 502.7075f, 96.96414f };
					*uParam1 = -172.27f;
					break;
				case 1:
					*uParam0 = { -439.1737f, 501.2494f, 97.9471f };
					*uParam1 = 0.08f;
					break;
				case 2:
					*uParam0 = { -439.7097f, 502.6812f, 96.99051f };
					*uParam1 = 0.87f;
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0712f, 500.0492f, 97.08342f };
					*uParam1 = 1.82f;
					break;
				case 1:
					*uParam0 = { -430.9988f, 498.5522f, 97.17651f };
					*uParam1 = 1.82f;
					break;
				case 2:
					*uParam0 = { -440.5598f, 501.184f, 97.93082f };
					*uParam1 = -169.43f;
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0101f, 500.1457f, 97.08251f };
					*uParam1 = -177.44f;
					break;
				case 1:
					*uParam0 = { -434.0943f, 501.0357f, 97.00861f };
					*uParam1 = -179.67f;
					break;
				case 2:
					*uParam0 = { -438.3969f, 501.2292f, 97.93732f };
					*uParam1 = -178.38f;
					break;
				case 3:
					*uParam0 = { -435.3391f, 499.4035f, 97.93315f };
					*uParam1 = -176.75f;
					break;
			}
			break;
	}
}

void func_240(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_100(iParam0, 0))
	{
		iVar0 = func_58(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 234, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		}
		func_454(iParam0, 0, 1, 0, 0);
		_NAMESPACE48::_0x6759BEE6762E140B(func_159(iParam0));
		if (bParam1)
		{
			func_227(iVar0, 1, 1);
		}
	}
}

Vector3 func_241()
{
	return -444.5521f, 500.3867f, 98.9383f;
}

float func_242()
{
	return 8.27f;
}

void func_243(int iParam0, int iParam1)
{
	if (iParam1 || func_10(iParam0, 8192))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, func_455(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, func_455(iParam0));
		func_192(iParam0, 8192);
	}
}

void func_244(int iParam0)
{
	if (!func_10(iParam0, 8192))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, func_455(iParam0), func_131(iParam0, func_24(iParam0)), func_456(iParam0), func_457(iParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, func_455(iParam0), func_458(iParam0), func_459());
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, func_455(iParam0), func_460(iParam0), func_461());
		func_200(iParam0, 8192);
	}
}

void func_245(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, func_455(iParam0), iParam1, sParam2, iParam3, 0, 0);
	if (bParam4)
	{
		func_463(func_462(iParam0), sParam2, func_459(), func_458(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

void func_246(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_464(iParam0))
	{
		iVar0 = func_128(iParam0);
		func_25(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_465(iVar0, 0);
				break;
			case 1:
				MAP::_0xD8C7162AB2E2AF45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_466(iParam0, 0);
		}
	}
}

float func_247(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_292(Global_35, iParam0, bParam1, iParam2);
}

void func_248(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_249(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

char* func_250(int iParam0)
{
	if (func_121(iParam0, 16))
	{
		return "HMSTD_MIN_AGG";
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				return "HMSTD_MIN_ATK";
			case 5:
			case 6:
				return "HMSTD_AIM";
			case 1:
				return "HMSTD_BODY";
			case 2:
				return "HMSTD_HOG_SON";
			case 3:
				return "HMSTD_DYNAMITE";
			case 7:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
					case default:
						return "HMSTD_STEAL1";
					case 1:
						return "HMSTD_STEAL2";
					}
					return "HMSTD_MIN_ATK";
				}

char* func_251(int iParam0, int iParam1)
{
	int iVar0;

	if (func_121(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR1";
					case 1:
						return "HMSTD_S1_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR3";
					case 1:
						return "HMSTD_S1_AGGR4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM1";
							case 1:
								return "HMSTD_S1_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM3";
							case 1:
								return "HMSTD_S1_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AIM1";
					case 1:
						return "HMSTD_S1_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_BODY1";
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S1_HTM1";
							case 2:
								return "HMSTD_S1_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_DYN1";
					case 1:
						return "HMSTD_S1_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL1";
							case 1:
								return "HMSTD_S1_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL3";
							case 1:
								return "HMSTD_S1_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S1_ATKM1";
}

char* func_252(int iParam0, int iParam1)
{
	int iVar0;

	if (func_121(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR1";
					case 1:
						return "HMSTD_S2_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR3";
					case 1:
						return "HMSTD_S2_AGGR4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM1";
							case 1:
								return "HMSTD_S2_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM3";
							case 1:
								return "HMSTD_S2_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AIM1";
					case 1:
						return "HMSTD_S2_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_BODY1";
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S2_HTM1";
							case 2:
								return "HMSTD_S2_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_DYN1";
					case 1:
						return "HMSTD_S2_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL1";
							case 1:
								return "HMSTD_S2_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL3";
							case 1:
								return "HMSTD_S2_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S2_ATKM1";
}

void func_253(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_467() - fParam1);
	func_468(uParam0, 1);
	func_469(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_254(int iParam0, int iParam1)
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

int func_255(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_403(&(uParam1->f_133)))
	{
		func_74(&(uParam1->f_133));
	}
	else if (func_470(&(uParam1->f_133)) > iParam2)
	{
		func_262(&(uParam1->f_133));
		if (func_100(iParam0, 0))
		{
			func_240(iParam0, bParam3);
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_471(bParam1, iParam2, bParam3);
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

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 65536);
	}
	else
	{
		func_185(uParam0, 65536);
	}
}

int func_258(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		iVar0 = func_276(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_324(iParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
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

int func_259(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_260(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_4();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_472(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

void func_261(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_262(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_263(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_1794)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar1])))
		{
			(*uParam0)[iVar0] = &iLocal_1794[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_264(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	func_265(uParam0, 1);
	iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
	if (iParam5 || uParam0->f_1 < uParam0->f_3)
	{
		if (uParam0->f_1 >= 2)
		{
			func_265(uParam0, 16);
			uParam0->f_4 = 45;
		}
		if (uParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					uParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_0x268B3AEBF032A88D(uParam1->f_10))
					{
						func_265(uParam0, 2);
						return;
					}
					if (func_473(uParam0, &(uParam1->f_10)))
					{
						func_265(uParam0, 2);
					}
					else
					{
						func_123(uParam0, 1);
					}
					return;
				case 64:
					if (func_473(uParam0, &(uParam1->f_10)))
					{
						func_265(uParam0, 2);
					}
					else
					{
						func_123(uParam0, 1);
					}
					return;
				case 2048:
					uParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(func_356(Global_35)))
					{
						uParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							uParam0->f_18 = 1;
						}
						else
						{
							uParam0->f_18 = 2;
						}
						uParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						uParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					uParam0->f_16 = 7;
					break;
			}
		}
		if (*uParam0 != 0)
		{
		}
		else if (uParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*uParam0 = uParam1->f_10;
		}
		else if (!func_476(uParam0, iParam3, Global_36, 50f, func_474(uParam0), func_475(uParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !PED::IS_PED_HUMAN(*uParam0))
		{
			return;
		}
		if (uParam0->f_1 < 3)
		{
			uParam0->f_9[uParam0->f_1] = func_145();
		}
		if (!bParam4)
		{
			uParam0->f_1++;
		}
	}
	else
	{
		func_265(uParam0, 2);
	}
}

void func_265(int iParam0, int iParam1)
{
	func_132(&(iParam0->f_17), iParam1);
}

int func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[0])))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(Global_1935630->f_34[0])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Global_1935630->f_34[0]), true))
	{
		return 1;
	}
	iVar0 = func_98(&(Global_1935630->f_34[0]), 0);
	if (func_99(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_164(&iVar1, &iVar2, 0);
		}
		else
		{
			func_165(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return 1;
		}
	}
	return 0;
}

var func_267()
{
	return func_477(func_320(), "HMSTD_S1_CBT1", "HMSTD_S1_CBT2");
}

var func_268()
{
	return func_477(func_320(), "HMSTD_S2_CBT1", "HMSTD_S2_CBT2");
}

int func_269(int iParam0, var uParam1)
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

int func_270(int iParam0)
{
	return func_478(iParam0, 0);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_479(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_480(Global_1935630, 4194304);
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

int func_272()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_0x7BE607DAFF382FD2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (func_186(iVar6, ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_6, 1, 0))
					{
						iVar0 = 1;
					}
					if (func_269(iVar6, &iLocal_1768))
					{
						iVar0 = 1;
						bVar1 = true;
					}
					else
					{
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (iVar0 && !bVar1)
					{
						func_42(&Local_1389, 4096);
					}
					return iVar0;
				}
			}
		}
	}

int func_273(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (func_121(uParam1, 1))
	{
		return 0;
	}
	if (!func_186(Global_35, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_6, 1, 0))
	{
		return 0;
	}
	if ((func_481(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		if (func_476(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*uParam1 = uVar1;
			uParam1->f_16 = 7;
			return 1;
		}
	}
	return 0;
}

int func_274()
{
	if (!func_50(16384))
	{
		return 0;
	}
	if (iLocal_18 != 1)
	{
		return 0;
	}
	if (func_27(8))
	{
		return 0;
	}
	return 1;
}

int func_275()
{
	int iVar0;
	int iVar1;

	if (func_27(262144))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1789))
		{
			return 0;
		}
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_1789, Global_35, 1, 1))
		{
			return 1;
		}
		if (func_482(iLocal_1789) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_1789))
		{
			return 1;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar0 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_1789, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, Global_35, 1, 1))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_277(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_278(var uParam0, float fParam1)
{
	if (func_358(uParam0, fParam1))
	{
		func_262(uParam0);
		return 1;
	}
	return 0;
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_483(Local_40[iParam0 /*21*/], 0);
	func_484(iParam0, 0);
	if (iParam0 == 0)
	{
		func_53(134217728, bParam2);
	}
	else if (iParam0 == 1)
	{
		func_53(4, bParam2);
	}
	else if (iParam0 == 2)
	{
		func_53(8, bParam2);
	}
	if (bParam1)
	{
		iLocal_334 = -1;
		iLocal_335 = -1;
	}
}

void func_280(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_485(iParam0);
		func_486(iParam1, uParam2);
	}
	func_227(*iParam0, 1, bParam4);
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_487(iParam0, iParam1, bParam2);
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

void func_283()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_284(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_285(int iParam0)
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

void func_286(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_285(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_488(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_489(iVar0);
	*uParam0 = 0;
}

int func_287(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_490();
	if (iParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_490();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_287(iParam1, iParam2);
			if (iVar2 != -1)
			{
				iVar1 = ((*Global_1955500)[iVar2 /*16*/])->f_2;
				if (func_491(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, -128997553, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_289(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (*uParam0 - iParam1))
	{
		func_284((*uParam0)[(iVar0 + iParam1)]);
		iVar0++;
	}
}

void func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (iParam3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - iParam2))
		{
			if (func_110(iParam0[(iVar0 + iParam2)], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0[(iVar0 + iParam2)], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (func_110(iParam0[iVar0], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0[iVar0], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

float func_292(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_293(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return 1;
	}
	return 0;
}

bool func_294(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_492(cParam1, uParam0);
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

int func_295(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_493())
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
				if (func_247(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_292(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_74(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_494(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_496(func_495(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_497(iParam0, &((Global_40.f_9096[iParam0 /*12*/])->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_297(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_298(uParam0, 1);
		func_178(uParam0, 1);
		func_177(uParam0, 1);
		func_175(uParam0, 1);
		func_498(uParam0, 1);
		func_179(uParam0, 1);
		func_499(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_298(uParam0, 0);
		func_178(uParam0, 0);
		func_177(uParam0, 0);
		func_175(uParam0, 0);
		func_498(uParam0, 0);
		func_179(uParam0, 0);
		func_499(uParam0, 0);
	}
}

void func_298(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 4);
	}
	else
	{
		func_185(uParam0, 4);
	}
}

void func_299(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 16384);
	}
	else
	{
		func_132(&(uParam0->f_1), 16384);
	}
}

void func_300(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_185(&(uParam0->f_1), 131072);
	}
	else
	{
		func_132(&(uParam0->f_1), 131072);
	}
}

int func_301(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_165(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_500(iParam0, uVar0, iVar1, bParam2);
}

bool func_302(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_303(int iParam0, bool bParam1)
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
	if (!func_501(iParam0))
	{
		return;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_503(iVar0);
	func_504(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_505(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_506(iVar0))
		{
			return;
		}
	}
	func_507(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_304()
{
	if (func_308(Local_1618[0 /*7*/]) && func_508(Local_1618[0 /*7*/], "PBL_quick_exit"))
	{
		func_509(Local_1618[0 /*7*/], func_58(Local_1389.f_138), "father");
		func_509(Local_1618[0 /*7*/], (Local_386.f_690[2 /*12*/])->f_8, "HAMMER");
		func_509(Local_1618[0 /*7*/], func_58(65), "son_A");
		func_509(Local_1618[0 /*7*/], func_58(66), "son_B");
		if (!func_27(512))
		{
			func_510(Local_1618[0 /*7*/], "PBL_quick_exit", 1);
			func_511(Local_1618[0 /*7*/], 1.5f);
			func_512(Local_1618[0 /*7*/], "bBreakInternalLoop");
		}
	}
}

void func_305()
{
	if (ENTITY::DOES_ENTITY_EXIST((Local_386.f_690[0 /*12*/])->f_8))
	{
		if (ANIMSCENE::_0x25557E324489393C(&(Local_1618[0 /*7*/])))
		{
			func_307(Local_1618[0 /*7*/]);
		}
		PHYSICS::ACTIVATE_PHYSICS((Local_386.f_690[0 /*12*/])->f_8);
		TASK::_0x78B4567E18B54480((Local_386.f_690[0 /*12*/])->f_8);
		MISC::_0x8BB99B85444544D9((Local_386.f_690[0 /*12*/])->f_8, func_117(-1506205562));
	}
}

void func_306()
{
	int iVar0;
	int iVar1;

	if (func_308(Local_1618[2 /*7*/]))
	{
		iVar0 = func_58(65);
		Local_1389.f_140[0] = iVar0;
		iVar1 = func_513(iVar0, Global_35, 1060437492);
		if (iVar1 == 1)
		{
			iVar1 = func_513(iVar0, Global_35, 1f);
		}
		if (func_508(Local_1618[2 /*7*/], func_514(iLocal_29, iVar1)))
		{
			func_510(Local_1618[2 /*7*/], func_514(iLocal_29, iVar1), 1);
		}
	}
}

void func_307(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
}

bool func_308(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0);
}

int func_309()
{
	float fVar0;
	int iVar1;

	fVar0 = func_247((Local_386.f_690[0 /*12*/])->f_8, 1, 1);
	if (fVar0 <= 15f)
	{
		return 100;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15f)) + 100f));
	return iVar1;
}

int func_310(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
	if ((vVar0.z + 0.2f) < vVar3.z)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, *uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_311(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_312(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_313(int iParam0)
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

int func_314(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (func_316(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		return 0;
	}
	if (!bParam1)
	{
		return 0;
	}
	if (!PED::IS_PED_MALE(iParam0))
	{
		return 0;
	}
	fVar1 = func_247(iParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return 1;
	}
	return 0;
}

void func_315(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_317(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_318(int iParam0, int iParam1, bool bParam2)
{
	if (func_312(iParam1))
	{
		return 1;
	}
	if (bParam2 && PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return 0;
	}
	return 1;
}

char* func_319()
{
	return "Default_Shocked";
}

int func_320()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0, int iParam1, float fParam2)
{
	float fVar0;

	if (PED::IS_PED_HUMAN(*iParam0))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar0 < fParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 146, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 148, false);
			PED::_0xC6C4E15CF7D52FEA(*iParam0, 1000f);
			LAW::_0xF0B67BAD53C35BD9(*iParam0, Global_35, *iParam0, Global_36, iParam1);
		}
	}
}

int func_322(int iParam0, int iParam1)
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

void func_323(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_284(&iVar0);
}

int func_324(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_515(uParam2, 1, iVar0);
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
			if (func_516(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_517(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_518(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_519(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_520(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_256(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_517(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_521(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_522(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_523(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_524(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_524(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_517(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_525(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_526(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_527(uParam2, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_529(uParam2, iParam0)) && func_530(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_528(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_529(uParam2, iParam0)) && func_530(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_531(iParam0, Global_1935630->f_41))
							{
								func_532();
								*uParam3 = 2;
								func_517(iParam0, uParam2, *uParam3);
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
						if (func_531(iParam0, Global_1935630->f_41))
						{
							func_532();
							*uParam3 = 2;
							func_517(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_533(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_4() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_532();
						*uParam3 = 2;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_534())
					{
						if (func_531(iParam0, Global_1935630->f_42))
						{
							func_532();
							*uParam3 = 2;
							func_517(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_535(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_517(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_536(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_537(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_538(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_539(uParam2, 4000))
				{
					if (func_540(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_517(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_541(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_517(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_336(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_517(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_325(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_515(uParam1, 0, iVar0);
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
				if (func_527(uParam1, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_529(uParam1, iParam0)) && func_530(uParam1, iParam0))
					{
						func_532();
						*uParam2 = 2;
						func_517(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_527(uParam1, 4000))
				{
					if ((func_528(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_529(uParam1, iParam0)) && func_530(uParam1, iParam0))
					{
						func_532();
						*uParam2 = 2;
						func_517(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_531(iParam0, Global_1935630->f_41))
							{
								func_532();
								*uParam2 = 2;
								func_517(iParam0, uParam1, *uParam2);
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
						if (func_531(iParam0, Global_1935630->f_41))
						{
							func_532();
							*uParam2 = 2;
							func_517(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_534())
					{
						if (func_531(iParam0, Global_1935630->f_42))
						{
							func_532();
							*uParam2 = 2;
							func_517(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_521(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_522(Global_35, iParam0, uParam1))
					{
						func_532();
						*uParam2 = 4;
						func_517(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_523(Global_35, iParam0, uParam1))
					{
						func_532();
						*uParam2 = 256;
						func_517(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_542(iParam0, uParam1))
			{
				func_532();
				*uParam2 = 131072;
				func_517(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_543(iParam0, uParam1))
			{
				func_532();
				*uParam2 = 262144;
				func_517(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_326(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
		{
			if (func_292(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_327(int iParam0)
{
	float fVar0;

	if (!PED::IS_PED_IN_COMBAT(*iParam0, Global_35))
	{
		return 0;
	}
	if (WEAPON::_0xCB690F680A3EA971(*iParam0, 4))
	{
		return 0;
	}
	fVar0 = func_247(*iParam0, 1, 1);
	if (fVar0 > 20f)
	{
		return 1;
	}
	if (func_278(vLocal_1578[2 /*3*/], 15f))
	{
		return 1;
	}
	if (fVar0 > 4f)
	{
		if (!func_403(vLocal_1578[2 /*3*/]))
		{
			func_74(vLocal_1578[2 /*3*/]);
		}
		else if (func_544(vLocal_1578[2 /*3*/]))
		{
			func_545(vLocal_1578[2 /*3*/]);
		}
	}
	else if (func_403(vLocal_1578[2 /*3*/]) && !func_544(vLocal_1578[2 /*3*/]))
	{
		func_546(vLocal_1578[2 /*3*/]);
	}
	return 0;
}

bool func_328(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_312(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_312(iVar4) && iVar4 != bVar0)
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
	if (func_1() == -1 && !func_313(bVar0))
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
				if (func_313(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_312(bVar0))
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
		func_547(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_548(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_549(bVar0))
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

int func_329(var uParam0)
{
	if (!func_50(131072))
	{
		return 0;
	}
	*uParam0 = func_58(65);
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_254(*uParam0, 518218985))
	{
		return 0;
	}
	return 1;
}

int func_330(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (func_550(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, iParam6 == 0))
	{
		return 1;
	}
	return 0;
}

void func_331(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_332(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_333(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

int func_334()
{
	return 0;
}

int func_335(int iParam0, var uParam1)
{
	if (!func_551(iParam0))
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

int func_336(var uParam0, int iParam1)
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

int func_337(int iParam0)
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
	iVar0 = func_552(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_553(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_146(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_554(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_555(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_556(iParam0);
	if (iVar5 < 1 || iVar5 > func_557(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_554(*iParam0);
	iVar1 = func_555(*iParam0);
	iVar2 = func_556(*iParam0);
	iVar3 = func_146(*iParam0);
	iVar4 = func_553(*iParam0);
	iVar5 = func_552(*iParam0);
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
	iVar6 = func_557(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_557(iVar1, iVar0);
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
	func_558(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_339(int iParam0, bool bParam1)
{
	return func_559(func_145(), iParam0, bParam1);
}

void func_340(var uParam0)
{
	if (uParam0->f_19 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_356(Global_35)))
		{
			uParam0->f_19 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(67779789, Global_35, 999f, 5f, 5f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(func_356(Global_35)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_19);
	}
}

void func_341(int iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_342(int iParam0, int* iParam1, var uParam2, int iParam3)
{
	var uVar0;
	int iVar1;

	if (iParam0->f_14 > 0)
	{
		iVar1 = func_561(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_560(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (iVar1 != -1)
		{
			iParam0->f_15 = iVar1;
		}
	}
	switch (iParam0->f_14)
	{
		case 0:
			if (iParam3 || iParam0->f_13 > 0)
			{
				if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
				}
				func_563((*uParam2)[0 /*17*/], func_562(8), "", -163964935, 0, 0, 0, 1, 0);
				func_564((*uParam2)[0 /*17*/], 1, 0);
				func_565((*uParam2)[0 /*17*/], 0);
				func_563((*uParam2)[1 /*17*/], func_562(10), "", 648122183, 0, 0, 0, 1, 0);
				func_564((*uParam2)[1 /*17*/], 1, 0);
				func_565((*uParam2)[1 /*17*/], 0);
				func_563((*uParam2)[2 /*17*/], func_562(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_564((*uParam2)[2 /*17*/], 0, 0);
				func_565((*uParam2)[2 /*17*/], 1);
				func_566(iParam0, 1);
			}
			break;
		case 1:
			if (!func_353(0, 1, Global_35, 1) || !func_353(0, 1, *iParam0, 1))
			{
				func_567(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_483(iParam1, 0);
				func_564((*uParam2)[0 /*17*/], 0, 0);
				func_564((*uParam2)[1 /*17*/], 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_568(iParam0)))
				{
					func_95(Global_35, *iParam0, func_568(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_566(iParam0, 2);
			}
			break;
		case 2:
			if (func_353(0, 1, Global_35, 1) && func_353(0, 1, *iParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_569(iParam0)))
				{
					func_95(*iParam0, Global_35, func_569(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_566(iParam0, 3);
			}
			break;
		case 3:
			if (func_353(0, 1, Global_35, 1) && func_353(0, 1, *iParam0, 1))
			{
				func_566(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

int func_343(int iParam0)
{
	return func_57(iParam0, 0, 1);
}

int func_344(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(iParam0, "HAS_VOICE"))
	{
		return 1;
	}
	if (iParam1 && AUDIO::_0xF0EE69F500952FA5(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_345(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_346(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_110(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_347(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

float func_348(var uParam0)
{
	if (!func_403(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_544(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_467() - uParam0->f_1);
}

int func_349(int iParam0)
{
	return 1;
}

float func_350(int iParam0, int iParam1, bool bParam2)
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
	return func_570(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

char* func_352(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_320())
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_121(iParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (iParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (iParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return func_571(cVar0);
}

int func_353(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_572(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_573(fParam0))
	{
		return 0;
	}
	return 1;
}

int func_354(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_292(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_574(iVar0, 0)))
		{
			if (func_575(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)
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
	iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_357(int iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

int func_358(var uParam0, float fParam1)
{
	if (!func_403(uParam0))
	{
		return 0;
	}
	if (func_348(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_359(int iParam0, int* iParam1, var uParam2)
{
	func_280(iParam0, iParam1, uParam2, 1, 1);
	func_576(uParam2, 0, 1, 1, 1);
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_REMOVE(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

void func_360()
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[1])))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[6])))
		{
			if (func_186(Global_35, &(iLocal_1759[1]), 1, 0))
			{
				func_83(&(iLocal_1759[6]));
			}
		}
		else if (!func_186(Global_35, &(iLocal_1759[1]), 1, 0))
		{
			func_28();
		}
	}
}

void func_361(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_563((*Local_125[iParam0 /*52*/])[0 /*17*/], func_562(7), "", -163964935, 0, 0, 0, 1, 0);
	func_563((*Local_125[iParam0 /*52*/])[1 /*17*/], func_562(10), "", 648122183, 0, 0, 0, 1, 0);
	func_563((*Local_125[iParam0 /*52*/])[2 /*17*/], func_562(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_362(int iParam0)
{
	if (func_21(128))
	{
		if (iLocal_1648 < 3)
		{
			if (func_353(0, 1, *iParam0, 1) && func_353(0, 1, Global_35, 1))
			{
				if (iLocal_335 != -1 || (func_121(&Local_1549, 1) && Local_1549 == *iParam0))
				{
					if (func_354(func_577()))
					{
						func_578(func_577(), 0, 0);
					}
					func_74(vLocal_1578[8 /*3*/]);
					return;
				}
				if (!func_403(vLocal_1578[8 /*3*/]))
				{
					if (fLocal_1647 < 30f)
					{
						fLocal_1647 = 45f;
					}
					else
					{
						fLocal_1647 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
					}
					func_74(vLocal_1578[8 /*3*/]);
				}
				if (func_358(vLocal_1578[8 /*3*/], fLocal_1647))
				{
					if (func_247(*iParam0, 1, 1) < 12.5f)
					{
						func_94(&(Local_1389.f_35), func_577(), *iParam0, Global_35, 0, 0, 1, 1);
						func_262(vLocal_1578[8 /*3*/]);
						iLocal_1648++;
					}
				}
			}
		}
	}
}

void func_363(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];

	if (!func_50(2097152))
	{
		return;
	}
	func_579();
	iVar0 = func_560(1, 0, 0);
	iVar1 = 1;
	bVar2 = (iLocal_18 == 3 && !func_10(Local_1389.f_136, 128));
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (iVar4 == 3)
		{
		}
		else if (func_121(&Local_1549, 1) && Local_1549 == &iLocal_1768[iVar4])
		{
		}
		else
		{
			func_580(iVar4, bVar2);
			if (iVar4 == 1 && func_21(4))
			{
				if (DECORATOR::DECOR_EXIST_ON(&(iLocal_1768[iVar4]), "bScriptedILO"))
				{
					DECORATOR::DECOR_REMOVE(&(iLocal_1768[iVar4]), "bScriptedILO");
				}
			}
			else if (iVar4 == 2 && func_21(8))
			{
				if (DECORATOR::DECOR_EXIST_ON(&(iLocal_1768[iVar4]), "bScriptedILO"))
				{
					DECORATOR::DECOR_REMOVE(&(iLocal_1768[iVar4]), "bScriptedILO");
				}
			}
			else if (iVar4 == 0)
			{
				if (func_21(16))
				{
					if (DECORATOR::DECOR_EXIST_ON(&(iLocal_1768[iVar4]), "bScriptedILO"))
					{
						DECORATOR::DECOR_REMOVE(&(iLocal_1768[iVar4]), "bScriptedILO");
					}
				}
				else
				{
					fVar3 = 8f;
					iVar0 = func_560(1, 0, 0);
					if (iVar4 == 0)
					{
						fVar3 = func_581(iLocal_18 == 4, 8f, 20f);
						if (func_50(33554432))
						{
							iVar0 = 1;
						}
					}
					else if (iVar4 == 1)
					{
						if (func_50(131072))
						{
							fVar3 = 8f;
							iVar0 = func_560(1, 0, 0) | 2048;
						}
					}
					if (!DECORATOR::DECOR_EXIST_ON(&(iLocal_1768[iVar4]), "bScriptedILO"))
					{
						DECORATOR::DECOR_SET_BOOL(&(iLocal_1768[iVar4]), "bScriptedILO", true);
					}
					iVar5 = func_561(iLocal_1768[iVar4], Local_40[iVar4 /*21*/], fVar3, Local_125[iVar4 /*52*/], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
					if (!func_21(2) && func_582(Local_40[iVar4 /*21*/], 1))
					{
						func_141(2);
					}
					if (iLocal_334 <= -1)
					{
						if (iVar5 != -1)
						{
							iLocal_334 = iVar5;
							iLocal_335 = iVar4;
						}
					}
				}
				iVar4++;
				if (func_50(67108864))
				{
					return;
				}
				if (func_27(2))
				{
					return;
				}
				if (iLocal_335 > 0 && iLocal_334 > -1)
				{
					if (!func_50(1048576))
					{
						if (func_354("HMSTD_SONS_FIRE") || AUDIO::IS_ANY_SPEECH_PLAYING(&(iLocal_1768[iLocal_335])))
						{
							func_583("HMSTD_SONS_FIRE", 1);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(iLocal_1768[iLocal_335]), 0);
						}
						if (func_584(iLocal_335, bVar2))
						{
							cVar6 = func_477(iLocal_334 == 0, func_585(iLocal_335, bVar2), func_586(iLocal_335, bVar2));
							func_94(&(Local_1389.f_35), cVar6, Global_35, &(iLocal_1768[iLocal_335]), 0, 0, 1, 1);
							iVar4 = iLocal_335;
							func_279(iLocal_335, 1, 0);
							func_141(func_587(iVar4));
							func_49(1048576);
						}
					}
				}
				if (!func_50(134217728))
				{
					if (func_353(-3.5f, 1, 0, 0) && !func_588(1))
					{
						if (iLocal_334 == 1 && !func_50(16777216))
						{
						}
						func_279(0, 1, 0);
						func_589(0);
						func_43(134217728);
					}
				}
				else if (iLocal_335 == 0)
				{
					switch (iLocal_334)
					{
						case 0:
							if (func_50(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_135))
							{
								func_94(&(Local_1389.f_35), uParam0->f_135, Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_590(uParam0);
							}
							else
							{
								func_94(&(Local_1389.f_35), func_591(), Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_43(8388608);
								if (iLocal_18 == 2 && !func_592(&iLocal_1794))
								{
									func_279(1, 1, 0);
									func_279(2, 1, 0);
								}
							}
							func_279(0, 1, 1);
							break;
						case 1:
							if (func_50(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_135))
							{
								func_590(uParam0);
							}
							if (func_50(16777216))
							{
								func_49(16777216);
								func_94(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								func_43(4194304);
								func_25(Local_1389.f_136, 262144);
								func_9(Local_1389.f_136, 256);
								func_279(0, 1, 0);
							}
							else
							{
								if (func_50(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
								{
									func_94(&(Local_1389.f_35), uParam0->f_5, Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
									func_590(uParam0);
								}
								else
								{
									func_94(&(Local_1389.f_35), func_593(), Global_35, &(iLocal_1768[0]), 0, 0, 1, 1);
								}
								func_279(0, 1, 1);
							}
							break;
					}
				}
			}
		}
	}

void func_364()
{
	if (func_594() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_6(Local_1389.f_136))
		{
			func_5(4);
		}
	}
}

char* func_365()
{
	return "HOME_BLIP_FM";
}

void func_366(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	int iVar0;

	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_186(Global_35, ((*Global_1392194)[uParam2->f_136 /*10*/])->f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				func_315(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_367(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	if ((iLocal_1640 % 5) != 0)
	{
		return;
	}
	if (func_27(8388608))
	{
		return;
	}
	if (func_353(0, 1, 0, 0))
	{
		if (!func_403(vLocal_1578[5 /*3*/]))
		{
			func_74(vLocal_1578[5 /*3*/]);
		}
		if (func_358(vLocal_1578[5 /*3*/], 14f))
		{
			fVar0 = func_247(*iParam0, 1, 1);
			fVar1 = func_247(*iParam1, 1, 1);
			if (func_595(*iParam0))
			{
				fVar0 = 999f;
			}
			if (func_595(*iParam1))
			{
				fVar1 = 999f;
			}
			if (fVar0 < 8f && fVar1 < 8f)
			{
				if (func_27(4194304))
				{
					fVar0 = 8f;
				}
				else
				{
					fVar1 = 8f;
				}
			}
			if (fVar0 < 8f)
			{
				func_94(&(Local_1389.f_35), func_596(), *iParam0, *iParam1, 0, 0, 0, 1);
				func_262(vLocal_1578[5 /*3*/]);
				func_5(4194304);
			}
			else if (fVar1 < 8f)
			{
				func_94(&(Local_1389.f_35), func_597(), *iParam1, *iParam0, 0, 0, 0, 1);
				func_262(vLocal_1578[5 /*3*/]);
				func_139(4194304);
			}
		}
	}
}

int func_368()
{
	func_598();
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_599(1986792065, 0, 1);
			iLocal_20 = 2;
			break;
		case 2:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				iLocal_20 = 10;
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;

	if (iLocal_20 > 5)
	{
		func_601(7.5f, 15f, 15f, func_21(64));
	}
	func_602(iParam1, 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 8f;
			func_603(Local_1618[0 /*7*/], *iParam0, "father", 1);
			StringCopy(&((Local_1618[0 /*7*/])->f_4), "bBreakInternalLoop", 24);
			STREAMING::_0x19A6BE7D9C6884D3(func_604(), 1, func_229(Local_1389.f_138), func_605());
			if (!func_21(64))
			{
				func_606(Local_1618[0 /*7*/], (Local_386.f_690[1 /*12*/])->f_8, "CIGARETTE");
				STREAMING::_0x19A6BE7D9C6884D3(func_607(), 1, func_229(Local_1389.f_138), func_608());
			}
			else
			{
				func_611(Local_1618[0 /*7*/], func_609(), func_610());
			}
			if (func_27(2048))
			{
				STREAMING::_0x19A6BE7D9C6884D3(func_612(), 262145, func_229(66), -491224884);
				STREAMING::_0x19A6BE7D9C6884D3(func_613(), 262145, func_229(66), 1727477609);
			}
			else
			{
				func_240(65, 1);
				func_240(66, 1);
			}
			func_279(0, 1, 1);
			func_614(0);
			func_589(1);
			func_589(2);
			func_615(1, 0);
			func_616(1);
			func_617(Local_1618[0 /*7*/]);
			iLocal_20 = 2;
			break;
		case 2:
			if (func_618(*iParam0, Global_35, 0, Local_2071.f_13, 0) || (iLocal_334 == 0 && iLocal_335 == 0))
			{
				if (iLocal_334 == 0 && iLocal_335 == 0)
				{
					func_95(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_279(0, 1, 1);
				func_615(1, 0);
				if (func_21(64))
				{
					func_619(iParam0, 0, 0);
					if (!func_21(2))
					{
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					}
					func_621(Local_1618[0 /*7*/]);
					if (func_27(2048))
					{
						func_622(*iParam2, 1448892129, 1f, 0, "MAIN_ACTION_SON", 1, 106);
						PED::_0x2208438012482A1A(*iParam2, false, false);
					}
					func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_20 = 3;
				}
				else
				{
					func_619(iParam0, 0, 0);
					if (!func_21(2))
					{
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					}
					vVar1 = { func_623(Global_35, 1065353216) };
					iVar0 = func_624(*iParam0, vVar1, 1060437492);
					switch (iVar0)
					{
						case 0:
							sVar4 = "PBL_action_F";
							break;
						case 2:
							sVar4 = "PBL_action_R";
							break;
						case 3:
							sVar4 = "PBL_action_L";
							break;
						case 1:
							iVar0 = func_624(*iParam0, vVar1, 1f);
							switch (iVar0)
							{
								case 3:
									sVar4 = "PBL_action_back_L";
									break;
								case 2:
									sVar4 = "PBL_action_back_R";
									break;
							}
							break;
					}
					func_625(Local_1618[0 /*7*/], sVar4);
					uLocal_30 = func_626(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
					iLocal_20 = 8;
				}
			}
			break;
		case 8:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (func_627(Local_1618[0 /*7*/]))
			{
				func_628(Local_1618[0 /*7*/], 1, 1);
				if (func_27(2048))
				{
					func_622(*iParam2, 1448892129, 1f, 0, "MAIN_ACTION_SON", 1, 106);
					PED::_0x2208438012482A1A(*iParam2, false, false);
				}
				func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_200(Local_1389.f_136, 4096);
				if (!func_10(Local_1389.f_136, 16777216))
				{
					func_200(Local_1389.f_136, 16777216);
				}
				iLocal_20 = 3;
			}
			break;
		case 3:
			func_629(1048576000, 1028443341, 0, 106);
			if (func_630(Local_1618[0 /*7*/]))
			{
				func_631(Local_1618[0 /*7*/]);
			}
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (!func_21(2))
			{
				func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
			}
			if (!func_27(16777216))
			{
				func_5(16777216);
				func_632(Local_1389.f_136, 131072);
			}
			if (func_247(*iParam0, 1, 1) < 3.5f || func_633(Local_1618[0 /*7*/]) > 0.5f)
			{
				func_634();
				func_262(vLocal_1578[1 /*3*/]);
				func_279(0, 1, 1);
				iLocal_20 = 4;
			}
			break;
		case 4:
			func_629(1048576000, 1028443341, 0, 106);
			func_619(iParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_1))
			{
				if (!func_403(vLocal_1578[1 /*3*/]))
				{
					func_74(vLocal_1578[1 /*3*/]);
					func_615(1, 0);
					func_279(0, 1, 0);
					func_589(0);
				}
				if (func_278(vLocal_1578[1 /*3*/], 7.5f))
				{
					func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
					func_279(0, 1, 0);
					iLocal_20 = 5;
				}
				if (iLocal_335 == 0)
				{
					switch (iLocal_334)
					{
						case 0:
							func_94(&(Local_1389.f_35), Local_2071.f_135, Global_35, *iParam0, 0, 0, 1, 1);
							func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							func_43(512);
							func_262(vLocal_1578[1 /*3*/]);
							iLocal_20 = 5;
							break;
						case 1:
							func_94(&(Local_1389.f_35), Local_2071.f_5, Global_35, *iParam0, 0, 0, 1, 1);
							func_635(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							func_43(512);
							func_262(vLocal_1578[1 /*3*/]);
							iLocal_20 = 5;
							break;
					}
				}
			}
			break;
		case 5:
			if ((!func_50(1024) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_135)) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_5))
			{
				if (func_21(64) && !func_50(512))
				{
					func_307(Local_1618[0 /*7*/]);
				}
				else
				{
					func_621(Local_1618[0 /*7*/]);
				}
				if (func_50(512))
				{
					func_94(&(Local_1389.f_35), Local_2071.f_3, *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_43(1024);
				func_279(0, 1, 0);
			}
			bVar5 = true;
			if (func_247(*iParam0, 0, 1) < 5.5f)
			{
				func_619(&Global_35, 0, *iParam0);
			}
			if (!func_27(33554432))
			{
				if (func_353(0, 1, 0, 0))
				{
					func_89(&uLocal_30, 1);
					func_5(33554432);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				bVar5 = false;
				if ((!func_50(512) || func_50(1024)) && func_330(*iParam0, &(Local_1618[0 /*7*/]), "father", -1132719179, 0, 1, 0))
				{
					func_284(uLocal_1790[0]);
					func_616(0);
					func_615(0, 0);
					func_279(0, 1, 0);
					vVar7 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
					func_636(&vVar7, 0f);
					if (func_21(64))
					{
						if (func_50(512))
						{
							iVar6 = TASK::CREATE_SCENARIO_POINT(func_604(), vVar7, ENTITY::GET_ENTITY_HEADING(*iParam0), 0f, 0f, 1);
							TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iVar6, func_637(), -1, 0, 1, 0, 0, -1082130432, 0);
						}
					}
					else
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam0, func_607(), -1, 0, func_608(), -1082130432, 0);
						func_638(&((Local_386.f_690[1 /*12*/])->f_8));
					}
				}
			}
			if (bVar5)
			{
				func_279(1, 1, 0);
				func_279(2, 1, 0);
				func_589(1);
				func_589(2);
				func_139(8388608);
				func_253(vLocal_1578[5 /*3*/], (14f / 2f));
				func_84(&Local_1389);
				func_284(uLocal_1790[0]);
				func_74(vLocal_1578[1 /*3*/]);
				func_141(128);
				func_89(&uLocal_30, 1);
				iLocal_20 = 10;
			}
			break;
		case 7:
			iLocal_20 = 10;
			break;
		case 10:
			break;
	}
	return 0;
}

int func_370(int iParam0, bool bParam1, bool bParam2)
{
	func_602(iLocal_1768[1], 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!func_10(Local_1389.f_136, 16777216))
			{
				func_200(Local_1389.f_136, 16777216);
			}
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
			AUDIO::STOP_PED_SPEAKING(func_58(65), true);
			AUDIO::STOP_PED_SPEAKING(func_58(66), true);
			iLocal_20 = 2;
			break;
		case 2:
			func_200(Local_1389.f_136, 4096);
			iLocal_20 = 3;
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_247(*iParam0, 1, 1) < 30f)
			{
				func_192(Local_1389.f_136, 8388608);
				func_25(Local_1389.f_136, 16777216);
				func_619(iParam0, 0, 0);
				Local_336.f_40 = *iParam0;
				Local_336.f_43 = 4f;
				Local_336.f_41 = 4f;
				Local_336.f_39 = ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_6;
				func_5(65536);
				PED::_0x62FDAD5E01D2DD47(*iParam0, Global_36, 1, 0);
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 1.5f, 7f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_1818, 2f, 7.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_639(0);
				func_74(vLocal_1578[1 /*3*/]);
				iLocal_20 = 4;
			}
			break;
		case 4:
			switch (iLocal_334)
			{
				case 0:
					func_94(&(Local_1389.f_35), Local_2071.f_135, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return 0;
				case 1:
					func_94(&(Local_1389.f_35), Local_2071.f_5, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return 0;
			}
			func_641(iParam0);
			break;
		case 5:
			func_641(iParam0);
			func_619(iParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (bParam2)
				{
					func_240(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				func_640();
				iLocal_20 = 10;
			}
			break;
		case 10:
			func_641(iParam0);
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_371()
{
	int iVar0;

	if (!func_20(&Local_1389, 2) && func_642(1) > 0)
	{
		switch (iLocal_25)
		{
			case 0:
				iVar0 = func_58(Local_1389.f_138);
				func_59(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
				Local_2071.f_33 = { Local_1389.f_35 };
				Local_1857.f_81 = { Local_1389.f_35 };
				if (func_350(Global_35, iVar0, 1) < 100f)
				{
					func_643(1, func_642(1), &(iLocal_1759[0]), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1069547520, 1075838976, 1056964608, 0, 1106247680, 1);
					func_644(1);
					iLocal_25 = 2;
				}
				break;
		}
	}
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	int iVar5;
	bool bVar6;
	int iVar7;

	func_645(func_27(1073741824), 0);
	if (iLocal_20 > 9)
	{
		func_601(30f, 60f, 150f, 0);
	}
	if (func_27(512))
	{
		func_360();
	}
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			func_606(Local_1618[0 /*7*/], (Local_386.f_690[0 /*12*/])->f_8, "Frame");
			func_603(Local_1618[0 /*7*/], *iParam0, "father", 1);
			STREAMING::_0x19A6BE7D9C6884D3(func_607(), 1, func_229(Local_1389.f_138), func_608());
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
			func_606(Local_1618[0 /*7*/], (Local_386.f_690[2 /*12*/])->f_8, "HAMMER");
			func_603(Local_1618[0 /*7*/], *iParam2, "son_B", 1);
			AUDIO::STOP_PED_SPEAKING(*iParam2, true);
			func_603(Local_1618[0 /*7*/], *iParam1, "son_A", 1);
			func_617(Local_1618[0 /*7*/]);
			AUDIO::STOP_PED_SPEAKING(*iParam1, true);
			func_616(1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				switch (iVar0)
				{
					case 0:
						sVar1 = "PBL_action_enter_F";
						break;
					case 2:
						sVar1 = "PBL_action_enter_R";
						break;
					case 1:
						sVar1 = "PBL_action_enter_B";
						break;
					case 3:
						sVar1 = "PBL_action_enter_L";
						break;
				}
				func_646(Local_1618[0 /*7*/], sVar1);
				iVar0++;
			}
			func_646(Local_1618[0 /*7*/], "PBL_quick_exit");
			func_635(&(Local_1389.f_35), "HMSTD_IG1_ENTER", 0);
			func_635(&(Local_1389.f_35), "HMSTD_ENT_RAIN", 0);
			iLocal_1759[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-439.3327f, 501.9627f, 98.96794f, 0f, 0f, 2.018299f, 4.107876f, 7.487784f, 2.224686f, "Castor's Ridge - volHorse");
			func_589(1);
			func_279(1, 1, 0);
			func_589(2);
			func_279(2, 1, 0);
			func_279(0, 1, 1);
			func_614(0);
			func_615(1, 1);
			func_43(16384);
			iLocal_20 = 3;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_20 = 2;
			}
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && func_618(*iParam0, Global_35, 0, 20f, 0))
			{
				iLocal_20 = 3;
			}
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!func_647(iParam0))
			{
			}
			else
			{
				if ((func_648(&iLocal_1768, &uLocal_34, &uLocal_39, 1073741824, 10f, 0, 0, 7.5f) || func_649(&(iLocal_1768[0]), 20f, vLocal_1578[7 /*3*/], 7f)) || (iLocal_334 == 0 && iLocal_335 == 0))
				{
					func_629(1048576000, 1028443341, 0, 106);
					vVar2 = { func_623(Global_35, 1f) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&((Local_1618[0 /*7*/])->f_1)))
					{
						iVar0 = func_624((Local_386.f_690[3 /*12*/])->f_8, vVar2, 0.692f);
						switch (iVar0)
						{
							case 0:
								sVar1 = "PBL_action_enter_F";
								break;
							case 2:
								sVar1 = "PBL_action_enter_R";
								break;
							case 1:
								sVar1 = "PBL_action_enter_B";
								break;
							case 3:
								sVar1 = "PBL_action_enter_L";
								break;
						}
						func_625(Local_1618[0 /*7*/], sVar1);
					}
					if (func_627(Local_1618[0 /*7*/]))
					{
						if (iLocal_334 == 0 && iLocal_335 == 0)
						{
							func_95(Global_35, *iParam0, "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_615(1, 0);
						func_279(0, 1, 1);
						if (!func_10(Local_1389.f_136, 128))
						{
							func_84(&Local_1389);
						}
						func_25(Local_1389.f_136, 524288);
						func_189(iParam0);
						if (!func_21(2))
						{
							func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976, 0, 1, 1084227584);
						}
						func_619(iParam0, 0, 0);
						func_7(1073741824, func_186(PED::_0x4C8B59171957BCF7(Global_35), &(iLocal_1759[4]), 1, 0));
						func_200(Local_1389.f_136, 8);
						func_628(Local_1618[0 /*7*/], 1, 1);
						func_625(Local_1618[0 /*7*/], "PBL_quick_exit");
						if (func_20(&Local_1389, 256))
						{
							func_94(&(Local_1389.f_35), "HMSTD_ENT_RAIN", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_94(&(Local_1389.f_35), "HMSTD_IG1_ENTER", *iParam0, Global_35, 0, 0, 1, 1);
						}
						func_635(&(Local_1389.f_35), "HMSTD_IG1DAD", 0);
						func_635(&(Local_1389.f_35), "HMSTD_IG1DADb", 0);
						func_635(&(Local_1389.f_35), "HMSTD_IG1DAD2", 0);
						iLocal_20 = 7;
					}
				}
				Jump @4016; //curOff = 1309
				func_103();
				func_650();
				if (!func_21(2))
				{
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976, 0, 1, 1084227584);
				}
				func_619(iParam0, 0, 0);
				func_7(1073741824, func_186(PED::_0x4C8B59171957BCF7(Global_35), &(iLocal_1759[4]), 1, 0));
				func_629(1048576000, 1028443341, 0, 106);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35) && (((func_651(iParam0, iParam1, iParam2) || ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1647800955)) && !func_354("HMSTD_IG1_ENTER")) && !func_354("HMSTD_ENT_RAIN")))
				{
					if (func_50(4096))
					{
						func_509(Local_1618[0 /*7*/], *iParam0, "father");
						func_509(Local_1618[0 /*7*/], *iParam1, "son_A");
						func_509(Local_1618[0 /*7*/], *iParam2, "son_B");
						func_511(Local_1618[0 /*7*/], 1.5f);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
					else
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG1DAD", *iParam0, Global_35, 0, 0, 1, 1);
						func_86();
						uLocal_30 = func_626(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
						iLocal_20 = 5;
					}
					iVar5 = PED::_0x4C8B59171957BCF7(Global_35);
					if (!ENTITY::IS_ENTITY_DEAD(iVar5) && PED::GET_PED_CONFIG_FLAG(iVar5, 136, true))
					{
						PED::SET_PED_CONFIG_FLAG(iVar5, 136, false);
					}
					func_284(uLocal_1790[0]);
				}
				Jump @4016; //curOff = 1759
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				func_650();
				if (func_652(iParam0, iParam1, iParam2))
				{
					func_509(Local_1618[0 /*7*/], *iParam0, "father");
					func_509(Local_1618[0 /*7*/], *iParam1, "son_A");
					func_509(Local_1618[0 /*7*/], *iParam2, "son_B");
					func_511(Local_1618[0 /*7*/], 1.5f);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
					iLocal_20 = 6;
				}
				func_7(1073741824, func_186(PED::_0x4C8B59171957BCF7(Global_35), &(iLocal_1759[4]), 1, 0));
				if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1608236143))
				{
					func_615(1, 0);
					func_279(0, 1, 0);
					func_653(0);
				}
				if (iLocal_335 == 0 && iLocal_334 == 0)
				{
					func_43(65536);
					func_615(0, 0);
					func_279(0, 1, 0);
				}
				if ((!func_27(268435456) && func_354("HMSTD_IG1DAD")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("HMSTD_IG1DAD") >= 4)
				{
					if (!func_50(4096))
					{
						if (func_50(65536))
						{
							func_583("HMSTD_IG1DAD", 0);
							func_94(&(Local_1389.f_35), "HMSTD_IG1DADb", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_583("HMSTD_IG1DAD", 0);
						}
					}
					func_615(0, 0);
					func_279(0, 1, 1);
					func_5(268435456);
				}
				if (func_27(268435456))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1921072203))
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG1DAD2", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				if ((func_27(1024) || func_50(4096)) && !func_654(Local_1618[0 /*7*/], "PBL_quick_exit"))
				{
					if (func_627(Local_1618[0 /*7*/]) && func_651(iParam0, iParam1, iParam2))
					{
						func_628(Local_1618[0 /*7*/], 1, 1);
						func_583("HMSTD_IG1DAD", 0);
						func_583("HMSTD_IG1_ENTER", 0);
						func_583("HMSTD_ENT_RAIN", 0);
						func_583("HMSTD_IG1DADb", 0);
					}
				}
				if (func_27(512))
				{
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_1759[1]), 7);
					POPULATION::_0xB56D41A694E42E86(&(iLocal_1759[3]), 524288, 0, 0, -1, -1, 2);
					PED::_0x4C39C95AE5DB1329(&(iLocal_1759[3]), 0, 15);
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_1759[3]), 7);
					POPULATION::_0xB56D41A694E42E86(&(iLocal_1759[1]), 524288, 0, 0, -1, -1, 0);
					PED::_0x4C39C95AE5DB1329(&(iLocal_1759[1]), 0, 15);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2446
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				if (!func_654(Local_1618[0 /*7*/], "PBL_quick_exit"))
				{
					if (func_627(Local_1618[0 /*7*/]))
					{
						func_628(Local_1618[0 /*7*/], 1, 1);
					}
				}
				func_81();
				bVar6 = true;
				if (func_186(*iParam0, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_186(*iParam1, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_186(*iParam2, &(iLocal_1759[1]), 1, 0))
				{
					bVar6 = false;
				}
				if (func_21(16384))
				{
					bVar6 = true;
				}
				if (bVar6)
				{
					PED::_0xAAB050DA48B57978(*iParam0, "Default_Nervous", Global_35, -1, 4);
					PED::_0xAAB050DA48B57978(*iParam1, "Default_Panic", Global_35, -1, 4);
					PED::_0xAAB050DA48B57978(*iParam2, "Default_Scared", Global_35, -1, 4);
					func_94(&(Local_1389.f_35), "HMSTD_BUMP", *iParam0, Global_35, 0, 0, 1, 1);
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_1759[1]), 7);
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_1759[3]), 7);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2702
				func_629(1048576000, 1028443341, 0, 106);
				func_103();
				if (func_27(268435456))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1921072203))
					{
						func_279(0, 1, 1);
						func_583("HMSTD_IG1DADb", 0);
					}
				}
				if (!func_27(512))
				{
					func_7(1073741824, func_186(PED::_0x4C8B59171957BCF7(Global_35), &(iLocal_1759[4]), 1, 0));
					if (func_652(iParam0, iParam1, iParam2))
					{
						func_509(Local_1618[0 /*7*/], *iParam0, "father");
						func_509(Local_1618[0 /*7*/], *iParam1, "son_A");
						func_509(Local_1618[0 /*7*/], *iParam2, "son_B");
						func_511(Local_1618[0 /*7*/], 1.5f);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
				}
				if (!func_27(33554432))
				{
					if (func_27(512))
					{
						func_89(&uLocal_30, 1);
						func_5(33554432);
					}
				}
				if (!func_50(1073741824) && func_330(*iParam1, &(Local_1618[0 /*7*/]), "son_A", -1795669989, 0, 1, 0))
				{
					func_57(65, 1, 1);
					func_49(16384);
					func_189(iParam1);
					func_509(Local_1618[0 /*7*/], *iParam1, "son_A");
					func_43(1073741824);
					func_279(1, 1, 0);
					func_589(1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -426.0537f, 496.4437f, 97.11671f, 1f, -1, 0.25f, true, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -424.1754f, 496.6488f, 97.57932f, 5.5f, -1, 1, 0, 0, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -422.3258f, 494.8378f, 97.33466f, 1f, -1, 0.25f, false, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam1, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					func_139(1073741824);
					func_101(1);
				}
				if (!func_50(-2147483648) && func_330(*iParam2, &(Local_1618[0 /*7*/]), "son_B", -1795669989, 0, 1, 0))
				{
					func_57(66, 1, 1);
					func_49(16384);
					func_189(iParam2);
					func_509(Local_1618[0 /*7*/], *iParam2, "son_B");
					func_43(-2147483648);
					func_279(2, 1, 0);
					func_589(2);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -427.5399f, 499.9651f, 97.11329f, 1f, -1, 0.25f, true, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -426.9276f, 500.1004f, 97.11906f, 5.5f, -1, 1, 0, 0, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -422.4966f, 493.1444f, 97.34264f, 1f, -1, 0.25f, false, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam2, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					PED::_0x2208438012482A1A(*iParam2, false, false);
				}
				if (!func_50(536870912) && func_330(*iParam0, &(Local_1618[0 /*7*/]), "father", -1795669989, 0, 1, 0))
				{
					func_57(64, 1, 1);
					func_49(16384);
					func_616(0);
					func_189(iParam0);
					func_615(0, 0);
					func_279(0, 1, 0);
					func_589(0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -442.8645f, 506.2977f, 96.99207f, 1f, -1, 0.25f, true, 40000f);
					if (!func_20(&Local_1389, 256))
					{
						iVar7 = TASK::CREATE_SCENARIO_POINT(func_607(), -443.6081f, 506.3698f, 97.01981f, -6.53f, 0f, 0f, 0);
						TASK::_TASK_USE_SCENARIO_POINT(0, iVar7, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -421.5728f, 503.3897f, 97.15549f, 1f, -1, 0.25f, false, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					if (!func_50(4096))
					{
						PED::_0x2208438012482A1A(*iParam0, false, false);
					}
					else
					{
						func_43(8192);
						Local_2071.f_135 = "HMSTD_BUMP_P";
						Local_2071.f_5 = "HMSTD_BUMP_N";
						func_615(0, 0);
						func_279(0, 1, 0);
						func_655(0);
					}
					func_141(128);
					func_638(&((Local_386.f_690[1 /*12*/])->f_8));
					func_43(536870912);
				}
				if ((func_50(1073741824) && func_50(-2147483648)) && func_50(536870912))
				{
					func_49(16384);
					func_101(0);
					func_253(vLocal_1578[5 /*3*/], (14f / 2f));
					if (!func_50(4096))
					{
						func_93(1);
					}
					func_74(vLocal_1578[1 /*3*/]);
					if (func_20(&Local_1389, 256))
					{
						func_454(65, 0, 1, 0, 0);
						func_454(66, 0, 1, 0, 0);
						func_454(Local_1389.f_138, 0, 1, 0, 0);
					}
					iLocal_20 = 10;
				}
				Jump @4016; //curOff = 4002
				func_656(iParam1, iParam2);
			}
			return 0;
		}

int func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar8;

	func_139(32);
	if (func_657(iParam0, iParam1, iParam2))
	{
		iLocal_24 = 9;
	}
	if (func_8(Local_1389.f_136, 64))
	{
		func_658();
	}
	func_194(0);
	switch (iLocal_24)
	{
		case 0:
			func_5(16);
			func_659(0, 1);
			func_659(1, 1);
			func_659(2, 1);
			func_616(1);
			func_660(1);
			Local_1389.f_18 = 3000;
			iLocal_1759[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-473.2554f, 497.1866f, 100.6316f, 0f, 0f, 6.802227f, 10.537f, 14.53575f, 6.040145f, "Castor's Ridge - volBandit");
			iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-448.3479f, 500.5164f, 98.75289f, 0f, 0f, 91.21118f, 12.00564f, 6.040755f, 3.434479f, "Castor's Ridge - volCombat");
			iLocal_1759[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Castor's Ridge - volHouse");
			VOLUME::_0x39816F6F94F385AD(&(iLocal_1759[5]), -438.5028f, 497.761f, 99.02924f, 0f, 0f, 2.049191f, 13.49764f, 4.540787f, 4.170513f);
			VOLUME::_0x39816F6F94F385AD(&(iLocal_1759[5]), -439.7f, 495.1134f, 99.02924f, 0f, 0f, 1.923922f, 10.80366f, 1.939119f, 4.170513f);
			VOLUME::_0x39816F6F94F385AD(&(iLocal_1759[5]), -441.1678f, 500.8109f, 99.02924f, 0f, 0f, 1.978058f, 8.808822f, 2.322693f, 4.170513f);
			Local_1857.f_79 = 1;
			Local_1857.f_78 = 0;
			func_167(&uLocal_1823);
			func_174(&uLocal_1823, 1);
			func_40(&uLocal_1823, 1);
			func_169(&uLocal_1823, 1);
			func_173(&uLocal_1823, 1);
			func_661(&iLocal_1794, &(iLocal_1759[1]), 0, 0, 1);
			func_662();
			func_297(&Local_1389, 0);
			func_171(&Local_1389, 1);
			func_170(&Local_1389, 1);
			func_176(&Local_1389, 1);
			func_663(&Local_1389, 2000);
			func_664();
			func_59(&(Local_1389.f_35), &(iLocal_1794[0]), "HOME_ATTACKER", 0);
			Local_2071.f_33 = { Local_1389.f_35 };
			Local_1857.f_81 = { Local_1389.f_35 };
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = &iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			PED::ADD_RELATIONSHIP_GROUP("HomesteadAttackers", &iLocal_31);
			PED::ADD_RELATIONSHIP_GROUP("HomesteadWorkers", &iLocal_32);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_32, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_32, iLocal_31);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_31, iLocal_32);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (!func_100(65, 0))
				{
					if (!func_57(65, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, 0, 1);
				func_238(*iParam1, func_237(65), 0f, 2, 1073741824);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam1, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam1, iLocal_32);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, (Local_1649[1 /*8*/])->f_1, -1, 0, 1f, 1, 0, &(Local_1649[1 /*8*/]), 0, 1, 0);
				TASK::TASK_SEEK_COVER_FROM_POS(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				TASK::TASK_STAY_IN_COVER(0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam1, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, (Local_1649[1 /*8*/])->f_1, 1f, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
			{
				if (!func_100(66, 0))
				{
					if (!func_57(66, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam2, 0, 1);
				func_238(*iParam2, func_237(66), 0f, 2, 1073741824);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam2, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam2, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam2, iLocal_32);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, (Local_1649[2 /*8*/])->f_1, -1, 0, 1f, 1, 1, &(Local_1649[2 /*8*/]), 0, 1, 0);
				TASK::TASK_SEEK_COVER_FROM_POS(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				TASK::TASK_STAY_IN_COVER(0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam2, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam2, true, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam2, (Local_1649[2 /*8*/])->f_1, 1f, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					if (!func_57(Local_1389.f_138, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, 0, 1);
				func_238(*iParam0, func_237(64), 0f, 2, 1073741824);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_32);
				WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, func_104(131072, 1056964608, 1065353216), 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 119, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 12, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 44, true);
				PED::SET_PED_ACCURACY(*iParam0, 0);
				PED::SET_COMBAT_FLOAT(*iParam0, 0, 1f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, (Local_1649[0 /*8*/])->f_1, 2000, 1, 0.125f, 1, 1, &(Local_1649[0 /*8*/]), 0, 1, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(&(iLocal_1794[0]), true, false), 60f, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, (Local_1649[0 /*8*/])->f_1, 1f, 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
			}
			iVar0 = 0;
			while (iVar0 < iLocal_1794)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
				{
					func_666(&(iLocal_1794[iVar0]));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iLocal_1794[iVar0]), iLocal_31);
					PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_1794[iVar0]), 0, true);
					PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_1794[iVar0]), 1);
					PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[iVar0]), 233, true);
					WEAPON::SET_CURRENT_PED_WEAPON(&(iLocal_1794[iVar0]), func_104(131072, 1056964608, 1065353216), true, 0, false, false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(&(iLocal_1794[iVar0]), ENTITY::GET_ENTITY_COORDS(&(iLocal_1794[iVar0]), true, false), -1, 1, 0, 0, 0, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(&(iLocal_1794[iVar0]), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
					PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[iVar0]), 6, true);
					PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[iVar0]), 146, true);
					iLocal_1642 = PED::GET_PED_ACCURACY(&(iLocal_1794[iVar0]));
					PED::SET_PED_ACCURACY(&(iLocal_1794[iVar0]), 0);
					PED::SET_PED_USING_ACTION_MODE(&(iLocal_1794[iVar0]), true, -1, 0);
					if (!ENTITY::IS_ENTITY_DEAD((Local_386.f_369[iVar0 /*32*/])->f_11))
					{
						PHYSICS::_0x06AADE17334F7A40((Local_386.f_369[iVar0 /*32*/])->f_11, func_667(iVar0));
						PED::_0x06D26A96CA1BCA75((Local_386.f_369[iVar0 /*32*/])->f_11, 3, 0f, 0);
						PED::_0x06D26A96CA1BCA75((Local_386.f_369[iVar0 /*32*/])->f_11, 1, 0f, 0);
						PED::_0x2EB75FB86C41F026((Local_386.f_369[iVar0 /*32*/])->f_11, 3, 0);
						PED::_0x2EB75FB86C41F026((Local_386.f_369[iVar0 /*32*/])->f_11, 1, 0);
					}
				}
				iVar0++;
			}
			func_74(vLocal_1578[10 /*3*/]);
			func_668();
			iLocal_24 = 1;
			break;
		case 1:
			func_669();
			func_660(1);
			func_670();
			if (func_353(0, 1, 0, 0))
			{
				if (func_671(iParam0, iParam1, iParam2))
				{
					iVar1 = func_672();
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						func_94(&(Local_1389.f_35), "HOME_ATAKR", iVar1, *iParam0, 0, 0, 1, 1);
					}
					func_74(vLocal_1578[5 /*3*/]);
					iLocal_24 = 2;
				}
				else if (func_673(iParam0))
				{
					func_74(vLocal_1578[5 /*3*/]);
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			if (func_278(vLocal_1578[5 /*3*/], 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				func_74(vLocal_1578[1 /*3*/]);
			}
			if (!func_27(16384))
			{
				func_660(1);
			}
			func_670();
			if (func_353(0, 1, 0, 0))
			{
				if (!func_403(vLocal_1578[0 /*3*/]))
				{
					func_74(vLocal_1578[0 /*3*/]);
				}
				if (func_278(vLocal_1578[0 /*3*/], 5f))
				{
					if (!func_27(134217728))
					{
						if (!func_27(32768))
						{
							func_5(32768);
							func_94(&(Local_1389.f_35), "HOME_ATAK", *iParam0, &(iLocal_1794[0]), 0, 0, 1, 1);
						}
						else
						{
							func_94(&(Local_1389.f_35), "HOME_ATAKF", *iParam0, &(iLocal_1794[0]), 0, 0, 1, 1);
						}
					}
					else
					{
						func_139(134217728);
						iVar2 = func_672();
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							func_94(&(Local_1389.f_35), "HOME_ATAKR", iVar2, *iParam0, 0, 0, 1, 1);
						}
					}
				}
			}
			if (func_358(vLocal_1578[1 /*3*/], 5f))
			{
				func_674(*iParam0, 1);
				func_262(vLocal_1578[1 /*3*/]);
			}
			if (func_673(iParam0))
			{
				func_139(16384);
				func_5(134217728);
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (func_278(vLocal_1578[5 /*3*/], 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				if (func_110(*iParam0, 0, 1))
				{
					PED::SET_PED_ACCURACY(*iParam0, 55);
				}
				func_74(vLocal_1578[1 /*3*/]);
			}
			if (func_592(&iLocal_1794))
			{
				func_674(*iParam0, 0);
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam1, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam1, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam2, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam2, 0, "ALL");
				func_589(0);
				func_279(0, 1, 1);
				func_589(1);
				func_279(1, 1, 1);
				func_589(2);
				func_279(2, 1, 1);
				iVar0 = 0;
				while (iVar0 < Local_386.f_1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(func_675((Local_386.f_369[iVar0 /*32*/])->f_11)))
					{
						PHYSICS::_0x0348469DAA17576C((Local_386.f_369[iVar0 /*32*/])->f_11);
						TASK::_TASK_SMART_FLEE_STYLE_COORD((Local_386.f_369[iVar0 /*32*/])->f_11, func_215(), 4, 0, 999f, -1, 0);
					}
					PED::SET_PED_KEEP_TASK((Local_386.f_369[iVar0 /*32*/])->f_11, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&((Local_386.f_369[iVar0 /*32*/])->f_11));
					iVar0++;
				}
				func_260(&Local_1389, &(Local_1389.f_28));
				func_39(&Local_1389);
				func_40(&Local_1389, 0);
				func_169(&Local_1389, 0);
				func_178(&Local_1389, 0);
				func_90(iParam0, iParam1, iParam2, 1);
				EVENT::_0xB6F4825153920582();
				TASK::_0xDF94844D474F31E5(*iParam0);
				TASK::_0xDF94844D474F31E5(*iParam1);
				TASK::_0xDF94844D474F31E5(*iParam2);
				EVENT::_0x1A5C5D350068A673(*iParam0, 0);
				EVENT::_0x1A5C5D350068A673(*iParam1, 0);
				EVENT::_0x1A5C5D350068A673(*iParam2, 0);
				func_279(0, 1, 1);
				func_279(1, 1, 1);
				func_279(2, 1, 1);
				func_262(vLocal_1578[2 /*3*/]);
				func_42(&Local_1389, 128);
				func_25(Local_1389.f_136, 64);
				func_84(&Local_1389);
				func_315(iLocal_1816, uLocal_1790[0], -89429847, 580546400, 0, func_365());
				func_74(vLocal_1578[1 /*3*/]);
				WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("weapon_unarmed"), false, 0, false, false);
				PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
				PED::_0xAAB050DA48B57978(*iParam1, func_665(1), 0, -1, 4);
				PED::_0xAAB050DA48B57978(*iParam2, func_665(2), 0, -1, 4);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 277, true);
				vVar3.x = 0;
				vVar3.f_1 = 1;
				vVar3.f_2 = { Global_36 };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				AICOVERPOINT::TASK_EXIT_COVER(&vVar3);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_139(16);
				func_74(vLocal_1578[0 /*3*/]);
				iLocal_24 = 4;
			}
			else if (func_676(&iLocal_1768, 0))
			{
				func_42(&Local_1389, 4);
				func_200(Local_1389.f_136, 512);
				func_84(&Local_1389);
				func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
				func_289(&uLocal_1805, 0);
				func_262(vLocal_1578[0 /*3*/]);
				iLocal_24 = 9;
			}
			else
			{
				func_677(iParam0);
			}
			break;
		case 4:
			if (!func_50(1073741824))
			{
				func_43(1073741824);
				PED::_0xAAB050DA48B57978(*iParam1, func_665(1), 0, -1, 4);
			}
			if (!func_50(-2147483648))
			{
				func_43(-2147483648);
				PED::_0xAAB050DA48B57978(*iParam2, func_665(2), 0, -1, 4);
			}
			if (!func_678(&Local_1389, 4))
			{
				if (!func_403(vLocal_1578[2 /*3*/]))
				{
					func_74(vLocal_1578[2 /*3*/]);
				}
				else if (func_278(vLocal_1578[2 /*3*/], (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_40(&Local_1389, 1);
					func_178(&Local_1389, 1);
				}
			}
			if (!func_27(65536) && iLocal_2070 > 0)
			{
				func_5(65536);
			}
			if (func_679(iParam0, joaat("weapon_unarmed")))
			{
				func_680();
			}
			func_629(1048576000, 1028443341, 0, 106);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (!func_27(1048576) && func_247(*iParam0, 1, 1) < 20f)
				{
					func_5(1048576);
				}
				if (func_681())
				{
					PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
					iLocal_24 = 5;
				}
			}
			else
			{
				if (!func_100(65, 0))
				{
					func_57(65, 1, 1);
				}
				if (!func_100(66, 0))
				{
					func_57(66, 1, 1);
				}
				func_200(Local_1389.f_136, 32);
				func_192(Local_1389.f_136, 8388608);
				func_188(Local_1389.f_136);
				iLocal_24 = 7;
			}
			break;
		case 5:
			func_629(1048576000, 1028443341, 0, 106);
			if (!func_678(&Local_1389, 4))
			{
				if (!func_403(vLocal_1578[2 /*3*/]))
				{
					func_74(vLocal_1578[2 /*3*/]);
				}
				else if (func_278(vLocal_1578[2 /*3*/], (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_40(&Local_1389, 1);
					func_178(&Local_1389, 1);
				}
			}
			if (func_679(iParam0, joaat("weapon_unarmed")))
			{
				func_680();
			}
			if (func_682(iParam0))
			{
				if (func_353(-3.5f, 1, 0, 0))
				{
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					if (!func_100(65, 0))
					{
						func_57(65, 1, 1);
					}
					if (!func_100(66, 0))
					{
						func_57(66, 1, 1);
					}
					func_284(uLocal_1790[0]);
					func_200(Local_1389.f_136, 32);
					func_192(Local_1389.f_136, 8388608);
					func_188(Local_1389.f_136);
					if (func_292(*iParam0, *iParam1, 1, 1) > 7.5f)
					{
						TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
						TASK::TASK_GO_TO_ENTITY(*iParam0, *iParam1, -1, 5f, 1f, 8f, 0);
					}
					iLocal_24 = 6;
				}
			}
			break;
		case 6:
			if (func_292(*iParam0, *iParam1, 1, 1) <= 7.5f)
			{
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, *iParam2, -1, -1082130432, -1082130432, -1082130432);
				vVar8.x = 0;
				vVar8.f_1 = 1;
				vVar8.f_2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				AICOVERPOINT::TASK_EXIT_COVER(&vVar8);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *iParam0, -1, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam1, iLocal_1818, 0.5f, 0.5f);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam2, iLocal_1818, 1.5f, 1.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_94(&(Local_1389.f_35), "HOME_WLCMA2", *iParam0, *iParam2, 0, 0, 1, 1);
				iLocal_24 = 7;
			}
			break;
		case 7:
			if (func_27(16))
			{
				if (!func_403(vLocal_1578[2 /*3*/]))
				{
					func_683(vLocal_1578[2 /*3*/], 0);
				}
				else if (func_278(vLocal_1578[2 /*3*/], (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					func_169(&Local_1389, 1);
					func_139(16);
				}
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (func_20(&Local_1389, 256))
				{
					if (func_100(Local_1389.f_138, 0))
					{
						func_240(Local_1389.f_138, 1);
					}
					if (func_100(65, 0))
					{
						func_240(65, 1);
					}
					if (func_100(66, 0))
					{
						func_240(66, 1);
					}
				}
				else
				{
					func_684();
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam0, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam0, 178, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam1, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam1, 178, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam2, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam2, 178, true);
				}
				func_279(0, 1, 0);
				func_589(0);
				func_279(1, 1, 0);
				func_589(1);
				func_279(2, 1, 0);
				func_589(2);
				func_139(8388608);
				func_253(vLocal_1578[5 /*3*/], (14f / 2f));
				func_40(&Local_1389, 1);
				func_139(1048576);
				func_616(1);
				Local_1389.f_18 = 1000;
				func_141(128);
				iLocal_24 = 8;
			}
			break;
		case 8:
			if (func_20(&Local_1389, 256) || func_685(Global_35, Local_386.f_4, 0) > 50f)
			{
				if (func_100(Local_1389.f_138, 0))
				{
					func_240(Local_1389.f_138, 1);
				}
				if (func_100(65, 0))
				{
					func_240(65, 1);
				}
				if (func_100(66, 0))
				{
					func_240(66, 1);
				}
				iLocal_24 = 9;
			}
			break;
		case 9:
			break;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_686() || func_687())
	{
		if (iLocal_22 > 2)
		{
			func_187();
			func_87(&uLocal_1790);
			iLocal_22 = 2;
		}
	}
	func_602(iParam1, 65);
	switch (iLocal_22)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			Local_1857.f_78 = 0;
			func_616(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_1789, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					}
					iVar1++;
				}
			}
			func_139(8388608);
			func_253(vLocal_1578[5 /*3*/], (14f / 2f));
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_5(1024);
			iLocal_22 = 2;
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (func_14(&iLocal_1789))
			{
				func_619(iParam0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				}
				func_688("HOME_OBJ01", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_25(Local_1389.f_136, 8192);
				func_691(func_689(), uLocal_1790[1], 1631143573, 0, func_690(1), 0);
				iLocal_22 = 8;
			}
			else
			{
				iLocal_22 = 3;
			}
			break;
		case 3:
			if (func_618(*iParam0, Global_35, 0, 20f, 0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					func_57(Local_1389.f_138, 1, 1);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 1.5f, 10f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_5(1048576);
				func_5(1024);
				uLocal_30 = func_626(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
				func_94(&(Local_1389.f_35), "HMSTD_ASK_3", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_22 = 4;
			}
			break;
		case 4:
			if (!func_50(33554432) && func_353(-3.5f, 1, 0, 0))
			{
				func_615(1, 1);
				func_279(0, 1, 0);
				func_692(0);
				func_74(vLocal_1578[1 /*3*/]);
			}
			if (iLocal_335 == 0)
			{
				switch (iLocal_334)
				{
					case 0:
						func_94(&(Local_1389.f_35), "HMSTD_ASK_RESN", Global_35, *iParam0, 0, 0, 1, 1);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
						}
						MAP::DISPLAY_RADAR(false);
						func_619(&Global_35, 0, *iParam0);
						func_5(65536);
						TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_5(65536);
						func_141(128);
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HMSTD_ASK_RESP", Global_35, *iParam0, 0, 0, 1, 1);
						iLocal_22 = 5;
						break;
					case 1:
						func_141(128);
						func_94(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_9(Local_1389.f_136, 256);
						func_9(Local_1389.f_136, 2);
						func_42(&Local_1389, 128);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
				}
			}
			if (func_278(vLocal_1578[1 /*3*/], 12.5f))
			{
				func_94(&(Local_1389.f_35), "HMSTD_ASK_GUP", Global_35, *iParam0, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 1);
				iLocal_22 = 15;
			}
			break;
		case 5:
			func_619(iParam0, 0, 0);
			func_619(&Global_35, 0, *iParam0);
			if (func_353(-3.5f, 1, 0, 0) && PED::IS_PED_FACING_PED(*iParam0, Global_35, 45f))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
				func_603(Local_1618[1 /*7*/], *iParam0, "father", 1);
				func_603(Local_1618[1 /*7*/], Global_35, "plr", 1);
				func_606(Local_1618[1 /*7*/], (Local_386.f_690[0 /*12*/])->f_8, "MONEY");
				func_611(Local_1618[1 /*7*/], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0));
				func_693(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, func_694()) };
				Local_1674.f_19 = func_695(Local_1674.f_8, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false));
				Local_1674.f_25 = &Local_1618[1 /*7*/];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), func_415(1), 32);
				func_132(&(Local_1674.f_23), 27648);
				func_42(&Local_1389, 65536);
				func_696(&Local_1674, 106);
				func_265(&Local_1549, 4);
				iLocal_22 = 6;
			}
			break;
		case 6:
			func_619(iParam0, 0, 0);
			func_619(&Global_35, 0, *iParam0);
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_629(1048576000, 1028443341, 0, 106);
			if (func_696(&Local_1674, 106))
			{
				func_697(iParam0);
				iLocal_22 = 7;
			}
			break;
		case 7:
			if (func_330(Global_35, &(Local_1618[1 /*7*/]), "plr", -1132719179, 0, 1, 0))
			{
				func_638(&((Local_386.f_690[0 /*12*/])->f_8));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				MAP::DISPLAY_RADAR(true);
				func_25(Local_1389.f_136, 1073741824);
				iLocal_22 = 11;
			}
			break;
		case 8:
			func_619(iParam0, 0, 0);
			if (func_685(iLocal_1789, func_689(), 0) < 8f)
			{
				if (!func_27(524288))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1789, 5f, -1, false);
					func_5(524288);
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_1789) < 2f)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 1000, 0);
						func_284(uLocal_1790[1]);
						if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
						{
							TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(*iParam0, Global_35, 0, 0, -1082130432, -1f, 8, 0f, 0f, 1069547520, 1073741824);
						}
					}
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1789, false);
					func_187();
					iLocal_22 = 9;
				}
			}
			break;
		case 9:
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
			func_619(iParam0, 0, 0);
			if (func_247(*iParam0, 1, 1) < 10f && func_618(*iParam0, Global_35, 0, 10f, 0))
			{
				iLocal_22 = 10;
			}
			break;
		case 10:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
			func_619(iParam0, 0, 0);
			if (func_698(*iParam0, uLocal_1790[0], Global_35, &iLocal_2070, &Local_1857))
			{
				func_284(uLocal_1790[0]);
				func_84(&Local_1389);
				func_25(Local_1389.f_136, 128);
				func_5(8192);
				func_200(Local_1389.f_136, 16384);
				func_699(Local_1389.f_136);
				func_5(512);
				func_42(&Local_1389, 128);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_1789, false);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				func_5(262144);
				iLocal_22 = 11;
			}
			break;
		case 11:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 12;
			}
			break;
		case 12:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 13;
			}
			break;
		case 13:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			iLocal_22 = 14;
			break;
		case 14:
			if (func_353(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 15;
			}
			break;
		case 15:
			if (func_353(0, 1, 0, 0))
			{
				func_139(1048576);
				func_139(8388608);
				func_616(0);
				if (func_100(Local_1389.f_138, 0))
				{
					func_240(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				func_89(&uLocal_30, 1);
				func_284(uLocal_1790[0]);
				iLocal_22 = 16;
			}
			break;
		case 16:
			break;
	}
	return 0;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	vector3 vVar4;
	char[] cVar7[8];
	int iVar8;

	func_686();
	func_687();
	func_700(iParam0);
	func_602(iParam1, 65);
	switch (iLocal_21)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_616(1);
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = &iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = VEHICLE::_0xA8BA0BAE0173457B(iLocal_1789, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					}
					iVar1++;
				}
				if (func_10(Local_1389.f_136, 64))
				{
					func_5(131072);
				}
				else
				{
					func_139(8388608);
					func_253(vLocal_1578[5 /*3*/], (14f / 2f));
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, 0, 1);
					func_603(Local_1618[0 /*7*/], *iParam0, "FATHER", 1);
					StringCopy(&((Local_1618[0 /*7*/])->f_4), "BOOL_intro_idle", 24);
					func_617(Local_1618[0 /*7*/]);
					if (!func_8(Local_1389.f_136, 256))
					{
						POPULATION::_0xB56D41A694E42E86(&(iLocal_1759[4]), 0, 0, 0, -1, -1, 0);
						PED::_0x4C39C95AE5DB1329(&(iLocal_1759[4]), 0, 15);
					}
					func_701(1);
					Jump @3369; //curOff = 459
					if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
					{
						func_5(128);
						func_701(2);
					}
					Jump @3369; //curOff = 496
					if (!func_10(Local_1389.f_136, 4))
					{
						func_200(Local_1389.f_136, 4);
					}
					if (func_618(*iParam0, Global_35, 0, Local_2071.f_12, 0) && Global_36.f_2 < 100f)
					{
						uLocal_30 = func_626(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 660);
						func_619(iParam0, 0, 0);
						func_619(&Global_35, 0, *iParam0);
						func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
						vVar4 = { func_623(Global_35, 1065353216) };
						iVar3 = func_624(*iParam0, vVar4, 0.349f);
						switch (iVar3)
						{
							case 0:
								sVar2 = "PBL_react_F";
								break;
							case 2:
								sVar2 = "PBL_react_R";
								break;
							case 3:
								sVar2 = "PBL_react_L";
								break;
							case 1:
								sVar2 = "PBL_react_B";
								break;
						}
						func_625(Local_1618[0 /*7*/], sVar2);
						func_701(3);
					}
					Jump @3369; //curOff = 790
					func_629(1048576000, 1028443341, 0, 106);
					if (func_627(Local_1618[0 /*7*/]))
					{
						func_628(Local_1618[0 /*7*/], 1, 1);
						func_5(8388608);
						func_5(1024);
						func_94(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
						func_701(4);
					}
					Jump @3369; //curOff = 881
					func_629(1048576000, 1028443341, 0, 106);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1132719179))
					{
						if (func_186(Global_35, &(iLocal_1759[4]), 1, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, Global_36, 1f, -1, 1f, false, 40000f);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, VOLUME::_0xF70F00013A62F866(&(iLocal_1759[4])), 1f, -1, 0.25f, false, 40000f);
						}
						func_683(vLocal_1578[0 /*3*/], 1);
						func_74(vLocal_1578[1 /*3*/]);
						func_701(5);
					}
					Jump @3369; //curOff = 1116
					func_629(1048576000, 1028443341, 0, 106);
					func_619(iParam0, 0, 0);
					func_620(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
					func_702(iParam0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						if (!func_10(Local_1389.f_136, 64))
						{
							if (func_27(16))
							{
								cVar7 = "HMSTD_ASK_WAG";
							}
							else if (func_703())
							{
								cVar7 = "HMSTD_IG3_ASKM";
							}
							else
							{
								cVar7 = "HMSTD_IG3_ASKW";
							}
							func_94(&(Local_1389.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
							func_200(Local_1389.f_136, 64);
						}
						func_634();
						func_701(6);
					}
					Jump @3369; //curOff = 1306
					func_619(iParam0, 0, 0);
					func_702(iParam0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_683(vLocal_1578[0 /*3*/], 1);
						func_74(vLocal_1578[1 /*3*/]);
						func_615(1, 1);
						func_279(0, 1, 0);
						func_704(0);
						func_701(7);
					}
					Jump @3369; //curOff = 1382
					func_619(iParam0, 0, 0);
					if (func_403(vLocal_1578[1 /*3*/]))
					{
						func_702(iParam0);
					}
					if (func_353(-3.5f, 1, 0, 0))
					{
						switch (iLocal_334)
						{
							case 0:
								if (func_27(16))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
									}
									func_619(&Global_35, 0, *iParam0);
									func_94(&(Local_1389.f_35), "HOME_LN03AJA", Global_35, *iParam0, 0, 0, 1, 1);
									func_141(128);
									func_84(&Local_1389);
									func_615(1, 0);
									func_279(0, 1, 1);
									func_701(13);
								}
								else if (func_703())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
									if (func_10(0, 4) && func_24(0) == 1)
									{
										func_200(0, 16);
									}
									func_615(1, 0);
									func_279(0, 1, 1);
									func_701(9);
								}
								break;
							case 2:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
								{
									PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
								}
								MAP::DISPLAY_RADAR(false);
								func_619(&Global_35, 0, *iParam0);
								func_5(65536);
								func_141(128);
								TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
								func_615(1, 0);
								func_279(0, 1, 1);
								func_701(11);
								break;
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
								{
									PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
								}
								func_141(128);
								func_615(1, 0);
								func_279(0, 0, 1);
								func_284(uLocal_1790[0]);
								func_701(18);
								break;
						}
						if (func_247(*iParam0, 1, 1) > 18f)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							func_701(18);
						}
						if (func_278(vLocal_1578[1 /*3*/], (7.5f + 5.5f)))
						{
							func_701(8);
						}
						else if (func_358(vLocal_1578[0 /*3*/], (7.5f + 5.5f)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							func_701(18);
						}
					}
					Jump @3369; //curOff = 1975
					WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar8, true, 0, false);
					if (iVar8 == joaat("weapon_unarmed"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
						}
						func_619(&Global_35, 0, *iParam0);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_PWOOD", Global_35, *iParam0, 0, 0, 1, 1);
						func_25(Local_1389.f_136, 256);
						func_88(&Local_1389);
						func_74(vLocal_1578[0 /*3*/]);
						func_701(10);
					}
					Jump @3369; //curOff = 2091
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (PED::IS_PED_FACING_PED(*iParam0, Global_35, 45f))
					{
						TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
						func_603(Local_1618[1 /*7*/], *iParam0, "father", 1);
						func_603(Local_1618[1 /*7*/], Global_35, "plr", 1);
						func_606(Local_1618[1 /*7*/], (Local_386.f_690[0 /*12*/])->f_8, "MONEY");
						func_611(Local_1618[1 /*7*/], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0));
						func_693(&Local_1674);
						Local_1674.f_1 = Global_35;
						Local_1674.f_8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, func_694()) };
						Local_1674.f_19 = func_695(Local_1674.f_8, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false));
						Local_1674.f_25 = &Local_1618[1 /*7*/];
						StringCopy(&(Local_1674.f_30), "plr", 24);
						StringCopy(&(Local_1674.f_26), func_415(1), 32);
						func_132(&(Local_1674.f_23), 27648);
						func_42(&Local_1389, 65536);
						func_696(&Local_1674, 106);
						func_265(&Local_1549, 4);
						func_701(12);
					}
					Jump @3369; //curOff = 2376
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (func_27(2097152) || func_696(&Local_1674, 106))
					{
						func_701(14);
					}
					Jump @3369; //curOff = 2430
					func_88(&Local_1389);
					if (iLocal_334 == 1)
					{
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_NEG", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_94(&(Local_1389.f_35), "HMSTD_IG3_WALKS", *iParam0, Global_35, 0, 0, 1, 1);
					}
					func_701(19);
					Jump @3369; //curOff = 2511
					func_619(iParam0, 0, 0);
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_49(2048);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_94(&(Local_1389.f_35), "HMSTD_IG3_NEAR", *iParam0, Global_35, 0, 0, 1, 1);
						func_74(vLocal_1578[0 /*3*/]);
						func_701(7);
					}
					Jump @3369; //curOff = 2609
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if ((func_353(-3.5f, 1, Global_35, 1) && func_353(-3.5f, 1, *iParam0, 1)) && func_358(vLocal_1578[0 /*3*/], 6f))
					{
						func_262(vLocal_1578[0 /*3*/]);
						func_42(&Local_1389, 128);
						func_101(0);
						func_5(2097152);
						func_25(Local_1389.f_136, 2);
						func_200(Local_1389.f_136, 512);
						func_465(11, 1);
						func_284(uLocal_1790[0]);
						func_701(19);
					}
					Jump @3369; //curOff = 2760
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 1000, 0);
						VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_1789, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1789, false);
					}
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_101(0);
						func_5(2097152);
						if (!func_100(Local_1389.f_138, 0))
						{
							func_57(Local_1389.f_138, 1, 1);
						}
						func_284(uLocal_1790[0]);
						func_200(Local_1389.f_136, 16384);
						func_5(512);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
						func_5(262144);
						func_25(Local_1389.f_136, 128);
						func_5(8192);
						func_42(&Local_1389, 128);
						func_94(&(Local_1389.f_35), "HOME_WLCMB", Global_35, *iParam0, 0, 0, 1, 1);
						func_701(19);
					}
					Jump @3369; //curOff = 2956
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_629(1048576000, 1028443341, 0, 106);
					if (func_696(&Local_1674, 106))
					{
						func_697(iParam0);
						func_701(16);
					}
					Jump @3369; //curOff = 3046
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_619(iParam0, 0, 0);
					func_619(&Global_35, 0, *iParam0);
					if (func_330(Global_35, &(Local_1618[1 /*7*/]), "plr", -1132719179, 0, 1, 0))
					{
						func_638(&((Local_386.f_690[0 /*12*/])->f_8));
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
						MAP::DISPLAY_RADAR(true);
						func_284(uLocal_1790[0]);
						func_25(Local_1389.f_136, 1073741824);
						func_701(17);
					}
					Jump @3369; //curOff = 3198
					func_619(iParam0, 0, 0);
					if (!func_100(Local_1389.f_138, 0))
					{
						func_57(Local_1389.f_138, 1, 1);
					}
					func_701(19);
					Jump @3369; //curOff = 3241
					if (func_353(0, 1, 0, 0))
					{
						if (func_8(Local_1389.f_136, 2))
						{
							if (func_100(Local_1389.f_138, 0))
							{
								func_240(Local_1389.f_138, 1);
							}
						}
						func_616(0);
						func_284(uLocal_1790[0]);
						func_615(0, 0);
						func_279(0, 1, 0);
						func_89(&uLocal_30, 1);
						func_139(8388608);
						func_701(20);
					}
					Jump @3369; //curOff = 3340
					if (func_100(Local_1389.f_138, 0))
					{
						func_240(Local_1389.f_138, 1);
					}
				}
				return 0;
			}
		}

int func_376(int iParam0)
{
	if (func_417())
	{
		return func_705(iParam0);
	}
	return func_706(iParam0);
}

int func_377(int iParam0)
{
	switch (iLocal_23)
	{
		case 0:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0])))
			{
				TASK::TASK_STAND_STILL(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *iParam0, &(iLocal_1794[0]), 0);
				PHYSICS::_0x06AADE17334F7A40(&(iLocal_1794[0]), func_708());
				PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[0]), 178, true);
				PED::_0x931B241409216C1F(*iParam0, &(iLocal_1794[0]), 0);
			}
			func_589(0);
			func_279(0, 1, 1);
			iLocal_23 = 3;
			break;
		case 3:
			if (func_370(iParam0, 1, 0))
			{
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_709(iParam0))
			{
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(iParam0))
			{
				func_42(&Local_1389, 512);
				func_200(Local_1389.f_136, 256);
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				_NAMESPACE48::_0xB65E7F733956CF25(_NAMESPACE48::_0x112DDF56300BC6E5(func_157(Local_1389.f_138)));
				func_711(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				func_712(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_378(var uParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
	{
		if (func_713(*uParam0) != 0)
		{
			iVar0 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar0))
			{
				MAP::REMOVE_BLIP(&iVar0);
			}
			TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 3f, 0);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
		}
	}
}

int func_379(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (!func_186(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return 1;
	}
	if (func_127(Global_1898092->f_26.f_2) && func_8(Global_1898092->f_26.f_2, 33554432))
	{
		return 1;
	}
	return 0;
}

void func_380(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_381()
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

int func_382(int iParam0)
{
	if (!func_385(iParam0))
	{
		return -1;
	}
	return func_715(func_714(iParam0));
}

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_384(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_385(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_386(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_387(int iParam0)
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

int func_388(int iParam0)
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

void func_389(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - (Global_40.f_9096[iParam0 /*12*/])->f_3);
	*uParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*uParam2 * 86400));
	*uParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *uParam3 * 3600);
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

int func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bLostLogs") && DECORATOR::DECOR_GET_BOOL(*iParam0, "bLostLogs"))
	{
		return 0;
	}
	if (!PROPSET::_0x53784CEA0159439B(*iParam0))
	{
		return 0;
	}
	iVar0 = PROPSET::_0xCE2ACD6F602803E5(*iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, -396171861, false, false) < 1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return 0;
	}
	iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar1)));
	ITEMSET::DESTROY_ITEMSET(iVar1);
	fVar3 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iVar2, true);
	if (fVar3 < 0.7f)
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bLostLogs", true);
		func_716(459, 1);
		return 0;
	}
	return 1;
}

int func_391(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_225(vParam0))
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
		if (func_717(vParam0))
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
	func_718(iVar0, bParam8);
	return iVar0;
}

bool func_392(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_393(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_394(int iParam0)
{
	if (!func_393(iParam0))
	{
		return 0;
	}
	return func_129(iParam0, 33554432);
}

int func_395(int iParam0)
{
	if (!func_393(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_397(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_132(uParam0, 268435456);
	}
	else
	{
		func_185(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_132(uParam0, 1073741824);
	}
	else
	{
		func_185(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_132(uParam0, 536870912);
	}
	else
	{
		func_185(uParam0, 536870912);
	}
}

void func_398(var uParam0, var uParam1)
{
	uParam0->f_27 = uParam1;
}

void func_399(int iParam0, int iParam1)
{
	if (func_392(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

int func_400(char* sParam0, bool bParam1)
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

void func_401(int iParam0)
{
	func_133(&iLocal_17, iParam0);
}

bool func_402(int iParam0)
{
	return func_154(iLocal_17, iParam0);
}

bool func_403(var uParam0)
{
	return func_719(*uParam0, 1);
}

bool func_404()
{
	return func_720(&Global_1935630, 4096);
}

int func_405()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || _NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_721(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_722())
	{
		return func_721(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_721(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_407(int iParam0)
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_322(func_723(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_723(iVar0), func_724(), 1))
			{
				func_725(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_408(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[uParam0->f_136 /*10*/])->f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(((*Global_1392194)[uParam0->f_136 /*10*/])->f_6);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[uParam0->f_136 /*10*/])->f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(((*Global_1392194)[uParam0->f_136 /*10*/])->f_5);
	}
}

void func_409(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

bool func_410(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_411(int iParam0)
{
	if (((func_412(iParam0, 1) && func_412(iParam0, 2)) && func_412(iParam0, 8)) && func_412(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_412(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_413(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

void func_414(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_10(Local_1389.f_136, 128))
			{
				if (func_21(64))
				{
					return "PBL_sitting_action";
				}
				else
				{
					return "PBL_intro_idle";
				}
			}
			else
			{
				switch (iLocal_18)
				{
					case 1:
						return "PBL_BASE";
					case 4:
						return "PBL_get_money";
					case 3:
						return "PBL_intro_idle";
					default:
						break;
				}
			}
			break;
		case 2:
			return "PBL_ENTER";
	}
	return "";
}

void func_416(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_726(uParam0, sParam1, sParam2, iParam3);
	func_727(uParam0);
}

bool func_417()
{
	return func_8(Local_1389.f_136, 128);
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				case 2:
					return 15;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 17;
				case 2:
					return 18;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 19;
				case 1:
					return 20;
				case 2:
					return 21;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.1f, 97.87f;
						case 1:
							return -440.09f, 502.1f, 98.1f;
						case 2:
							return -440.1f, 502.1f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.06f, 97.87f;
						case 1:
							return -440.09f, 502.06f, 98.1f;
						case 2:
							return -440.1f, 502.06f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -436.71f, 501.08f, 97.87f;
						case 1:
							return -436.71f, 501.08f, 98.1f;
						case 2:
							return -436.71f, 501.08f, 98.32f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -438.7f, 502.13f, 97.87f;
						case 1:
							return -438.7f, 502.13f, 98.1f;
						case 2:
							return -438.71f, 502.13f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -438.69f, 502.09f, 97.87f;
						case 1:
							return -438.69f, 502.09f, 98.1f;
						case 2:
							return -438.7f, 502.09f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -443.87f, 493.97f, 97.99f;
						case 1:
							return -443.87f, 493.98f, 98.23f;
						case 2:
							return -443.87f, 493.97f, 98.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return -431.66f, 499.88f, 98.03f;
						case 1:
							return -431.66f, 499.89f, 98.27f;
						case 2:
							return -431.67f, 499.89f, 98.49f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -433.83f, 499.98f, 98.8f;
						case 1:
							return -433.83f, 499.98f, 99.04f;
						case 2:
							return -433.83f, 499.97f, 99.26f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -89.58f;
						case 1:
							return 9.08f, 0f, -89.58f;
						case 2:
							return 9.08f, 0f, -89.58f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.49f;
						case 1:
							return 9.08f, 0f, -179.49f;
						case 2:
							return 9.08f, 0f, -179.49f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -87.81f;
						case 1:
							return 9.08f, 0f, -87.81f;
						case 2:
							return 9.08f, 0f, -87.81f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.57f;
						case 1:
							return 9.08f, 0f, -179.57f;
						case 2:
							return 9.08f, 0f, -179.57f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_421()
{
	return -439.4036f, 502.0066f, 99.1947f;
}

float func_422()
{
	return 1.43f;
}

Vector3 func_423()
{
	return -439.43f, 503.22f, 97.54f;
}

Vector3 func_424()
{
	return -107.43f, 0.07f, 1.43f;
}

int func_425(var uParam0)
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

Vector3 func_426()
{
	return -443.438f, 498.2621f, 98.18685f;
}

void func_427(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_428(var uParam0)
{
	if (!func_429(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_429(uParam0->f_12))
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

int func_429(int iParam0)
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

int func_430(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_728(&uParam1))
	{
		return 1;
	}
	if (!func_729(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_431(var uParam0)
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

int func_432(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_730(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_433(int iParam0)
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

bool func_434(var uParam0)
{
	return func_154(*uParam0, 4);
}

bool func_435(var uParam0)
{
	return func_154(*uParam0, 64);
}

bool func_436(var uParam0)
{
	return func_154(*uParam0, 8);
}

bool func_437(var uParam0)
{
	return func_154(*uParam0, 128);
}

bool func_438(var uParam0)
{
	return func_154(*uParam0, 2048);
}

void func_439(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_440(var uParam0)
{
	return func_154(*uParam0, 1024);
}

bool func_441(var uParam0)
{
	return func_154(*uParam0, 256);
}

void func_442(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_443(var uParam0)
{
	return func_154(*uParam0, 512);
}

bool func_444(var uParam0)
{
	return func_154(*uParam0, 4096);
}

void func_445(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_446(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_447(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if ((func_55(iParam0, 1) && !func_302(iParam0)) && func_731(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_119(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_448(int iParam0)
{
	if (!func_99(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_449(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_729(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_450(float fParam0)
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

bool func_451(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
}

int func_452(var uParam0)
{
	return uParam0;
}

int func_453(int iParam0)
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

void func_454(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_99(iParam0))
	{
		return;
	}
	if (!func_55(iParam0, 1))
	{
		return;
	}
	if (!func_55(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_302(iParam0)) && func_731(iParam0))
	{
		return;
	}
	func_31(iParam0, 1);
	func_732(iParam0);
	if (func_158(func_157(iParam0)))
	{
		iVar0 = func_159(iParam0);
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
		func_31(iParam0, 16);
	}
	if (func_55(iParam0, 128) && !bParam3)
	{
		func_711(iParam0, 0);
	}
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1077541120;
		case 1:
			return -1514157174;
		case 2:
			return -1379967731;
		default:
			break;
	}
	return 0;
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076;
		case 1:
			return 1776245965;
		case 2:
			return -228594924;
		default:
			break;
	}
	return 0;
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063;
		case 1:
			return 111316232;
		case 2:
			return -96966750;
		default:
			break;
	}
	return 0;
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1904459580;
		case 1:
			return -1989725258;
		case 2:
			return -487631996;
		default:
			break;
	}
	return 0;
}

int func_459()
{
	return 676312963;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_461()
{
	return -886879462;
}

char* func_462(int iParam0)
{
	if (!func_127(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

var func_463(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = -1234289408;
	}
	if (iParam3 == -1)
	{
		iParam3 = 1531758713;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = 138119161;
	}
	if (!bParam14)
	{
		return func_733(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_734(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_464(int iParam0)
{
	return func_8(iParam0, 1);
}

void func_465(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_735(128))
	{
		return;
	}
	if (!func_736(iParam0))
	{
		return;
	}
	if (func_129(iParam0, 32))
	{
		return;
	}
	func_130(iParam0, 32);
	func_480(Global_1935630, 8192);
	func_738(func_737(-1532769513, -36357794), 1);
	switch (func_739(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_738(func_737(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_738(func_737(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_738(func_737(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_738(func_737(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_738(func_737(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_738(func_737(-1532769513, -910218296), 1);
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
		func_130(iParam0, 64);
	}
}

void func_466(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_740(iParam0);
	if (iVar0 != 0 && func_8(iParam0, 1))
	{
		vVar1 = { func_741(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_24(iParam0);
		}
		func_742(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_8(iParam0, 67108864))
		{
			MAP::_0xE057FEA9A22EB3EE(iVar0);
		}
		MAP::_0x1392105DA88BBFFB(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_25(iParam0, 67108864);
	}
}

float func_467()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_470(var uParam0)
{
	if (!func_403(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_544(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_4() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_471(bool bParam0, var uParam1, var uParam2)
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

void func_472(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 134217728);
	}
	else
	{
		func_185(uParam0, 134217728);
	}
}

int func_473(var uParam0, var uParam1)
{
	if (!PED::IS_PED_FLEEING(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_474(var uParam0)
{
	if (((uParam0->f_16 == 3 || uParam0->f_16 == 1) || uParam0->f_16 == 6) || uParam0->f_16 == 5)
	{
		return 1;
	}
	return 0;
}

float func_475(var uParam0)
{
	switch (uParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

int func_476(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;

	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(uParam1);
	iVar41 = func_743(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return 0;
	}
	iVar42 = func_744(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return 0;
	}
	*uParam0 = &iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(&(iVar0[iVar42]), Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_744(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return 1;
}

char* func_477(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_478(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_745(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

void func_479(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_480(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_481(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = func_746(iParam0, 4, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		*uParam1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		return 1;
	}
	iVar1 = func_746(iParam0, 5, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		return 1;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
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

void func_483(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_262(&(iParam0->f_18));
}

void func_484(int iParam0, int iParam1)
{
	func_747(iParam0, 0, iParam1);
	func_747(iParam0, 1, iParam1);
	func_747(iParam0, 2, iParam1);
}

void func_485(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_486(int* iParam0, var uParam1)
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
	func_748(iParam0, uParam1, 1);
	func_576(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_487(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_749(iParam0, iParam1, bParam2);
}

int func_488(int iParam0)
{
	return iParam0;
}

void func_489(int iParam0)
{
	if (!func_750(iParam0))
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

int func_490()
{
	switch (func_1())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

int func_491(int iParam0, int iParam1)
{
	if (func_751(iParam0, 1, 1))
	{
		return func_154(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return 0;
}

void func_492(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_493()
{
	return (Global_1894899 & 1 != 0 && func_752() != -1);
}

int func_494(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_495(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
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
	return func_753(iParam0, &Var0);
}

int func_496(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_497(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = (Global_40.f_9096[iParam0 /*12*/])->f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

void func_498(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 64);
	}
	else
	{
		func_185(uParam0, 64);
	}
}

void func_499(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_132(uParam0, 1048576);
	}
	else
	{
		func_185(uParam0, 1048576);
	}
}

int func_500(int iParam0, var uParam1, int iParam2, bool bParam3)
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
		if (func_157(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_159(iVar2)))
		{
			if (func_159(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_501(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_502(int iParam0)
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

void func_503(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_755(iParam0, 32);
	func_756();
}

void func_504(int iParam0)
{
	int iVar0;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_505(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_507(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_507(iParam0);
	}
}

int func_505(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_506(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_507(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_508(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return 1;
	}
	return 0;
}

void func_509(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1);
}

void func_510(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_508(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, bParam2);
}

void func_511(var uParam0, float fParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam0, fParam1);
}

void func_512(var uParam0, char* sParam1)
{
	func_758(uParam0, sParam1, 1);
}

int func_513(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_624(iParam0, vVar0, fParam2);
}

char* func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_KNEEL";
				case 3:
					return "PBL_BRKOUT_BL_KNEEL";
				case 2:
					return "PBL_BRKOUT_BR_KNEEL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_01";
				case 3:
					return "PBL_BRKOUT_BL_STAND_01";
				case 2:
					return "PBL_BRKOUT_BR_STAND_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_02";
				case 3:
					return "PBL_BRKOUT_BL_STAND_02";
				case 2:
					return "PBL_BRKOUT_BR_STAND_02";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_515(var uParam0, bool bParam1, int iParam2)
{
	func_759(iParam2);
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
		uParam0->f_13 = func_760(0);
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
							func_132(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_761(1))
						{
							func_132(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_761(1) || *uParam0 & 8192 != 0))
				{
					func_185(uParam0, 33554432);
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
			if (func_762(uParam0))
			{
				uParam0->f_15 = func_4();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_4() - uParam0->f_15) > 500)
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
	func_763(uParam0);
}

int func_516(int iParam0, var uParam1)
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
			if (!func_764(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_765(iParam0, iVar2) <= func_766(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_517(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_767(iParam2, 1, 1, 1, 0))
	{
		func_132(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_472(uParam1, 1);
	func_283();
}

int func_518(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_355(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_768(uParam1);
			if (func_769(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_770(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_472(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_472(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_519(int iParam0, int iParam1, var uParam2)
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
	if (func_771(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_768(uParam2);
		if (func_769(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_770(uParam2)
				{
					func_472(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_520(int iParam0, var uParam1)
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
	if (func_764(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_770(uParam1)
		{
			fVar3 = func_768(uParam1);
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

int func_521(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_522(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_772(uParam2);
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
			if (func_530(uParam2, iParam1))
			{
				func_472(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_523(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_773(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_530(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_472(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_524(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_774(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_472(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_472(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_775(iParam1, vVar0, vVar4))
					{
						func_472(uParam2, 1);
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
					func_472(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_775(iParam1, vVar0, vVar7))
					{
						func_472(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_525(int iParam0, var uParam1)
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
		if (!func_764(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_776(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_777(&(Global_1935630->f_34[iVar0])))
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
			if (func_778(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_779(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_780(uParam1, iParam0, fVar1, iVar0))
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

int func_526(int iParam0, var uParam1)
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

int func_527(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_781(iVar0, &iVar2))
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
	if (func_782(iVar0, iParam0))
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

int func_529(var uParam0, int iParam1)
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

int func_530(var uParam0, int iParam1)
{
	if (func_783(uParam0))
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

int func_531(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_292(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_532()
{
}

int func_533(var uParam0, int iParam1)
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
		if (func_784(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_4();
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
						if (func_685(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_4();
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

int func_534()
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
	if ((func_4() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_535(var uParam0, int iParam1)
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
	fVar0 = func_766(uParam0);
	if (uParam0->f_12 > func_785(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_786(iParam1);
	iVar1 = func_787(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_536(int iParam0, int iParam1, var uParam2)
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
	return func_788(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_537(int iParam0, var uParam1)
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
		if (func_789(iParam0, uParam1, 1))
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
					if (!func_790(uParam1, iParam0))
					{
						if (func_685(iVar4, Global_36, 1) < 7f)
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

int func_538(int iParam0, var uParam1)
{
	if (!func_791(0))
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

int func_539(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_4();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_540(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_541(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_4();
	}
	else if (func_4() - uParam1->f_4) > func_792(uParam1)
	{
		return func_277(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_542(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_793(uParam1);
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
		fVar2 = func_794(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_795())
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

int func_543(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_595(iParam0))
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

bool func_544(var uParam0)
{
	return func_719(*uParam0, 2);
}

void func_545(var uParam0)
{
	if (!func_403(uParam0))
	{
	}
	if (func_544(uParam0))
	{
		uParam0->f_1 = (func_467() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_469(uParam0, 2);
	}
}

void func_546(var uParam0)
{
	if (!func_403(uParam0))
	{
	}
	if (!func_544(uParam0))
	{
		uParam0->f_2 = (func_467() - uParam0->f_1);
		func_468(uParam0, 2);
	}
}

int func_547(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_796(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_797((375 + iVar28), 1);
			if (func_798(bParam0, &Var0, iVar5, 0))
			{
				if (func_799(bParam0, &Var6, iVar5))
				{
					Var29 = { func_800(bParam0, Var0, iVar5, 0) };
					func_801(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_802(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_803(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_804(bParam0, iParam1);
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

void func_548(int iParam0, int iParam1, float fParam2)
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

bool func_549(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_550(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
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

bool func_551(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_552(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_553(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

var func_554(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_496(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_555(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_556(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_557(int iParam0, int iParam1)
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

void func_558(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_805(uParam0, iParam6);
	func_806(uParam0, iParam5);
	func_807(uParam0, iParam4);
	func_808(uParam0, iParam3);
	func_809(uParam0, iParam2);
	func_810(uParam0, iParam1);
}

bool func_559(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_337(iParam1) || !func_337(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_560(int iParam0, int iParam1, int iParam2)
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

var func_561(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_811(&iVar0);
	if (func_147(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_812(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_147(iVar0, 134217728))
	{
		func_813(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_814(558))
				{
					func_716(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

char* func_562(int iParam0)
{
	if (func_815(iParam0))
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

void func_563(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_285(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_816(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_817(iParam0->f_6, iParam0->f_5, 0);
			}
			func_818(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_819(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_564(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_820(iParam0, 13))
	{
		func_821(iParam0, 0);
	}
	else
	{
		func_822(iParam0, 0);
	}
	if (func_285(iParam0->f_6))
	{
		if (bParam2)
		{
			func_286(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_565(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_820(iParam0, 4))
		{
			func_286(&(iParam0->f_6), 1, 1);
			func_821(iParam0, 4);
		}
	}
	else if (func_820(iParam0, 4))
	{
		func_822(iParam0, 4);
		func_821(iParam0, 14);
	}
}

void func_566(int iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_567(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_821((*uParam0)[iVar0 /*17*/], 9);
		iVar0++;
	}
}

char* func_568(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	switch (iParam0->f_15)
	{
		case 0:
			if (func_121(iParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_121(iParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (iParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					MISC::_INT_TO_STRING(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return func_571(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_569(int iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_121(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_121(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

float func_570(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_571(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_572(int iParam0, int iParam1)
{
	if (func_110(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_573(float fParam0)
{
	if (func_588(1))
	{
		return 1;
	}
	if (func_403(&uLocal_0) && !func_278(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

var func_574(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_575(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_823(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_576(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_285(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_286(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

char* func_577()
{
	return "HMSTD_LOITER";
}

void func_578(char* sParam0, int iParam1, int iParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, iParam1, iParam2);
}

void func_579()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == 0)
		{
		}
		else if (!func_21(func_824(iVar1)))
		{
			if (func_21(1024))
			{
				if (func_21(func_825(iVar1)))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_1768[iVar1]), 3, 2, 1);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_1768[iVar1]), 4, 2, 1);
				}
				else
				{
					func_279(iVar1, 0, 0);
				}
				func_141(func_824(iVar1));
			}
		}
		else if (!func_21(1024))
		{
			if (func_21(func_825(iVar1)))
			{
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_1768[iVar1]), 3, 2, 0);
				iVar0 = 0;
				if (DECORATOR::DECOR_EXIST_ON(&(iLocal_1768[iVar1]), "interactNeg"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(&(iLocal_1768[iVar1]), "interactNeg");
				}
				if (iVar0 >= 3)
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_1768[iVar1]), 4, 2, 1);
				}
				else
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_1768[iVar1]), 4, 2, 0);
				}
			}
			else
			{
				func_589(iVar1);
			}
			func_142(func_824(iVar1));
		}
		iVar1++;
	}
}

void func_580(int iParam0, bool bParam1)
{
	if (!func_21(func_825(iParam0)))
	{
		if (func_21(func_587(iParam0)))
		{
			if (func_584(iParam0, bParam1))
			{
				func_827(&(iLocal_1768[iParam0]), func_826(iParam0), func_825(iParam0), Local_40[iParam0 /*21*/], Local_125[iParam0 /*52*/], 1, 980351091);
			}
		}
	}
}

float func_581(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_582(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_583(char* sParam0, int iParam1)
{
	func_578(sParam0, iParam1, 0);
}

int func_584(int iParam0, bool bParam1)
{
	if (!func_353(0, 1, &(iLocal_1768[iParam0]), 1))
	{
		return 0;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(&(iLocal_1768[iParam0])))
	{
		return 0;
	}
	if (func_354(func_585(iParam0, bParam1)))
	{
		return 0;
	}
	if (func_354(func_586(iParam0, bParam1)))
	{
		return 0;
	}
	return 1;
}

char* func_585(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_POS1";
				case 2:
					return "HMSTD_S1_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_POS3A";
					}
					else
					{
						return "HMSTD_S1_POS3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_POS1";
				case 2:
					return "HMSTD_S2_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_POS3A";
					}
					else
					{
						return "HMSTD_S2_POS3B";
					}
					break;
			}
			break;
	}
	return "";
}

char* func_586(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_NEG1";
				case 2:
					return "HMSTD_S1_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_NEG3A";
					}
					else
					{
						return "HMSTD_S1_NEG3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_NEG1";
				case 2:
					return "HMSTD_S2_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_NEG3A";
					}
					else
					{
						return "HMSTD_S2_NEG3B";
					}
					break;
			}
			break;
	}
	return "";
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 524288;
		case 2:
			return 1048576;
		default:
			break;
	}
	return 0;
}

bool func_588(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_589(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_590(var uParam0)
{
	uParam0->f_135 = "";
	uParam0->f_5 = "";
	func_49(8192);
}

char* func_591()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_IG1DADb";
		case 2:
			if (!func_592(&iLocal_1794))
			{
				return "HOME_ATAKILO";
			}
			else if (func_27(8))
			{
				return "HOME_BYE_2B";
			}
			else
			{
				return "HOME_BYE_2A";
			}
			break;
		case 3:
			if (func_8(Local_1389.f_136, 128))
			{
				return "HOME_BYE_3B";
			}
			else if (func_8(Local_1389.f_136, 256))
			{
				return "HOME_BYE_3AY";
			}
			else
			{
				return "HOME_BYE_3AN";
			}
			break;
		case 4:
			return "HOME_BYE_4";
	}
	return "";
}

int func_592(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]))
		{
			if (ENTITY::_0x61914209C36EFDDB(iParam0[iVar0]) == 0)
			{
				if (!PED::IS_PED_FLEEING(iParam0[iVar0]))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_593()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_1_NEG_ILO";
		case 2:
			return "HOME2_NEG_ILO";
		case 3:
			return "HMSTD_S3_ILOANT";
		case 4:
			return "HMSTD_4_NEG_ILO";
	}
	return "";
}

int func_594()
{
	if (func_27(2))
	{
		return 1;
	}
	switch (iLocal_18)
	{
		case 3:
			if (func_8(Local_1389.f_136, 2))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_595(int iParam0)
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

char* func_596()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S1_AMB1";
		case 2:
			return "HMSTD_S1_AMB2";
		case 3:
			if (!func_27(8))
			{
				if (!func_27(8192))
				{
					if (!func_27(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S1_DIR";
					}
					else
					{
						return "HMSTD_S1_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S1_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S1_AMB3B";
			}
			break;
	}
	return "HMSTD_S1_AMB1";
}

char* func_597()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S2_AMB1";
		case 2:
			return "HMSTD_S2_AMB2";
		case 3:
			if (!func_27(8))
			{
				if (!func_27(8192))
				{
					if (!func_27(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S2_DIR";
					}
					else
					{
						return "HMSTD_S2_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S2_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S2_AMB3B";
			}
			break;
	}
	return "HMSTD_S2_AMB1";
}

void func_598()
{
	int iVar0;

	if (!func_831(1986792065))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
		iLocal_1855 = func_832(1986792065, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
	}
	iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1986792065);
	if (iVar0 == 0 || iVar0 == -1)
	{
		if (func_833(iLocal_1855))
		{
			func_712(1986792065, 1);
		}
	}
	else if (func_15(64))
	{
		func_599(1986792065, 0, 1);
	}
}

void func_599(int iParam0, int iParam1, int iParam2)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

int func_600(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (func_20(uParam2, 2))
	{
		func_200(iParam0, 4);
		return 1;
	}
	if (func_836(uParam1->f_4, 1) < fParam3)
	{
		func_200(iParam0, 4);
		return 1;
	}
	return 0;
}

void func_601(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	float fVar0;

	if (func_27(524288))
	{
		return;
	}
	if (func_27(131072))
	{
		fVar0 = fParam0;
	}
	else if (func_15(16))
	{
		fVar0 = fParam1;
	}
	else
	{
		fVar0 = fParam2;
	}
	if (func_837(fVar0, bParam3))
	{
		if (func_838(64))
		{
			func_454(64, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1 /*3*/]);
		}
		else if (func_838(65))
		{
			func_454(65, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1 /*3*/]);
		}
		else if (func_838(66))
		{
			func_454(66, 0, 1, 0, 0);
			func_5(131072);
			func_74(vLocal_1578[1 /*3*/]);
		}
		else
		{
			func_5(524288);
		}
	}
}

int func_602(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	bVar0 = ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, 1824589780);
	func_839(uParam0, iParam1);
	switch (iLocal_27)
	{
		case 1:
			if (func_451(Local_1618[2 /*7*/]))
			{
				if (!func_100(iParam1, 0))
				{
					func_57(iParam1, 1, 1);
				}
				iLocal_1643 = func_840();
				if (iLocal_1643 < 0)
				{
					func_841(10);
					iLocal_28 = 11;
					return 0;
				}
				func_43(131072);
				func_842(&vVar1, &vVar4, iLocal_1643);
				func_611(Local_1618[2 /*7*/], vVar1, vVar4);
				if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[7])))
				{
					iLocal_1759[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar1, vVar4, 2f, 2f, 5f, "EA CAS - volHammer");
					POPULATION::_0xB56D41A694E42E86(&(iLocal_1759[7]), 524288, 0, 0, -1, -1, 2);
				}
				func_603(Local_1618[2 /*7*/], *uParam0, "Son", 1);
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[2 /*12*/])->f_8, "HAMMER");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[4 /*12*/])->f_8, "plank01");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[5 /*12*/])->f_8, "plank02");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[6 /*12*/])->f_8, "plank04");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[7 /*12*/])->f_8, "plank03");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[8 /*12*/])->f_8, "plank05");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[9 /*12*/])->f_8, "nail01");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[10 /*12*/])->f_8, "nail02");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[11 /*12*/])->f_8, "nail03");
				func_606(Local_1618[2 /*7*/], (Local_386.f_690[12 /*12*/])->f_8, "nail04");
				func_843();
			}
			break;
		case 2:
			if (!func_308(Local_1618[2 /*7*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, 0, 1);
				func_617(Local_1618[2 /*7*/]);
				iLocal_29 = 0;
				func_844(0);
			}
			break;
		case 3:
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[4 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 0));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[4 /*12*/])->f_8, true);
			}
			break;
		case 5:
			iLocal_29 = 1;
			func_844(1);
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[4 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 0));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[4 /*12*/])->f_8, true);
			}
			break;
		case 6:
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[5 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 1));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[5 /*12*/])->f_8, true);
			}
			break;
		case 8:
			iLocal_29 = 2;
			func_844(2);
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[5 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 1));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[5 /*12*/])->f_8, true);
			}
			break;
		case 9:
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[6 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 2));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[6 /*12*/])->f_8, true);
			}
			break;
		case 10:
			if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[6 /*12*/])->f_8))
			{
				func_133(&((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6), func_198(iLocal_1643, 2));
				ENTITY::FREEZE_ENTITY_POSITION((Local_386.f_690[6 /*12*/])->f_8, true);
			}
			if (iLocal_1643 < 0 || func_330(*uParam0, &(Local_1618[2 /*7*/]), "Son", 0, 0, 1, 0))
			{
				func_638(&((Local_386.f_690[2 /*12*/])->f_8));
				func_638(&((Local_386.f_690[9 /*12*/])->f_8));
				func_638(&((Local_386.f_690[10 /*12*/])->f_8));
				func_638(&((Local_386.f_690[11 /*12*/])->f_8));
				func_638(&((Local_386.f_690[12 /*12*/])->f_8));
				if (func_100(iParam1, 0))
				{
					func_454(iParam1, 0, 1, 0, 0);
				}
				func_83(&(iLocal_1759[7]));
				func_843();
				func_49(131072);
			}
			break;
		case 0:
			func_845(uParam0, 0, 0, 1, 0, 0, 0, 1);
			if (bVar0)
			{
				func_589(func_846(iParam1));
			}
			break;
	}
	if (iLocal_27 < 10)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_847(iLocal_28)) && !func_508(Local_1618[2 /*7*/], func_847(iLocal_28)))
		{
			func_625(Local_1618[2 /*7*/], func_847(iLocal_28));
		}
		else if (bVar0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_847(iLocal_28)))
			{
				func_628(Local_1618[2 /*7*/], 0, 1);
			}
			func_843();
		}
	}
	func_848(uParam0, iParam1);
	return 0;
}

void func_603(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

int func_604()
{
	return -2118813809;
}

int func_605()
{
	return -153075883;
}

void func_606(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_757(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

int func_607()
{
	return -22664287;
}

int func_608()
{
	return 372732665;
}

Vector3 func_609()
{
	return -425.889f, 499.089f, 97.164f;
}

Vector3 func_610()
{
	return 0f, 0f, -119.391f;
}

void func_611(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam4, 2);
}

int func_612()
{
	return -491224884;
}

int func_613()
{
	return 753163213;
}

void func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_615(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_43(67108864);
		func_53(33554432, bParam1);
		func_849(0, 20f);
	}
	else
	{
		func_49(67108864);
		func_49(33554432);
		func_849(0, -1082130432);
	}
}

void func_616(bool bParam0)
{
	if (bParam0 != func_21(1024))
	{
		func_261(&Local_1389, &(Local_1389.f_28));
		func_262(vLocal_1578[9 /*3*/]);
	}
	func_12(1024, bParam0);
}

void func_617(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam0);
}

bool func_618(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_850(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_851(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_619(var uParam0, int iParam1, int iParam2)
{
	struct<23> Var0;

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
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	func_133(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_620(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, int iParam13, float fParam14)
{
	if (func_852(&(uParam1->f_3), 1))
	{
		func_853(uParam1);
		if (func_854(iParam0, fParam7, fParam11, bParam12, iParam13, fParam14))
		{
			func_86();
		}
	}
	if (func_855(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_856(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_621(var uParam0)
{
	func_512(uParam0, &(uParam0->f_4));
}

int func_622(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (func_110(iParam0, 0, 1))
	{
		PED::_0xD65FDC686A031C83(iParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_0x68821369A2CEADD5(iParam0, iParam1) && (iParam5 || !TASK::_0x02EBBB3989B7E695(iParam0))) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_623(int iParam0, float fParam1)
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
	func_857(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
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
	fVar9 = func_858(vVar3, vVar6);
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
	if (func_859(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_625(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_646(uParam0, &(uParam0->f_1));
}

int func_626(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_860();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		((*Global_1955500)[iVar0 /*16*/])->f_1 = iParam1;
		((*Global_1955500)[iVar0 /*16*/])->f_2 = iParam0;
		(*Global_1955500)[iVar0 /*16*/] = 0;
		((*Global_1955500)[iVar0 /*16*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_147(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_154(Global_1955500[iVar0 /*16*/], 0))
		{
			func_861(iVar0, 1024);
			func_861(iVar0, 16);
			func_861(iVar0, 256);
		}
		func_861(iVar0, iParam2);
	}
	return iVar0;
}

int func_627(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_628(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (func_508(uParam0, &(uParam0->f_1)))
	{
		func_510(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_512(uParam0, &(uParam0->f_4));
		}
	}
}

int func_629(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;

	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!PED::_0x50F124E6EF188B22(Global_35))
	{
		return 1;
	}
	fVar0 = func_862();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_863(0);
		}
		else
		{
			func_863(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_863(0);
	}
	else
	{
		func_863(1);
	}
	return 0;
}

bool func_630(var uParam0)
{
	return func_864(uParam0, &(uParam0->f_4));
}

void func_631(var uParam0)
{
	func_865(uParam0, &(uParam0->f_4));
}

void func_632(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_127(iParam0))
	{
		return;
	}
	bVar0 = func_8(iParam0, iParam1);
	func_866(iParam0, iParam1, !bVar0);
}

float func_633(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f;
	}
	return ANIMSCENE::_0x3FBC3F51BF12DFBF(*uParam0);
}

void func_634()
{
	func_86();
}

int func_635(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];
	bool bVar3;

	StringCopy(&cVar0, sParam1, 24);
	if (iParam2 > 0)
	{
		bVar3 = true;
	}
	if (AUDIO::_0xD89504D9D7D5057D(sParam1))
	{
		return 1;
	}
	else if (func_294(uParam0, cVar0, bVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_636(var uParam0, float fParam1)
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

char* func_637()
{
	return "WORLD_HUMAN_SIT_GROUND_MALE_C";
}

void func_638(int* iParam0)
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

void func_639(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(8));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_640()
{
	func_867(Local_125[1 /*52*/], 0, 0);
	func_867(Local_125[2 /*52*/], 0, 0);
	func_867(Local_125[0 /*52*/], 0, 0);
}

void func_641(var uParam0)
{
	int iVar0;

	if (func_186(Global_35, ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_6, 1, 0))
	{
		if (!func_100(Local_1389.f_138, 0))
		{
			func_57(Local_1389.f_138, 1, 1);
		}
		if (!func_21(1))
		{
			func_141(1);
			PED::_0xAAB050DA48B57978(*uParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_1641 == 3)
			{
				func_43(524288);
			}
		}
		if (func_403(vLocal_1578[1 /*3*/]))
		{
			func_262(vLocal_1578[1 /*3*/]);
		}
		if (func_353(-3.5f, 1, 0, 0) && !func_403(vLocal_1578[2 /*3*/]))
		{
			func_74(vLocal_1578[2 /*3*/]);
		}
		if (func_278(vLocal_1578[2 /*3*/], 10f))
		{
			func_94(&(Local_1389.f_35), func_868(), *uParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
			switch (iLocal_1641)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::_TASK_PERFORM_SEQUENCE_2(*uParam0, iLocal_1818, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					Local_336 = 0;
					break;
				case 2:
					iVar0 = func_104(131072, 1056964608, 1065353216);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*uParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					Local_336 = 0;
					break;
				case 3:
					func_43(524288);
					break;
			}
			iLocal_1641++;
		}
	}
	else
	{
		if (func_403(vLocal_1578[2 /*3*/]))
		{
			func_262(vLocal_1578[2 /*3*/]);
		}
		if (func_21(1))
		{
			if (!func_403(vLocal_1578[1 /*3*/]))
			{
				func_74(vLocal_1578[1 /*3*/]);
			}
			if (func_278(vLocal_1578[1 /*3*/], 15f))
			{
				if (iLocal_1641 == 3)
				{
					TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
					PED::_0x935CF6E42BAF7F4D(*uParam0);
					func_240(Local_1389.f_138, 1);
				}
				func_142(1);
			}
		}
	}
	if (func_21(1))
	{
		if (!func_254(*uParam0, 242628503))
		{
			func_869(&Local_336, 0);
		}
	}
}

int func_642(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_870(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_724(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_724(), iVar3);
		if (func_871(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_643(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, int iParam9, float fParam10, int iParam11)
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
	iVar3 = func_642(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_872(iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	vVar6 = { vVar0 - VOLUME::_0xF70F00013A62F866(iParam2) };
	vVar9 = { func_873(iParam2, vVar6, 1065353216, 100) };
	func_874(iParam0, iParam1, iParam9, vVar9, vParam3, fParam6, fParam7, fParam8, fParam10, -1, 1, iParam11);
}

void func_644(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_875(iParam0);
	func_407(21);
}

void func_645(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_876(0);
		if (!func_27(2097152))
		{
			if (iLocal_18 == 1 && !func_27(8))
			{
				func_7(2097152, func_878(Global_35, &iLocal_1788, func_877(), &(iLocal_1759[4]), 10f, 0, 1, 129, 0, 0, 1071644672));
			}
			else
			{
				func_7(2097152, func_878(Global_35, &iLocal_1788, func_877(), 0, 10f, 0, 0, 129, 0, 0, 1071644672));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, bParam1);
				POPULATION::_0xF74E134F40192884(iLocal_1788, 2);
			}
		}
	}
	else
	{
		func_101(0);
	}
}

bool func_646(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
}

int func_647(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_347(Global_35))
	{
		iVar0 = func_513(Global_35, *uParam0, 0.93f);
		if (iVar0 != 0)
		{
			fVar1 = ENTITY::GET_ENTITY_SPEED(Global_35);
			iVar0 = func_513(Global_35, *uParam0, 1060437492);
			if (fVar1 > 6.5f || iVar0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_648(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (func_879(iVar2, bParam5))
		{
			if (func_880(iParam0[iVar2], uParam1, uParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*uParam2 = 0f;
	}
	return 0;
}

int func_649(int iParam0, float fParam1, var uParam2, float fParam3)
{
	if (func_765(Global_35, iParam0) < fParam1)
	{
		if (!func_403(uParam2))
		{
			func_683(uParam2, 0);
		}
		else
		{
			if (func_544(uParam2))
			{
				func_545(uParam2);
			}
			if (func_348(uParam2) > fParam3 && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				return 1;
			}
		}
	}
	else if (func_403(uParam2) && !func_544(uParam2))
	{
		func_546(uParam2);
	}
	return 0;
}

void func_650()
{
	if (!func_21(32))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_1618[0 /*7*/]), 0))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(&(Local_1618[0 /*7*/]), "PBL_quick_exit"))
			{
				func_94(&(Local_1389.f_35), "HMSTD_IG1DAD2", &(iLocal_1768[0]), Global_35, 0, 0, 1, 1);
				func_141(32);
			}
		}
	}
}

int func_651(var uParam0, var uParam1, var uParam2)
{
	if (func_652(uParam0, uParam1, uParam2))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam0))
	{
		return 1;
	}
	if (func_247(*uParam0, 1, 1) > 20f)
	{
		return 1;
	}
	if (func_186(Global_35, &(iLocal_1759[2]), 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_652(var uParam0, var uParam1, var uParam2)
{
	if (func_50(4096))
	{
		return 1;
	}
	if (func_121(&Local_1549, 1))
	{
		func_43(4096);
		func_5(1024);
		func_93(0);
		return 1;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*uParam0, 3))
	{
		func_43(4096);
		func_5(1024);
		func_93(0);
		return 1;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*uParam1, 3))
	{
		func_43(4096);
		func_93(0);
		return 1;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*uParam2, 3))
	{
		func_43(4096);
		func_93(0);
		return 1;
	}
	return 0;
}

void func_653(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

bool func_654(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
}

void func_655(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(8));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_656(var uParam0, var uParam1)
{
	if (func_247(*uParam0, 1, 1) < 25f)
	{
		if (((((!func_50(64) && !func_881(PLAYER::PLAYER_ID(), uParam0)) && !func_881(PLAYER::PLAYER_ID(), uParam1)) && PED::IS_PED_USING_ANY_SCENARIO(*uParam0)) && PED::IS_PED_USING_ANY_SCENARIO(*uParam1)) && func_292(*uParam0, *uParam1, 1, 1) < 10f)
		{
			func_94(&(Local_1389.f_35), "HMSTD_SONS_FIRE", *uParam0, *uParam1, 0, 0, 1, 0);
			func_43(64);
			func_49(16384);
			func_279(1, 1, 0);
			func_589(1);
			func_279(2, 1, 0);
			func_589(2);
		}
	}
	else if (func_354("HMSTD_SONS_FIRE"))
	{
		func_583("HMSTD_SONS_FIRE", 1);
	}
	if (func_121(&Local_1549, 1))
	{
		if (func_354("HMSTD_SONS_FIRE"))
		{
			func_583("HMSTD_SONS_FIRE", 0);
		}
	}
}

int func_657(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (iLocal_26)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				func_323(*uParam0);
				iLocal_26 = 1;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < iLocal_1794)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
				{
					iVar2 = &iLocal_1794[iVar0];
				}
				else
				{
					iVar0++;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				func_74(vLocal_1578[3 /*3*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iVar2, 4, 0, 1000f, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, Local_386.f_4, 4, 0, 1000f, -1, 0);
				}
				PED::SET_PED_CONFIG_FLAG(*uParam1, 277, false);
				func_94(&(Local_1389.f_35), "HOME_DEAD_1", *uParam1, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_253(vLocal_1578[3 /*3*/], 3f);
			}
			iLocal_26 = 2;
			break;
		case 2:
			if (!func_403(vLocal_1578[3 /*3*/]) && func_353(0, 1, 0, 0))
			{
				func_74(vLocal_1578[3 /*3*/]);
			}
			if (func_278(vLocal_1578[3 /*3*/], 3f))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_1794)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
					{
						iVar2 = &iLocal_1794[iVar0];
					}
					else
					{
						iVar0++;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam2, iVar2, 4, 0, 1000f, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam2, Local_386.f_4, 4, 0, 1000f, -1, 0);
					}
					PED::SET_PED_CONFIG_FLAG(*uParam2, 277, false);
					func_94(&(Local_1389.f_35), "HOME_DEAD_2", *uParam1, Global_35, 0, 0, 1, 1);
				}
				iLocal_26 = 3;
			}
			break;
		case 3:
			if (func_882(Global_35, 0))
			{
				iLocal_26 = 8;
			}
			else
			{
				if (func_353(0, 1, 0, 0) && !func_592(&iLocal_1794))
				{
					iVar4 = func_672();
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						func_94(&(Local_1389.f_35), "HOME_ATAK03", iVar4, Global_35, 0, 0, 1, 1);
					}
					func_74(vLocal_1578[3 /*3*/]);
					iLocal_26 = 4;
				}
				Jump @1424; //curOff = 564
				if (func_882(Global_35, 0))
				{
					iLocal_26 = 8;
				}
				else
				{
					if (func_353(0, 1, 0, 0) && func_278(vLocal_1578[3 /*3*/], 3f))
					{
						iVar0 = 0;
						while (iVar0 < Local_386.f_1)
						{
							if (ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
							{
							}
							else
							{
								iVar1 = iVar0;
								fVar5 = (0.25f * BUILTIN::TO_FLOAT(iVar0));
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
								if (!ENTITY::IS_ENTITY_DEAD((Local_386.f_369[iVar0 /*32*/])->f_11))
								{
									TASK::TASK_GO_TO_ENTITY(0, (Local_386.f_369[iVar0 /*32*/])->f_11, -1, 3f, 2f, 0f, 1);
									TASK::TASK_MOUNT_ANIMAL(0, (Local_386.f_369[iVar0 /*32*/])->f_11, -1, -1, 2f, 1, 0, 0);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1064.463f, 844.4973f, 116.9382f, 2f, -1, 0.25f, false, 40000f);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
								TASK::_TASK_PERFORM_SEQUENCE_2(&(iLocal_1794[iVar0]), iLocal_1818, fVar5, fVar5);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
							}
							iVar0++;
						}
						func_5(1024);
						func_42(&Local_1389, 4);
						func_200(Local_1389.f_136, 512);
						func_84(&Local_1389);
						func_289(&uLocal_1805, 0);
						func_262(vLocal_1578[0 /*3*/]);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_31, iLocal_32);
						iVar6 = func_672();
						if (!ENTITY::IS_ENTITY_DEAD(iVar6))
						{
							func_94(&(Local_1389.f_35), "HOME_ATAK04", iVar6, Global_35, 0, 0, 1, 1);
						}
						iLocal_26 = 5;
					}
					Jump @1424; //curOff = 912
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_386.f_1)
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(&(iLocal_1794[iVar0]), 242628503, 1);
						if (iVar3 == 0 || iVar3 == 1)
						{
						}
						else
						{
							iVar0++;
							iVar0 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])) && !ENTITY::IS_ENTITY_DEAD((Local_386.f_369[iVar0 /*32*/])->f_11))
								{
									iVar7 = &iLocal_1794[iVar0];
									TASK::_TASK_MOVE_IN_TRAFFIC_2(&(iLocal_1794[iVar0]), -1064.463f, 844.4973f, 116.9382f, 1073741824, 2.5f, 0, 0);
								}
								else
								{
									iVar0++;
								}
							}
							iVar1 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
								{
								}
								else if (ENTITY::IS_ENTITY_DEAD((Local_386.f_369[iVar0 /*32*/])->f_11))
								{
								}
								else if (iVar7 == &iLocal_1794[iVar0])
								{
								}
								else
								{
									TASK::TASK_MOVE_BE_IN_FORMATION(&(iLocal_1794[iVar0]), iVar7, 0f, (1f * IntToFloat(iVar1)), 0f, -1082130432, 0);
									iVar1++;
								}
								iVar0++;
							}
							iLocal_26 = 6;
							Jump @1424; //curOff = 1205
							if (func_673(uParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									TASK::TASK_COMBAT_PED(&(iLocal_1794[iVar0]), Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
							iVar8 = func_883(&iLocal_1794, func_215(), 1, 0, -1, 60f, -1082130432);
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
									{
										PED::SET_PED_KEEP_TASK(&(iLocal_1794[iVar0]), true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iLocal_1794[iVar0]);
									}
									iVar0++;
								}
								iLocal_26 = 8;
							}
							Jump @1424; //curOff = 1359
							Jump @1424; //curOff = 1362
							if (func_673(uParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									TASK::TASK_COMBAT_PED(&(iLocal_1794[iVar0]), Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
							return 1;
						}
						return 0;
					}
				}
			}
		}

void func_658()
{
	int iVar0;

	if ((iLocal_1640 % 5) == 0)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			if (func_110(&(iLocal_1794[iVar0]), 0, 1))
			{
				func_116(&(iLocal_1794[iVar0]), 1, Global_35, 0);
			}
			iVar0++;
		}
	}
}

void func_659(int iParam0, bool bParam1)
{
	func_829(iParam0, 0, bParam1);
	func_829(iParam0, 1, bParam1);
	func_829(iParam0, 2, bParam1);
}

int func_660(bool bParam0)
{
	int iVar0;

	if (!func_403(vLocal_1578[4 /*3*/]))
	{
		func_74(vLocal_1578[4 /*3*/]);
	}
	if (func_358(vLocal_1578[4 /*3*/], 0f) || !bParam0)
	{
		if (bParam0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_58(Local_1389.f_138)) && PED::IS_PED_SHOOTING(func_58(Local_1389.f_138)))
			{
				func_351(1066055203, func_58(Local_1389.f_138), 1);
				if (!func_50(262144))
				{
					func_884(536870912, 1, 0, 1);
					func_43(262144);
				}
				func_885();
				func_262(vLocal_1578[4 /*3*/]);
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])) && PED::IS_PED_SHOOTING(&(iLocal_1794[iVar0])))
			{
				if (bParam0)
				{
					func_351(1066055203, &(iLocal_1794[iVar0]), 1);
					if (!func_50(262144))
					{
						func_884(536870912, 1, 0, 1);
						func_43(262144);
					}
				}
				func_885();
				func_262(vLocal_1578[4 /*3*/]);
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_661(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam4 == 1 && !func_322(iParam0[iVar0], 0))
		{
		}
		else
		{
			func_886(iParam0[iVar0], iParam1, iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_662()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		func_248(&uLocal_1823, &(iLocal_1794[iVar0]), 0);
		func_249(&uLocal_1823, (Local_386.f_369[iVar0 /*32*/])->f_11, 0);
		iVar0++;
	}
}

void func_663(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_664()
{
	int iVar0;

	(Local_1649[0 /*8*/])->f_1 = { func_237(64) };
	(Local_1649[0 /*8*/])->f_4 = 97.95f;
	(Local_1649[0 /*8*/])->f_5 = 1;
	(Local_1649[0 /*8*/])->f_6 = 0;
	(Local_1649[0 /*8*/])->f_7 = 0;
	(Local_1649[1 /*8*/])->f_1 = { func_237(65) };
	(Local_1649[1 /*8*/])->f_4 = 80.52f;
	(Local_1649[1 /*8*/])->f_5 = 1;
	(Local_1649[1 /*8*/])->f_6 = 1;
	(Local_1649[1 /*8*/])->f_7 = 0;
	(Local_1649[2 /*8*/])->f_1 = { func_237(66) };
	(Local_1649[2 /*8*/])->f_4 = 101.23f;
	(Local_1649[2 /*8*/])->f_5 = 1;
	(Local_1649[2 /*8*/])->f_6 = 0;
	(Local_1649[2 /*8*/])->f_7 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1649)
	{
		if (!func_225((Local_1649[iVar0 /*8*/])->f_1))
		{
			Local_1649[iVar0 /*8*/] = TASK::ADD_COVER_POINT((Local_1649[iVar0 /*8*/])->f_1, (Local_1649[iVar0 /*8*/])->f_4, (Local_1649[iVar0 /*8*/])->f_6, (Local_1649[iVar0 /*8*/])->f_5, (Local_1649[iVar0 /*8*/])->f_7, false);
		}
		iVar0++;
	}
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Default_Angry";
		case 1:
			return "Default_Panic";
		case 2:
			return "Default_Shocked";
		default:
			break;
	}
	return "Default_Scared";
}

void func_666(int iParam0)
{
	PED::SET_PED_SHOOT_RATE(iParam0, 30);
}

Vector3 func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -492.5699f, 478.279f, 98.5375f;
		case 1:
			return -487.6176f, 473.3265f, 97.04874f;
		case 2:
			return -492.2293f, 478.5967f, 98.59277f;
		case 3:
			return -487.3784f, 473.5992f, 97.41553f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_668()
{
	AUDIO::_0xEF51242E35242B47("HOME_ATAK");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKF");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKFP");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKR");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP2");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP3");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK02");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK03");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK04");
}

void func_669()
{
	if (func_358(vLocal_1578[10 /*3*/], 60f))
	{
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080, 0, 4);
		func_289(&uLocal_1805, 0);
		func_262(vLocal_1578[0 /*3*/]);
		func_290(&iLocal_1768, Global_35, 0, -1, 1148846080, 0, 4);
		iLocal_24 = 9;
	}
}

void func_670()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_27(16384))
	{
		if (func_353(0, 1, &(iLocal_1794[0]), 1) && func_887())
		{
			iVar0 = 0;
			while (iVar0 < Local_386.f_1)
			{
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_1805[iVar0])))
				{
					func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
				}
				iVar0++;
			}
			iVar1 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP", iVar1, Global_35, 0, 0, 1, 1);
			}
			func_5(16384);
			func_74(vLocal_1578[8 /*3*/]);
			func_141(512);
		}
	}
	else if (!func_21(32768))
	{
		if (func_888())
		{
			iVar2 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP2", iVar2, Global_35, 0, 0, 1, 1);
			}
			func_141(32768);
			func_262(vLocal_1578[8 /*3*/]);
		}
	}
	if (!func_21(512) && func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_1805[iVar0])))
			{
				func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
			}
			iVar0++;
		}
		func_141(512);
	}
}

int func_671(var uParam0, var uParam1, var uParam2)
{
	if (!func_27(67108864))
	{
		if (func_247(*uParam0, 1, 1) < 80f)
		{
			if (!func_403(vLocal_1578[12 /*3*/]))
			{
				func_74(vLocal_1578[12 /*3*/]);
			}
			if (func_358(vLocal_1578[12 /*3*/], 2.5f))
			{
				func_5(67108864);
				func_192(Local_1389.f_136, 8388608);
				func_200(Local_1389.f_136, 64);
				if (!func_10(Local_1389.f_136, 4))
				{
					func_200(Local_1389.f_136, 4);
				}
			}
		}
		else if (func_403(vLocal_1578[12 /*3*/]))
		{
			func_262(vLocal_1578[12 /*3*/]);
		}
	}
	if (!func_27(67108864))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (!func_186(*uParam0, &(iLocal_1759[3]), 1, 0) && !PED::IS_PED_IN_COVER(*uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (!func_186(*uParam1, &(iLocal_1759[3]), 1, 0) && !PED::IS_PED_IN_COVER(*uParam1, 0, 0))
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!func_186(*uParam2, &(iLocal_1759[3]), 1, 0) && !PED::IS_PED_IN_COVER(*uParam2, 0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_672()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= Local_386.f_1)
	{
		return 0;
	}
	func_59(&(Local_1389.f_35), &(iLocal_1794[iVar0]), "HOME_ATTACKER", 0);
	return &(iLocal_1794[iVar0]);
}

int func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_258(&iLocal_1794, &uLocal_1823, &uLocal_1851, &uLocal_1645, 0, (Local_386.f_1 - 1), 1) || ((func_27(16384) && func_21(32768)) && func_889(Global_35, &iLocal_1794, 30f, 0, 0)))
	{
		func_5(128);
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[iVar0])))
			{
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_1805[iVar0])))
				{
					func_315(&(iLocal_1794[iVar0]), uLocal_1805[iVar0], 831283580, 580546400, 0, 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(&(iLocal_1794[iVar0]), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
				PED::SET_PED_ACCURACY(&(iLocal_1794[iVar0]), iLocal_1642);
				iVar1 = iVar0;
			}
			iVar0++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_31, 1862763509);
		if (func_110(*iParam0, 0, 1))
		{
			PED::SET_PED_ACCURACY(*iParam0, 55);
		}
		if (iVar1 >= 0)
		{
			func_93(0);
			iVar2 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				func_94(&(Local_1389.f_35), "HOME_ATAKP3", iVar2, Global_35, 0, 0, 1, 1);
			}
		}
		func_200(Local_1389.f_136, 64);
		if (!func_10(Local_1389.f_136, 4))
		{
			func_200(Local_1389.f_136, 4);
		}
		if (!func_402(2))
		{
			func_400("SP_EVENT_AREA_CASTORS_2_ACTION", 0);
			func_401(2);
		}
		return 1;
	}
	return 0;
}

void func_674(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

int func_675(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_676(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return 1;
}

void func_677(int iParam0)
{
	int iVar0;

	if (iLocal_1641 < 4 && func_353(0, 1, 0, 0))
	{
		if (!func_403(vLocal_1578[0 /*3*/]))
		{
			func_74(vLocal_1578[0 /*3*/]);
		}
		if (func_278(vLocal_1578[0 /*3*/], 5f))
		{
			if (!func_27(134217728))
			{
				func_5(134217728);
				iVar0 = func_672();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					func_94(&(Local_1389.f_35), "HOME_ATAK02", iVar0, Global_35, 0, 0, 1, 1);
				}
			}
			else
			{
				iLocal_1641++;
				func_139(134217728);
				func_94(&(Local_1389.f_35), "HOME_ATAKFP", *iParam0, Global_35, 0, 0, 1, 1);
			}
		}
	}
}

int func_678(var uParam0, int iParam1)
{
	if (func_890(iParam1))
	{
		return !(uParam0->f_1 && iParam1) != 0;
	}
	else
	{
		switch (iParam1)
		{
			case 262144:
				return func_147(*uParam0, 4);
			case 32:
				return func_147(*uParam0, 8);
			case 8192:
				return func_147(*uParam0, 16);
			case 64:
				return func_147(*uParam0, 32);
			case 32768:
				return func_147(*uParam0, 64);
			case 65536:
				return func_147(*uParam0, 1024);
			case 4096:
				return func_147(*uParam0, 262144);
			case 512:
				return func_147(*uParam0, 1048576);
			default:
				break;
		}
	}
	return 0;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true, 0, false);
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_680()
{
	if (!func_27(65536))
	{
		func_869(&Local_336, 0);
	}
}

int func_681()
{
	if (func_891(Global_35))
	{
		return 0;
	}
	if (func_358(vLocal_1578[0 /*3*/], 10f))
	{
		return 1;
	}
	if (!func_27(1048576))
	{
		return 0;
	}
	if (func_186(Global_35, &(iLocal_1759[1]), 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_682(int iParam0)
{
	switch (iLocal_2070)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_1790[0])))
			{
				func_315(*iParam0, uLocal_1790[0], -89429847, 580546400, 0, func_365());
			}
			if (func_358(vLocal_1578[1 /*3*/], 12.5f))
			{
				iLocal_2070 = 6;
				func_892(14, 0, 0, 0, *iParam0, 0, 1065353216, 0);
			}
			else if (func_247(*iParam0, 1, 1) < 20f && func_358(vLocal_1578[1 /*3*/], 5f))
			{
				func_94(&(Local_1389.f_35), "HOME_THXA", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2070 = 1;
			}
			break;
		case 1:
			if (func_353(-5f, 1, 0, 0))
			{
				func_892(14, 0, 0, 0, *iParam0, 0, 1065353216, 0);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_893(0);
				func_74(vLocal_1578[1 /*3*/]);
				iLocal_2070 = 4;
			}
			break;
		case 4:
			if (func_278(vLocal_1578[1 /*3*/], 5f))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return 1;
			}
			switch (iLocal_334)
			{
				case 0:
					func_94(&(Local_1389.f_35), "HOME_WLCMA", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
				case 1:
					func_94(&(Local_1389.f_35), "HOME_WLCMAN", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
			}
			break;
		case 6:
			if (func_353(-3.5f, 1, 0, 0))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return 1;
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_683(var uParam0, int iParam1)
{
	if (iParam1 || !func_403(uParam0))
	{
		func_74(uParam0);
	}
}

void func_684()
{
	func_57(64, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -444.7836f, 502.7554f, 97.5326f, 1f, 0, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(&(iLocal_1768[0]), iLocal_1818, 0f, 1f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
	func_57(65, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -421.8968f, 495.1602f, 97.77839f, 1f, 0, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(&(iLocal_1768[1]), iLocal_1818, 1.5f, 3f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
	func_57(66, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -427.5713f, 500.593f, 97.10954f, 1f, 0, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(&(iLocal_1768[2]), iLocal_1818, 3f, 5f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
}

float func_685(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_686()
{
	if (!func_27(16))
	{
		if (func_14(&iLocal_1789))
		{
			func_5(16);
			func_5(131072);
			return 1;
		}
	}
	return 0;
}

int func_687()
{
	if (func_27(16))
	{
		if (func_191(1))
		{
			func_139(16);
			func_139(131072);
			return 1;
		}
	}
	return 0;
}

var func_688(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_894(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_895(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_894(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_689()
{
	return -433.5319f, 505.9023f, 96.77488f;
}

char* func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "app";
		case 1:
			return "cas";
		case 2:
			return "cur";
		case 3:
			return "ftr";
		default:
			break;
	}
	return "";
}

void func_691(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::_0x554D9D53F696D002(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::_0x662D364ABF16DE2F(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

void func_692(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 2, "HOME_CTXT2");
	((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_14 = func_117(-2107118268);
	func_816(((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_6, "HOME_CTXT2", ((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_14, 0);
	func_821((*Local_125[iParam0 /*52*/])[2 /*17*/], 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 0, func_562(7));
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(30));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

void func_693(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_262(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

Vector3 func_694()
{
	return 0.157993f, 1.238588f, -0.004703f;
}

float func_695(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_696(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_147(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_74(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, uParam0->f_3, 0);
					if (func_147(uParam0->f_23, 2048))
					{
						HUD::_0x8BC7C1F929D07BF3(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
				}
				if (!func_147(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_147(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_347(uParam0->f_1))
					{
						func_896(uParam0->f_1);
						iVar0 = func_624(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = func_624(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_132(&(uParam0->f_23), 2);
					}
				}
				if (func_225(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_897(uParam0, 1, iParam1);
			}
			else
			{
				func_897(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_898(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!func_899(uParam0, iParam1))
				{
					func_900();
				}
				func_897(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_899(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!func_147(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_147(uParam0->f_23, 512), 0, 0);
				}
				func_897(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_901(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (!PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_132(&(uParam0->f_23), 256);
				}
				if (func_147(uParam0->f_23, 4096) && !PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_132(&(uParam0->f_23), 256);
					iVar6 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (func_292(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_902(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_147(uParam0->f_23, 256))
				{
					iVar5 = PED::_0xD806CD2A4F2C2996(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_897(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_903(uParam0, iParam1))
			{
				func_74(&(uParam0->f_5));
				if (func_147(uParam0->f_23, 8192))
				{
					if (func_147(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_225(uParam0->f_11))
					{
					}
					bVar8 = false;
					if (!func_147(uParam0->f_23, 1024))
					{
						bVar8 = (bVar8 || 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_225(uParam0->f_11))
					{
						if (func_147(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
						}
					}
					if (func_147(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_496(!func_147(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
					}
					if (func_147(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_904(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_897(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_147(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_147(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_147(uParam0->f_23, 128) && func_278(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_147(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, 1) == 8)
				{
					iVar10 = 1;
				}
				if ((func_225(uParam0->f_11) || !func_254(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_905(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_147(uParam0->f_23, 8)) && (!func_147(uParam0->f_23, 64) || MISC::ABSF(func_906(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_147(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_262(&(uParam0->f_5));
				func_897(uParam0, 6, iParam1);
				return 1;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_697(var uParam0)
{
	func_629(1048576000, 1028443341, 1, 106);
	func_101(0);
	func_5(2097152);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	func_617(Local_1618[1 /*7*/]);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	func_68(&Local_1389, 65536);
	func_907(*uParam0, func_117(-2107118268));
	func_5(512);
	func_908(-2107118268, 0, 0, 0);
	func_25(Local_1389.f_136, 128);
	func_5(8192);
	func_42(&Local_1389, 128);
	func_699(Local_1389.f_136);
	func_200(Local_1389.f_136, 16384);
	func_139(65536);
	func_84(&Local_1389);
	func_74(vLocal_1578[1 /*3*/]);
}

int func_698(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!func_110(iParam0, 0, 1))
	{
		return 1;
	}
	else if (!func_110(iParam2, 0, 1))
	{
		return 1;
	}
	switch (*iParam3)
	{
		case 0:
			uParam4->f_183 = func_292(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(func_909(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432) || func_292(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1082130432, -1082130432, -1082130432);
			}
			if (uParam4->f_180)
			{
				if (func_350(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					func_74(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*iParam3 = 1;
			break;
		case 1:
			if (func_292(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 3f, 0);
				return 1;
			}
			else if ((!uParam4->f_180 && (func_292(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (func_278(&(uParam4->f_191), uParam4->f_189) || func_350(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || func_909(iParam0, uParam4->f_188, -1082130432, -1082130432, -1082130432)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0f, 0f, 1069547520, 1073741824);
					}
					else
					{
						func_910(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*iParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((func_618(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || func_910(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (func_353(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0, 0, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0, 0, 0, -1082130432, 0, 65536, -1082130432);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					func_911(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296, 0, 0, 0, 1);
					func_912(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*iParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*iParam3 = 3;
					}
					else
					{
						*iParam3 = 5;
					}
				}
			}
			else if (!func_110(iParam0, 0, 1))
			{
				return 1;
			}
			break;
		case 3:
			if (func_353(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0, 0, 0, 0, 0, 0);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0, 0, 0, -1082130432, 0, 0, -1082130432);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0, 0, 0, -1082130432, 0, 0, -1082130432);
					}
				}
				func_911(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296, 0, 0, 0, 1);
				*iParam3 = 5;
			}
			break;
		case 4:
			if (func_353(0, 1, iParam0, uParam4->f_182))
			{
				if (func_913(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, 992265328, 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1704213876, 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*iParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					func_286(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*iParam3 = 6;
				}
			}
			break;
		case 5:
			if ((func_353(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					func_911(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296, 0, 0, 0, 1);
					*iParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						func_914(uParam4->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						func_915(uParam4->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
					}
					*iParam3 = 6;
				}
			}
			break;
		case 6:
			if (func_353(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					func_916(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*iParam3 = 7;
				return 1;
			}
			break;
		case 7:
			return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 3f, 0);
		return 1;
	}
	return 0;
}

void func_699(int iParam0)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_25(iParam0, 1073741824);
}

void func_700(var uParam0)
{
	if (iLocal_21 < 16)
	{
		if (!func_27(1073741824) && func_247(*uParam0, 1, 1) < 10f)
		{
			func_5(1073741824);
		}
		func_645(func_27(1073741824), 1);
	}
	if (iLocal_21 >= 5 && iLocal_21 < 16)
	{
		func_869(&Local_336, 0);
	}
}

void func_701(int iParam0)
{
	iLocal_21 = iParam0;
}

void func_702(var uParam0)
{
	if (!func_50(2048) && func_186(*uParam0, &(iLocal_1759[4]), 1, 0))
	{
		func_43(2048);
	}
}

bool func_703()
{
	return (func_24(0) <= 3 && !func_8(0, 4194304));
}

void func_704(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_27(16))
	{
		func_828(iParam0, 0, "HOME_CTXT1A");
		func_747(iParam0, 0, 1);
	}
	else if (func_703())
	{
		func_828(iParam0, 0, func_562(0));
		func_747(iParam0, 0, 1);
	}
	else
	{
		func_747(iParam0, 0, 0);
	}
	func_829(iParam0, 0, 0);
	func_828(iParam0, 2, "HOME_CTXT2");
	((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_14 = func_117(-2107118268);
	func_816(((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_6, "HOME_CTXT2", ((*Local_125[iParam0 /*52*/])[2 /*17*/])->f_14, 0);
	func_821((*Local_125[iParam0 /*52*/])[2 /*17*/], 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 1, func_562(1));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

int func_705(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_186(Global_35, &(iLocal_1759[2]), 1, 0) || func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		if (func_256(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
	}
	if (iLocal_23 < 11 && ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_305();
	}
	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			func_917(1986792065, 0, -1f, 1, 1, 0, 1, 0);
			iLocal_1759[1] = VOLUME::_0x0EB78C2B156635B1(665633627, -444.2087f, 499.9236f, 99.1105f, 0f, 0f, 0f, 1f, 1f, 1.313758f);
			func_616(1);
			func_603(Local_1618[0 /*7*/], *uParam0, "father", 1);
			func_603(Local_1618[0 /*7*/], Global_35, "plr", 1);
			func_606(Local_1618[0 /*7*/], (Local_386.f_690[0 /*12*/])->f_8, "MONEY");
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0])))
			{
				TASK::TASK_STAND_STILL(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *uParam0, &(iLocal_1794[0]), 0);
				PHYSICS::_0x06AADE17334F7A40(&(iLocal_1794[0]), func_708());
				PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[0]), 178, true);
				PED::_0x931B241409216C1F(*uParam0, &(iLocal_1794[0]), 0);
			}
			TASK::_TASK_START_SCENARIO_IN_PLACE(*uParam0, func_607(), -1, 0, 0, -1082130432, 0);
			func_712(-942875190, 1);
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (!func_10(Local_1389.f_136, 4))
			{
				func_200(Local_1389.f_136, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && func_618(*uParam0, Global_35, 0, 20f, 0))
			{
				func_619(uParam0, 0, 0);
				uLocal_30 = func_626(*uParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*uParam0), 5.5f, 5.5f, 5.5f), 148);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			func_619(uParam0, 0, 0);
			if (func_27(2))
			{
				iVar0 = 2;
				iVar1 = 3;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			TASK::_0xE7FA07624574B79A(*uParam0, Global_35, iVar1, iVar0, 3f, 1, 0, 0, 0);
			func_94(&(Local_1389.f_35), Local_2071.f_1, *uParam0, Global_35, 0, 0, 1, 1);
			func_284(uLocal_1790[0]);
			func_5(1048576);
			iLocal_23 = 4;
			break;
		case 4:
			func_629(1048576000, 1028443341, 0, 106);
			func_619(uParam0, 0, 0);
			if (func_27(1048576))
			{
				if (func_353(-3.5f, 1, *uParam0, 1))
				{
					func_139(1048576);
				}
			}
			else
			{
				if (!func_50(67108864) && !func_354(Local_2071.f_1))
				{
					func_615(1, 1);
					func_279(0, 1, 0);
					func_589(0);
				}
				switch (iLocal_334)
				{
					case 0:
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HOME_LN02ERP", *uParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
					case 1:
						func_615(1, 0);
						func_279(0, 1, 1);
						func_94(&(Local_1389.f_35), "HOME_LN02ERN", *uParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
				}
			}
			break;
		case 5:
			func_619(uParam0, 0, 0);
			if (func_353(-3.5f, 1, 0, 0))
			{
				if (!func_100(Local_1389.f_138, 0))
				{
					func_57(Local_1389.f_138, 1, 1);
				}
				func_89(&uLocal_30, 1);
				func_94(&(Local_1389.f_35), "HOME_LN03E1", *uParam0, Global_35, 0, 0, 1, 1);
				func_918(1986792065, 1);
				OBJECT::_0x1BC47A9DEDC8DF5D(1986792065, 1);
				func_625(Local_1618[0 /*7*/], "PBL_give_money_back");
				StringCopy(&((Local_1618[0 /*7*/])->f_4), "bBreakInternalLoop", 24);
				func_617(Local_1618[0 /*7*/]);
				iLocal_23 = 6;
			}
			break;
		case 6:
			if (!func_919(1986792065, 0))
			{
				if (func_920(0))
				{
					func_917(1986792065, 0, -1f, 1, 1, 0, 0, 0);
				}
			}
			if (!func_186(*uParam0, &(iLocal_1759[3]), 1, 0))
			{
				func_619(uParam0, 0, 0);
			}
			else if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1759[1])))
			{
				func_83(&(iLocal_1759[1]));
			}
			if ((!func_27(512) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, -1568763903))
			{
				func_315(*uParam0, uLocal_1790[0], -89429847, 580546400, 0, func_365());
				func_5(512);
			}
			if ((func_27(512) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && (func_186(Global_35, &(iLocal_1759[2]), 1, 0) || func_186(Global_35, &(iLocal_1759[3]), 1, 0)))
			{
				MAP::DISPLAY_RADAR(false);
				func_693(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { func_921(Local_1618[0 /*7*/], "plr", "PBL_give_money_back") };
				Local_1674.f_19 = func_922(Local_1618[0 /*7*/], "plr", "PBL_give_money_back");
				Local_1674.f_25 = &Local_1618[0 /*7*/];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), "PBL_give_money_back", 32);
				func_132(&(Local_1674.f_23), 27648);
				func_42(&Local_1389, 65536);
				func_696(&Local_1674, 106);
				func_265(&Local_1549, 4);
				iLocal_23 = 7;
			}
			break;
		case 7:
			func_629(1048576000, 1028443341, 0, 106);
			if (func_696(&Local_1674, 106) && func_627(Local_1618[0 /*7*/]))
			{
				func_629(1048576000, 1028443341, 1, 106);
				func_628(Local_1618[0 /*7*/], 1, 1);
				func_94(&(Local_1389.f_35), "HOME_LN03E2", *uParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 8;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					func_68(&Local_1389, 65536);
					func_914(func_117(-1506205562), 0, 1065353216, 1, 0, 0, 1, 752097756);
					func_509(Local_1618[0 /*7*/], (Local_386.f_690[0 /*12*/])->f_8, "MONEY");
					func_84(&Local_1389);
					func_192(Local_1389.f_136, 8388608);
					func_42(&Local_1389, 128);
					func_284(uLocal_1790[0]);
					func_638(&((Local_386.f_690[0 /*12*/])->f_8));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1426724047))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (func_710(uParam0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
			}
			if (func_923(Local_1618[0 /*7*/]))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_710(uParam0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
			}
			if (func_709(uParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (!func_100(Local_1389.f_138, 0))
			{
				func_57(Local_1389.f_138, 1, 1);
			}
			if (func_710(uParam0))
			{
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				func_42(&Local_1389, 512);
				_NAMESPACE48::_0xB65E7F733956CF25(_NAMESPACE48::_0x112DDF56300BC6E5(func_157(Local_1389.f_138)));
				func_711(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

int func_706(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	float fVar5;

	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			func_616(1);
			func_603(Local_1618[0 /*7*/], *uParam0, "father", 1);
			func_606(Local_1618[0 /*7*/], (Local_386.f_690[1 /*12*/])->f_8, "CIGARETTE");
			StringCopy(&((Local_1618[0 /*7*/])->f_4), "bBreakInternalLoop", 24);
			STREAMING::_0x19A6BE7D9C6884D3(func_607(), 1, func_229(Local_1389.f_138), func_608());
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0])))
			{
				TASK::TASK_STAND_STILL(&(iLocal_1794[0]), -1);
				func_173(&Local_1389, 1);
				func_707(&Local_1389, *uParam0, &(iLocal_1794[0]), 0);
				PHYSICS::_0x06AADE17334F7A40(&(iLocal_1794[0]), func_708());
				PED::SET_PED_CONFIG_FLAG(&(iLocal_1794[0]), 178, true);
				PED::_0x931B241409216C1F(*uParam0, &(iLocal_1794[0]), 0);
			}
			func_712(-942875190, 1);
			func_712(1986792065, 1);
			func_617(Local_1618[0 /*7*/]);
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_192(Local_1389.f_136, 8388608);
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (func_618(*uParam0, Global_35, 0, Local_2071.f_13, 0))
			{
				func_619(uParam0, 0, 0);
				func_620(*uParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
				vVar1 = { func_623(Global_35, 1065353216) };
				iVar0 = func_624(*uParam0, vVar1, 1060437492);
				switch (iVar0)
				{
					case 0:
						sVar4 = "PBL_action_F";
						break;
					case 2:
						sVar4 = "PBL_action_R";
						break;
					case 3:
						sVar4 = "PBL_action_L";
						break;
					case 1:
						iVar0 = func_624(*uParam0, vVar1, 1f);
						switch (iVar0)
						{
							case 3:
								sVar4 = "PBL_action_back_L";
								break;
							case 2:
								sVar4 = "PBL_action_back_R";
								break;
						}
						break;
				}
				func_625(Local_1618[0 /*7*/], sVar4);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (func_627(Local_1618[0 /*7*/]))
			{
				func_628(Local_1618[0 /*7*/], 1, 1);
				func_84(&Local_1389);
				func_192(Local_1389.f_136, 8388608);
				func_94(&(Local_1389.f_35), Local_2071.f_1, *uParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 6;
			}
			break;
		case 6:
			func_629(1048576000, 1028443341, 0, 106);
			func_620(*uParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584);
			if (!func_27(1024) && func_353(-3.5f, 1, 0, 0))
			{
				func_589(0);
				func_5(1024);
				func_43(8192);
			}
			func_619(uParam0, 0, 0);
			fVar5 = func_247(*uParam0, 1, 1);
			if ((fVar5 < 3.5f || fVar5 > 20f) || func_633(Local_1618[0 /*7*/]) > 0.5f)
			{
				func_634();
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
			{
				if (func_923(Local_1618[0 /*7*/]))
				{
					func_284(uLocal_1790[0]);
					func_615(0, 0);
					func_279(0, 1, 0);
					func_638(&((Local_386.f_690[1 /*12*/])->f_8));
					func_74(vLocal_1578[0 /*3*/]);
					iLocal_23 = 9;
				}
			}
			break;
		case 9:
			if (func_709(uParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(uParam0))
			{
				func_29(Local_1389.f_138, 32);
				func_29(Local_1389.f_138, 128);
				func_31(Local_1389.f_138, 1);
				_NAMESPACE48::_0xB65E7F733956CF25(_NAMESPACE48::_0x112DDF56300BC6E5(func_157(Local_1389.f_138)));
				func_42(&Local_1389, 512);
				func_711(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				func_712(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_707(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_248(uParam0, iParam1, iParam3);
	func_249(uParam0, iParam2, iParam3);
}

Vector3 func_708()
{
	return -445.7555f, 498.7224f, 97.94028f;
}

int func_709(int iParam0)
{
	bool bVar0;

	if (!func_27(536870912))
	{
		if (!func_100(Local_1389.f_138, 0))
		{
			func_57(Local_1389.f_138, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_1794[0])))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(&(iLocal_1794[0]), true, false), 1f, -1, 5f, true, 40000f);
			TASK::TASK_MOUNT_ANIMAL(0, &(iLocal_1794[0]), -1, -1, 1f, 1, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -450.4879f, 553.2806f, 103.5783f, 1f, -1, 0.25f, false, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
		}
		func_42(&Local_1389, 512);
		func_43(32768);
		func_5(536870912);
	}
	else if (!func_254(*iParam0, 242628503) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam0, true))
	{
		func_924(*iParam0, 76, "HMSTD_FOREMAN", 0);
		return 1;
	}
	return 0;
}

int func_710(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
		iLocal_1855 = func_832(1986792065, 1, 0);
		return 0;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1855) && !OBJECT::IS_DOOR_CLOSED(1986792065))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && func_186(*iParam0, &(iLocal_1759[3]), 1, 0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		return 0;
	}
	if (func_247(iLocal_1855, 1, 1) < 8f)
	{
		return 0;
	}
	return 1;
}

int func_711(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_55(iParam0, 2))
	{
		return 0;
	}
	if (func_157(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_159(iParam0)))
	{
		return 1;
	}
	if (func_55(iParam0, 1) && !bParam1)
	{
		func_29(iParam0, 128);
		return 1;
	}
	func_31(iParam0, 129);
	func_732(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_159(iParam0));
	func_445(iParam0, 0);
	return 1;
}

void func_712(int iParam0, int iParam1)
{
	func_917(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

int func_713(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::_0x61914209C36EFDDB(iParam0);
		if (iVar0 == 1)
		{
			return iVar0;
		}
		else if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_714(int iParam0)
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

int func_715(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_716(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_927(iVar0, iVar1);
}

bool func_717(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_718(int iParam0, bool bParam1)
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

bool func_719(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_720(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_721(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_722()
{
	return Global_1109400->f_244;
}

int func_723(int iParam0)
{
	if (!func_928(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_724()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_725(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_929(iParam0))
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

void func_726(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam2, false, true);
}

void func_727(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

bool func_728(var uParam0)
{
	return func_154(*uParam0, 1);
}

int func_729(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_930(*uParam0, 0f, 0f, 0f))
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

void func_730(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_931(iParam1))
		{
			func_932(iParam0, 41788943);
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
			func_933(iParam0, 0, 1);
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
			func_934(iParam0, 0);
			bVar0 = true;
		}
		func_935(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_731(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_732(int iParam0)
{
	int iVar0;

	if (!func_99(iParam0))
	{
		return;
	}
	iVar0 = func_228(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

var func_733(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

var func_734(char* sParam0, char* sParam1, int iParam2, int iParam3, var uParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = uParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_735(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_736(int iParam0)
{
	int iVar0;

	if (func_936(iParam0))
	{
		if (!func_937(45))
		{
			return 0;
		}
	}
	iVar0 = func_739(iParam0);
	if (func_938())
	{
		if (!func_939(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

struct<2> func_737(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_738(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_739(int iParam0)
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

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1439010767;
		case 1:
			return -888900898;
		case 2:
			return 1252459247;
		default:
			break;
	}
	return 0;
}

Vector3 func_741(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_742(int iParam0, int iParam1)
{
	int iVar0;

	func_940(iParam0);
	iVar0 = func_941(iParam0, iParam1);
	if (iVar0 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar0))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar0);
	}
}

var func_743(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
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
	uVar1 = func_942(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_83(iVar0);
	return uVar1;
}

int func_744(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != iParam0[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE(iParam0[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_745(int iParam0, int iParam1)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_746(int iParam0, int iParam1, int iParam2)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

void func_747(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_564((*Local_125[iParam0 /*52*/])[iParam1 /*17*/], bParam2, 0);
}

void func_748(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_286(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_483(iParam0, 0);
		}
	}
}

void func_749(int iParam0, int iParam1, bool bParam2)
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

bool func_750(int iParam0)
{
	return func_943(iParam0, 2);
}

int func_751(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_0x92A78D0BEDB332A3(((*Global_1955500)[iParam0 /*16*/])->f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(((*Global_1955500)[iParam0 /*16*/])->f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_752()
{
	return Global_1894899->f_2;
}

var func_753(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_754(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_755(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_756()
{
	if (func_944(0))
	{
		func_945(0);
	}
	if (func_944(1))
	{
		func_945(1);
	}
	if (func_944(5))
	{
		func_945(5);
	}
	if (func_944(6))
	{
		func_946(6);
	}
}

bool func_757(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1);
}

void func_758(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
}

void func_759(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_947();
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
			func_948(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_760(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_761(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_949(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_762(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_950(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_950(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_787(iVar0) == -1)
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

void func_763(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_951(uParam0);
	}
}

int func_764(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_787(iParam2);
	}
	else
	{
		iVar1 = func_786(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_787(iParam0);
	}
	else
	{
		iVar0 = func_786(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_147(*uParam1, 8388608))
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

float func_765(int iParam0, int iParam1)
{
	return func_292(iParam0, iParam1, 1, 1);
}

float func_766(var uParam0)
{
	return uParam0->f_26;
}

int func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

var func_768(var uParam0)
{
	return uParam0->f_17;
}

int func_769(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_147(*uParam0, 4194304))
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

int func_770(var uParam0)
{
	return uParam0->f_18;
}

int func_771(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_574(iVar0, 0)))
		{
			if (func_823(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_772(var uParam0)
{
	return uParam0->f_23;
}

int func_773(var uParam0)
{
	return uParam0->f_21;
}

int func_774(var uParam0)
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

int func_775(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_952(iParam0, vParam4, 0.5f))
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

int func_776(int iParam0)
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
	if (func_953(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_777(int iParam0)
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

int func_778(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_595(iParam1))
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

int func_779(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_595(iParam1))
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

int func_780(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_595(iParam1))
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

int func_781(int iParam0, var uParam1)
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

int func_782(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_954(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_783(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_784(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_685(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_785(var uParam0)
{
	return uParam0->f_24;
}

int func_786(int iParam0)
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

int func_787(int iParam0)
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

int func_788(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_781(Global_35, &iVar1))
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
		fVar2 = func_292(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_292(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_789(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_949(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_790(uParam1, iVar0))
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
				if (!bParam2 || !func_790(uParam1, iVar1))
				{
					if (func_685(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_790(var uParam0, int iParam1)
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

int func_791(int iParam0)
{
	if (func_955())
	{
		return 0;
	}
	return func_939(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_792(var uParam0)
{
	return uParam0->f_20;
}

float func_793(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_785(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_956(uParam0);
	}
	return func_785(uParam0);
}

float func_794(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_795()
{
	int iVar0;
	int iVar1;

	iVar0 = func_146(func_145());
	iVar1 = func_553(func_145());
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

struct<5> func_796(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_957(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_958(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_800(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_959(bParam1) };
			if (iParam2 && func_960(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_798(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_798(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_799(iParam0, &Var5, 1728382685))
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
			Var0 = { func_961(bParam1) };
			switch (func_962(iParam0))
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
			if (func_963(iParam0, -1823706425))
			{
				Var0 = { func_800(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_963(iParam0, -1483207246))
			{
				Var0 = { func_800(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_964(Var0, &Var27, bParam1, 0))
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

int func_797(int iParam0, int iParam1)
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
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_798(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_965(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_799(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_966(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_800(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_967(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_968(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_801(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_969(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(*uParam1, &Var0, bParam6, 0))
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
	if (!func_802(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_968(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_802(bool bParam0)
{
	if (func_1() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_968(bParam0));
}

int func_803(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_970(iParam0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_804(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_276(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_805(var uParam0, int iParam1)
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

void func_806(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_807(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_555(*uParam0);
	iVar1 = func_554(*uParam0);
	if (iParam1 < 1 || iParam1 > func_557(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_808(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_809(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_810(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_811(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_812(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_811(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_581(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_74(&(iParam1->f_13));
		}
		if (func_971(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_972(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_812(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_485(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_973(*uParam0, 1, 1);
						}
					}
					else if (func_582(iParam1, 22))
					{
						func_973(*uParam0, 0, 1);
					}
				}
				if (func_974(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_975(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_976(iParam8);
					if (func_977(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_978(uParam3);
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
					func_979(iParam1, uParam3, fVar8);
					if (func_980(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_576(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_981(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_974(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_982(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_977(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_975(uParam0, func_974(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_976(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_576(uParam3, 0, 0, 1, 1);
					}
					func_983(iParam1, 1);
				}
				func_979(iParam1, uParam3, fVar8);
				if (func_981(uParam0, iParam1, fParam4, bVar6))
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
			func_486(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_813(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_984(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_95(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_815(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_816(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_817(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_818(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (bParam1)
	{
		func_985(iParam0, 4);
		func_986(iVar0, 1);
		func_987(iVar0, 1);
	}
	else
	{
		func_988(iParam0, 4);
		func_987(iVar0, 0);
	}
}

void func_819(int* iParam0, char* sParam1)
{
	if (func_285(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_817(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_822(iParam0, 1);
}

bool func_820(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_821(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_822(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_823(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 65536;
		case 2:
			return 131072;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 4;
		case 2:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 536870912;
		case 1:
			return 1073741824;
		case 2:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

void func_827(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, bool bParam5, int iParam6)
{
	PED::_0x24C82EF607105FAA(iParam0, iParam6);
	PED::_0xE737D5F14304A2EC(iParam0, PLAYER::PLAYER_ID(), 120000);
	func_280(&iParam0, iParam3, uParam4, bParam5, 1);
	func_227(iParam0, 1, 1);
	func_43(iParam1);
	func_141(iParam2);
	func_141(2097152);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	AUDIO::STOP_PED_SPEAKING(iParam0, false);
	if (iParam0 == &iLocal_1768[1] || iParam0 == &iLocal_1768[2])
	{
		func_5(8388608);
	}
}

void func_828(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_817(((*Local_125[iParam0 /*52*/])[iParam1 /*17*/])->f_6, sParam2, 0);
	((*Local_125[iParam0 /*52*/])[iParam1 /*17*/])->f_5 = sParam2;
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_565((*Local_125[iParam0 /*52*/])[iParam1 /*17*/], bParam2);
}

void func_830(int iParam0)
{
	if (iParam0 == 0)
	{
		func_43(134217728);
	}
}

bool func_831(int iParam0)
{
	return iParam0 != 0;
}

int func_832(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_989(iParam0, iParam1);
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

int func_833(int iParam0)
{
	if (func_15(64))
	{
		return 0;
	}
	if (!(func_186(func_58(67), &(iLocal_1759[3]), 1, 0) && func_186(func_58(68), &(iLocal_1759[3]), 1, 0)))
	{
		return 0;
	}
	if (func_186(Global_35, &(iLocal_1759[3]), 1, 0))
	{
		return 0;
	}
	if (func_247(iParam0, 1, 1) < 20f)
	{
		return 0;
	}
	if (OBJECT::IS_DOOR_CLOSED(1986792065))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_834(int iParam0, int iParam1, bool bParam2)
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

int func_835(int iParam0)
{
	if (func_831(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

float func_836(vector3 vParam0, bool bParam3)
{
	return func_685(Global_35, vParam0, bParam3);
}

int func_837(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(&Local_1389, 256))
		{
			return 1;
		}
	}
	if (func_358(vLocal_1578[1 /*3*/], fParam0))
	{
		return 1;
	}
	return 0;
}

int func_838(int iParam0)
{
	int iVar0;

	if (!func_100(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		return 1;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iVar0, 3))
	{
		return 0;
	}
	return 1;
}

void func_839(var uParam0, int iParam1)
{
	if ((iLocal_27 > 2 && iLocal_27 < 10) || iLocal_27 == 0)
	{
		if (!TASK::GET_IS_TASK_ACTIVE(*uParam0, 3))
		{
			func_990(iParam1);
		}
	}
}

int func_840()
{
	if (iLocal_18 < 4 && !func_20(&Local_1389, 256))
	{
		if (!func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, 2))
		{
			return 0;
		}
		else if (!func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, 16))
		{
			return 1;
		}
		else if (!func_154((Global_40.f_9096[Local_1389.f_136 /*12*/])->f_6, 128))
		{
			if (iLocal_18 == 2)
			{
				return 2;
			}
		}
	}
	return -1;
}

void func_841(int iParam0)
{
	iLocal_27 = iParam0;
}

void func_842(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case default:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -439.948f, 502.663f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -439.944f, 502.624f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -436.153f, 500.937f, 96.99f };
					*uParam1 = { 0f, 0f, 90.416f };
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -438.552f, 502.693f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -438.547f, 502.651f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -444.01f, 493.414f, 97.116f };
					*uParam1 = { 0f, 0f, 0.51f };
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					*uParam0 = { -431.098f, 499.764f, 97.157f };
					*uParam1 = { 0f, 0f, 92.19f };
					break;
				case 3:
					*uParam0 = { -433.973f, 499.416f, 97.928f };
					*uParam1 = { 0f, 0f, 0.425f };
					break;
			}
			break;
	}
}

void func_843()
{
	iLocal_27 = iLocal_28;
	if (iLocal_27 < 11)
	{
		iLocal_28 = iLocal_27 + 1;
	}
}

void func_844(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar1 == 1)
			{
			}
			else
			{
				if (iVar0 == iParam0)
				{
					func_646(Local_1618[2 /*7*/], func_514(iVar0, iVar1));
				}
				else
				{
					func_991(Local_1618[2 /*7*/], func_514(iVar0, iVar1));
				}
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (iVar2 == 2)
					{
					}
					else if (iVar0 == iParam0)
					{
						if (!func_508(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2)) && !func_993(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2)))
						{
							func_646(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2));
						}
					}
					else if (func_508(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2)) && func_993(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2)))
					{
						func_991(Local_1618[2 /*7*/], func_992(iVar0, iVar1, iVar2));
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_845(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_133(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_219(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 0;
		case 65:
			return 1;
		case 66:
			return 2;
		default:
			break;
	}
	return -1;
}

char* func_847(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "PBL_ENTER";
		case 3:
			return "PBL_B_01_SEC_01";
		case 4:
			return "PBL_B_01_SEC_02";
		case 5:
			return "PBL_TRANS_01";
		case 6:
			return "PBL_B_02_SEC_01";
		case 7:
			return "PBL_B_02_SEC_02";
		case 8:
			return "PBL_TRANS_02";
		case 9:
			return "PBL_B_03_SEC_01";
		case 10:
			return "PBL_EXIT";
		default:
			break;
	}
	return "";
}

void func_848(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_994(uParam0, iParam1))
	{
		if (func_21(262144))
		{
			return;
		}
		iVar0 = func_513(*uParam0, Global_35, 1060437492);
		if (iVar0 == 1)
		{
			iVar0 = func_513(*uParam0, Global_35, 1f);
		}
		iVar1 = iLocal_334;
		if (iVar1 == -1)
		{
			if (PED::_0x9337183FDA2E9035(*uParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
		}
		if (func_508(Local_1618[2 /*7*/], func_992(iLocal_29, iVar0, iVar1)))
		{
			func_510(Local_1618[2 /*7*/], func_992(iLocal_29, iVar0, iVar1), 1);
			func_141(262144);
			func_841(0);
			if (iLocal_28 == 11)
			{
				iLocal_28 = 10;
			}
		}
		else
		{
			func_646(Local_1618[2 /*7*/], func_992(iLocal_29, iVar0, iVar1));
		}
	}
}

void func_849(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		func_995((*Local_125[iParam0 /*52*/])[0 /*17*/], 0);
		func_995((*Local_125[iParam0 /*52*/])[1 /*17*/], 0);
		func_995((*Local_125[iParam0 /*52*/])[2 /*17*/], 0);
	}
	else
	{
		func_996((*Local_125[iParam0 /*52*/])[0 /*17*/], fParam1);
		func_996((*Local_125[iParam0 /*52*/])[1 /*17*/], fParam1);
		func_996((*Local_125[iParam0 /*52*/])[2 /*17*/], fParam1);
	}
}

bool func_850(int iParam0, int iParam1, float fParam2)
{
	return func_952(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_851(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_852(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_853(var uParam0)
{
	if (func_852(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_997(uParam0) || func_852(&(uParam0->f_3), 4)) && !func_852(&(uParam0->f_3), 256))
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
	if (func_998(uParam0))
	{
		func_86();
	}
	if (!func_852(&(uParam0->f_3), 16))
	{
		if (func_403(uParam0))
		{
			if (func_470(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_854(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (func_999(iParam0, fParam1, fParam2, bParam3, uParam4, fParam5))
	{
		return 1;
	}
	return 0;
}

int func_855(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_1000(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_852(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_685(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_1001(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_852(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_1002(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_856(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_1003(vParam1, 1);
	if (!func_852(&(uParam0->f_3), 32))
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
	func_74(uParam0);
	func_1004(&(uParam0->f_3), 1);
}

Vector3 func_857(vector3 vParam0)
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

float func_858(vector3 vParam0, vector3 vParam3)
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

bool func_859(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_860()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_751(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_861(int iParam0, int iParam1)
{
	if (func_751(iParam0, 1, 1))
	{
		func_133((*Global_1955500)[iParam0 /*16*/], iParam1);
	}
}

var func_862()
{
	return Global_1935436->f_9;
}

void func_863(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

int func_864(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(*uParam0, sParam1);
	}
	return 0;
}

void func_865(var uParam0, char* sParam1)
{
	func_758(uParam0, sParam1, 0);
}

void func_866(int iParam0, int iParam1, bool bParam2)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_25(iParam0, iParam1);
	}
	else
	{
		func_9(iParam0, iParam1);
	}
}

void func_867(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_564((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

char* func_868()
{
	switch (iLocal_1641)
	{
		case 0:
			return "HOME_LN02ANA";
		case 1:
			return "HOME_LN03ANA";
		case 2:
			return "HOME_LN04ANA";
		default:
			break;
	}
	return "";
}

void func_869(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_110(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1005(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!VOLUME::_0x92A78D0BEDB332A3(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1006(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, 1, 0);
				}
				func_1005(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1007(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1007(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1006(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_870(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_427(&iVar1, -2147483648);
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

int func_871(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1() != -1)
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

int func_872(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_928(iParam0))
	{
		return 0;
	}
	uVar1 = func_1008(iParam0);
	iVar0 = uVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0 /*1157*/];
}

Vector3 func_873(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;

	vVar0 = { func_857(vParam1) };
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

void func_874(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, bool bParam14, var uParam15)
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
		iVar20 = func_1009(iParam0, iParam1);
		func_1010(&vVar0, &vVar10, iVar20, vParam3, vParam6, fParam9, fParam10, fParam11);
	}
	iVar21 = uParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&Var23, func_1011(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_1013(iParam0, func_1012(iParam0), iVar27, bParam14, &Var23, *(vVar0[iVar22 /*3*/]), *(vVar10[iVar22 /*3*/]), vParam6, iVar22, 0, -1082130432, fParam12, iParam13, uParam15);
		iVar22++;
	}
}

void func_875(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_642(1))
	{
		func_1014(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

void func_876(bool bParam0)
{
	if (bParam0)
	{
		func_1015(4);
	}
	func_1015(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

Vector3 func_877()
{
	return -435.3392f, 524.2387f, 97.60092f;
}

int func_878(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;

	if (!func_347(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1016(7);
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(iParam0);
		}
		if (!func_322(iVar0, 1) || (!(VOLUME::_0x92A78D0BEDB332A3(iParam5) && func_186(iVar0, iParam5, 1, 0)) && func_292(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (func_501(iVar0) && func_502(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*iParam1 = func_1017(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					*iParam1 = iVar0;
				}
			}
			else
			{
				*iParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			return 1;
		}
		if (func_322(*iParam1, 1))
		{
			if (!(func_254(*iParam1, 518218985) || func_254(*iParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*iParam1, 0);
				POPULATION::_0xF74E134F40192884(*iParam1, 2);
				if (!func_225(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vParam2, fParam12, -1, 0.25f, false, 40000f);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, VOLUME::_0xF70F00013A62F866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_225(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

int func_879(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return 1;
	}
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

int func_880(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, int iParam9)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_350(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*uParam2 = 0f;
		return 1;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return 0;
		}
	}
	if (func_1018(iParam0, fParam5))
	{
		if (func_1019(vVar0, iParam0, uParam1, uParam2, iParam3, fParam4, fParam5, bParam7, iParam9))
		{
			return 1;
		}
	}
	else if (!bParam7)
	{
		*uParam2 = 0f;
	}
	return 0;
}

int func_881(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_882(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_883(int iParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam0)
	{
		iParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= iParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]))
		{
			fVar2 = func_685(iParam0[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = iParam0[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_884(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_1020(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_1021(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1022(iVar0) < func_1023(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_1024(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_885()
{
	if (!func_402(1))
	{
		if (func_186(Global_35, ((*Global_1392194)[Local_1389.f_136 /*10*/])->f_5, 1, 0))
		{
			func_400("SP_EVENT_AREA_CASTORS_2_START", 0);
			func_401(1);
		}
	}
}

void func_886(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::_0xFC3DB99C8144CD81(iParam0, iParam1, iParam2, bParam3, 0);
	}
}

int func_887()
{
	int iVar0;

	if (func_27(32))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (func_618(&(iLocal_1794[iVar0]), Global_35, 0, 45f, 0) && PED::IS_PED_FACING_PED(&(iLocal_1794[iVar0]), Global_35, 67.5f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 1000, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(func_58(Local_1389.f_138), true, false), 60f, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
			TASK::TASK_PERFORM_SEQUENCE(&(iLocal_1794[iVar0]), iLocal_1818);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
			func_5(32);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_888()
{
	if (!func_353(0, 1, &(iLocal_1794[0]), 1))
	{
		return 0;
	}
	if (!func_358(vLocal_1578[8 /*3*/], 10f))
	{
		return 0;
	}
	if (!func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_889(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if ((iParam3 || func_110(iParam1[iVar0], 0, !bParam4)) && func_292(iParam0, iParam1[iVar0], 1, 1) < fParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 16384:
		case 131072:
			return 1;
		case 32:
		case 64:
		case 512:
		case 4096:
		case 8192:
		case 32768:
		case 65536:
		case 262144:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_891(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_892(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1025(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1026(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1027(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_1028(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1027(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_893(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, func_562(7));
	((*Local_125[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_822((*Local_125[iParam0 /*52*/])[0 /*17*/], 1);
	func_747(iParam0, 0, !func_50(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, func_562(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, func_562(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

var func_894(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_895(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_1029(sParam1));
}

void func_896(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

void func_897(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = iParam1;
}

int func_898(var uParam0, var uParam1)
{
	if (func_278(&(uParam0->f_5), 5f))
	{
		return 1;
	}
	if (func_147(uParam0->f_23, 2))
	{
		return 1;
	}
	if (((!func_347(uParam0->f_1) && !func_254(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_254(uParam0->f_1, -828834893))
	{
		return 1;
	}
	return 0;
}

int func_899(var uParam0, var uParam1)
{
	var uVar0;

	if (func_278(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (!func_147(uParam0->f_23, 16384))
	{
		return 1;
	}
	if (uParam0->f_1 != Global_35)
	{
		return 1;
	}
	if (!func_1030(&uVar0))
	{
		return 1;
	}
	return 0;
}

int func_900()
{
	int iVar0;

	if (!func_1031())
	{
		return 0;
	}
	if (!func_1032(&iVar0))
	{
		return 0;
	}
	if (!func_1033(iVar0))
	{
		return 0;
	}
	return func_1034(iVar0, 0);
}

int func_901(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_278(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (func_147(uParam0->f_23, 4))
	{
		return 1;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_147(uParam0->f_23, 512) || (iVar0 == joaat("weapon_unarmed") && iVar1 == joaat("weapon_unarmed")))
	{
		return 1;
	}
	return 0;
}

int func_902(int iParam0)
{
	int iVar0;

	iVar0 = func_356(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_903(var uParam0, var uParam1)
{
	if (func_278(&(uParam0->f_5), 15f))
	{
		return 1;
	}
	if (func_147(uParam0->f_23, 4096) && func_254(uParam0->f_1, 1245594896))
	{
		return 0;
	}
	if (func_147(uParam0->f_23, 256))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, 1) == 8)
	{
		return 1;
	}
	return 0;
}

void func_904(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_905(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_450(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_450(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

float func_906(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_907(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_1035(iParam0);
		return func_1036(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_908(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_117(iParam0);
	func_1037(iVar0);
	func_1038(iParam3, sParam1, iParam2);
}

int func_909(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_685(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_910(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.55f, -1082130432);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, iParam2, 2f, 0.2f, -1082130432);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (bParam3)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		*uParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, 1) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, 1) != 1)
	{
		return 1;
	}
	return 0;
}

int func_911(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		return func_94(uParam1, sParam4, iParam2, iParam3, iParam7, iParam9, 1, 1);
	}
	return func_95(iParam2, iParam3, sParam4, iParam5, fParam6, iParam7, bParam8, iParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_912(var uParam0)
{
	int iVar0;

	if (uParam0->f_75 != 0)
	{
		func_914(uParam0->f_75, 0, 1065353216, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		func_915(uParam0->f_70, 0, 1065353216, 1, 0, 0, 0, -1);
	}
	if (func_967(uParam0->f_74, 0))
	{
		func_1039(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (func_1040() + uParam0->f_72);
			func_1041(iVar0);
		}
		else
		{
			func_1042(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		func_892(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216, 0);
	}
}

int func_913(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_285(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_1043(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1044(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1045(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_225(vParam2))
			{
				return 0;
			}
			*uParam0 = func_1046(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_816(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1047(1))
			{
				func_818(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_1048(*uParam0, 0, 1);
		}
		return 0;
	}
	if (!bParam16)
	{
		if (func_1049(*uParam0, 0))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				func_818(*uParam0, 0, 1);
			}
		}
		else if (!PED::_0xA911EE21EDF69DAF(Global_35))
		{
			func_818(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1047(1))
		{
			func_818(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_285(*uParam0))
			{
				func_286(uParam0, 1, 1);
				return 0;
			}
		}
	}
	if ((!bParam17 && func_1050(*uParam0, 1)) || (bParam17 && func_1051(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_1052(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_914(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_286(uParam0, 1, 1);
		return 1;
	}
	return 0;
}

void func_914(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1053(iParam0, sParam4, iParam5);
	}
	func_1054(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_915(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1055(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1053(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1054(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

var func_916(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_917(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1056(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1057(iParam0, 1);
			}
			else
			{
				func_1058(iParam0, 1);
			}
		}
		else
		{
			func_1059(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_1060())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_918(int iParam0, int iParam1)
{
	func_917(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_919(int iParam0, bool bParam1)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1)
		{
			return 0;
		}
		if (bParam1)
		{
			return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) >= 0.99f;
		}
		else
		{
			return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= -0.99f;
		}
	}
	return 0;
}

int func_920(bool bParam0)
{
	float fVar0;

	fVar0 = func_1061(1986792065);
	if (bParam0)
	{
		if (fVar0 < fLocal_1646)
		{
			return 1;
		}
	}
	else if (fVar0 > fLocal_1646)
	{
		return 1;
	}
	fLocal_1646 = fVar0;
	return 0;
}

Vector3 func_921(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_922(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1062(uParam0, sParam1, sParam2) };
	if (!func_225(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

bool func_923(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return true;
	}
	return ANIMSCENE::_0xD8254CB2C586412B(*uParam0, 0);
}

int func_924(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	if (!func_393(iParam1))
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
		func_331(iParam0, 0);
		if (bParam3)
		{
			func_332(iParam0, 5);
		}
		else
		{
			func_332(iParam0, 6);
		}
		func_1063(iParam0, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam2);
			if (!func_107(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_925(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_926(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1064(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1065(iParam0))
	{
		return 0;
	}
	if (func_1066(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1067(iParam0, 1)) || func_735(32768))
	{
		if (!func_1067(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1068())
	{
		return 0;
	}
	return 1;
}

void func_927(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_928(int iParam0)
{
	return iParam0 > -1;
}

int func_929(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_930(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_931(int iParam0)
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

void func_932(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1069(iParam0, iParam1))
		{
			if (func_1070(iParam0, iParam1))
			{
				if (func_1071(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1072(iParam0);
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

void func_933(int iParam0, int iParam1, bool bParam2)
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

void func_934(int iParam0, bool bParam1)
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

void func_935(int iParam0, int iParam1)
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

int func_936(int iParam0)
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

int func_937(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return 0;
	}
	return func_1074(iParam0);
}

int func_938()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_939(int iParam0, bool bParam1)
{
	switch (func_1075(iParam0))
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

void func_940(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_1076(iParam0))
	{
		iVar1 = func_941(iParam0, iVar0);
		if (iVar1 != 0 && MAP::_0x3F81EA4275D39D6F(iVar1))
		{
			MAP::_0xDA98246C7A3C2189(iVar1);
		}
		iVar0++;
	}
}

int func_941(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_942(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (func_1077(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_269(iVar2, uParam1))
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

bool func_943(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_944(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_945(int iParam0)
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
	iVar0 = func_1016(iParam0);
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
	if (func_1078(iParam0, 64))
	{
		func_946(iParam0);
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
	bVar3 = func_937(42);
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
				func_1079(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_946(iParam0);
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
		if (func_1080(1) < 1)
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
		func_1081(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1078(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1082(iParam0);
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
	fVar15 = func_1083(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1084(iParam0))
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
		func_1085(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1086(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if (func_453(iVar0) && !bVar9)
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
	iVar21 = func_1080(iParam0);
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

void func_946(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_947()
{
	if (func_1087())
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

void func_948(var uParam0, var uParam1)
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

int func_949(bool bParam0, var uParam1, var uParam2)
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

int func_950(var uParam0)
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

void func_951(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_185(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_132(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

bool func_952(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_953(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_954(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_955()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

var func_956(var uParam0)
{
	return uParam0->f_25;
}

struct<4> func_957(bool bParam0)
{
	return func_800(1328661203, func_1088(), -1591664384, bParam0);
}

int func_958(int iParam0)
{
	vector3 vVar0;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_959(bool bParam0)
{
	int iVar0;

	iVar0 = func_968(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_800(923904168, func_957(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_800(923904168, func_957(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_800(923904168, func_957(bParam0), -740156546, 0);
}

int func_960(int iParam0, bool bParam1)
{
	if (func_962(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1089(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_961(bool bParam0)
{
	int iVar0;

	iVar0 = func_968(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_800(271701509, func_957(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_800(271701509, func_957(bParam0), 12999093, 0);
}

int func_962(int iParam0)
{
	struct<2> Var0;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_963(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_962(iParam0);
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

int func_964(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_968(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_965(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_800(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_968(bParam6), &Var0, 0);
	return uVar4;
}

int func_966(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_968(0);
	*uParam1 = { func_800(iParam0, func_959(0), iParam3, 0) };
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

int func_967(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_968(bool bParam0)
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

int func_969(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_970(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_971(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_1090(iParam0, uParam1))
		{
			if (!func_147(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_576(uParam2, 0, 0, 1, 0);
				func_132(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_147(uParam1->f_10, 1))
		{
			func_1091(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_185(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_972(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_147(iParam4, 32);
		func_748(iParam1, uParam2, 0);
		iVar5 = func_1092(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_576(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_147(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_147(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_147(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_147(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_147(iParam4, 8388608) || func_147(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_147(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_147(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_582(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_582(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_147(iParam4, 67108864))
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
				iParam6 = func_1093(uParam0);
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
			if (func_147(iParam4, 268435456))
			{
				iVar8 = func_1094(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1095(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_582(iParam1, 23))
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
			if (func_147(iParam4, 2) || func_147(iParam4, 16))
			{
				func_973(*uParam0, 1, 1);
			}
			else
			{
				func_973(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_973(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

int func_974(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1096(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_975(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1097(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_147(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_976(int iParam0)
{
	if (func_147(iParam0, 4))
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
	if (func_147(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_147(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_977(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_1047(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_1098(Global_35)) || func_1099(Global_35)) || func_1100(Global_35));
	fVar12 = -1f;
	if (func_403(&(iParam1->f_13)))
	{
		fVar12 = func_348(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_285(((*uParam4)[iVar0 /*17*/])->f_6);
		func_1101(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1102(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1103(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_576(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_867(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_748(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_1104(iParam1, fParam6, iParam1->f_9))
					{
						func_74(&(iParam1->f_18));
						if (bVar6)
						{
							func_867(uParam4, 0, 0);
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
		func_1105(iParam1, fParam2);
	}
	return bVar5;
}

void func_978(var uParam0)
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

void func_979(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1106((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_1105(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_980(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_1107(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1108(iParam1, 0);
				func_748(iParam1, uParam2, func_582(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_981(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_74(&(iParam1->f_18));
			return 0;
		}
		else if (func_403(&(iParam1->f_18)))
		{
			func_262(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_403(&(iParam1->f_18)))
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
	return func_278(&(iParam1->f_18), fParam2);
	return 1;
}

void func_982(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1101(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_983(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_984(int* iParam0)
{
	if (func_582(iParam0, 0))
	{
		if (func_1109(iParam0))
		{
			func_983(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_985(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_986(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_943(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_987(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_988(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_989(int iParam0, int iParam1)
{
	int iVar0;

	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_990(int iParam0)
{
	int iVar0;

	if (ANIMSCENE::_0x25557E324489393C(&(Local_1618[2 /*7*/])))
	{
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[2 /*12*/])->f_8, "HAMMER");
		func_281((Local_386.f_690[2 /*12*/])->f_8, 1, 1);
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[4 /*12*/])->f_8, "plank01");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[5 /*12*/])->f_8, "plank02");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[6 /*12*/])->f_8, "plank04");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[7 /*12*/])->f_8, "plank03");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[8 /*12*/])->f_8, "plank05");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[9 /*12*/])->f_8, "nail01");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[10 /*12*/])->f_8, "nail02");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[11 /*12*/])->f_8, "nail03");
		func_509(Local_1618[2 /*7*/], (Local_386.f_690[12 /*12*/])->f_8, "nail04");
	}
	if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[2 /*12*/])->f_8))
	{
		PHYSICS::ACTIVATE_PHYSICS((Local_386.f_690[2 /*12*/])->f_8);
	}
	iVar0 = 4;
	while (iVar0 <= 12)
	{
		if (!ENTITY::_0x083D497D57B7400F((Local_386.f_690[iVar0 /*12*/])->f_8))
		{
			PHYSICS::ACTIVATE_PHYSICS((Local_386.f_690[iVar0 /*12*/])->f_8);
		}
		iVar0++;
	}
	func_307(Local_1618[2 /*7*/]);
	func_841(11);
	if (func_100(iParam0, 0))
	{
		func_454(iParam0, 0, 1, 0, 0);
	}
}

bool func_991(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
}

char* func_992(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_KNEEL";
						case 1:
							return "PBL_F_NEG_KNEEL";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_KNEEL";
						case 1:
							return "PBL_BL_NEG_KNEEL";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_KNEEL";
						case 1:
							return "PBL_BR_NEG_KNEEL";
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND01";
						case 1:
							return "PBL_F_NEG_STAND01";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND01";
						case 1:
							return "PBL_BL_NEG_STAND01";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND01";
						case 1:
							return "PBL_BR_NEG_STAND01";
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND02";
						case 1:
							return "PBL_F_NEG_STAND02";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND02";
						case 1:
							return "PBL_BL_NEG_STAND02";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND02";
						case 1:
							return "PBL_BR_NEG_STAND02";
					}
					break;
			}
			break;
	}
	return "";
}

bool func_993(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
}

int func_994(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (iLocal_27 == 0)
	{
		return 0;
	}
	if (iLocal_27 == 5 || iLocal_27 == 8)
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, -1053617727))
	{
		return 0;
	}
	if (PED::_0x9337183FDA2E9035(*uParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*uParam0, PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	func_142(262144);
	if (func_1110(iLocal_335) != iParam1)
	{
		return 0;
	}
	if (iLocal_334 == -1)
	{
		return 0;
	}
	return 1;
}

void func_995(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_822(iParam0, 7);
}

void func_996(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_821(iParam0, 7);
}

int func_997(var uParam0)
{
	if (!func_1111(*uParam0, uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_998(var uParam0)
{
	if (!func_997(uParam0))
	{
		return 0;
	}
	if (func_1112(uParam0->f_7, uParam0->f_8, func_852(&(uParam0->f_3), 4)))
	{
		return 1;
	}
	if (!func_852(&(uParam0->f_3), 4))
	{
		if (func_1113())
		{
			return 1;
		}
	}
	return 0;
}

int func_999(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
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
	if (func_1114(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return 1;
	}
	return 0;
}

bool func_1000(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

int func_1001(vector3 vParam0, var uParam3)
{
	if (!func_852(&(uParam3->f_3), 8))
	{
		return 1;
	}
	if (func_823(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return 1;
	}
	return 0;
}

bool func_1002(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_1003(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_1003(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_1115(0) };
	vVar3 = { func_857(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_1004(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1005(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam22)
	{
		func_1116(iParam0, iParam1, iParam18);
	}
}

int func_1006(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_39))
	{
		return 1;
	}
	if (func_247(uParam0->f_40, 1, 1) < uParam0->f_42)
	{
		return 0;
	}
	if (func_186(Global_35, uParam0->f_39, 1, 0))
	{
		return 1;
	}
	if (!func_186(uParam0->f_40, uParam0->f_39, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1007(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_1117(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

int func_1008(int iParam0)
{
	if (!func_928(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_642(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_1009(int iParam0, int iParam1)
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

void func_1010(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
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
			vVar5 = { func_857(vParam6 - vParam3) };
			vVar8 = { func_1118(vVar5, 0f, 0f, 1f) };
			*((*uParam0)[0 /*3*/]) = { vParam3 + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 + vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam1)[0 /*3*/]) = { vVar5 };
			*((*uParam1)[1 /*3*/]) = { vVar5 };
			*((*uParam1)[2 /*3*/]) = { vVar5 };
			break;
		case 1:
			vVar2 = { func_1120() };
			*((*uParam1)[0 /*3*/]) = { func_857(vVar2) };
			*((*uParam1)[1 /*3*/]) = { -*((*uParam1)[0 /*3*/]) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_1120() };
			*((*uParam1)[0 /*3*/]) = { func_857(vVar2) };
			func_1121(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[1 /*3*/]) = { func_857(vVar2) };
			func_1121(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[2 /*3*/]) = { func_857(vVar2) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - *((*uParam1)[2 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_1119(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

var func_1011(int iParam0, int iParam1)
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

var func_1012(int iParam0)
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

void func_1013(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, var uParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, var uParam18, var uParam19)
{
	struct<24> Var0;

	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_1122(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
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
		func_1123(Global_1359489->f_63[iParam14 /*24*/]);
	}
}

void func_1014(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_929(iParam0))
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

void func_1015(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1016(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1017(var uParam0, var uParam1)
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

	uParam1->f_10 = func_754(uParam1->f_10);
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
		if (func_225(uParam1->f_6))
		{
		}
	}
	bVar0 = func_938();
	if (*uParam1)
	{
		if (bVar0 && !func_939(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1124(5))
			{
				func_1125(5);
				func_1126(5);
				func_1127(0);
				func_1128(0);
			}
		}
	}
	if (func_1129(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_939(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_939(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1016(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_944(iVar1))
	{
		bVar3 = true;
		if (func_1130(iVar1))
		{
			bVar4 = true;
		}
		if (func_1131(iVar1))
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
				func_1132(uParam1->f_10);
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
			if (!func_1124(0) && func_1124(1))
			{
				func_1133(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1134())
			{
				func_1135();
			}
			func_1127(0);
			func_1128(0);
			func_1136(uParam1->f_6);
		}
	}
	if (!func_944(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1137(uParam1->f_10) == 0 || func_1138(uParam1->f_10) == 0) || func_1139(uParam1->f_10) == 0)
			{
				func_1140(uParam1->f_10);
			}
			func_1141(uParam1->f_10);
			func_1142(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1016(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_944(iVar1))
	{
		bVar3 = true;
		if (func_1130(iVar1))
		{
			bVar4 = true;
		}
		if (func_1131(iVar1))
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
			if (!func_225(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1143(uParam1->f_10))
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
			Var8 = { func_1144(uParam1->f_10) };
			Var10 = { func_1145() };
			func_1146(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_506(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1147(uParam1->f_10);
		if (uParam1->f_2 && !func_225(uParam1->f_6))
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
	func_504(uParam1->f_10);
	if (func_506(uParam1->f_10))
	{
		iVar16 = func_505(uParam1->f_10);
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

int func_1018(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_350(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1019(vector3 vParam0, int iParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_1148(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_1149(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_1150(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*uParam6 = 1;
		if (*uParam5 != 0f)
		{
		}
		if (*uParam5 <= 0f)
		{
			*uParam5 = func_467();
		}
		else if ((func_467() - *uParam5) > fParam7)
		{
			*uParam5 = 0f;
			return 1;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		*uParam6 = 1;
	}
	return 0;
}

bool func_1020(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_1021(int iParam0)
{
	if (!func_1151(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_1022(int iParam0)
{
	if (func_1151(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_1023(int iParam0)
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

void func_1024(int iParam0, int iParam1, float fParam2, var uParam3, bool bParam4)
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
	func_1152(iParam0, uParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_1025(int iParam0)
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

int func_1026(int iParam0)
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

void func_1027(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_1153();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1154(iParam0);
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
	if (func_937(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_955())
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
	Global_40.f_11095.f_35 = func_1155(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1153();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1156(iVar1);
		func_1158(func_1157(), 0, 4000);
		func_1159(Global_40.f_11095.f_35);
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
		func_1160(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_738(func_1161(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1026(14))
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
					sParam4 = func_1162(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1163(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1163(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_738(func_1161(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1026(4))
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
					sParam4 = func_1162(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1163(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1163(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1161(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1164(10, 1);
	}
}

void func_1028(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

char* func_1029(char* sParam0)
{
	return sParam0;
}

int func_1030(var uParam0)
{
	if (-1829635046 == func_1165(81053684))
	{
		if (func_1032(uParam0))
		{
			return 1;
		}
	}
	else if (func_1166(-525676072, uParam0))
	{
		if (func_1032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1031()
{
	return Global_1946804->f_2792;
}

int func_1032(int iParam0)
{
	if (func_1166(81053684, iParam0))
	{
		return 1;
	}
	if (func_1166(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1033(int iParam0)
{
	if (func_1167())
	{
		return 0;
	}
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_1168(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_1034(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1169(iParam0);
	if (func_1170(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1030(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1171();
			}
			else
			{
				iVar0 = func_1172();
			}
		}
		else if (func_154(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1173();
		}
		else
		{
			iVar0 = func_1174();
		}
	}
	else if (func_1032(&iVar2))
	{
		if (func_1170(iVar2, -1303648999))
		{
			iVar0 = func_1171();
		}
		else
		{
			iVar0 = func_1172();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1173();
	}
	else
	{
		iVar0 = func_1174();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_1035(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1036(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_1037(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1047(1) < iParam0)
	{
		iParam0 = func_1047(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_1161(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1038(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1163(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1039(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_1175(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1176(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1177(iParam0, bParam2);
	iVar2 = 0;
	if (func_1178(iParam0, 0, 0) == 0)
	{
		if (func_1179(iParam0))
		{
			iVar5 = func_1180(iParam0);
			iVar6 = func_1181(iVar5);
			iVar7 = func_1182(iVar6) + 1;
			func_1183(iVar5);
			if (func_1184(38))
			{
				func_716(483, 0);
			}
			else
			{
				func_716(482, 0);
			}
			if (iVar7 == func_1185(iVar6))
			{
				func_1039(func_1186(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_938() && func_1187(4))
				{
					if (func_938() && (func_1188(38) || func_1184(38)))
					{
						func_1190(38, func_1186(iVar6), 0, 0, func_1189(), 0, -1, 0);
						func_1191(2);
					}
					else
					{
						func_1190(38, func_1186(iVar6), 0, 0, func_1189(), 0, -1, 0);
						func_1191(1);
					}
				}
			}
			else if (func_938() && func_1187(4))
			{
				if (func_938() && (func_1188(38) || func_1184(38)))
				{
					func_1190(38, 0, 0, 0, func_1189(), 0, -1, 0);
					func_1191(2);
				}
				else
				{
					func_1190(38, 0, 0, 0, func_1189(), 0, -1, 0);
					func_1191(1);
				}
			}
			if (func_938() && func_1187(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_938() && (func_1188(38) || func_1184(38)))
					{
						func_1192(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1192(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_958(iParam0) == -1037537535)
	{
		if ((!func_1170(iParam0, 866047851) && !func_1170(iParam0, -1979000645)) && !func_1170(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1193(iParam0, 8388608) && !func_937(28))
	{
		func_1194(28);
	}
	if (!bVar3)
	{
		if (func_1170(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_962(iParam0) == -1447088266)
			{
				iVar1 = func_1196(func_1195(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_1() == -1)
					{
						func_1197(iVar1);
					}
					if (func_802(0) && func_547(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_803(iParam0, iVar0, iParam5);
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
					if (func_1() == -1)
					{
						func_1197(iParam0);
					}
					if (func_802(0) && func_547(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_803(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_958(iParam0) == -427144552)
		{
			if (!func_1198(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_958(iParam0) == 307971639 && func_970(iParam0))
		{
			if (!func_1199(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1170(iParam0, 866047851))
		{
			func_1200(iParam0);
		}
		else if (func_1170(iParam0, 2000026003))
		{
			func_1201(iParam0);
		}
		else if (func_1170(iParam0, -103750053))
		{
			func_738(func_1202(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_738(func_737(-717883113, 2091222383), iVar0);
		}
		else if (func_1170(iParam0, -121341956) && !func_1170(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_939(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_716(498, 0);
				}
			}
			if (func_1170(iParam0, -2017733358) || func_1170(iParam0, -1369131378))
			{
				func_1203(iParam0);
			}
		}
		else if (func_1170(iParam0, -136654233))
		{
			if (func_1170(iParam0, -1021472396))
			{
			}
		}
		else if (func_1170(iParam0, -1466706512) && func_1170(iParam0, 1147021565))
		{
			func_716(484, 0);
		}
		else if (func_1170(iParam0, 1147021565) && func_1170(iParam0, -524514947))
		{
		}
		else if (func_1170(iParam0, 554195525))
		{
		}
		else if (func_1170(iParam0, 589988438))
		{
			if (func_1204())
			{
				func_915(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1170(iParam0, 787083290) && func_1170(iParam0, 949916894))
		{
			func_1205(iParam0);
		}
		else if (func_1170(iParam0, -1718133314))
		{
			func_1206(iParam0);
		}
		else if (func_1170(iParam0, -1738650224))
		{
			func_1207(iParam0);
		}
		else if (func_1170(iParam0, -1112814642) && func_1170(iParam0, 949916894))
		{
			func_1208(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1170(iParam0, 1841149704))
		{
			func_1209();
		}
		else if (func_1170(iParam0, 606799272))
		{
			func_1210(iParam0, iParam1);
			func_1211(iParam0);
		}
		else if (func_1170(iParam0, -1112814642) && func_1170(iParam0, -1697809989))
		{
			func_1212(iParam0, 0, 0, 0);
		}
		else if (func_1170(iParam0, -2017733358) || func_1170(iParam0, -1369131378))
		{
			func_1203(iParam0);
		}
		else if (func_1170(iParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return 0;
			}
			func_1213(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1170(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_1168(215778062, 1, 0))
					{
						func_1039(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_1168(670273567, 1, 0))
					{
						func_1039(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_1168(-967317137, 1, 0))
					{
						func_1039(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_1168(526074061, 1, 0))
					{
						func_1039(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_1168(-1045488665, 1, 0))
					{
						func_1039(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_1168(471514780, 1, 0))
					{
						func_1039(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1170(iParam0, -839724752) && func_1193(iParam0, 4))
		{
			if (!func_1184(42))
			{
				func_1214(iParam0);
			}
		}
		else if (func_1170(iParam0, 1399091007))
		{
			func_1215(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1170(iParam0, 1248798204))
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
				func_1039(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1194(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_1216(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1217(&bVar9, 0))
				{
					func_547(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_1() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_1216(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_716(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1218();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1219();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1220();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1221();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1222();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1223(499813453, 854119837, 0);
				func_1224(499813453, 0);
				func_1225(1);
				break;
			case 2127812557:
				func_1223(499813453, -1292544588, 0);
				func_1224(499813453, 0);
				func_1225(2);
				break;
			case 808991383:
				func_1223(499813453, -1003325394, 0);
				func_1224(499813453, 0);
				func_1225(4);
				break;
			case 1134518629:
				func_1223(666607663, -335460405, 0);
				func_1224(666607663, 0);
				func_1226(1);
				break;
			case 902940106:
				func_1223(666607663, 903797617, 0);
				func_1224(666607663, 0);
				func_1226(2);
				break;
			case -418174898:
				func_1223(666607663, 669728650, 0);
				func_1224(666607663, 0);
				func_1226(4);
				break;
			case -648114971:
				func_1223(-220219788, 1214120047, 0);
				func_1224(-220219788, 0);
				func_1227(1);
				break;
			case 211153747:
				func_1223(-220219788, 655769340, 0);
				func_1224(-220219788, 0);
				func_1227(2);
				break;
			case -32876996:
				func_1223(-220219788, 885316185, 0);
				func_1224(-220219788, 0);
				func_1227(4);
				break;
			case 1191437462:
				func_1223(218622660, -1491419385, 0);
				func_1224(218622660, 0);
				func_1228(1);
				break;
			case 1119149048:
				func_1223(218622660, 1809565830, 0);
				func_1224(218622660, 0);
				func_1228(2);
				break;
			case 506073827:
				func_1223(390004462, -628873767, 0);
				func_1224(390004462, 0);
				func_1229(1);
				break;
			case -1876986168:
				func_1223(390004462, -405421956, 0);
				func_1224(390004462, 0);
				func_1229(2);
				break;
			case 2142623221:
				func_1223(390004462, -1108972386, 0);
				func_1224(390004462, 0);
				func_1229(4);
				break;
			case 1508215381:
				func_1223(6410548, 1053716392, 0);
				func_1224(6410548, 0);
				func_1230(1);
				break;
			case -888935280:
				func_1223(6410548, 806507056, 0);
				func_1224(6410548, 0);
				func_1230(2);
				break;
			case -1252474566:
				func_1223(6410548, 1571925350, 0);
				func_1224(6410548, 0);
				func_1230(4);
				break;
			case -1465702449:
				func_1223(6410548, 1330352282, 0);
				func_1224(6410548, 0);
				func_1230(8);
				break;
			case -21093309:
				func_1232(242, func_1231(-21093309), 0);
				break;
			case 204375141:
				func_1232(240, func_1231(204375141), 0);
				break;
			case -417963070:
				func_1232(241, func_1231(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1233(594, 1934060482, 1, 1);
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
					func_1233(594, 1110018439, 1, 1);
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
					func_1233(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1233(594, -1228016946, 1, 1);
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
					func_1233(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1233(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_716(488, 0);
				break;
			case 1613651027:
				func_716(491, 0);
				break;
			case -885810591:
				func_716(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_1039(func_1234(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1039(func_1235(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_937(1))
				{
					func_716(487, 0);
				}
				break;
			case -898386032:
				func_716(486, 0);
				break;
			case -2035110427:
				if (func_1() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_716(496, 0);
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
		func_1236(&iVar10);
		if (!func_1237(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_802(0))
		{
			return 1;
		}
		if (func_958(iParam0) == -1037537535)
		{
			func_1238(iParam0);
		}
		if (func_1170(iParam0, -1979000645))
		{
			func_1239(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_802(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_1039(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1240(iVar2, 0);
		}
	}
	Var35 = { func_1241(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_1242(iParam0);
	if (sParam6 > 0f)
	{
		if (func_1170(iParam0, -839724752))
		{
			func_1243(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1244(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_1040()
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_1245(661720433);
}

void func_1041(int iParam0)
{
	struct<2> Var0;

	if (func_1() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { func_1161(661720433) };
		STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
	}
}

void func_1042(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_1() != -1)
	{
		return;
	}
	if (func_1030(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_1246())
	{
		iVar1 = 0;
	}
	func_1247(iParam0, iVar1);
}

int func_1043(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_943(iVar0, 2))
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
				func_1248(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1044(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_285(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_1045(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_943(iVar0, 2))
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
		func_1248(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1046(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
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
	if (func_225(vParam2))
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
		if (func_943(iVar0, 2))
		{
			if (func_1249(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
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
		func_1248(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_1048(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	func_986(iVar0, iParam1);
}

bool func_1049(int iParam0, int iParam1)
{
	if (iParam1 && !func_285(iParam0))
	{
		return false;
	}
	return !func_943(iParam0, 4);
}

bool func_1050(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1051(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1052(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1037(iParam0);
	if (bParam3)
	{
		func_1038(iParam0, sParam1, iParam2);
	}
}

void func_1053(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1163(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1054(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1250())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1163(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1251(iVar0);
			func_1252(iVar0, 0, 0);
		}
		func_1163(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_738(func_1161(1644987397), iVar1);
	}
}

int func_1055(int iParam0, var uParam1, int iParam2)
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
	if (uParam1 && func_1168(1811977508, 1, 0))
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
			if (func_967(iVar25, 0) && func_1170(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1056(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_1057(int iParam0, int iParam1)
{
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_1058(int iParam0, int iParam1)
{
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_1059(int iParam0, int iParam1)
{
	if (func_835(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_1060()
{
	return 1;
}

float func_1061(int iParam0)
{
	func_834(iParam0, 0, 0);
	if (func_835(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
	}
	return -1f;
}

Vector3 func_1062(var uParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

void func_1063(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetRegion", iParam1);
}

bool func_1064(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1065(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1067(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1067(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1066(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1067(iParam0, 65536) && !func_1067(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1067(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1067(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1067(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1068()
{
	return Global_1905944->f_5694;
}

bool func_1069(int iParam0, int iParam1)
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

int func_1070(int iParam0, int iParam1)
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

bool func_1071(int iParam0, int iParam1)
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
	if (!func_1069(iParam0, iVar0))
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

void func_1072(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1073(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1074(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1075(int iParam0)
{
	if (!func_385(iParam0))
	{
		return -1;
	}
	return func_1253(iParam0);
}

int func_1076(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

int func_1077(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (uParam3 && func_1254(iParam0))
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
		if (func_98(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_1078(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1079(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1256(func_1255(255), 109029619));
	}
	else if (func_1257())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_955();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1080(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_1081(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1256(func_1255(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1257())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_955())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1082(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1083(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1084(int iParam0)
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

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1137(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1080(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1080(iParam0) + 1;
	fVar6 = func_1258(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1259(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1085(int iParam0)
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

void func_1086(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1087()
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

struct<4> func_1088()
{
	struct<4> Var0;

	return Var0;
}

int func_1089(int iParam0, bool bParam1)
{
	if (func_970(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_968(bParam1), iParam0, 0);
}

int func_1090(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1260((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_1091(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1106((*uParam0)[iVar0 /*17*/]))
		{
			func_821((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1092(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1261(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_285(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_821((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_1093(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1262(*uParam0);
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

int func_1094(var uParam0, int iParam1)
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

void func_1095(int* iParam0, int* iParam1)
{
	if (!func_582(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_821(iParam1, 19);
			func_1108(iParam0, 23);
			func_1263(iParam1, 2);
		}
	}
}

int func_1096(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1264(16))
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
					func_1265(16);
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

void func_1097(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1261(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

var func_1098(int iParam0)
{
	return (func_1266(iParam0, 4) || func_1266(iParam0, 5));
}

int func_1099(int iParam0)
{
	return func_1266(iParam0, 7);
}

int func_1100(int iParam0)
{
	return func_1266(iParam0, 6);
}

void func_1101(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1106(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1261(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_1102(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1267(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1049(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_818(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_818(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_1268(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_1103(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1051(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1269(iParam1, 1))
	{
		func_1270(iParam1, 1);
		return 1;
	}
	return 0;
}

int func_1104(int* iParam0, float fParam1, var uParam2)
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

void func_1105(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_1106(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_1107(int iParam0)
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

void func_1108(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_1109(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 64;
		case 1:
			return 65;
		case 2:
			return 66;
		default:
			break;
	}
	return -1;
}

int func_1111(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_403(&uParam0))
	{
		return 0;
	}
	if (func_470(&uParam0) <= iParam3 + 500)
	{
		return 0;
	}
	return 1;
}

int func_1112(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_1271(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return 1;
		}
	}
	if (!func_1000(fParam0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_1113()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, -1879280170) || PAD::IS_CONTROL_PRESSED(0, 1537201378)) || PAD::IS_CONTROL_PRESSED(0, -1175108432)) || PAD::IS_CONTROL_PRESSED(0, 1520437207)) || PAD::IS_CONTROL_PRESSED(0, -1292666904)) || PAD::IS_CONTROL_PRESSED(0, -640622144)) || PAD::IS_CONTROL_PRESSED(0, -455946723)) || PAD::IS_CONTROL_PRESSED(0, -1242632265)) || PAD::IS_CONTROL_PRESSED(0, -485697785)) || PAD::IS_CONTROL_PRESSED(0, -822242784)) || PAD::IS_CONTROL_PRESSED(0, 782960533)) || PAD::IS_CONTROL_PRESSED(0, -874806616))
	{
		return 1;
	}
	return 0;
}

int func_1114(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_685(Global_35, vParam0, 1);
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

Vector3 func_1115(int iParam0)
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
	return func_857((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_1116(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_1117(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
			PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	func_876(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

Vector3 func_1118(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_1119(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1272(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_1120()
{
	vector3 vVar0;

	vVar0 = { 1f, 0f, 0f };
	func_1121(&vVar0, &(vVar0.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return vVar0;
}

void func_1121(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

float func_1122(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_1123(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_23))
	{
		if (TASK::_0x5BA659955369B0E2(uParam0->f_23) != func_1273())
		{
			return 0;
		}
		else
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_23);
		}
	}
	if (func_729(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_1275(uParam0->f_3, uParam0->f_4, func_1274(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		TASK::_0xE69FDA40AAC3EFC0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

int func_1124(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1139(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_1125(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	func_1276(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1277(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1278(iParam0, 0);
	func_507(iParam0);
}

void func_1126(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_754(iParam0);
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
	func_1279(&Var0);
	func_1280(iParam0, Var0);
	func_1281(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1282(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1283(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1284(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1285(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1286(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1287(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1288(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1289(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

void func_1127(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1128(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1129(vector3 vParam0)
{
	return func_1290(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_1130(int iParam0)
{
	int iVar0;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_944(iParam0))
	{
		return 0;
	}
	iVar0 = func_1016(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1131(int iParam0)
{
	int iVar0;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_944(iParam0))
	{
		return 0;
	}
	iVar0 = func_1016(iParam0);
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

void func_1132(int iParam0)
{
	int iVar0;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1133(int iParam0, int iParam1)
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
	func_946(iParam0);
	func_946(iParam0);
	func_1291(iParam0, iParam1);
	func_1292(iParam0, iParam1);
	func_1293(iParam0, iParam1);
	iVar1 = func_1016(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1294(iVar1);
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
	iVar3 = func_1016(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1294(iVar3);
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
	func_756();
}

int func_1134()
{
	int iVar0;

	iVar0 = func_1295();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1135()
{
	int iVar0;

	iVar0 = func_1295();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1296(0);
}

void func_1136(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1137(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1138(int iParam0)
{
	iParam0 = func_754(iParam0);
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

int func_1139(int iParam0)
{
	iParam0 = func_754(iParam0);
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

void func_1140(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1297(&uVar0, &uVar1, &uVar2);
	func_1298(iParam0, uVar0);
	func_1299(iParam0, uVar1);
	func_1300(iParam0, uVar2);
	func_1301(iParam0, 1);
	func_1302(iParam0, 1);
}

void func_1141(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1303(iParam0, 1);
}

void func_1142(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_754(iParam0);
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

int func_1143(int iParam0)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1078(iParam0, 1);
}

struct<2> func_1144(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1304(iParam0, &uVar2))
	{
	}
	if (!func_1305(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1145()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1306(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1306(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1306(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1306(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1306(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1306(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1146(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1307(iParam0);
	func_1308(iParam0, uParam1);
	func_1309(iParam0);
	func_1310(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1311(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1147(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_1149(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1312(iParam1) };
	vVar3 = { func_1312(iParam2) };
	return func_1313(uParam0, vVar0, vVar3, iParam2);
}

int func_1150(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1312(iParam1) };
	return func_1313(uParam0, vVar0, vParam2, 0);
}

bool func_1151(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_1152(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1314(iParam0) == 1 && iParam7)
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
	if ((uParam1 || bParam6) || func_1() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_1153()
{
	int iVar0;

	iVar0 = func_1315();
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

int func_1154(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_1() != -1)
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
	fVar1 = func_581(MISC::ABSF(fVar1) < 1f, func_581(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1155(int iParam0, int iParam1, int iParam2)
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

int func_1156(int iParam0)
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

int func_1157()
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

void func_1158(int iParam0, bool bParam1, int iParam2)
{
	func_1316((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1317(iParam0);
}

void func_1159(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1318(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1160(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1319(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1320(iVar5, &iVar2, &iVar0))
			{
				if (!func_967(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1321(iVar2);
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
							if (func_958(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1153() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1153() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1322();
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

struct<2> func_1161(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_1162(int iParam0)
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

var func_1163(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1323(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1324(iParam0))
	{
		return 0;
	}
	if (!func_938())
	{
		return 0;
	}
	if (!func_1325(iParam0, &iVar0, &iVar1))
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

int func_1165(int iParam0)
{
	int iVar0;

	iVar0 = func_1327(func_1326(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1166(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1327(func_1326(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_962(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1167()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1328())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_1168(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_967(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_958(iParam0);
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
		if (!func_1329(iParam0, 1))
		{
			return false;
		}
	}
	return func_1178(iParam0, 0, bParam2) >= iParam1;
}

int func_1169(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1032(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1170(int iParam0, int iParam1)
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

int func_1171()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_1330())
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

int func_1172()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_1330())
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

int func_1173()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_1330())
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

int func_1174()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_1330())
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

int func_1175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_1331(iParam0) && func_1332(iParam0))
		{
			func_1333(iParam0, iParam1, 1, &iParam2, iParam3);
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

int func_1176(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_1334(iParam0, uParam1);
	Var0 = { func_796(iParam0, 0, 1) };
	iVar5 = func_1335(iParam0, &Var0, 0, 0);
	iVar6 = func_1089(iParam0, 0);
	if ((iVar5 > 1 && !func_1336()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1170(iParam0, -2051813666))
		{
			func_716(583, 1);
		}
		else
		{
			func_716(582, 0);
		}
	}
	if (func_1337(iParam0, &Var0, *uParam1, 0, 0))
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

void func_1177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1338(iParam0, -949239683))
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

int func_1178(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_958(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1339(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1340(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_968(bParam2), iParam0, 0);
	return iVar2;
}

bool func_1179(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_1180(iParam0) != 0;
}

int func_1180(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1341())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1342(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1181(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_1182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1341())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1181(iVar0))
		{
			if (func_1168(func_1342(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1183(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1343(48);
	func_1344(0, -1);
}

int func_1184(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_939(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_1185(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_1186(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_1187(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	return func_939(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1188(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_383(iParam0))
	{
		return 0;
	}
	return func_1345(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1189()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_1168(func_1346(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1190(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_938() && (func_1188(38) || func_1184(38)))
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
			if (func_938() && (func_1188(39) || func_1184(39)))
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
			iVar9 = func_1347(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_938() && (func_1188(41) || func_1184(41)))
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
			if (func_938() && (func_1188(49) || func_1184(49)))
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
			iVar9 = func_1347(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1348(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1349(iParam0, iVar13, iVar14))
	{
	}
	if (func_1350(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1351(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1352(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1353(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1354(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1191(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_938() && (func_1188(38) || func_1184(38)))
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
			if (func_938() && (func_1188(39) || func_1184(39)))
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
			if (func_938() && (func_1188(49) || func_1184(49)))
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
		if (func_938() && (func_1188(38) || func_1184(38)))
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
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1356(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1355(func_1186(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_938() && (func_1188(39) || func_1184(39)))
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
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_938() && (func_1188(49) || func_1184(49)))
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
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_733(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_1193(int iParam0, int iParam1)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_1194(int iParam0)
{
	if (!func_1073(iParam0))
	{
		return;
	}
	func_1357(iParam0);
	func_1358(iParam0);
}

int func_1195(int iParam0, bool bParam1)
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
	if (func_967(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1359(iVar0) || func_313(iVar0))
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

int func_1196(int iParam0, bool bParam1)
{
	if (!func_967(iParam0, 0))
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

void func_1197(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_312(iParam0))
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

int func_1198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	bVar0 = func_1196(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_1() == -1)
		{
			func_1197(bVar0);
			if (iParam1 == 1248274121)
			{
				func_1360(bVar0);
			}
		}
		if (!func_1337(iParam0, &uVar1, 1, 0, 0))
		{
			func_1333(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1361(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_547(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_547(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_547(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_955())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_549(bVar0))
				{
					func_547(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_547(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				iVar7 = func_109(Global_35, 2, 0, 1);
				if ((((func_312(iVar7) && !Global_43890) && iVar7 != bVar0) && !func_1168(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_312(iVar7) && func_1168(-1185145312, 1, 0))
				{
					if (!func_547(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_547(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_547(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_716(480, 1);
	}
	return 1;
}

int func_1199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_970(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_312(iVar4))
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
	if (func_1168(611073244, 1, 0) && iParam2 == -897553835)
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
		func_1232(func_1362(iParam0), func_1231(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_939(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_716(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_802(0))
	{
		if (func_803(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_1237(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_1200(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_1363()) || iParam0 != -615217896)
	{
		if (func_1364(Global_35, iParam0, &uVar0))
		{
			func_1216(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_1222();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_1222();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_1222();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1220();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1218();
			break;
	}
}

void func_1201(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1218();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1219();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1220();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1221();
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
			func_1222();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1365();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1366();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1202(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_1203(int iParam0)
{
	bool bVar0;

	bVar0 = func_1170(iParam0, -2017733358);
	if (func_1367() < 3)
	{
		if (bVar0)
		{
			if (func_1369(func_1368(iParam0), iParam0))
			{
				func_1232(79, func_1231(func_1368(iParam0)), 1);
			}
			else
			{
				func_1232(78, func_1231(func_1368(iParam0)), 1);
			}
		}
		else
		{
			func_1232(80, func_1231(func_1370(iParam0)), 1);
		}
	}
}

int func_1204()
{
	if (((((func_1371(839908568, 400) || func_1371(-1134030454, 400)) || func_1371(623353496, 400)) || func_1371(-344413337, 400)) || func_1371(-1664948962, 400)) || func_1371(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

void func_1205(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1190(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1192(51, 0, 0, 0, 0, -1, 0);
			func_1372(8192);
			break;
		case 581047644:
			func_1190(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1192(51, 0, 0, 0, 0, -1, 0);
			func_1372(524288);
			break;
		case -644199619:
			func_1190(39, 0, 0, 0, 0, 0, 1, 0);
			func_1192(39, 0, 0, 0, 0, -1, 0);
			func_1373(16);
			break;
		case 684296857:
			func_1190(41, 0, 0, 0, 0, 0, 1, 0);
			func_1192(41, 0, 0, 0, 0, -1, 0);
			func_1374(8);
			break;
		case 466137807:
			func_1190(49, 0, 0, 0, 0, 0, 1, 0);
			func_1192(49, 0, 0, 0, 0, -1, 0);
			func_1375(16);
			break;
		case -1087522507:
			func_1190(43, 0, 0, -1791518714, func_1376(1), 0, -1, 0);
			func_1377(1);
			break;
		case -405829000:
			func_1190(43, 0, 0, -2087881550, func_1376(2), 0, -1, 0);
			func_1377(2);
			break;
		case 378660860:
			func_1190(43, 0, 0, 1908068621, func_1376(4), 0, -1, 0);
			func_1377(4);
			break;
		case 1566111097:
			func_1190(43, 0, 0, 1611247019, func_1376(8), 0, -1, 0);
			func_1377(8);
			break;
		case 1276007140:
			func_1190(43, 0, 0, 1319635688, func_1376(16), 0, -1, 0);
			func_1377(16);
			break;
	}
}

void func_1206(int iParam0)
{
	if (func_1378() == 1)
	{
		if (func_1184(39))
		{
			func_716(342, 0);
		}
		else
		{
			func_716(343, 0);
			func_1373(1);
		}
	}
	if (func_1378() >= 30)
	{
		func_716(344, 0);
	}
	func_1190(39, 0, 0, 0, 0, 0, -1, 0);
	func_1192(39, 0, 0, func_1378(), 30, 1, 0);
}

void func_1207(int iParam0)
{
	if (func_1379() == 1)
	{
		if (func_1184(49))
		{
			func_716(409, 0);
		}
		else
		{
			func_716(410, 0);
			func_1375(1);
		}
	}
	if (func_1379() >= 10)
	{
		func_716(411, 0);
	}
	func_1190(49, 0, 0, 0, 0, 0, -1, 0);
	func_1192(49, 0, 0, func_1379(), 10, 1, 0);
}

void func_1208(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_716(437, 0);
			func_716(440, 0);
			func_1380(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_1190(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_1192(51, 0, 0, iVar0, func_1347(-949689219, 20), 1, 0);
			func_1372(1);
			func_1381(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1380(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_1190(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_1192(51, 0, 0, iVar0, func_1347(-1248968496, 20), 1, 0);
			func_1372(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1380(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_1190(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_1192(51, 0, 0, iVar0, func_1347(1706369307, 20), 1, 0);
			func_1372(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1380(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_1190(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_1192(51, 0, 0, iVar0, func_1347(1520110311, 20), 1, 0);
			func_1372(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_716(438, 0);
			func_1380(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_1190(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_1192(51, 0, 0, iVar0, func_1347(-1992824800, 20), 1, 0);
			func_1372(32768);
			break;
		default:
			func_716(439, 0);
			break;
	}
}

void func_1209()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_1210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_1184(43))
		{
			if (iParam0 == 281887510)
			{
				func_716(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_716(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_716(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_716(400, 0);
			}
		}
		else if (func_1170(iParam0, 412399755))
		{
			func_1382(-1791518714);
			if (func_1383() == 0)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1184(44))
		{
			if (iParam0 == -222563712)
			{
				func_716(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_716(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_716(401, 0);
			}
		}
		else if (func_1170(iParam0, 709057512))
		{
			func_1382(-2087881550);
			if (func_1383() == 1)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1184(45))
		{
			if (iParam0 == 2116770557)
			{
				func_716(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_716(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_716(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_716(398, 0);
			}
		}
		else if (func_1170(iParam0, -1478961327))
		{
			func_1382(1908068621);
			if (func_1383() == 2)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1387(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1388(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1343(48);
					}
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1184(46))
		{
			if (iParam0 == 2085530337)
			{
				func_716(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_716(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_716(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_716(406, 0);
			}
		}
		else if (func_1170(iParam0, -1238404098))
		{
			func_1382(1611247019);
			if (func_1383() == 3)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1184(47))
		{
			if (iParam0 == -1521783510)
			{
				func_716(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_716(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_716(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_716(403, 0);
			}
		}
		else if (func_1170(iParam0, 1160548794))
		{
			func_1382(1319635688);
			if (func_1383() == 4)
			{
				func_1344(0, 10);
				iVar1 = func_1384(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1385(iParam0) < func_1386(iParam0))
					{
						func_1190(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1192(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1211(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_1387(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1388(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1343(48);
		}
	}
}

void func_1212(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_1168(func_1389(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1390(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1391(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_915(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_915(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_915(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_915(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_915(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_915(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_915(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_915(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_915(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_915(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_915(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_915(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_915(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1392())
			{
				func_915(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_915(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_915(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_915(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_915(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_915(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_915(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_915(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_915(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_915(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_915(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_915(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_915(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1214(int iParam0)
{
	if (func_1184(41))
	{
		func_716(363, 0);
	}
	else
	{
		func_716(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1393(-1865241121);
			func_1394(-642026005);
			func_1395(-642026005);
			func_1344(0, 10);
			break;
		case -2108314374:
			func_1393(2117142684);
			func_1394(-940584364);
			func_1395(-940584364);
			func_1344(0, 10);
			break;
		case -1193798153:
			func_1393(-1409326024);
			func_1394(1972645282);
			func_1395(1972645282);
			func_1344(0, 10);
			break;
		case -787702678:
			func_1393(-641744968);
			func_1394(1667205433);
			func_1395(1667205433);
			func_1344(0, 10);
			break;
		case -804542901:
			func_1393(-946988203);
			func_1394(1362715885);
			func_1395(1362715885);
			func_1344(0, 10);
			break;
		case -1696275132:
			func_1393(-646136018);
			func_1394(1053540370);
			func_1395(1053540370);
			func_1344(0, 10);
			break;
		case -161595323:
			func_1393(-955835837);
			func_1394(-1100103852);
			func_1395(-1100103852);
			func_1344(0, 10);
			break;
		case -1114363619:
			func_1393(-179276075);
			func_1394(-1409869209);
			func_1395(-1409869209);
			func_1344(0, 10);
			break;
		case -368407134:
			func_1393(-492711560);
			func_1394(-1760235357);
			func_1395(-1760235357);
			func_1344(0, 10);
			break;
		case 1997759228:
			func_1393(1764383959);
			func_1394(-138366827);
			func_1395(-138366827);
			func_1344(0, 10);
			break;
		case 1265573293:
			func_1393(317501533);
			func_1394(-1261163843);
			func_1395(-1261163843);
			func_1344(0, 10);
			break;
		case -1030441283:
			func_1393(817753087);
			func_1394(-963523016);
			func_1395(-963523016);
			func_1344(0, 10);
			break;
		case -1490884871:
			func_1393(576606016);
			func_1394(560825326);
			func_1395(560825326);
			func_1344(0, 10);
			break;
		case -395458616:
			func_1393(814934957);
			func_1394(858269539);
			func_1395(858269539);
			break;
	}
}

void func_1215(int iParam0, int iParam1)
{
	var uVar0;

	func_1396(iParam0, iParam1, &uVar0);
}

int func_1216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_796(iParam1, 1, 0) };
		iParam3 = func_1397(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1398(iParam1, iParam2, func_1327(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1399(1, (func_1() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_1327(iParam3, 1) /*11*/])
			{
				func_1400(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1401(32768) && iParam1 != &Global_1946804->f_57[func_1327(iParam3, 1) /*11*/])
			{
				func_1402();
				func_1400(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1400(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1403(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1400(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1404(0);
			func_1405(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1400(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_1217(var uParam0, bool bParam1)
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
	iVar18 = func_109(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_109(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1406("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1407(&Var3, iVar2, iVar0, iVar1))
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
						func_1408(iVar0);
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

void func_1218()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_1219()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_1220()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1221()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_1222()
{
	func_1409();
	func_1410();
	func_1411();
}

void func_1223(int iParam0, int iParam1, bool bParam2)
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

void func_1224(int iParam0, bool bParam1)
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
	func_733(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1225(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1226(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1227(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1228(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1229(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1230(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_1231(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_1232(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1067(iParam0, 1024))
	{
		return;
	}
	func_927(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1233(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_925(iParam0, &iVar0, &iVar1);
	if (!func_926(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1067(iParam0, 1024))
	{
		return;
	}
	func_927(iVar0, iVar1);
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

int func_1234()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1341())
	{
		return func_1235();
	}
	iVar4 = (func_1341() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1341())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1412(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1342(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1235()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1341());
	return func_1342(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_1236(int iParam0)
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

int func_1237(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_796(iParam0, 0, 1) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	return func_1413(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1238(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_1() != -1)
	{
		return;
	}
	switch (func_962(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1414(81053684, 0) <= 0)
			{
				func_1400(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1400(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1415(iParam0);
			if (func_1416(iVar0))
			{
				func_1417(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1400(30, iParam0, 0, 0, 0);
			}
			if (func_1418() == -2125499975 || func_1418() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1400(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1418() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1400(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1419(-525676072, 0))
			{
				if (func_1420(-525676072, &iVar1))
				{
					func_1400(33, iVar1, 0, 0, 0);
				}
			}
			func_1400(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1421(99217379))
		{
			func_1216(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1194(24);
		if (func_1217(&bVar2, 0))
		{
			func_547(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1239(int iParam0)
{
	if (func_1170(iParam0, 943695443))
	{
		func_1422(0, iParam0);
	}
	else if (func_1170(iParam0, -2096528786))
	{
		func_1422(1, iParam0);
	}
	else if (func_1170(iParam0, -1094167013))
	{
		func_1422(2, iParam0);
	}
	else if (func_1170(iParam0, 1936654645))
	{
		func_1422(3, iParam0);
	}
	else if (func_1170(iParam0, 1306489306))
	{
		func_1422(4, iParam0);
	}
	else if (func_1170(iParam0, 435762317))
	{
		func_1422(5, iParam0);
	}
	else if (func_1170(iParam0, 1259363210))
	{
		func_1422(6, iParam0);
	}
	else if (func_1170(iParam0, 881398259))
	{
		func_1422(7, iParam0);
	}
	else if (func_1170(iParam0, -541549214))
	{
		func_1422(8, iParam0);
	}
	else if (func_1170(iParam0, 130796156))
	{
		func_1422(-1, iParam0);
	}
}

int func_1240(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1423(&Var4, 1356624740);
	return func_1424(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1241(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_967(iParam0, 0))
	{
		return Var0;
	}
	if (func_1170(iParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_1170(iParam0, -537818634))
			{
				return func_1161(189951448);
			}
			else
			{
				return func_1161(1176172851);
			}
		}
	}
	else if (func_1170(iParam0, -537818634))
	{
		return func_1161(-963660207);
	}
	if (func_1170(iParam0, 2084895747))
	{
		return func_1161(1694039471);
	}
	return Var2;
}

void func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_1() == -1)
			{
				if (func_939(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_716(109, 1);
				}
			}
			break;
	}
}

void func_1243(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1426(func_1425(0));
	func_1163(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1427(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1244(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
	if (!func_967(iParam0, 0))
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
	if (!func_1428())
	{
		func_1429(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_477(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
		{
			StringCopy(&cVar2, func_477(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1193(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_958(iParam0);
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
	else if (!func_1430(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1431(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_1231(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_1170(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_1231(iParam0));
	}
	func_1163(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

var func_1245(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_1161(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_1246()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_1247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1040();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(&Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_1155(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_1155(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1432())
		{
			func_1433(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1434())
		{
			func_1433(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1435())
		{
			func_1433(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1436())
	{
		func_1433(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_738(func_1161(661720433), iVar1);
	iVar10 = func_1040();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

void func_1248(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_986(iParam0, 1);
	func_987(iParam0, 1);
	func_988(iParam0, 128);
}

int func_1249(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_1250()
{
	if (func_1363())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1251(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1437((Global_40.f_4283.f_325 + iParam0));
}

void func_1252(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1250())
	{
		func_1163(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1163(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1253(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_1254(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_724(), 1))
	{
		return 1;
	}
	return 0;
}

char* func_1255(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_406(37, iParam0))
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
	if (func_406(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_1256(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1431(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_1257()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

float func_1258(int iParam0)
{
	iParam0 = func_754(iParam0);
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

float func_1259(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_1260(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1261(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_285(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_286(&(iParam1->f_6), 0, 1);
	}
	if (!func_285(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1106(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1043(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_285(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1268(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1439(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1440(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_816(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1439(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_818(iParam1->f_6, 0, 1);
				}
				else
				{
					func_818(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1262(int iParam0)
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

void func_1263(int* iParam0, int iParam1)
{
	if (!func_820(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_821(iParam0, 14);
		}
	}
}

bool func_1264(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1265(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1266(int iParam0, int iParam1)
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

bool func_1267(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_285(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	func_1439(iParam0, 18, 0, 1);
	func_1439(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1269(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_285(iParam0))
	{
		return false;
	}
	iVar0 = func_488(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1270(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1271(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

Vector3 func_1272(vector3 vParam0, float fParam3)
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

int func_1273()
{
	return -1;
}

float func_1274(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_1275(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

void func_1276(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1016(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1441(iVar6);
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

int func_1277(int iParam0)
{
	if (!func_1442(iParam0))
	{
		return 0;
	}
	if (!func_1443())
	{
		return 1;
	}
	return 0;
}

void func_1278(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1279(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1280(int iParam0, struct<2> Param1)
{
	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1444(iParam0, Param1))
	{
	}
	if (!func_1445(iParam0, Param1.f_1))
	{
	}
}

void func_1281(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1446((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1282(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1283(var uParam0)
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

void func_1284(var uParam0)
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

void func_1285(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1286(int iParam0, var uParam1)
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

void func_1287(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1288(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1289(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1290(int iParam0)
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

void func_1291(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1292(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1293(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1447(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1448(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1449(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1450(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1294(int iParam0)
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
	if (func_1451(iParam0))
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
	if (func_501(iParam0))
	{
		iVar3 = func_502(iParam0);
		if (func_1452(iVar3))
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

var func_1295()
{
	return Global_1900383->f_393;
}

void func_1296(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1297(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_938())
	{
		if (func_1257())
		{
			bVar0 = false;
			if (!func_939(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_937(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1453();
				*iParam1 = func_1454();
				*uParam2 = func_1455();
				return 1;
			}
			else
			{
				*uParam0 = func_1456();
				*iParam1 = func_1457();
				*uParam2 = func_1458();
				return 1;
			}
		}
		else if (func_955())
		{
			if (!func_939(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1459();
				*iParam1 = func_1460();
				*uParam2 = func_1461();
				return 1;
			}
			else
			{
				*uParam0 = func_1462();
				*iParam1 = func_1463();
				*uParam2 = func_1464();
				return 1;
			}
		}
	}
	else if (func_1257())
	{
		*uParam0 = func_1465();
		*iParam1 = func_1466();
		*uParam2 = func_1467();
		return 1;
	}
	else if (func_955())
	{
		*uParam0 = func_1468();
		*iParam1 = func_1469();
		*uParam2 = func_1470();
		return 1;
	}
	return 0;
}

void func_1298(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1299(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1300(int iParam0, var uParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1301(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

void func_1302(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_754(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1137(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1297(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1471(iParam1);
	iVar5 = func_1016(iParam0);
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

void func_1303(int iParam0, int iParam1)
{
	iParam0 = func_754(iParam0);
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

int func_1304(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1472(Var0, 1415981582, 0);
	if (!func_967(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1305(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1472(Var0, -2119169513, 0);
	if (!func_967(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1306(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1473(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1474() };
	*uParam1 = func_1472(Var0, iParam0, 0);
	if (!func_967(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1307(int iParam0)
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

void func_1308(int iParam0, var uParam1)
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
	func_1475(iParam0, *uParam1);
	func_1475(iParam0, uParam1->f_1);
}

void func_1309(int iParam0)
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

void func_1310(int iParam0, var uParam1)
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
	func_1475(iParam0, *uParam1);
	func_1475(iParam0, uParam1->f_1);
	func_1475(iParam0, uParam1->f_2);
	func_1475(iParam0, uParam1->f_3);
	func_1475(iParam0, uParam1->f_4);
	func_1475(iParam0, uParam1->f_5);
}

int func_1311(int iParam0, int iParam1, bool bParam2)
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

Vector3 func_1312(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_1259(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_225(vVar0))
	{
	}
	return vVar0;
}

int func_1313(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_1476(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

int func_1314(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

var func_1315()
{
	return Global_40.f_11095.f_35;
}

void func_1316(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1477(bParam1);
	}
}

void func_1317(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1318(int iParam0)
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

int func_1319(var uParam0)
{
	vector3 vVar0;

	if (!func_335(23, &vVar0))
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

int func_1320(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_335(23, &Var0))
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

int func_1321(int iParam0)
{
	return iParam0;
}

int func_1322()
{
	int iVar0;

	iVar0 = func_1153();
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

void func_1323(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1324(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1325(int iParam0, var uParam1, var uParam2)
{
	if (!func_1324(iParam0))
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

int func_1326(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1397(iVar0);
}

int func_1327(int iParam0, int iParam1)
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

bool func_1328()
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

int func_1329(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1339(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1406("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1407(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_312(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1408(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1408(iVar1);
	}
	return 0;
}

int func_1330()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_1478(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1478(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

bool func_1331(int iParam0)
{
	return func_958(iParam0) == -427144552;
}

int func_1332(int iParam0)
{
	var uVar0;

	if (func_1() != -1)
	{
		return 0;
	}
	if (func_1193(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1337(iParam0, &uVar0, 1, 0, 0);
	}
	return func_1168(iParam0, 1, 0);
}

void func_1333(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_958(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1196(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_313(iVar0))
	{
		if (func_1() == -1)
		{
			func_1197(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_1178(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_1244(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_1334(int iParam0, var uParam1)
{
	int iVar0;

	if (func_1170(iParam0, 58855631))
	{
		func_1479(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_1335(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_968(bParam3), iParam0);
}

int func_1336()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_938())
	{
		return 0;
	}
	if (!func_939(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_939(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_939(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_939(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_939(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_939(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_939(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_939(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_939(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_939(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_939(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_939(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_939(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_939(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_939(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_939(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_939(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_939(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_939(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_939(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_939(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_939(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_939(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_1337(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1480(&iParam0);
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		bParam3 = true;
	}
	if (func_1331(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_959(0) };
			Var4.f_9 = -1591664384;
			if (!func_798(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_799(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_960(iParam0, 1))
			{
				if (!func_798(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_799(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1481(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1335(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_965(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_968(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1338(int iParam0, int iParam1)
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

int func_1339(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_958(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_1170(iParam0, 1399091007))
	{
		func_1396(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1340(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1482(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1483(&Var0, func_959(0));
	}
	if (!func_1484(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1408(iVar14);
	return uVar15;
}

int func_1341()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_1342(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1343(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_1485(iParam0);
	fVar1 = func_1486(iParam0);
	if ((Global_1347477->f_117 || !func_937(31)) || !func_1487(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1488(iVar0) >= 7)
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
	func_1489(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1163(MISC::_CREATE_VAR_STRING(6, func_1490(iParam0), fVar1), "itemtype_textures", func_1491(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1344(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1492(&Global_0, 8);
	}
	if (!func_938() || func_1() != -1)
	{
		return;
	}
	func_1492(&Global_0, 1);
}

bool func_1345(int iParam0)
{
	int iVar0;

	iVar0 = func_1075(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1346(int iParam0)
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

int func_1347(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_335(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1348(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1189() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1493(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1494(), 12);
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
			else if (func_1378() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1495(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1378(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1496(), 13);
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
			else if (func_1379() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1497(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1379(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1347(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1349(int iParam0, int iParam1, int iParam2)
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

int func_1350(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1351(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1498(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_1168(iVar2, 1, 0) || func_1500(func_1499(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1355(func_1498(iVar0))), func_1355(func_1498(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1378() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1501(iVar0)), func_1501(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1495() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1501(iVar0)), func_1501(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1501(iVar0)), func_1501(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1389(iParam3, func_1502(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1385(iVar2) - iParam7) >= func_1347(iParam3, func_1503(iVar0));
				}
				else
				{
					bVar1 = func_1385(iVar2) >= func_1347(iParam3, func_1503(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1385(iVar2) + iParam7) >= func_1347(iParam3, func_1503(iVar0));
			}
			else
			{
				bVar1 = func_1385(iVar2) >= func_1347(iParam3, func_1503(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1504(iVar2)), func_1504(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1505(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1506(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1506(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1379() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1507(iVar0)), func_1507(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1497() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1507(iVar0)), func_1507(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1507(iVar0)), func_1507(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1389(iParam3, func_1502(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1385(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1508(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1508(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1509(iVar2)), func_1509(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1353(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1496() >= 13)
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

int func_1354(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_385(func_1510(0)) && ((func_1511(0) == 1 || func_1511(0) == 8) || func_1511(0) == 6))
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

char* func_1355(int iParam0)
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

var func_1356(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_1357(int iParam0)
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

void func_1358(int iParam0)
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
			func_1512(1);
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
			func_1513(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1513(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1513(3);
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
			func_1514(1);
			break;
		case 34:
			func_1515(1);
			break;
		case 35:
			func_1516(1);
			break;
		case 36:
			break;
		case 37:
			func_1517(0);
			break;
		case 38:
			func_1518(0);
			break;
		case 39:
			func_1519(0);
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
			if ((!&Global_1879534 && func_938()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_716(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_938()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_716(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_938()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_716(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_938()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1356("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_716(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_1() == -1)
			{
				if (!func_1421(99217379) || func_1520(99217379) == 2110595215)
				{
					if (func_955())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_1168(iVar0, 1, 0))
					{
						func_1237(iVar0, 1, 752097756);
					}
					func_1216(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_1() == -1)
			{
				if (!func_1168(1013902307, 1, 0))
				{
					func_1237(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_1() == -1)
			{
				if (!func_1168(1013902307, 1, 0))
				{
					func_1237(1013902307, 1, 752097756);
				}
				if (!func_1168(142640135, 1, 0))
				{
					func_1237(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_1() == -1)
			{
				if (!func_1168(786809402, 1, 0))
				{
					func_1237(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_1() == -1)
			{
				if (!func_1168(786809402, 1, 0))
				{
					func_1237(786809402, 1, 752097756);
				}
				if (!func_1168(-518019409, 1, 0))
				{
					func_1237(-518019409, 1, 752097756);
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
			func_1521();
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

int func_1359(int iParam0)
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

void func_1360(int iParam0)
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
	iVar2 = func_145();
	func_338(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1361(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1478(iParam0))
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

int func_1362(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_937(50))
			{
				if (!func_937(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_937(51))
			{
				if (!func_937(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1363()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_1364(int iParam0, int iParam1, var uParam2)
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

	if (!func_967(iParam1, 0))
	{
		return 0;
	}
	if (func_958(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_1() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_962(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1522(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_1170(iParam1, 866047851))
	{
		iVar5 = func_1327(iVar4, 1);
		if (func_1523(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_962(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_1170(iParam1, -1638171711))
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
			if (func_1166(1868067663, &uVar0))
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
				iVar10 = func_1524(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1524(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_962(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_1170(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_1365()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1366()
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

int func_1367()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_1168(func_1525(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1368(int iParam0)
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

int func_1369(int iParam0, int iParam1)
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
	if (func_1168(iVar0, 1, 0) && func_1168(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1370(int iParam0)
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

int func_1371(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1526(iParam0);
	if (iVar0 != -15)
	{
		func_338(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_339(iVar0, 1);
	}
	return 0;
}

void func_1372(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1373(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1374(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1375(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1376(int iParam0)
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
	iVar1 = func_1385(iVar9);
	iVar2 = func_1385(iVar10);
	iVar3 = func_1385(iVar11);
	iVar5 = func_1386(iVar9);
	iVar6 = func_1386(iVar10);
	iVar7 = func_1386(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1385(iVar12);
		iVar8 = func_1386(iVar12);
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

void func_1377(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1378()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1527(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1379()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1380(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1508(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*iParam2++;
		}
		if (func_1508(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*iParam2++;
		}
		if (func_1508(iVar1))
		{
			*iParam2++;
		}
		if (func_1508(iVar0) && func_1508(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*iParam2++;
		}
		if (func_1508(iVar1))
		{
			*iParam2++;
		}
		if (func_1508(iVar2))
		{
			*iParam2++;
		}
		if ((func_1508(iVar0) && func_1508(iVar1)) && func_1508(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1508(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1508(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1508(iVar0))
		{
			*iParam2++;
		}
		if (func_1508(iVar1))
		{
			*iParam2++;
		}
		if (func_1508(iVar2))
		{
			*iParam2++;
		}
		if (func_1508(iVar3))
		{
			*iParam2++;
		}
		if (((func_1508(iVar0) && func_1508(iVar1)) && func_1508(iVar2)) && func_1508(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1381(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1528(1497516462);
			func_1529(2016141805);
			func_1529(1010885152);
			func_1529(-502324015);
			break;
		case 2016141805:
			func_1529(1497516462);
			func_1528(2016141805);
			func_1529(1010885152);
			func_1529(-502324015);
			break;
		case 1010885152:
			func_1529(1497516462);
			func_1529(2016141805);
			func_1528(1010885152);
			func_1529(-502324015);
			break;
		case -502324015:
			func_1529(1497516462);
			func_1529(2016141805);
			func_1529(1010885152);
			func_1528(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1529(-538889627);
			func_1529(-538880323);
			func_1529(-1056767524);
			func_1528(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1530();
			func_1528(iParam0);
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
			func_1531();
			func_1528(iParam0);
			break;
		case 2019386373:
			func_1529(-664252410);
			func_1529(2109952320);
			func_1528(2019386373);
			break;
		case -664252410:
			func_1529(2019386373);
			func_1529(2109952320);
			func_1528(-664252410);
			break;
		case 2109952320:
			func_1529(2019386373);
			func_1529(-664252410);
			func_1528(2109952320);
			break;
		case -1674179981:
			func_1529(-1835851517);
			func_1529(-1838352012);
			func_1528(-1674179981);
			break;
		case -1835851517:
			func_1529(-1674179981);
			func_1529(-1838352012);
			func_1528(-1835851517);
			break;
		case -1838352012:
			func_1529(-1674179981);
			func_1529(-1835851517);
			func_1528(-1838352012);
			break;
		case -1717960576:
			func_1529(210001842);
			func_1528(-1717960576);
			break;
		case 210001842:
			func_1529(-1717960576);
			func_1528(210001842);
			break;
		case -150493654:
			func_1529(-1271608261);
			func_1529(1846061697);
			func_1529(-1145519186);
			func_1528(-150493654);
			break;
		case -1271608261:
			func_1529(-150493654);
			func_1529(1846061697);
			func_1529(-1145519186);
			func_1528(-1271608261);
			Jump @2852; //curOff = 1036
			func_1529(-150493654);
			func_1529(-1271608261);
			func_1529(-1145519186);
			func_1528(1846061697);
			Jump @2852; //curOff = 1075
			func_1529(-150493654);
			func_1529(-1271608261);
			func_1529(1846061697);
			func_1528(-1145519186);
			Jump @2852; //curOff = 1114
			func_1529(280705402);
			func_1529(1926308480);
			func_1528(1766284049);
			Jump @2852; //curOff = 1144
			func_1529(1766284049);
			func_1529(1926308480);
			func_1528(280705402);
			Jump @2852; //curOff = 1174
			func_1529(1766284049);
			func_1529(280705402);
			func_1528(1926308480);
			Jump @2852; //curOff = 1204
			if (bParam1)
			{
				func_1529(439465264);
				func_1528(1609506757);
			}
			else
			{
				func_1529(1609506757);
				func_1529(439465264);
			}
			Jump @2852; //curOff = 1251
			if (func_1532(1609506757))
			{
				if (bParam1)
				{
					func_1528(439465264);
				}
				else
				{
					func_1529(439465264);
				}
			}
			Jump @2852; //curOff = 1292
			func_1529(-1612662716);
			func_1528(1822001510);
			Jump @2852; //curOff = 1313
			func_1529(1822001510);
			func_1528(-1612662716);
			Jump @2852; //curOff = 1334
			func_1529(1952610440);
			func_1529(-223469678);
			func_1529(-404698347);
			func_1529(1517904467);
			func_1528(1306158345);
			Jump @2852; //curOff = 1382
			func_1529(1306158345);
			func_1529(-223469678);
			func_1529(-404698347);
			func_1529(1517904467);
			func_1528(1952610440);
			Jump @2852; //curOff = 1430
			func_1529(1306158345);
			func_1529(1952610440);
			func_1529(-404698347);
			func_1529(1517904467);
			func_1528(-223469678);
			Jump @2852; //curOff = 1478
			func_1529(1306158345);
			func_1529(1952610440);
			func_1529(-223469678);
			func_1529(1517904467);
			func_1528(-404698347);
			Jump @2852; //curOff = 1526
			func_1529(1306158345);
			func_1529(1952610440);
			func_1529(-223469678);
			func_1529(-404698347);
			func_1528(1517904467);
			Jump @2852; //curOff = 1574
			func_1529(931649776);
			func_1529(-434590080);
			func_1529(1743048395);
			func_1529(449774763);
			func_1528(1376646519);
			Jump @2852; //curOff = 1622
			func_1529(1376646519);
			func_1529(-434590080);
			func_1529(1743048395);
			func_1529(449774763);
			func_1528(931649776);
			Jump @2852; //curOff = 1670
			func_1529(1376646519);
			func_1529(931649776);
			func_1529(1743048395);
			func_1529(449774763);
			func_1528(-434590080);
			Jump @2852; //curOff = 1718
			func_1529(1376646519);
			func_1529(931649776);
			func_1529(-434590080);
			func_1529(449774763);
			func_1528(1743048395);
			Jump @2852; //curOff = 1766
			func_1529(1376646519);
			func_1529(931649776);
			func_1529(-434590080);
			func_1529(1743048395);
			func_1528(449774763);
			Jump @2852; //curOff = 1814
			func_1529(38162571);
			func_1529(1350391819);
			func_1529(54073871);
			func_1528(-1414537028);
			Jump @2852; //curOff = 1853
			func_1529(-1414537028);
			func_1529(1350391819);
			func_1529(54073871);
			func_1528(38162571);
			Jump @2852; //curOff = 1892
			func_1529(-1414537028);
			func_1529(38162571);
			func_1529(54073871);
			func_1528(1350391819);
			Jump @2852; //curOff = 1931
			func_1529(-1414537028);
			func_1529(38162571);
			func_1529(1350391819);
			func_1528(54073871);
			Jump @2852; //curOff = 1970
			func_1528(198200492);
			func_1529(-1124061431);
			func_1529(52706132);
			func_1529(-259123672);
			Jump @2852; //curOff = 2009
			func_1529(198200492);
			func_1528(-1124061431);
			func_1529(52706132);
			func_1529(-259123672);
			Jump @2852; //curOff = 2048
			func_1529(198200492);
			func_1529(-1124061431);
			func_1528(52706132);
			func_1529(-259123672);
			Jump @2852; //curOff = 2087
			func_1529(198200492);
			func_1529(-1124061431);
			func_1529(52706132);
			func_1528(-259123672);
			Jump @2852; //curOff = 2126
			func_1528(-919512195);
			func_1529(-1925798111);
			func_1529(420709909);
			func_1529(1703426636);
			Jump @2852; //curOff = 2165
			func_1528(-1925798111);
			func_1529(-919512195);
			func_1529(420709909);
			func_1529(1703426636);
			Jump @2852; //curOff = 2204
			func_1528(420709909);
			func_1529(-919512195);
			func_1529(-1925798111);
			func_1529(1703426636);
			Jump @2852; //curOff = 2243
			func_1528(1703426636);
			func_1529(-919512195);
			func_1529(-1925798111);
			func_1529(420709909);
			Jump @2852; //curOff = 2282
			func_1528(-1223121209);
			func_1529(630808005);
			Jump @2852; //curOff = 2303
			func_1528(630808005);
			func_1529(-1223121209);
			Jump @2852; //curOff = 2324
			func_1528(1453909576);
			func_1529(1643531967);
			Jump @2852; //curOff = 2345
			func_1528(1643531967);
			func_1529(1453909576);
			Jump @2852; //curOff = 2366
			func_1528(0);
			func_1529(473295046);
			func_1529(-1738165526);
			Jump @2852; //curOff = 2392
			func_1528(473295046);
			func_1529(0);
			func_1529(-1738165526);
			Jump @2852; //curOff = 2418
			func_1528(-1738165526);
			func_1529(0);
			func_1529(473295046);
			Jump @2852; //curOff = 2444
			func_1528(932909855);
			func_1529(2051822093);
			Jump @2852; //curOff = 2465
			func_1528(2051822093);
			func_1529(932909855);
			Jump @2852; //curOff = 2486
			func_1528(405586984);
			func_1529(1509509592);
			func_1529(-959357075);
			func_1529(-1311865656);
			Jump @2852; //curOff = 2525
			func_1528(1509509592);
			func_1529(405586984);
			func_1529(-959357075);
			func_1529(-1311865656);
			Jump @2852; //curOff = 2564
			func_1528(-959357075);
			func_1529(1509509592);
			func_1529(405586984);
			func_1529(-1311865656);
			Jump @2852; //curOff = 2603
			func_1528(-1311865656);
			func_1529(1509509592);
			func_1529(-959357075);
			func_1529(405586984);
			Jump @2852; //curOff = 2642
			if (bParam1)
			{
				func_1528(-524145696);
			}
			else
			{
				func_1529(-524145696);
			}
			func_1529(1626481264);
			func_1529(282809459);
			Jump @2852; //curOff = 2689
			func_1528(282809459);
			func_1529(1626481264);
			func_1529(-524145696);
			Jump @2852; //curOff = 2719
			func_1528(1626481264);
			func_1529(-524145696);
			func_1529(282809459);
			Jump @2852; //curOff = 2749
			if (bParam1)
			{
				func_1528(885203519);
			}
			else
			{
				func_1529(885203519);
			}
			Jump @2852; //curOff = 2778
			if (bParam1)
			{
				func_1528(-1080627546);
			}
			else
			{
				func_1529(-1080627546);
			}
			Jump @2852; //curOff = 2807
			if (bParam1)
			{
				if (!func_1532(iParam0))
				{
					func_1528(iParam0);
				}
			}
			else if (func_1532(iParam0))
			{
				func_1529(iParam0);
			}
		}

void func_1382(int iParam0)
{
	if (!func_1533(iParam0))
	{
		func_1535(func_1534(iParam0));
	}
}

int func_1383()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1533(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1384(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1385(iVar9);
	iVar2 = func_1385(iVar10);
	iVar3 = func_1385(iVar11);
	iVar5 = func_1386(iVar9);
	iVar6 = func_1386(iVar10);
	iVar7 = func_1386(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1385(iVar12);
		iVar8 = func_1386(iVar12);
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

int func_1385(int iParam0)
{
	int iVar0;

	if (func_1168(iParam0, 1, 0))
	{
		iVar0 = func_1178(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1386(int iParam0)
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

int func_1387(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1388(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1389(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_335(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1390(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1389(iParam1, 5) || iParam0 == func_1389(iParam1, 6)) || iParam0 == func_1389(iParam1, 7)) || iParam0 == func_1389(iParam1, 8)) || iParam0 == func_1389(iParam1, 9))
	{
		func_1380(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1190(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1192(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1391(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1389(iParam1, 5) || iParam0 == func_1389(iParam1, 6)) || iParam0 == func_1389(iParam1, 7)) || iParam0 == func_1389(iParam1, 8)) || iParam0 == func_1389(iParam1, 9))
	{
		if (func_1380(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1190(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1192(51, 0, 0, iVar0, func_1347(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1190(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1192(51, 0, 0, iVar0, func_1347(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1392()
{
	if (func_1345(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1393(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1394(int iParam0)
{
	if (!func_1536(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1395(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1396(int iParam0, var uParam1, var uParam2)
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

int func_1397(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1537(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1538();
	if (iParam2 == 39)
	{
		Var0 = { func_796(iParam0, 1, 0) };
		iParam2 = func_1327(func_1397(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_1170(iParam0, 866047851) && func_1523(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1401(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1539(func_1537(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1540(iParam2);
	func_1541(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1542(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1542(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1543(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1544(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_1545(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1545(&(Global_1946804->f_1378), 1, 0);
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
				func_1546(func_1537(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1399(bool bParam0, bool bParam1, bool bParam2)
{
	func_1547(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1400(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1548(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1549(Var0);
}

bool func_1401(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1402()
{
	func_1550(&(Global_1946804->f_2776));
	func_1551(32768);
	func_1546(1108822547, 8, 6);
}

int func_1403(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1327(iParam0, 1);
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

void func_1404(int iParam0)
{
	struct<4> Var0;

	if (func_1552(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1553(Var0);
}

void func_1405(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1553(Var0);
}

int func_1406(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_968(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1407(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1408(int iParam0)
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

float func_1409()
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

	if (func_1554())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1555(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1555(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1556();
	fVar2 = func_1557();
	fVar3 = func_1558();
	fVar4 = func_1559();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1560()));
	fVar7 = (func_1555(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1561(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1562(3, fVar9, fVar9 > 100f);
	return func_1563(fVar7, -100f, 100f);
}

float func_1410()
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

	if (func_1554())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1555(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1555(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1556();
	fVar2 = func_1557();
	fVar3 = func_1558();
	fVar4 = func_1559();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1560()));
	fVar7 = (func_1555(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1561(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1562(2, fVar9, fVar9 > 100f);
	return func_1563(fVar7, -100f, 100f);
}

float func_1411()
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

	if (func_1554())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1555(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1564())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1565())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1555(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1556();
	fVar2 = func_1557();
	fVar3 = func_1558();
	fVar4 = func_1559();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1560()));
	fVar7 = (func_1555(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1561(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1562(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1555(0);
	}
	return func_1563(fVar7, -100f, 100f);
}

bool func_1412(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1413(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_967(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1337(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_802(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_968(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1414(int iParam0, bool bParam1)
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
				return func_1566();
			}
			break;
	}
	return 0;
}

int func_1415(int iParam0)
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

int func_1416(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1417(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1416(iParam0))
	{
		return;
	}
	if (func_1567(iParam0))
	{
		return;
	}
	if (!func_1568(iParam0))
	{
		func_1569(iParam0, 1, 0);
	}
	iVar0 = func_1570(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1571(iParam0, 512))
		{
			func_1400(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1572() && !bParam1) && !func_134(0, 0, 1))
	{
		func_916(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1573(iParam0, 6);
	if (bParam2)
	{
		if (!func_134(0, 0, 1))
		{
			func_1344(1, 4);
		}
	}
}

int func_1418()
{
	return Global_1946804->f_1;
}

bool func_1419(int iParam0, bool bParam1)
{
	return func_1414(iParam0, 0) < func_1574(iParam0, bParam1);
}

int func_1420(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_962(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1421(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1327(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_1327(iParam0, 1) /*11*/];
}

void func_1422(int iParam0, int iParam1)
{
	if (func_1170(iParam1, 130796156))
	{
		func_1575(iParam1, 0);
	}
	else if (func_1170(iParam1, 930141731))
	{
		func_1575(iParam1, 1);
		func_1576(iParam0);
	}
}

void func_1423(var uParam0, int iParam1)
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

int func_1424(int iParam0, var uParam1, var uParam2, var uParam3)
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
	func_1577(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1578(uParam2, iParam0, Var1);
	return 1;
}

int func_1425(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1426(int iParam0)
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

int func_1427(int iParam0)
{
	var uVar0;

	if (!func_1579(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1428()
{
	return !&Global_1911774;
}

void func_1429(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_1430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1431(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1432()
{
	return Global_1347398->f_1 == 0;
}

void func_1433(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_1434()
{
	return Global_1347398->f_1 == 1000;
}

bool func_1435()
{
	return Global_1347398->f_1 == 2000;
}

bool func_1436()
{
	return Global_1347398->f_1 == 3000;
}

void func_1437(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1161(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1438(int iParam0)
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

void func_1439(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1440(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_285(iParam0))
	{
		return;
	}
	iVar0 = func_488(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1441(int iParam0)
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

int func_1442(int iParam0)
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

bool func_1443()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1444(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_800(iParam1, Var0, 1415981582, 0) };
	return func_1580(Var29, 1);
}

int func_1445(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1447(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_800(iParam1, Var0, -2119169513, 0) };
	return func_1580(Var29, 1);
}

void func_1446(var uParam0)
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

int func_1447(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1581(iParam0))
	{
		return 0;
	}
	iVar0 = func_1448(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_957(0) };
	if (!func_1582(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1583(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1448(int iParam0)
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

int func_1449(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_802(bParam10))
	{
		return func_1584(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1585(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_968(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1580(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1450(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_802(bParam9))
	{
		return func_1586(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1585(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, bParam9, 1) || !func_964(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1585(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_968(0);
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

int func_1451(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1587(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1452(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1453()
{
	return 1342496140;
}

int func_1454()
{
	return 446670976;
}

int func_1455()
{
	return 1;
}

int func_1456()
{
	return -868094182;
}

int func_1457()
{
	return 1074477367;
}

int func_1458()
{
	return 1;
}

int func_1459()
{
	return -997197050;
}

int func_1460()
{
	return -2063289686;
}

int func_1461()
{
	return 2;
}

int func_1462()
{
	return -868094182;
}

int func_1463()
{
	return 1074477367;
}

int func_1464()
{
	return 1;
}

int func_1465()
{
	return 1235275977;
}

int func_1466()
{
	return 2030804811;
}

int func_1467()
{
	return 1;
}

int func_1468()
{
	return 1974379573;
}

int func_1469()
{
	return 2024948086;
}

int func_1470()
{
	return 1;
}

void func_1471(int iParam0)
{
	if (func_1588() < iParam0)
	{
		func_1589(iParam0);
	}
}

int func_1472(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1590(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1473(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_962(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1591(iParam0);
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

struct<4> func_1474()
{
	struct<4> Var0;

	Var0 = { func_957(0) };
	return func_800(856287005, Var0, -218846335, 0);
}

void func_1475(int iParam0, int iParam1)
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

void func_1476(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1477(bool bParam0)
{
	func_1592(bParam0);
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

bool func_1478(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1479(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_967(iParam0, 0))
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

int func_1480(var uParam0)
{
	if (!func_967(*uParam0, 0))
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

int func_1481(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_796(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_797((375 + iVar29), 1);
		if (func_798(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_799(iParam0, &Var6, iVar5);
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

struct<14> func_1482(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1483(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1484(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_968(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1485(var uParam0)
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

float func_1486(int iParam0)
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
			return func_1593(iParam0);
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
			return func_1593(iParam0);
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
			return func_1593(iParam0);
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

int func_1487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_937(18);
		case 2:
			return func_937(20);
		case 1:
			return func_937(19);
		default:
			break;
	}
	return 1;
}

int func_1488(int iParam0)
{
	return func_1594(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1489(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_937(31))
	{
		return;
	}
	iVar0 = func_1488(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1488(iParam0);
	if (func_1595(iParam0) && func_1596(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1597(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1598(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_716(func_1599(iParam0), 0);
					}
					func_1600(iParam0, iVar2, iVar3);
					func_1601(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1490(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1491(int iParam0)
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

void func_1492(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1493()
{
	return func_1602(Global_40.f_12018);
}

int func_1494()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1346(iVar1);
		if (func_1168(iVar2, 1, 0) || func_1500(func_1499(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1495()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1603(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1496()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1505(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1497()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1498(int iParam0)
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

int func_1499(int iParam0)
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

bool func_1500(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1501(int iParam0)
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

int func_1502(int iParam0)
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

int func_1503(int iParam0)
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

char* func_1504(int iParam0)
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

bool func_1505(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1506(int iParam0)
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

char* func_1507(int iParam0)
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

int func_1508(int iParam0)
{
	if (func_1604(iParam0) && func_1168(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1605(iParam0) && func_1606(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1509(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_1231(iParam0));
}

int func_1510(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_1511(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1512(bool bParam0)
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

void func_1513(int iParam0)
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

void func_1514(bool bParam0)
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

void func_1515(bool bParam0)
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

void func_1516(bool bParam0)
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

void func_1517(bool bParam0)
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

void func_1518(bool bParam0)
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

void func_1519(bool bParam0)
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

int func_1520(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1327(iParam0, 1) /*3*/]);
}

void func_1521()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1607();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_1197(joaat("weapon_revolver_cattleman_john"));
		func_1237(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_1197(joaat("weapon_melee_knife_john"));
		func_1237(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1522(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_796(iParam0, 1, 0) };
	return func_1397(Var0.f_4);
}

int func_1523(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_1327(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1401(524288))
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

int func_1525(int iParam0)
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

int func_1526(var uParam0)
{
	return func_1608(uParam0, -1);
}

bool func_1527(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1528(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1609(iParam0, 1);
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

void func_1529(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1609(iParam0, 1);
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

void func_1530()
{
	func_1529(-939420910);
	func_1529(-1187950766);
	func_1529(356365161);
	func_1529(753127042);
	func_1529(-2038424081);
	func_1529(1884271742);
	func_1529(459290420);
}

void func_1531()
{
	func_1529(704802028);
	func_1529(588987611);
	func_1529(2008888900);
	func_1529(1649996811);
	func_1529(227918160);
	func_1529(168171957);
	func_1529(1193080109);
	func_1529(-491981251);
	func_1529(-639037538);
	func_1529(-618620429);
}

bool func_1532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1609(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_1533(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1534(int iParam0)
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

void func_1535(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1536(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1537(int iParam0, int iParam1)
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

void func_1538()
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

void func_1539(int iParam0)
{
	func_1546(iParam0, 8, 6);
}

void func_1540(int iParam0)
{
	func_1610(&(Global_1946804->f_2589), iParam0);
}

void func_1541(int iParam0, int iParam1)
{
	func_1611(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1542(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1543(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_962(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1612(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1541(iVar1, iVar3);
		}
	}
	if (func_1421(-1586649372) && func_1612(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1541(iVar1, iVar3);
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
						func_1541(iVar1, iVar3);
					}
				}
			}
			func_1613(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1613(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1541(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1613(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1541(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1541(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1613(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1613(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1541(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1613(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1541(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1541(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_962(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1541(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_1170(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_962(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_962(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1541(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_962(&(uParam0->f_1[iVar1 /*3*/])) || func_1170(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1541(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1544(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1614(0);
	if (iParam2 != 0 && func_1615(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1616(iParam0, func_1537(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1545(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_1() != -1;
	iVar7 = func_1614(0);
	if (func_1401(32768))
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
			iVar5 = func_1537(iVar0, 1);
			if (func_1617(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1617(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1524(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1618(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1401(524288))
					{
						func_1548(524288);
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
							iVar5 = func_1537(iVar0, 1);
							if (func_1617(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1617(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1524(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1541(iVar0, iParam2);
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
					func_1551(524288);
				}
			}
		}
	}

void func_1546(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1327(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1327(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1327(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1547(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1619(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1620(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1570(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1570(Global_40.f_7729);
				Global_1946804->f_1378 = func_1570(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1621(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1622(0, 1);
	}
}

void func_1548(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1549(struct<4> Param0)
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
			if (func_1623(Param0))
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
			func_1624(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1548(8);
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
			if (func_1623(Param0))
			{
				return;
			}
			func_1624(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1548(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1405(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1550(var uParam0)
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

void func_1551(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1552(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1553(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1623(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1623(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1624(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1548(8);
}

int func_1554()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1555(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1556()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1625(13);
	iVar1 = func_1626(fVar0);
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

float func_1557()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1558()
{
	if (func_1363())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1559()
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

float func_1560()
{
	return Global_1955565->f_3;
}

void func_1561(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1627(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1562(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1627(iParam0, 2, 0, 0);
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

float func_1563(float fParam0, float fParam1, float fParam2)
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

bool func_1564()
{
	return func_1625(12) <= -99f;
}

bool func_1565()
{
	return func_1625(12) >= 99f;
}

int func_1566()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_962(iVar1) == -999503751)
		{
			if (func_1628() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1567(int iParam0)
{
	if (!func_1416(iParam0))
	{
		return 0;
	}
	if (func_1571(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1568(int iParam0)
{
	if (!func_1416(iParam0))
	{
		return 0;
	}
	if (func_1571(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1569(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1416(iParam0))
	{
		return;
	}
	if (!func_1568(iParam0))
	{
		func_1573(iParam0, 2);
		if (bParam2)
		{
			if (!func_134(0, 0, 1))
			{
				func_1344(1, 4);
			}
		}
		if ((!func_1572() && !bParam1) && !func_134(0, 0, 1))
		{
			func_916(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1629(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1570(int iParam0)
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

bool func_1571(int iParam0, int iParam1)
{
	if (!func_1416(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1572()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1573(int iParam0, int iParam1)
{
	if (!func_1416(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1574(int iParam0, bool bParam1)
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

void func_1575(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1630(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1194(50);
			}
			else
			{
				func_1194(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1194(51);
			}
			else
			{
				func_1194(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1631(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_1218();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1218();
			}
			break;
		case 3:
			func_1194(24);
			if (bParam1)
			{
				if (!func_1631(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_1218();
				}
			}
			break;
	}
}

void func_1576(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1632(0))
			{
				iVar0++;
			}
			if (func_1632(2))
			{
				iVar0++;
			}
			if (func_1632(4))
			{
				iVar0++;
			}
			if (!func_1633(16))
			{
				if (iVar0 == 1)
				{
					func_1634();
					func_716(456, 1);
					func_1635(16);
				}
			}
			if (!func_1633(32))
			{
				if (iVar0 >= 3)
				{
					func_1634();
					func_716(456, 1);
					func_1635(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1632(1))
			{
				iVar0++;
			}
			if (func_1632(3))
			{
				iVar0++;
			}
			if (func_1632(7))
			{
				iVar0++;
			}
			if (!func_1633(1))
			{
				if (iVar0 == 1)
				{
					func_1636();
					func_716(457, 1);
					func_1635(1);
				}
			}
			if (!func_1633(2))
			{
				if (iVar0 >= 3)
				{
					func_1636();
					func_716(457, 1);
					func_1635(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1632(5))
			{
				iVar0++;
			}
			if (func_1632(6))
			{
				iVar0++;
			}
			if (func_1632(8))
			{
				iVar0++;
			}
			if (!func_1633(4))
			{
				if (iVar0 == 1)
				{
					func_1637();
					func_716(455, 1);
					func_1635(4);
				}
			}
			if (!func_1633(8))
			{
				if (iVar0 >= 3)
				{
					func_1637();
					func_716(455, 1);
					func_1635(8);
				}
			}
			break;
	}
}

void func_1577(var uParam0)
{
	func_1423(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1423(uParam0, 617531372);
	}
	else
	{
		func_1423(uParam0, 291123060);
	}
}

void func_1578(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1638(uParam0))
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

int func_1579(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1580(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_802(0))
	{
		return func_1639(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_968(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1581(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1448(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_957(0) };
	if (func_1640(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1582(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_968(bParam7);
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

int func_1583(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_968(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_1584(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
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
	if (!func_964(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1585(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_965(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1641(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1642(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1585(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_1586(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
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
	if (func_1585(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_964(Param0, &Var0, 1, 0) || !func_964(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1585(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1641(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_1641(&Var14) };
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
					func_1643(iVar60, 1);
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
		iVar60 = func_1642(1168099063, &Var28, 0);
		iVar60 = func_1642(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_1587(int iParam0)
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

int func_1588()
{
	return Global_40.f_1095.f_3135;
}

void func_1589(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1590(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_968(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_964(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1591(int iParam0)
{
	int iVar0;

	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_962(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

void func_1592(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

float func_1593(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1485(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1594(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1644(iVar6) - func_1644(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1594(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1595(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1596(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1597(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1594(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1644(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1644(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1598(int iParam0)
{
	int iVar0;

	if (func_1645(iParam0, &iVar0))
	{
		return func_1644(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1646())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1646())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1646())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1600(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1647(iParam0));
	sVar4 = func_571(func_1648(iVar3, iParam2));
	sVar6 = func_1649(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1650(iParam0));
	iVar8 = func_1651(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1652(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_733(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1653(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1601(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1602(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1603(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1604(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return 1;
		case -1969404854:
			return 1;
		case 1761263432:
			return 1;
		case -843795569:
			return 1;
		case -832850511:
			return 1;
		case -1464585113:
			return 1;
		case -1290897778:
			return 1;
		case -100913452:
			return 1;
		case 313332607:
			return 1;
		case -124539232:
			return 1;
		case 59384454:
			return 1;
		case 905173572:
			return 1;
		case 1432949803:
			return 1;
		case -983831788:
			return 1;
		case -1882344824:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1605(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1606(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1654(&iVar0, 0, iVar95, &Var1) && !func_1654(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1655(iVar0, &Var1);
			if (func_967(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1607()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_1656(Global_35, &iVar0);
	Var30 = { func_957(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1657(0);
	func_1658(7);
	func_1659(-1623728698, 1, 1, 0);
	if (func_1418() == 1160113249)
	{
		func_1659(-763730846, 1, 1, 1);
		func_1659(-361635024, 1, 1, 1);
	}
	func_1660(Global_35, &iVar0);
}

int func_1608(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_968(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_805(&uVar6, iVar0);
	func_806(&uVar6, iVar1);
	func_807(&uVar6, iVar2);
	func_808(&uVar6, iVar3);
	func_809(&uVar6, iVar4);
	func_810(&uVar6, iVar5);
	return uVar6;
}

int func_1609(int iParam0, int iParam1)
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

void func_1610(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1661(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1661(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1662(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1611(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1663(uParam0, 1))
	{
		func_1664(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_1612(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1613(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1541(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1541(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1541(iVar2, iVar0);
		}
	}
}

int func_1614(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1418();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1615(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, uParam1, uParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, uParam1, uParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1616(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

bool func_1617(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1327(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1618(var uParam0)
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

void func_1619(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_1665(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1666(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1620(int iParam0, int iParam1)
{
	if (func_1() == -1)
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

void func_1621(int iParam0, bool bParam1, int iParam2)
{
	func_1667(&(Global_1946804->f_1378), iParam0);
	func_1668(2, iParam0, 6);
	if (bParam1)
	{
		func_1622(0, 1);
	}
}

void func_1622(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1669(0);
	}
	if (bParam0)
	{
		func_1548(8);
		func_1548(512);
	}
	else
	{
		func_1548(8);
		func_1548(16);
	}
}

bool func_1623(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1624(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1625(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1626(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1627(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_477(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_477(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1628()
{
	return Global_1946804->f_1497;
}

char* func_1629(int iParam0)
{
	int iVar0;

	iVar0 = func_1570(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1509(iVar0);
}

int func_1630(int iParam0)
{
	int iVar0;

	if (func_1670(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1671(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1672(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1673(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1631(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_1168(func_1674(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1632(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1168(func_1675(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1633(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1634()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_1237(1654063339, 1, 752097756);
	iVar0 = func_1488(1);
	func_1600(1, iVar0, 0);
}

void func_1635(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1636()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_1237(1623931083, 1, 752097756);
	iVar0 = func_1488(2);
	func_1600(2, iVar0, 0);
}

void func_1637()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_1237(-1845241476, 1, 752097756);
	iVar0 = func_1488(0);
	func_1600(0, iVar0, 0);
}

int func_1638(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1639(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_964(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_958(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1676(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1677(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1678(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1679(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1641(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1642(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1640(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_968(bParam2), uParam0, iParam1);
}

struct<16> func_1641(var uParam0)
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

int func_1642(int iParam0, var uParam1, bool bParam2)
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
					func_1643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1643(int iParam0, int iParam1)
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
	func_1680(iParam0, iParam1);
}

int func_1644(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1645(var uParam0, var uParam1)
{
	return 0;
}

int func_1646()
{
	return 0;
}

int func_1647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_968(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_968(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_968(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1648(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1649(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1650(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1651(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1652(int iParam0)
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

int func_1653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1654(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_944(iParam1) && !func_1130(iParam1))
	{
		iVar0 = func_1016(iParam1);
	}
	else
	{
		return 0;
	}
	func_1446(uParam3);
	iVar5 = func_1441(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*uParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*uParam0);
	return 1;
}

void func_1655(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1681(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1682(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1656(int iParam0, int* iParam1)
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
		if (func_312(iVar31))
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

void func_1657(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_967(iVar1, 0))
		{
			func_1683(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1658(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_1() == -1)
	{
		func_1684(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_962(iVar2) != -999503751)
		{
			func_1685(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1686(iVar2, 0))
		{
			func_1687(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1659(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1688(iParam0))
	{
		return;
	}
	iVar0 = func_962(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		case 81053684:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		case -999503751:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		case -525676072:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		case -1719060085:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		case -413129408:
			bVar1 = func_1689(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1690(0))
	{
		func_1691(iParam0, 1);
		if (func_1418() == 1160113249)
		{
			func_1691(func_1690(-2125499975), 0);
		}
		else
		{
			func_1691(func_1690(1160113249), 0);
		}
	}
	func_1692();
	if (func_1693(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_968(0), iParam0, 0);
	}
	func_1687(iParam0, bParam3);
	if (bParam2)
	{
		func_1622(0, 0);
	}
}

void func_1660(int iParam0, int iParam1)
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
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, 0))
			{
				if (func_313(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1661(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1662(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1663(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1664(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1665(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1666(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1667(var uParam0, int iParam1)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1665(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_1666(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1668(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
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

void func_1669(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1670(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (func_1170(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1671(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (func_1170(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1672(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (func_1170(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1673(int iParam0)
{
	if (!func_967(iParam0, 0))
	{
		return 0;
	}
	if (func_1170(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1674(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1694(iParam0);
		case 1:
			return func_1695(iParam0);
		case 2:
			return func_1696(iParam0);
		case 3:
			return func_1697(iParam0);
	}
	return 0;
}

int func_1675(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1698(iParam0);
		case 1:
			return func_1699(iParam0);
		case 2:
			return func_1700(iParam0);
		case 3:
			return func_1701(iParam0);
		case 4:
			return func_1702(iParam0);
		case 5:
			return func_1703(iParam0);
		case 6:
			return func_1704(iParam0);
		case 7:
			return func_1705(iParam0);
		case 8:
			return func_1706(iParam0);
	}
	return 0;
}

struct<28> func_1676(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_968(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1641(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1677(int iParam0, var uParam1, bool bParam2)
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
					func_1643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1678(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_968(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1641(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1679(int iParam0, var uParam1, bool bParam2)
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
					func_1643(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1643(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1643(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1680(int iParam0, int iParam1)
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

void func_1681(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1682(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1683(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_962(iParam0))
	{
		case -2061583405:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1707(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1692();
	}
	if (bParam1)
	{
		func_1622(0, 0);
	}
}

void func_1684(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1482(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1484(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1408(iVar0);
	}
}

void func_1685(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1708(iParam2, *uParam0);
	func_1709(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1686(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_968(0), &Var5, iParam1);
	return 1;
}

void func_1687(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_968(0), &Var5, bParam1);
}

int func_1688(int iParam0)
{
	if (func_1() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1689(int iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1710(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_1686(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_962(iParam0) != -999503751)
	{
		func_1685(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1690(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1418();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1691(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { func_800(iParam0, Var0, Var0.f_4, 0) };
	if (func_965(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_968(0), &Var5);
	return 1;
}

void func_1692()
{
	int iVar0;

	if (func_1() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1693(int iParam0)
{
	return func_1712(func_1711(iParam0));
}

int func_1694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1697(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1700(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1707(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1710(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_962(iParam0) != -999503751)
		{
			func_1713(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_962(iParam0) != -999503751)
	{
		func_1713(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1686(iParam0, 1);
	return 1;
}

void func_1708(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1709(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1714(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1327(func_1522(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1715(uParam0);
	}
}

int func_1710(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_1711(int iParam0)
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

bool func_1712(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1713(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1716(iParam1);
	func_1717(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1718(&(uParam0->f_26), iVar1);
		if (func_1719(uParam0->f_26, &iVar0))
		{
			func_1720(iVar0, iVar1);
		}
	}
}

void func_1714(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1721(&(uParam0->f_3));
}

void func_1715(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1722(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1716(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1717(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1718(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1714(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1719(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1720(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1721(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1722(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1723(func_1418());
	if (*uParam0)
	{
		func_1721(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_1() != -1, iParam2);
	*uParam0 = 1;
}

int func_1723(int iParam0)
{
	if (func_1() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

