#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	float fLocal_11 = 0f;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<1225> Local_18 = { 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 5, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, -1082130432, 1, -1082130432, 0, 0, 0 } ;
	var uLocal_1243 = 5;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 2;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
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
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
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
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 2;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
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
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
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
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 10;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
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
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
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
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
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
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
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
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
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
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 2;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 3;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
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
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
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
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion

void __EntryFunction__()
{
	vLocal_0 = { 0.5f, 0.5f, 2f };
	fLocal_11 = 1f;
	fLocal_12 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_1251);
	while (!func_3(&uScriptParam_0))
	{
		func_5(&uScriptParam_0, &uLocal_1251, func_4());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	bVar0 = CAM::_0x139EFB0A71DD9011();
	uVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || uVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	func_6();
	func_7(uParam0);
	if (func_8(&(uParam0->f_9), 1))
	{
		func_9(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (func_10(iVar2))
		{
			func_11(uParam0, iVar2);
		}
		iVar2++;
	}
	func_12();
	if (func_13(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				func_14(uParam0->f_5);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				func_16(uParam0->f_5, 0, 2);
				func_17();
				func_18();
				func_19(uParam0, 0, 1);
				Global_1391438->f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if ((Global_40.f_6563.f_274[iVar3 /*20*/])->f_1 == uParam0->f_1)
					{
						(Global_40.f_6563.f_274[iVar3 /*20*/])->f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!func_20(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514->f_11, 1);
				}
				else
				{
					func_22(uParam0->f_5, Global_1879514->f_11);
				}
				func_23();
				func_17();
				func_18();
				Global_1391438->f_3 = -1;
				if (uParam0->f_1 == -1891229662 && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 2116153146))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(2116153146, -619793955))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -1964527373, "MISS_CHALL_TIME_5_45", 1, 1, 0);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(2116153146, -93744849))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -485522501, "CABR01_CHALL_1", 1, 1, 0);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(2116153146))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514->f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, 2116153146, MISC::GET_HASH_KEY(sVar4), 908516622);
					MISSIONDATA::_0xE824CE7D13FCB300(2116153146, func_24());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(2116153146);
					UILOG::_0xA31013798FADCADC(3, 2116153146, 1);
				}
				else
				{
					func_19(uParam0, 1, 0);
				}
				if (func_20(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_25();
					func_26(0);
				}
				break;
			case 3:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				func_15(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				func_14(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				func_15(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_27(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				func_14(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {func_28(uParam0->f_2)}, 3);
				func_15(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	func_30(64);
	if (!func_31(Global_36))
	{
		func_32(1);
		func_33(0);
	}
	func_34(Global_1935630, 256);
	func_35(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

int func_2(var uParam0, var uParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_68)))
	{
		return 0;
	}
	if (func_36(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && func_37(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

int func_3(var uParam0)
{
	int iVar0;

	if (func_29(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!func_29(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((func_38(uParam0->f_14) || func_39(uParam0)) || func_40(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				func_41(1, 1);
				func_42(&uLocal_1251);
			}
			if (!func_38(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return 1;
			}
		}
		if (func_39(uParam0) || func_40(uParam0))
		{
			func_43(&(Global_1347343->f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		func_44(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = func_46(uParam0);
				return 0;
			}
			if (func_47(&(Global_1391438->f_5), 128) || func_8(&(uParam0->f_9), 896))
			{
				func_48(&(Global_1391438->f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(func_50(), 4);
				func_19(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				iVar0 = func_52(*uParam0);
				Global_40.f_7039[func_53(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_4()
{
	return -1;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!uParam1->f_281)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_54(uParam1->f_66[iVar0 /*16*/], 1048576))
		{
			if (func_55(uParam0, uParam1->f_66[iVar0 /*16*/], iParam2))
			{
				if (func_56(uParam1->f_66[iVar0 /*16*/], 1))
				{
					if (func_54(uParam1->f_66[iVar0 /*16*/], 4))
					{
						func_57(uParam1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_10(iVar0))
		{
			func_59(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_60(&(Global_1359489->f_40), 1);
}

void func_7(var uParam0)
{
	func_61(&(uParam0->f_9), 256, 0);
	func_62(&Local_18);
}

int func_8(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	func_63(iParam0, 8, 0);
}

bool func_10(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (!func_64(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		func_65(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(func_66(iParam1), false);
		func_65(iParam1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_58(iVar0) && func_67(iVar0, 1))
		{
			func_68(iVar0);
		}
		iVar0++;
	}
}

bool func_13(int iParam0)
{
	int iVar0;

	iVar0 = func_69(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	if (iParam0 != func_71(0))
	{
		return;
	}
	if (func_72(iParam0) == 0)
	{
	}
	iVar0 = func_73(iParam0);
	if (func_74(iParam0) == 3)
	{
		if (func_72(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_72(iParam0)))
		{
			if (func_73(iParam0) != 1 && func_73(iParam0) != 8)
			{
				func_75(func_73(iParam0), func_72(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_76(iParam0);
	func_32(1);
	func_33(0);
	func_77(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_78(1);
			func_79(15, 0, 1);
			break;
		case 4:
			func_79(10, 0, 1);
			break;
		case 8:
			func_79(10, 0, 1);
			break;
		case 9:
			func_79(10, 0, 1);
			break;
		case 2:
			func_79(10, 0, 1);
			break;
		case 6:
			func_79(10, 0, 1);
			break;
		case 5:
			func_79(10, 0, 1);
			break;
	}
	func_80(1);
}

void func_15(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_81(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_43(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_43(&(Global_1347343->f_11), 16384);
	}
	if (func_82() >= 2)
	{
		if (!func_81(Global_1347343->f_11, 16384))
		{
			func_43(&(Global_1347343->f_11), 8);
		}
		func_83(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_84(Global_1935630, 2048);
	func_85(bParam5);
}

void func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_13(iParam0) && !func_86(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_72(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_13(iParam0))
	{
		iParam2 = -1;
	}
	if (func_74(iParam0) == 3 || (func_74(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_72(iParam0))))
	{
		func_75(func_73(iParam0), func_72(iParam0), iParam2);
		if ((!func_70(Global_1572864->f_8) && !func_87(0, 1, 0)) && !func_88(&Global_1935630, 32768))
		{
			iVar0 = func_89(iParam0);
			if (iVar0 != -1)
			{
				func_90(0);
			}
			else if (func_73(iParam0) == 8)
			{
				iVar0 = func_91();
				if (iVar0 != -1)
				{
					func_90(0);
				}
			}
		}
	}
	func_77(iParam0, 0);
	if (func_71(0) == iParam0)
	{
		func_32(1);
		func_33(0);
		func_80(1);
	}
	func_92(iParam0, 1);
	func_76(iParam0);
}

void func_17()
{
	int iVar0;

	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_18()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_93(0);
	func_94(0);
	func_95(0);
	func_96(0);
	func_97(0);
	func_83(1f);
}

void func_19(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	var uVar10;

	if (!func_98(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_99(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, func_100(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, func_101(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(func_100(*uParam0)), func_102(uParam0->f_1), uVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, func_103(*uParam0), 676312963);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, func_104(uParam0->f_1), func_105(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, func_102(uParam0->f_1), "", bParam1, 0, 0);
	if (bParam1)
	{
		UILOG::_UILOG_MARK_MISSION_COMPLETED(iVar1);
	}
}

bool func_20(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_70(iParam0))
	{
		return;
	}
	if (func_69(iParam0) == 4)
	{
		func_107(iParam0, func_106());
		if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
		{
			if (bParam3)
			{
				func_77(iParam0, 6);
			}
			else
			{
				func_77(iParam0, 5);
			}
			func_76(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_32(1);
	}
	iVar0 = func_73(iParam0);
	bVar1 = func_108() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_109(0, 2);
		if (!bVar1 && bParam1)
		{
			func_110();
		}
	}
	else
	{
		func_33(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_111(iParam0);
	}
	else
	{
		Var2 = { func_112(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_20(32768))
		{
			Var4 = { func_112(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_74(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_113(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_113(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_113(iParam0) != 95 && func_113(iParam0) != 82) && !func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_113(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_113(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_116(func_113(iParam0), iVar6, func_115());
	}
	else if (iVar0 == 8)
	{
		func_118(func_113(iParam0), iVar6, func_115(), func_117());
	}
	if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
	{
		iVar9 = func_119(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_120(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_121(func_113(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_122((iVar10 - 20), 0, iVar10);
					iVar11 = func_122((iVar11 - 10), 0, iVar11);
				}
				func_78(1);
				func_79(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_79(45, 0, 1);
				break;
			case 8:
				iVar10 = func_123(func_113(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_122((iVar10 - 20), 0, iVar10);
					iVar11 = func_122((iVar11 - 10), 0, iVar11);
				}
				func_79(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_124(func_113(iParam0)))
				{
					func_125(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_79(120, 0, 1);
				break;
			case 2:
				func_79(120, 0, 1);
				break;
			case 6:
				func_79(func_127(func_126(iParam0)), 0, 1);
				break;
			case 5:
				func_79(120, 0, 1);
				break;
		}
	}
	func_92(iParam0, 1);
	func_107(iParam0, func_106());
	func_76(iParam0);
	if ((!func_74(iParam0) == 0 && bParam1) && func_108() == -1)
	{
		iVar12 = func_89(iParam0);
		if (iVar12 != -1)
		{
			func_90(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_91();
			if (iVar12 != -1)
			{
				func_90(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_113(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_128(func_113(iParam0)) && func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_113(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_113(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
	{
		if (bParam3)
		{
			func_77(iParam0, 6);
		}
		else
		{
			func_77(iParam0, 5);
		}
		func_76(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_113(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_130();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_131(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1267972061);
						func_131(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1619534881);
						func_131(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-755457379);
						func_131(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1015404643);
						func_131(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1724192342);
						func_131(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(1310680212);
						func_131(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-566881549);
						func_131(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-1753730528);
						func_131(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(147796381);
						func_131(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(-378547623);
						func_131(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(829545206);
						func_131(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132(891318243);
						func_131(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_133();
						func_134(967523420);
						func_135();
						func_136();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_101(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_131(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_137(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_137(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_138(304805134, 1, 1);
						if (!func_139(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_140();
						break;
					case 26:
						func_141();
						break;
					case 17:
						func_142(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_143())
						{
							func_144(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_145(-514575035, -1))
						{
							iVar15 = func_106();
							func_146(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_147(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_143())
						{
							func_144(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_143())
						{
							func_144(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_148();
						break;
					case 37:
						func_149();
						if (func_150())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					case 38:
						func_151();
						break;
					case 43:
						func_152();
						break;
					case 44:
						if (!func_139(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_139(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_21(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_153();
						break;
					case 59:
						func_154();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_155();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_156();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_137(451, 0);
						}
						if (!func_157(-1992824800))
						{
							if (func_157(1520110311))
							{
								iVar16 = func_106();
								func_146(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_147(1937177603, iVar16, 1);
							}
						}
						if (func_158(4))
						{
							if (!func_159(684296857, 1, 0))
							{
								iVar17 = func_106();
								func_146(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_147(-1439688706, iVar17, 1);
							}
						}
						func_131(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_131(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_160(89200);
						func_160(2300);
						func_160(2300);
						break;
					case 68:
						func_161();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_162();
						func_160(-139100);
						break;
					case 69:
						if (func_139(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_160(-6000);
						}
						break;
					case 70:
						func_160(23400);
						func_160(1900);
						func_160(-15000);
						break;
					case 71:
						func_160(-5500);
						break;
				}
				break;
			case 8:
				switch (func_113(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_163();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_164();
						break;
					case 66:
						func_165();
						func_166();
						break;
					case 67:
						if (!func_167(6))
						{
							func_168(6);
						}
						if (!func_167(3))
						{
							func_168(3);
						}
						if (func_143())
						{
							func_144(joaat("weapon_pistol_m1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_139(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_169(0);
							func_160(40500);
						}
						else
						{
							func_169(0);
							func_160(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_113(iParam0))
				{
					case 0:
						switch (func_126(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_170(iParam0);
		func_171();
		switch (iVar0)
		{
			case 1:
				switch (func_113(iParam0))
				{
					case 4:
						func_172(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_172(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_172(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_172(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_172(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_172(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_172(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_173(iParam0);
						func_172(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_172(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_172(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_159(-2046502963, 1, 0))
						{
							func_131(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_172(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_172(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_172(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_173(iParam0) == 0)
						{
							func_172(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_172(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 536870912))
				{
					func_174(11, 1);
				}
				switch (func_113(iParam0))
				{
					case 109:
						func_172(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_174(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_172(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_172(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_172(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_172(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_175(0, 10, 11, 2116153146))
				{
					func_172(iParam0, func_173(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 7, 11, -379687487))
				{
					func_172(iParam0, func_176(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 8, 11, -1386089015))
				{
					func_172(iParam0, func_176(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 11, 11, -1952009645))
				{
					func_172(iParam0, func_176(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_175(0, 12, 11, 2065895756))
				{
					func_172(iParam0, func_176(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_74(iParam0) == 0)
			{
				if (func_72(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_72(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_75(func_73(iParam0), func_72(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_113(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_178(func_177(Global_1879514->f_1));
						if (iVar0 == 8 && func_113(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_128(func_113(iParam0)) && func_114(((*Global_1347702)[func_113(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_179(bParam2, iVar20);
		}
	}
	func_80(1);
	if ((bVar13 || func_129()) && (func_73(iParam0) == 1 || func_73(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::_0x01F4D242765C6B24(func_72(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_75(func_73(iParam0), func_72(iParam0), iVar0);
		if (func_20(32768))
		{
			iVar1 = func_73(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_175(0, 10, 11, 2116153146)))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_24();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_86(iParam0))
	{
		func_16(iParam0, 0, 2);
	}
	else if (func_13(iParam0))
	{
		if (!func_74(iParam0) == 5 && !func_74(iParam0) == 6)
		{
			if (bParam1)
			{
				func_77(iParam0, 6);
			}
			else
			{
				func_77(iParam0, 5);
			}
			func_76(iParam0);
		}
	}
	switch (func_73(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_113(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

void func_23()
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -1044347982))
	{
		switch (func_180())
		{
			case 1:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-85949609, 1);
				break;
			case 2:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
				break;
			case 3:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(1480231309, 1);
				break;
		}
	}
}

int func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_181(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_182(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_25()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;

	func_183(4112);
	func_184(6);
	vVar2 = { func_185(((*Global_2621440)[0 /*12065*/])->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_186(vVar2, uVar1, uVar0, 0);
	func_187(vVar2);
	Global_40.f_9.f_15 = func_188(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_26(int iParam0)
{
	if (func_108() != -1)
	{
		return;
	}
	func_183(32);
	if (iParam0 == 0)
	{
		func_183(16);
	}
	else if (iParam0 == 1)
	{
		func_183(8);
	}
	func_189();
	Global_43888 = 1;
}

struct<8> func_27(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "ALLY_DEAD_", 64);
	if (!func_58(iParam0))
	{
		return cVar0;
	}
	StringConCat(&cVar0, func_190(iParam0), 64);
	return cVar0;
}

struct<8> func_28(int iParam0)
{
	struct<8> Var0;

	if (!func_58(iParam0))
	{
		return Var0;
	}
	StringCopy(&Var0, func_190(iParam0), 64);
	StringConCat(&Var0, "_ABANDON", 64);
	return Var0;
}

int func_29(int iParam0, int iParam1)
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
	if (func_191(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_191(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_30(int iParam0)
{
	switch (func_108())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_31(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_188(vParam0, 1);
	if (iVar0 == func_192())
	{
		return 1;
	}
	return 0;
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_34(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_84(Global_1935630, 4194304);
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

int func_33(bool bParam0)
{
	if (!bParam0 && func_193(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_35(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (func_194(uParam0->f_44))
	{
		func_195(&(uParam0->f_44), 1, 1);
	}
	if (func_196(&(uParam0->f_45)))
	{
		func_197(&(uParam0->f_45));
	}
}

int func_36(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!bParam4 && !uParam0->f_270)
	{
		if (!func_198(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return 0;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (func_199(uParam0, 0))
			{
				if (func_200(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_201(uParam0, 1, &iVar0))
					{
					}
					if (func_202(uParam0, 3, &cVar2))
					{
					}
					if (func_201(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_201(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_201(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_201(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_201(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!func_203(uParam0, &cVar2, uParam0->f_273))
							{
								*((*uParam0)[uParam0->f_273 /*16*/]) = { cVar2 };
								func_204((*uParam0)[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							*(uParam0->f_33[uParam0->f_274 /*16*/]) = { cVar2 };
							func_204(uParam0->f_33[uParam0->f_274 /*16*/], 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							*(uParam0->f_66[uParam0->f_275 /*16*/]) = { cVar2 };
							func_204(uParam0->f_66[uParam0->f_275 /*16*/], 1048576);
							if (!bVar19 && func_54(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_66[uParam0->f_275 /*16*/]);
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!func_203(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							*(uParam0->f_227[uParam0->f_276 /*16*/]) = { cVar2 };
							func_204(uParam0->f_227[uParam0->f_276 /*16*/], 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return 0;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!func_37(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (func_199(uParam0, 12))
			{
				if (func_201(uParam0, 13, &iVar0))
				{
				}
				if (func_201(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return 0;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		func_205(uParam0);
	}
	return 1;
}

bool func_37(var uParam0)
{
	return uParam0->f_269;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 7:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_39(var uParam0)
{
	if (!func_51(uParam0))
	{
		return func_206(uParam0, &Local_18);
	}
	return 0;
}

int func_40(var uParam0)
{
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_14 = 6;
		return 1;
	}
	if (!func_29(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_14 = 3;
		return 1;
	}
	if (!func_29(func_66(uParam0->f_2), 0))
	{
		uParam0->f_14 = 4;
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630->f_44) && WEAPON::_0x6AD66548840472E5(Global_1935630->f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		func_207(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_0x9A92C06ACBAF9731();
	}
}

void func_42(var uParam0)
{
	func_208(3, &(uParam0->f_66));
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0)
{
	if (Local_18.f_565.f_2 > 0 && Local_18.f_565.f_2 < 8)
	{
		Stack.Push(&Local_18);
		Call_Loc(uLocal_1250);
		func_209(&Local_18);
		func_210(&(Local_18.f_565), &(Local_18.f_730), &(Local_18.f_1111));
		func_211(&Local_18);
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;

	func_212(&(uParam0->f_43));
	func_213(&Local_18);
	func_214(&(Local_18.f_565));
	func_215(&(Local_18.f_565), &(Local_18.f_730));
	func_216(&(Local_18.f_565));
	func_217(&Local_18);
	func_218(&Local_18);
	func_219(&Local_18);
	switch (Local_18.f_565.f_2)
	{
		case -1:
			return;
		case 0:
			func_220(1, 1);
			break;
		case 1:
			if (func_221(uParam0))
			{
				func_220(2, 1);
			}
			break;
		case 2:
			if (func_222(uParam0))
			{
				func_220(3, 1);
			}
			break;
		case 3:
			if (func_223(uParam0))
			{
				func_220(4, 1);
			}
			break;
		case 4:
			if (func_224(uParam0))
			{
				func_220(5, 1);
			}
			break;
		case 5:
			if (func_225(uParam0))
			{
				func_220(6, 0);
			}
			break;
		case 6:
			if (!func_226(&(Local_18.f_1111.f_40[0]), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(266), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, 1446817251, func_228(8, 2), func_229(8, 2), -1, 1, 0, 0, -1082130432, 0);
				func_230(&(Local_18.f_1111), 0, &iVar0, 0, 0, 1, 1, 1);
			}
			else if (!func_226(&(Local_18.f_1111.f_40[4]), 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_227(269), 0, 0, -1, 0, 0, -1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(0, -442037069, func_228(8, 3), func_229(8, 3), -1, 1, 0, 0, -1082130432, 0);
				func_230(&(Local_18.f_1111), 4, &iVar1, 0, 0, 1, 1, 1);
			}
			else
			{
				func_220(7, 0);
			}
			break;
		case 7:
			if (func_231(&(Local_18.f_1111), 0, 0, 3600f) && func_231(&(Local_18.f_1111), 4, 0, 3600f))
			{
				func_233(func_232(3, -1891229662), Local_18.f_1224.f_7 + 19400);
				func_234(Local_18.f_1224.f_7, 0, 0, 0, 1);
				func_30(64);
				func_220(8, 0);
			}
			break;
		case 8:
			return;
	}
}

int func_46(var uParam0)
{
	if (func_8(&(uParam0->f_9), 4))
	{
		if (!func_235(uParam0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_52)))
	{
		if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_52)))
		{
			HUD::_0xF66090013DE648D5(&(uParam0->f_52));
		}
	}
	return 1;
}

int func_47(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

void func_48(var uParam0, int iParam1, bool bParam2)
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

int func_49(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	struct<11> Var6;
	char* sVar17;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_237(&(uParam0->f_3), func_236(iVar0)))
		{
			if (func_238(iVar0))
			{
				if (!func_10(iVar0))
				{
					func_239(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return 0;
				}
				if (((!func_67(iVar0, 0) && uParam0->f_1 != -103573613) && uParam0->f_1 != 194099983) && uParam0->f_1 != 2038046186)
				{
					func_240(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(func_66(iVar0), true);
				}
			}
			else if (!func_10(iVar0))
			{
				func_239(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return 0;
			}
		}
		iVar0++;
	}
	if (!func_241(uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		func_242(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = func_243(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return 0;
		}
	}
	func_244(uParam0);
	if (func_8(&(uParam0->f_9), 128))
	{
		if (!func_245(uParam0))
		{
			return 0;
		}
	}
	sVar17 = func_99(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
	{
		MISC::_0x1096603B519C905F(sVar17);
	}
	if (func_246())
	{
		func_247(1);
	}
	func_248(64);
	func_32(1);
	func_84(Global_1935630, 256);
	if (func_29(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!func_20(32768))
	{
		func_249(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return 1;
}

int func_50()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_51(var uParam0)
{
	if (Local_18.f_565.f_2 >= 8)
	{
		Global_1879514->f_1 = uParam0->f_5;
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return 395864095;
		case 234527101:
			return -848293915;
		case 1784895540:
			return 337593120;
		case -1511391406:
			return 1459000719;
		case 654481153:
			return 70208796;
		case -1215120894:
			return -424258227;
		case 931703394:
			return 497820992;
		case 1193949598:
			return 384487969;
		case 754620122:
			return -1911358023;
		case -2036347356:
			return 1238571818;
		case -1341684320:
			return -448585888;
		case -919476462:
			return 1761188575;
		case -1670940721:
			return 189861409;
		case 380107708:
			return -1481840534;
		case -1700356309:
			return 1108319169;
		case 1523333387:
			return -414878571;
		case 1744128959:
			return -363271663;
		case -1567081107:
			return -1084190204;
		case -1739349092:
			return -667426721;
		case -301635006:
			return 309704192;
		case 565221344:
			return 1315551623;
		default:
			break;
	}
	return -848293915;
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1911358023:
			return 8;
		case -1481840534:
			return 13;
		case -1084190204:
			return 17;
		case -848293915:
			return 1;
		case -667426721:
			return 18;
		case -448585888:
			return 10;
		case -424258227:
			return 5;
		case -414878571:
			return 15;
		case -363271663:
			return 16;
		case 70208796:
			return 4;
		case 189861409:
			return 12;
		case 309704192:
			return 19;
		case 337593120:
			return 2;
		case 384487969:
			return 7;
		case 395864095:
			return 0;
		case 497820992:
			return 6;
		case 1108319169:
			return 14;
		case 1238571818:
			return 9;
		case 1315551623:
			return 20;
		case 1459000719:
			return 3;
		case 1761188575:
			return 11;
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

bool func_54(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_55(var uParam0, var uParam1, int iParam2)
{
	if (func_54(uParam1, 1))
	{
		return 0;
	}
	switch (func_250(uParam1))
	{
		case 0:
			return iParam2 >= 0;
		case 1:
			return uParam1->f_11 == iParam2;
		case 3:
			return uParam0->f_14 == 1;
		case 2:
			return uParam0->f_14 == 2;
	}
	return 0;
}

int func_56(char* sParam0, bool bParam1)
{
	if (func_54(sParam0, 1))
	{
		return 0;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		func_204(sParam0, 1);
		return 1;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_204(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_204(sParam0, 1);
			return 0;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			func_204(sParam0, 1);
			return 0;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			func_204(sParam0, 1);
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		func_204(sParam0, 1);
		return 1;
	}
	func_204(sParam0, 1);
	return 0;
}

void func_57(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		if ((func_54(uParam0->f_66[iVar0 /*16*/], 1048576) && func_54(uParam0->f_66[iVar0 /*16*/], 4)) && !func_54(uParam0->f_66[iVar0 /*16*/], 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(uParam0->f_66[iVar0 /*16*/]);
			return;
		}
		iVar0++;
	}
}

int func_58(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_251(iParam0))
		{
			return;
		}
	}
	func_252(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 || !func_196(uParam0))
	{
		func_253(uParam0);
	}
}

void func_61(var uParam0, int iParam1, bool bParam2)
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

void func_62(var uParam0)
{
	int iVar0;

	func_254();
	func_255(uParam0);
	func_256(&(uParam0->f_730));
	func_257(uParam0);
	func_258(uParam0, &(uParam0->f_1111), 0, 1);
	func_258(uParam0, &(uParam0->f_1111), 1, 1);
	func_258(uParam0, &(uParam0->f_1111), 2, 1);
	func_259(0);
	func_260(&(uParam0->f_1111), 0);
	func_261(&(uParam0->f_1111), 0);
	func_262(uParam0);
	func_263(-2020023971, 1, 0);
	func_264();
	if (func_29(&(uParam0->f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_1111.f_40[0])))
	{
		func_265(&(uParam0->f_1111), 0, 2, 0);
	}
	if (func_29(&(uParam0->f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_1111.f_40[1])))
	{
		func_265(&(uParam0->f_1111), 1, 0, 0);
		func_265(&(uParam0->f_1111), 1, 1, 0);
	}
	if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		func_265(&(uParam0->f_1111), 2, 2, 0);
	}
	if (func_29(&(uParam0->f_1111.f_40[3]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_1111.f_40[3])))
	{
		func_265(&(uParam0->f_1111), 3, 2, 0);
	}
	func_266(1, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(&(uParam0->f_1111.f_40[1]), false);
	ENTITY::SET_ENTITY_INVINCIBLE(&(uParam0->f_1111.f_40[5]), false);
	if (func_268(&(((*Global_1360165)[func_267(0) /*1157*/])->f_12), 16))
	{
		func_269(func_267(0), 0);
	}
	if (func_268(&(((*Global_1360165)[func_267(4) /*1157*/])->f_12), 16))
	{
		func_269(func_267(4), 0);
	}
	AUDIO::_0x660A8F876DF1D4F8(7);
	AUDIO::_0x660A8F876DF1D4F8(25);
	AUDIO::_0x660A8F876DF1D4F8(45);
	func_270(&(uParam0->f_730.f_276), Global_35);
	func_270(&(uParam0->f_730.f_276), &(uParam0->f_1111.f_40[0]));
	func_270(&(uParam0->f_730.f_276), &(uParam0->f_1111.f_40[4]));
	func_271(func_267(0), 0);
	func_271(func_267(4), 0);
	if (uParam0->f_565.f_2 < 7)
	{
		func_231(&(uParam0->f_1111), 0, 1, -1082130432);
		func_231(&(uParam0->f_1111), 4, 1, -1082130432);
	}
	func_272(&(uParam0->f_1111.f_40[3]), 0);
	if (PED::_0x62DE46F061CAA468() != 0)
	{
		PED::_0x7D4E70A67A651C71(19);
	}
	Global_1430231->f_2 = 0;
	iVar0 = 244;
	while (iVar0 <= 252)
	{
		TASK::DELETE_PATROL_ROUTE(func_227(iVar0));
		iVar0++;
	}
	if (SCRIPTS::_0x7409669C5ED50144(-1392528840))
	{
		SCRIPTS::_0x50B72A754EE64A71(-1392528840);
	}
	func_273(70);
	func_274(&(uParam0->f_1111));
	func_30(64);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	func_275();
	func_276(1);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x5CE5CACC01D0F985();
	MISC::_0xEF42F56F69877125();
	MISC::_0x6AC4AF46A6B8DFB2(1);
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
	func_277(0);
	PLAYER::_0x93624B36E8851B42(PLAYER::PLAYER_ID());
	TASK::RESET_SCENARIO_GROUPS_ENABLED();
	AUDIO::_0x531A78D6BF27014B(func_227(259));
	LAW::_0xC5EB2755FA25F1E9(1);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	PED::_0x49DADFC4CD808B0A(Global_35, 0, -1);
	AUDIO::TRIGGER_MUSIC_EVENT(func_278(11));
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	if (!func_251(iParam0))
	{
		return;
	}
	func_279(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

bool func_64(int iParam0)
{
	return func_280(iParam0, 16, 1);
}

void func_65(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_64(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_59(iParam0, 56, 1);
		func_60(&(Global_1359489->f_40), 1);
	}
	func_269(iParam0, 0);
	func_63(iParam0, 4, 0);
	func_9(iParam0);
	func_281(iParam0);
	func_282(iParam0, 37, 1);
	bVar0 = func_29(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_283(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_284(iParam0, 64, 1))
	{
		func_282(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_282(iParam0, 33, 1);
		func_282(iParam0, 34, 1);
		func_285(iParam0, 1056964608, -1, 1061158912);
		func_286(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_59(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_59(iParam0, 35, 1);
			if (bParam8)
			{
				func_59(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_271(iParam0, 0);
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
		func_282(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_286(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_60(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_197(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_59(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_287(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_284(iParam0, 45, 1))
	{
		func_282(iParam0, 45, 1);
	}
	func_288(iParam0, 16, 1);
	func_282(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_29(func_289(iParam0), 0))
		{
			func_290(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_66(int iParam0)
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_67(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		if (!func_29(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_50(), 1);
}

void func_68(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_67(iParam0, 0))
	{
	}
	func_291(iParam0);
	Global_1359489->f_15 = func_292(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_293();
	func_282(iParam0, 32, 1);
	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_294();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_69(int iParam0)
{
	if (!func_70(iParam0))
	{
		return -1;
	}
	return func_74(iParam0);
}

bool func_70(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_71(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_72(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_73(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	return func_296(func_295(iParam0));
}

int func_74(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_297(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_108() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_76(int iParam0)
{
	return func_299(func_298(iParam0));
}

void func_77(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	func_300(iParam0, iParam1);
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_301(iParam0, iParam1, bParam2);
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

void func_80(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_82()
{
	return Global_1572864->f_12;
}

void func_83(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_85(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_302(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_303();
	Var1.f_3.f_3 = iVar0;
	if ((!func_304(Global_1347343->f_2) && !func_81(Global_1347343->f_11, 64)) || func_20(32768))
	{
		Var1.f_7 = func_305();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_81(Global_1347343->f_11, 1024) && !func_20(32768))
	{
		Var1.f_11 = func_306();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_81(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_307();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_308(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_309(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_43(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_43(&(Global_1347343->f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

int func_86(int iParam0)
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
		iVar0 = func_74(iParam0);
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

int func_87(int iParam0, bool bParam1, int iParam2)
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
		if (func_310())
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
		iVar0 = func_113(&(Global_1898164->f_1[0 /*5*/]));
		if (func_128(iVar0) && func_114(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_70(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_73(iParam0))
	{
		case 1:
			iVar0 = func_113(iParam0);
			return func_311(iVar0);
		case 8:
			iVar1 = func_113(iParam0);
			if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_312(iVar1);
			}
			break;
	}
	return -1;
}

void func_90(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_108() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_313(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_314();
		Global_1898077->f_9 = func_315(Global_1894899->f_2);
		func_316(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_91()
{
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_139(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_139(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_139(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_139(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_139(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_139(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_92(int iParam0, bool bParam1)
{
	if (func_108() != -1)
	{
		return;
	}
	if (func_71(0) != iParam0)
	{
		return;
	}
	if (func_317(iParam0))
	{
		if (bParam1)
		{
			func_318(-525676072);
		}
		else
		{
			func_319(-525676072);
		}
	}
}

void func_93(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_94(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_95(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_97(1);
	}
}

void func_96(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_97(0);
	}
}

void func_97(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case -1891229662:
		case -589165916:
		case -103573613:
		case 194099983:
		case 673012160:
		case 2038046186:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_99(int iParam0)
{
	switch (iParam0)
	{
		case -589165916:
			return "";
		case -1894360593:
			return "CAHT02";
		case 581819093:
			return "CAFS01";
		case 687859577:
			return "CAFS02";
		case -103573613:
			return "CAFF01";
		case 1202375449:
			return "CAHT06";
		case 2038046186:
			return "CADM01";
		case -839878969:
			return "CACR02";
		case -360730635:
			return "CACR03";
		case -1891229662:
			return "CABR01";
		case -668333238:
			return "CACR01";
		case 99378894:
			return "CACR04";
		case 673012160:
			return "CARS02";
		case -1220302226:
			return "PRHM6";
		default:
			break;
	}
	return "";
}

char* func_100(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case 1784895540:
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case 654481153:
			return "ACT_FISHING_LABEL";
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case -2036347356:
			return "ACT_POKER_LABEL";
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
		case -919476462:
			return "ACT_COACH_LABEL";
		case -1670940721:
			return "ACT_BANK_LABEL";
		case 380107708:
			return "ACT_TRAIN_LABEL";
		case 565221344:
			return "ACT_HOMEROB_LABEL";
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
		case -1739349092:
			return "ACT_RETURN_LABEL";
		case -301635006:
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_101(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_139(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_139(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_13(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_320(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return -1840581970;
		case 1202375449:
			return 1095369072;
		case 581819093:
			return -2070575365;
		case 687859577:
			return 1347299165;
		case -839878969:
			return 479371012;
		case -360730635:
			return -234019213;
		case -668333238:
			return 1087917139;
		case 99378894:
			return -454595750;
		case -1891229662:
			return 835736364;
		case -1220302226:
			return 780943699;
		case 673012160:
			return -611970161;
		default:
			break;
	}
	return -1;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case 1202375449:
			return -2142998877;
		case 581819093:
		case 687859577:
			return -1289485729;
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
			return -534080567;
		case -1891229662:
			return -583510864;
		case -1220302226:
			return 372620435;
		case 673012160:
			return 864008392;
		default:
			break;
	}
	return -1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
		case -1891229662:
		case -839878969:
		case -668333238:
		case -360730635:
		case 99378894:
		case 581819093:
		case 673012160:
		case 687859577:
		case 1202375449:
			return -1524039902;
		case -1220302226:
			return -2029665572;
		default:
			break;
	}
	return -1;
}

int func_106()
{
	return &Global_1899515;
}

void func_107(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = uParam1;
}

int func_108()
{
	return Global_1572887->f_12;
}

int func_109(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_193(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_33(bParam0);
	return 1;
}

void func_110()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_58(iVar17))
		{
			iVar18 = func_66(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_197(&(Global_1359489->f_55));
	if (func_320(1777191912, 1))
	{
		func_321(1777191912, 1, 0);
	}
}

void func_111(int iParam0)
{
	if (!func_70(iParam0))
	{
		return;
	}
	func_323(iParam0, (func_322(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

struct<2> func_112(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_113(int iParam0)
{
	if (!func_70(iParam0))
	{
		return -1;
	}
	return func_324(func_295(iParam0));
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_115()
{
	return func_325() > 0;
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_326(-1032423150, iParam1);
			break;
		case 18:
			func_326(294066959, iParam1);
			func_326(-1925639563, iParam1);
			func_326(-378582304, iParam1);
			func_326(-338306437, iParam1);
			break;
		case 20:
			func_326(437270255, iParam1);
			break;
		case 2:
			func_326(-304000413, iParam1);
			func_326(-533612796, iParam1);
			func_326(48036954, iParam1);
			break;
		case 23:
			func_326(193108691, iParam1);
			func_326(491732588, iParam1);
			func_326(671962088, iParam1);
			func_327(1);
			break;
		case 16:
			func_326(-1836056650, iParam1);
			func_326(-754657922, iParam1);
			func_326(-1752355838, iParam1);
			func_326(-1375324510, iParam1);
			break;
		case 59:
			func_326(-514392105, iParam1);
			func_326(-822060246, iParam1);
			if (func_328(146))
			{
				func_326(1372748575, iParam1);
			}
			func_327(1);
			break;
		case 76:
			func_326(1991352213, iParam1);
			if (func_329() == 0)
			{
				func_326(1852488616, iParam1);
			}
			else
			{
				func_326(-9866350, iParam1);
			}
			break;
		case 44:
			func_326(863852599, iParam1);
			func_326(1228374935, iParam1);
			func_326(1517889050, iParam1);
			func_326(830657578, iParam1);
			func_326(1901354958, iParam1);
			break;
		case 46:
			func_326(-582805654, iParam1);
			func_326(250378940, iParam1);
			func_326(-2143265426, iParam1);
			break;
		case 17:
			func_326(-941494139, iParam1);
			func_326(1641489521, iParam1);
			break;
		case 19:
			func_326(-1829423531, iParam1);
			func_326(-1590504752, iParam1);
			func_326(1357221321, iParam1);
			break;
		case 21:
			func_326(-1037992610, iParam1);
			func_326(-1286414399, iParam1);
			func_327(0);
			break;
		case 15:
			func_326(-1014460309, iParam1);
			func_326(-1030502825, iParam1);
			break;
		case 33:
			func_326(479388090, iParam1);
			func_326(-1396342239, iParam1);
			func_326(-619618632, iParam1);
			break;
		case 34:
			func_326(1193561641, iParam1);
			break;
		case 64:
			func_326(1363960851, iParam1);
			break;
		case 60:
			func_326(-1232453926, iParam1);
			func_326(-882833584, iParam1);
			break;
		case 73:
			func_326(2023205767, iParam1);
			break;
		case 74:
			func_326(-2135286513, iParam1);
			if (func_329() == 0)
			{
				func_326(33799444, iParam1);
			}
			else
			{
				func_326(-161343203, iParam1);
			}
			break;
		case 8:
			func_326(841639693, iParam1);
			func_326(358952323, iParam1);
			break;
		case 36:
			func_326(852538149, iParam1);
			func_326(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_326(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_326(1116039310, iParam1);
			}
			break;
		case 27:
			func_326(107633428, iParam1);
			func_326(335902282, iParam1);
			func_326(575673055, iParam1);
			func_326(-425944207, iParam1);
			break;
		case 28:
			func_326(-1941530250, iParam1);
			func_326(1399269304, iParam1);
			func_326(1839684664, iParam1);
			func_326(923168503, iParam1);
			func_326(-1485078322, iParam1);
			break;
		case 29:
			func_326(574995900, iParam1);
			func_326(-1691275407, iParam1);
			func_326(-1725307861, iParam1);
			break;
		case 31:
			func_326(-2108383238, iParam1);
			func_326(-1321828931, iParam1);
			func_326(-1632118592, iParam1);
			func_326(334938948, iParam1);
			break;
		case 4:
			func_326(115823701, iParam1);
			func_326(-1896939736, iParam1);
			func_326(-1830746356, iParam1);
			func_326(-1235169781, iParam1);
			func_327(0);
			break;
		case 6:
			func_326(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_326(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_326(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_326(-384176140, iParam1);
			}
			break;
		case 25:
			func_326(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_326(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_326(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_326(-1374849484, iParam1);
			}
			break;
		case 48:
			func_326(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_326(217772674, iParam1);
			}
			else
			{
				func_326(2071798160, iParam1);
			}
			if (func_330(51))
			{
				func_326(-792802286, iParam1);
			}
			break;
		case 49:
			func_326(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_326(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_326(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_326(1402120602, iParam1);
			}
			break;
		case 58:
			func_326(-1661934591, iParam1);
			break;
		case 50:
			func_326(-1713759426, iParam1);
			break;
		case 52:
			func_326(-314799932, iParam1);
			func_326(-462260432, iParam1);
			func_326(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_326(345256028, iParam1);
				func_326(-1635084094, iParam1);
			}
			else
			{
				func_326(114267347, iParam1);
			}
			break;
		case 32:
			func_326(615304157, iParam1);
			break;
		case 47:
			func_326(415434835, iParam1);
			break;
		case 69:
			func_326(1373465877, iParam1);
			if (func_139(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_326(-2058273527, iParam1);
			}
			break;
		case 70:
			func_326(451334985, iParam1);
			if (func_329() == 0)
			{
				func_326(-224150200, iParam1);
			}
			else
			{
				func_326(289012628, iParam1);
			}
			break;
		case 71:
			if (func_329() == 0)
			{
				func_326(-41692120, iParam1);
			}
			else
			{
				func_326(1537840678, iParam1);
			}
			break;
		case 37:
			func_326(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_326(1842132550, iParam1);
			}
			else
			{
				func_326(-785735240, iParam1);
			}
			func_326(-1605690566, iParam1);
			break;
		case 13:
			func_326(-731367459, iParam1);
			func_326(224176585, iParam1);
			func_326(-14545580, iParam1);
			break;
		case 53:
			func_326(1095274522, iParam1);
			break;
		case 54:
			func_326(-572027988, iParam1);
			break;
		case 56:
			func_326(1339307101, iParam1);
			func_326(2102267732, iParam1);
			break;
		case 57:
			func_326(710102686, iParam1);
			break;
		case 22:
			func_326(-1754368482, iParam1);
			func_326(-2071408557, iParam1);
			break;
		case 12:
			func_326(-181334543, iParam1);
			break;
		case 0:
			func_326(-2134669864, iParam1);
			func_326(-548289709, iParam1);
			func_326(-911271922, iParam1);
			func_326(-604455775, iParam1);
			break;
		case 1:
			func_327(1);
			break;
		case 3:
			if (func_150())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_326(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_326(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_117()
{
	if (func_108() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_326(-145926707, iParam1);
			func_326(-604922090, iParam1);
			func_326(-848690769, iParam1);
			break;
		case 1:
			func_326(-1477631591, iParam1);
			break;
		case 2:
			func_326(76112544, iParam1);
			break;
		case 9:
			func_326(1396404308, iParam1);
			func_326(-1357381228, iParam1);
			if (func_139(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_326(1902679064, iParam1);
			}
			else
			{
				func_326(-2146422425, iParam1);
			}
			break;
		case 22:
			func_326(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_326(-1934184559, iParam1);
				func_326(1281755988, iParam1);
			}
			else
			{
				func_326(-1745220872, iParam1);
				func_326(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_326(-1641504538, iParam1);
				func_326(-988014485, iParam1);
			}
			else if (func_328(26))
			{
				func_326(-343043950, iParam1);
				func_326(-640062214, iParam1);
			}
			else
			{
				func_326(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_326(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_326(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_326(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_326(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_326(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_326(1301690984, iParam1);
				}
			}
			else
			{
				func_326(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_326(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_326(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_326(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_326(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_326(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_326(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_326(-754570528, iParam1);
			}
			else
			{
				func_326(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_326(-2072125821, iParam1);
			}
			else
			{
				func_326(270040030, iParam1);
			}
			break;
		case 37:
			func_326(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_326(-505314737, iParam1);
				func_326(-1853052860, iParam1);
			}
			else
			{
				func_326(-1975624994, iParam1);
				func_326(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_326(1690231002, iParam1);
			}
			else
			{
				func_326(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_326(1225386280, iParam1);
			}
			else if (func_328(54))
			{
				func_326(-283235773, iParam1);
			}
			else
			{
				func_326(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_326(1355398007, iParam1);
			}
			else
			{
				func_326(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_326(574636806, iParam1);
			}
			else
			{
				func_326(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_326(821118338, iParam1);
			}
			else if (func_328(39))
			{
				func_326(846829260, iParam1);
			}
			else
			{
				func_326(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_173(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_326(1422779093, iParam1);
				}
				else
				{
					func_326(-1769536986, iParam1);
				}
			}
			else
			{
				func_326(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_326(352134789, iParam1);
			}
			else if (func_328(43))
			{
				func_326(260723113, iParam1);
			}
			else
			{
				func_326(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_326(-457958799, iParam1);
			}
			else
			{
				func_326(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_328(41))
			{
				func_326(-546824600, iParam1);
			}
			else
			{
				func_326(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_326(1297261593, iParam1);
			}
			else
			{
				func_326(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_326(2068484886, iParam1);
			}
			else if (func_328(49))
			{
				func_326(-1489080639, iParam1);
				func_326(-2102244050, iParam1);
			}
			else
			{
				func_326(-1863040467, iParam1);
			}
			break;
		case 51:
			func_326(-2055943209, iParam1);
			break;
		case 58:
			if (func_139(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_326(1650066845, iParam1);
			}
			else
			{
				func_326(151370023, iParam1);
			}
			func_326(1426057961, iParam1);
			func_326(476379584, iParam1);
			break;
		case 59:
			func_326(-1638117866, iParam1);
			break;
		case 62:
			func_326(199541730, iParam1);
			break;
		case 63:
			func_326(1703485804, iParam1);
			func_326(-800449045, iParam1);
			break;
		case 65:
			func_326(-1678210868, iParam1);
			func_326(-1448238026, iParam1);
			func_326(-1200864845, iParam1);
			func_326(1473511536, iParam1);
			break;
		case 66:
			func_326(-1774490051, iParam1);
			func_326(-34645921, iParam1);
			func_326(174027075, iParam1);
			func_326(-1155999, iParam1);
			func_327(1);
			break;
		case 67:
			func_326(701612593, iParam1);
			func_326(-1069631343, iParam1);
			func_326(1673428882, iParam1);
			break;
		case 68:
			func_326(-739133286, iParam1);
			func_326(-2130089358, iParam1);
			func_326(2056190391, iParam1);
			func_326(1941753817, iParam1);
			func_327(0);
			break;
		case 70:
			func_326(-1217555753, iParam1);
			break;
		case 71:
			func_326(697048821, iParam1);
			break;
		case 73:
			func_326(-553148661, iParam1);
			break;
		case 75:
			func_326(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_326(1414263863, iParam1);
			}
			else
			{
				func_326(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_326(1835465936, iParam1);
				func_326(523715611, iParam1);
			}
			else if (func_328(78))
			{
				func_326(1420338873, iParam1);
			}
			else
			{
				func_326(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_326(10180941, iParam1);
			}
			else if (func_328(79))
			{
				func_326(768420635, iParam1);
			}
			else
			{
				func_326(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_326(-383601523, iParam1);
			}
			else
			{
				func_326(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_326(1606472408, iParam1);
			}
			else
			{
				func_326(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_326(-203571927, iParam1);
			}
			else
			{
				func_326(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_326(729886222, iParam1);
			}
			else
			{
				func_326(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_326(-714816362, iParam1);
			}
			else
			{
				func_326(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_326(-932932179, iParam1);
				func_326(-1458537240, iParam1);
			}
			else
			{
				func_326(-1764383885, iParam1);
				func_326(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_326(1741466706, iParam1);
			}
			else
			{
				func_326(1405815775, iParam1);
			}
			break;
		case 94:
			func_326(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_326(1905280979, iParam1);
			}
			else
			{
				func_326(-1966245299, iParam1);
			}
			func_326(721468880, iParam1);
			break;
		case 99:
			func_326(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_326(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_326(-1117781095, iParam1);
				}
				else
				{
					func_326(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_326(141494548, iParam1);
			}
			else
			{
				func_326(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_326(-369525697, iParam1);
			}
			else if (func_328(101))
			{
				func_326(1595015219, iParam1);
			}
			else
			{
				func_326(-321486961, iParam1);
			}
			break;
		case 103:
			func_326(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_326(793460477, iParam1);
				func_326(-1610242176, iParam1);
			}
			else if (func_328(103))
			{
				func_326(1830897187, iParam1);
			}
			else
			{
				func_326(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_326(1528309077, iParam1);
			}
			else if (func_328(104))
			{
				func_326(1864966105, iParam1);
			}
			else
			{
				func_326(-103336013, iParam1);
			}
			break;
		case 108:
			func_326(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_326(-1123227713, iParam1);
				func_326(-889574341, iParam1);
			}
			else
			{
				func_326(2065385917, iParam1);
				func_326(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_326(-887421691, iParam1);
			}
			else if (func_328(109))
			{
				func_326(-1318117949, iParam1);
			}
			else
			{
				func_326(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_326(284822762, iParam1);
				}
				else
				{
					func_326(-1425017554, iParam1);
				}
			}
			else if (func_328(110))
			{
				if (&Global_1357515 == 0)
				{
					func_326(553087292, iParam1);
				}
				else
				{
					func_326(-1766870331, iParam1);
					func_326(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_326(-1980598735, iParam1);
			}
			else
			{
				func_326(-442732098, iParam1);
				func_326(1955756409, iParam1);
			}
			break;
		case 115:
			func_326(394303528, iParam1);
			func_326(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_326(1182403394, iParam1);
			}
			else
			{
				func_326(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_326(924445424, iParam1);
			}
			else
			{
				func_326(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_326(430755273, iParam1);
				func_326(-1473879802, iParam1);
			}
			else
			{
				func_326(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_326(73885747, iParam1);
			}
			else if (func_328(117))
			{
				func_326(1559707913, iParam1);
			}
			else
			{
				func_326(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_326(-2103887972, iParam1);
			}
			else if (func_328(118))
			{
				func_326(-435828462, iParam1);
			}
			else
			{
				func_326(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_326(2054486196, iParam1);
			}
			else
			{
				func_326(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_326(-570086056, iParam1);
			}
			else if (func_328(121))
			{
				func_326(32337856, iParam1);
			}
			else
			{
				func_326(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_326(813493663, iParam1);
			}
			else if (func_328(122))
			{
				func_326(-2132763590, iParam1);
			}
			else
			{
				func_326(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_326(-66240572, iParam1);
				func_326(1563075046, iParam1);
			}
			else
			{
				func_326(-787011772, iParam1);
				func_326(-1523377438, iParam1);
			}
			break;
		case 127:
			func_326(61020800, iParam1);
			break;
		case 129:
			func_326(428985222, iParam1);
			break;
		case 131:
			func_326(-1393851036, iParam1);
			break;
		case 133:
			func_326(1559531342, iParam1);
			break;
		case 134:
			func_326(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_326(-1374407408, iParam1);
				}
				else
				{
					func_326(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_326(-472672138, iParam1);
				}
				else
				{
					func_326(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_326(-1678710489, iParam1);
			}
			else
			{
				func_326(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_326(1717582460, iParam1);
			}
			else
			{
				func_326(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_326(1568112362, iParam1);
				func_326(1388317526, iParam1);
			}
			else if (func_328(136))
			{
				func_326(-1597534828, iParam1);
				func_326(-1207918353, iParam1);
			}
			else
			{
				func_326(-1940891082, iParam1);
				func_326(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_326(448334530, iParam1);
				func_326(2145375502, iParam1);
			}
			else
			{
				func_326(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_326(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_326(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_326(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_326(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_326(-66616327, iParam1);
			}
			else
			{
				func_326(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_326(1862916706, iParam1);
			}
			else if (func_328(147))
			{
				func_326(675105199, iParam1);
			}
			else
			{
				func_326(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_326(174409701, iParam1);
			}
			else if (func_328(148))
			{
				func_326(-1730895475, iParam1);
			}
			else
			{
				func_326(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_326(1295237052, iParam1);
			}
			else if (func_328(149))
			{
				func_326(-788577684, iParam1);
			}
			else
			{
				func_326(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_119(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_73(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_331(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_173(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_113(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_113(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_120(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_332(iParam0);
	uVar3 = func_333(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_106();
				func_146(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_334(iParam0, 1);
			if (func_335(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_336(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_337(1, iParam0);
				}
				else
				{
					func_338(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		case 76:
			*uParam1 = 35;
			return 70;
		case 70:
			*uParam1 = 35;
			return 70;
		case 73:
			*uParam1 = 35;
			return 70;
		case 19:
			*uParam1 = 25;
			return 50;
		case 21:
			*uParam1 = 35;
			return 70;
		case 60:
			*uParam1 = 35;
			return 70;
		case 61:
			*uParam1 = 35;
			return 70;
		case 62:
			*uParam1 = 35;
			return 70;
		case 63:
			*uParam1 = 35;
			return 70;
		case 64:
			*uParam1 = 35;
			return 70;
		case 65:
			*uParam1 = 35;
			return 70;
		case 66:
			*uParam1 = 35;
			return 70;
		case 67:
			*uParam1 = 35;
			return 70;
		case 32:
			*uParam1 = 35;
			return 70;
		case 48:
			*uParam1 = 35;
			return 70;
		case 49:
			*uParam1 = 35;
			return 70;
		case 47:
			*uParam1 = 30;
			return 60;
		case 58:
			*uParam1 = 30;
			return 60;
		case 27:
			*uParam1 = 30;
			return 60;
		case 29:
			*uParam1 = 40;
			return 100;
		case 30:
			*uParam1 = 50;
			return 100;
		case 33:
			*uParam1 = 30;
			return 60;
		case 23:
			*uParam1 = 30;
			return 60;
		case 10:
			*uParam1 = 30;
			return 60;
		case 5:
			*uParam1 = 45;
			return 60;
		case 11:
			*uParam1 = 35;
			return 70;
		case 9:
			*uParam1 = 45;
			return 70;
		case 15:
			*uParam1 = 15;
			return 35;
		case 35:
			*uParam1 = 50;
			return 70;
		case 8:
			*uParam1 = 50;
			return 100;
		case 36:
			*uParam1 = 40;
			return 80;
		case 22:
			*uParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_122(int iParam0, int iParam1, int iParam2)
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

int func_123(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_125(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_108() != -1)
	{
		return;
	}
	if ((Global_36615 && func_339(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_340(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_341(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_342(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_341(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_126(int iParam0)
{
	if (!func_70(iParam0))
	{
		return -1;
	}
	return func_343(func_295(iParam0));
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_128(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_129()
{
	if (func_108() != -1)
	{
		return 0;
	}
	if (!func_344())
	{
		return 0;
	}
	if (!func_139(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_139(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_139(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_139(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_139(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_139(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_139(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_139(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_139(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_139(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_139(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_139(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_139(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_139(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_139(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_139(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_139(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_139(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_139(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_139(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_139(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
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
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!func_347(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_348(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_349(iParam0, bParam2);
	iVar2 = 0;
	if (func_350(iParam0, 0, 0) == 0)
	{
		if (func_351(iParam0))
		{
			iVar5 = func_352(iParam0);
			iVar6 = func_353(iVar5);
			iVar7 = func_354(iVar6) + 1;
			func_355(iVar5);
			if (func_356(38))
			{
				func_137(483, 0);
			}
			else
			{
				func_137(482, 0);
			}
			if (iVar7 == func_357(iVar6))
			{
				func_131(func_358(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_344() && func_359(4))
				{
					if (func_344() && (func_360(38) || func_356(38)))
					{
						func_362(38, func_358(iVar6), 0, 0, func_361(), 0, -1, 0);
						func_363(2);
					}
					else
					{
						func_362(38, func_358(iVar6), 0, 0, func_361(), 0, -1, 0);
						func_363(1);
					}
				}
			}
			else if (func_344() && func_359(4))
			{
				if (func_344() && (func_360(38) || func_356(38)))
				{
					func_362(38, 0, 0, 0, func_361(), 0, -1, 0);
					func_363(2);
				}
				else
				{
					func_362(38, 0, 0, 0, func_361(), 0, -1, 0);
					func_363(1);
				}
			}
			if (func_344() && func_359(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_344() && (func_360(38) || func_356(38)))
					{
						func_364(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_364(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_365(iParam0) == -1037537535)
	{
		if ((!func_366(iParam0, 866047851) && !func_366(iParam0, -1979000645)) && !func_366(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_367(iParam0, 8388608) && !func_368(28))
	{
		func_369(28);
	}
	if (!bVar3)
	{
		if (func_366(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_370(iParam0) == -1447088266)
			{
				iVar1 = func_372(func_371(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_108() == -1)
					{
						func_373(iVar1);
					}
					if (func_374(0) && func_375(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_376(iParam0, iVar0, iParam5);
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
					if (func_108() == -1)
					{
						func_373(iParam0);
					}
					if (func_374(0) && func_375(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_376(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_365(iParam0) == -427144552)
		{
			if (!func_377(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_365(iParam0) == 307971639 && func_378(iParam0))
		{
			if (!func_379(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_366(iParam0, 866047851))
		{
			func_380(iParam0);
		}
		else if (func_366(iParam0, 2000026003))
		{
			func_381(iParam0);
		}
		else if (func_366(iParam0, -103750053))
		{
			func_383(func_382(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_383(func_384(-717883113, 2091222383), iVar0);
		}
		else if (func_366(iParam0, -121341956) && !func_366(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_137(498, 0);
				}
			}
			if (func_366(iParam0, -2017733358) || func_366(iParam0, -1369131378))
			{
				func_385(iParam0);
			}
		}
		else if (func_366(iParam0, -136654233))
		{
			if (func_366(iParam0, -1021472396))
			{
			}
		}
		else if (func_366(iParam0, -1466706512) && func_366(iParam0, 1147021565))
		{
			func_137(484, 0);
		}
		else if (func_366(iParam0, 1147021565) && func_366(iParam0, -524514947))
		{
		}
		else if (func_366(iParam0, 554195525))
		{
		}
		else if (func_366(iParam0, 589988438))
		{
			if (func_386())
			{
				func_387(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_366(iParam0, 787083290) && func_366(iParam0, 949916894))
		{
			func_388(iParam0);
		}
		else if (func_366(iParam0, -1718133314))
		{
			func_389(iParam0);
		}
		else if (func_366(iParam0, -1738650224))
		{
			func_390(iParam0);
		}
		else if (func_366(iParam0, -1112814642) && func_366(iParam0, 949916894))
		{
			func_391(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_366(iParam0, 1841149704))
		{
			func_392();
		}
		else if (func_366(iParam0, 606799272))
		{
			func_393(iParam0, iParam1);
			func_394(iParam0);
		}
		else if (func_366(iParam0, -1112814642) && func_366(iParam0, -1697809989))
		{
			func_395(iParam0, 0, 0, 0);
		}
		else if (func_366(iParam0, -2017733358) || func_366(iParam0, -1369131378))
		{
			func_385(iParam0);
		}
		else if (func_366(iParam0, -1921346699))
		{
			if (func_108() != -1)
			{
				return 0;
			}
			func_396(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_366(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_159(215778062, 1, 0))
					{
						func_131(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_159(670273567, 1, 0))
					{
						func_131(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_159(-967317137, 1, 0))
					{
						func_131(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_159(526074061, 1, 0))
					{
						func_131(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_159(-1045488665, 1, 0))
					{
						func_131(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_159(471514780, 1, 0))
					{
						func_131(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_366(iParam0, -839724752) && func_367(iParam0, 4))
		{
			if (!func_356(42))
			{
				func_397(iParam0);
			}
		}
		else if (func_366(iParam0, 1399091007))
		{
			func_398(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_366(iParam0, 1248798204))
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
				func_131(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_369(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_399(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_400(&iVar9, 0))
				{
					func_375(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_108() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_399(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_137(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_401();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_402();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_403();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_404();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_405();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_406(499813453, 854119837, 0);
				func_407(499813453, 0);
				func_408(1);
				break;
			case 2127812557:
				func_406(499813453, -1292544588, 0);
				func_407(499813453, 0);
				func_408(2);
				break;
			case 808991383:
				func_406(499813453, -1003325394, 0);
				func_407(499813453, 0);
				func_408(4);
				break;
			case 1134518629:
				func_406(666607663, -335460405, 0);
				func_407(666607663, 0);
				func_409(1);
				break;
			case 902940106:
				func_406(666607663, 903797617, 0);
				func_407(666607663, 0);
				func_409(2);
				break;
			case -418174898:
				func_406(666607663, 669728650, 0);
				func_407(666607663, 0);
				func_409(4);
				break;
			case -648114971:
				func_406(-220219788, 1214120047, 0);
				func_407(-220219788, 0);
				func_410(1);
				break;
			case 211153747:
				func_406(-220219788, 655769340, 0);
				func_407(-220219788, 0);
				func_410(2);
				break;
			case -32876996:
				func_406(-220219788, 885316185, 0);
				func_407(-220219788, 0);
				func_410(4);
				break;
			case 1191437462:
				func_406(218622660, -1491419385, 0);
				func_407(218622660, 0);
				func_411(1);
				break;
			case 1119149048:
				func_406(218622660, 1809565830, 0);
				func_407(218622660, 0);
				func_411(2);
				break;
			case 506073827:
				func_406(390004462, -628873767, 0);
				func_407(390004462, 0);
				func_412(1);
				break;
			case -1876986168:
				func_406(390004462, -405421956, 0);
				func_407(390004462, 0);
				func_412(2);
				break;
			case 2142623221:
				func_406(390004462, -1108972386, 0);
				func_407(390004462, 0);
				func_412(4);
				break;
			case 1508215381:
				func_406(6410548, 1053716392, 0);
				func_407(6410548, 0);
				func_413(1);
				break;
			case -888935280:
				func_406(6410548, 806507056, 0);
				func_407(6410548, 0);
				func_413(2);
				break;
			case -1252474566:
				func_406(6410548, 1571925350, 0);
				func_407(6410548, 0);
				func_413(4);
				break;
			case -1465702449:
				func_406(6410548, 1330352282, 0);
				func_407(6410548, 0);
				func_413(8);
				break;
			case -21093309:
				func_415(242, func_414(-21093309), 0);
				break;
			case 204375141:
				func_415(240, func_414(204375141), 0);
				break;
			case -417963070:
				func_415(241, func_414(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_416(594, 1934060482, 1, 1);
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
					func_416(594, 1110018439, 1, 1);
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
					func_416(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_416(594, -1228016946, 1, 1);
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
					func_416(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_416(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_137(488, 0);
				break;
			case 1613651027:
				func_137(491, 0);
				break;
			case -885810591:
				func_137(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_131(func_417(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_131(func_418(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_368(1))
				{
					func_137(487, 0);
				}
				break;
			case -898386032:
				func_137(486, 0);
				break;
			case -2035110427:
				if (func_108() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_137(496, 0);
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
		func_419(&iVar10);
		if (!func_420(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_374(0))
		{
			return 1;
		}
		if (func_365(iParam0) == -1037537535)
		{
			func_421(iParam0);
		}
		if (func_366(iParam0, -1979000645))
		{
			func_422(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_374(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_131(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_423(iVar2, 0);
		}
	}
	Var35 = { func_424(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_425(iParam0);
	if (sParam6 > 0f)
	{
		if (func_366(iParam0, -839724752))
		{
			func_426(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_427(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_366(iParam0, 1989861793))
	{
		iVar0 = func_428(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_429(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_430(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_431(iVar14, iVar1);
					if (iVar15 != iParam0 && func_346(iVar15, 0))
					{
						if (func_432(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_433(iVar1);
				if (bVar13)
				{
					func_434(iParam0);
				}
				else
				{
					func_137(306, 0);
				}
			}
		}
	}
}

void func_133()
{
	if (func_108() != -1)
	{
		return;
	}
	func_435();
	func_436();
	func_437();
	func_438();
	func_439();
	func_440();
	func_441();
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_442(iParam0, 1, 1, -142743235, 1);
	if (func_443(iParam0))
	{
		func_444(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_446(func_445(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_447(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_448() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_449(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_449(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_450(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_450(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_450(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_450(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_450(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_450(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_450(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_450(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_450(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_451(iVar8, iVar0))
				{
					func_452(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_451(iVar8, iVar0))
		{
			func_452(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_135()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_451(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_448() == -2125499975 || func_448() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_452(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_452(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_136()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_453(iParam0, &iVar0, &iVar1);
	if (!func_454(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_455(iVar0, iVar1);
}

void func_138(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_446(iParam0, 1);
	func_456(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_456(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_457(17, iParam0, 0, 0, 0);
		}
	}
	if (func_108() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_456((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_456((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

int func_139(int iParam0, bool bParam1)
{
	switch (func_69(iParam0))
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

void func_140()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_141()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_458(iParam1, 1, 0) };
		iParam3 = func_459(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_460(iParam3);
	return func_399(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

bool func_143()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_144(int iParam0)
{
	int iVar0;

	if (!func_461(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_145(int iParam0, int iParam1)
{
	if (!func_462(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_463(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_464(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_465(*iParam0);
	iVar1 = func_466(*iParam0);
	iVar2 = func_467(*iParam0);
	iVar3 = func_468(*iParam0);
	iVar4 = func_469(*iParam0);
	iVar5 = func_470(*iParam0);
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
	iVar6 = func_471(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_471(iVar1, iVar0);
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
	func_472(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_462(iParam0))
	{
		return;
	}
	if (!func_473(iParam1))
	{
		return;
	}
	if (func_474(iParam1, 1))
	{
		return;
	}
	iVar0 = func_463(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_145(iParam0, -1))
	{
		return;
	}
	else
	{
		func_475(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_87(0, 0, 1))
		{
			func_179(0, 17);
		}
	}
}

void func_148()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_149()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_150()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_151()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_152()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_153()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_154()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_155()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_156()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_157(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_158(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_159(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_346(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_365(iParam0);
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
		if (!func_476(iParam0, 1))
		{
			return false;
		}
	}
	return func_350(iParam0, 0, bParam2) >= iParam1;
}

void func_160(int iParam0)
{
	if (func_20(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_477(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_477(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_161()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_162()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_163()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_164()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_165()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_345(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_166()
{
	if (func_478() > 1)
	{
		func_479();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_137(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_137(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_137(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_137(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_137(452, 1);
		}
	}
}

bool func_167(int iParam0)
{
	return func_280(iParam0, 4, 1);
}

void func_168(int iParam0)
{
	func_480(iParam0, 4, 1);
}

void func_169(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_112(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20(32768))
	{
		return;
	}
	if (!func_70(iParam0))
	{
		return;
	}
	func_84(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_73(iParam0))
	{
		case 1:
			func_383(func_384(909007663, -587839005), 1);
			iVar0 = func_113(iParam0);
			func_383(func_112(-634848880), 1);
			switch (func_311(iVar0))
			{
				case 0:
					func_383(func_384(909007663, 1325140787), 1);
					break;
				case 1:
					func_383(func_384(909007663, 2101241783), 1);
					break;
				case 2:
					func_383(func_384(909007663, -1296936294), 1);
					break;
				case 3:
					func_383(func_384(909007663, -798388728), 1);
					break;
				case 4:
					func_383(func_384(909007663, -1787586531), 1);
					break;
				case 5:
					func_383(func_384(909007663, -1002834519), 1);
					break;
				case 6:
					func_383(func_384(909007663, -50600144), 1);
					break;
				case 7:
					func_383(func_384(909007663, -348503123), 1);
					break;
				case 8:
					func_383(func_384(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_383(func_384(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_383(func_384(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_113(iParam0);
			if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_383(func_112(-634848880), 1);
			}
			if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_383(func_384(909007663, -587839005), 1);
				}
				else
				{
					func_383(func_384(909007663, -2049243343), 1);
				}
			}
			if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_312(iVar1))
				{
					case 0:
						func_383(func_384(909007663, 1325140787), 1);
						break;
					case 1:
						func_383(func_384(909007663, 2101241783), 1);
						break;
					case 2:
						func_383(func_384(909007663, -1296936294), 1);
						break;
					case 3:
						func_383(func_384(909007663, -798388728), 1);
						break;
					case 4:
						func_383(func_384(909007663, -1787586531), 1);
						break;
					case 5:
						func_383(func_384(909007663, -1002834519), 1);
						break;
					case 6:
						func_383(func_384(909007663, -50600144), 1);
						break;
					case 7:
						func_383(func_384(909007663, -348503123), 1);
						break;
					case 8:
						func_383(func_384(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_383(func_384(909007663, 532323983), 1);
				}
			}
			else if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_114(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_383(func_384(909007663, 551192206), 1);
				}
				else
				{
					func_383(func_384(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_108() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_481(64))
	{
		return;
	}
	else if (func_88(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_87(0, 0, 1) || func_482()) || func_129())
	{
		return;
	}
	iVar0 = func_91();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_483(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_484(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_484(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_485(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_179(0, -1);
	}
	if (iVar2 > 0)
	{
		func_486("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_487(1, 0);
	Global_1956575->f_2 = 1;
}

void func_172(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_20(32768))
	{
		return;
	}
	func_488(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_489(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_173(int iParam0)
{
	if (!func_70(iParam0))
	{
		return -1;
	}
	return func_490(iParam0);
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_491(iParam0))
	{
		return 0;
	}
	if (!func_344())
	{
		return 0;
	}
	if (!func_492(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, uVar1, iParam1);
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_493())
	{
		iVar2 = func_493();
	}
	iVar5 = func_494(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_295(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_295(iVar6) == 0)
			{
				return func_495(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_295(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_295(iVar6) == 0)
			{
				return func_495(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_495(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_496(1330954593, 0, -1);
		case 1:
			return func_496(1330954593, 0, -1);
		case 2:
			return func_496(1330954593, 0, -1) * 2;
		case 4:
			return func_496(1330954593, 0, -1);
		case 5:
			return func_496(1330954593, 0, -1);
		case 6:
			return func_496(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_496(1330954593, 0, -1) * 3;
		case 9:
			return func_496(1330954593, 0, -1) * 3;
		case 10:
			return func_496(1330954593, 0, -1) * 3;
		case 11:
			return func_496(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

var func_177(int iParam0)
{
	char[] cVar0[8];

	if (!func_70(iParam0))
	{
		return cVar0;
	}
	switch (func_73(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_331(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_113(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_175(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_178(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_24();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_73(Global_1879514->f_1) == 1)
			{
				func_174(5, 1);
			}
			else if (func_73(Global_1879514->f_1) == 8 && (func_114(((*Global_1347702)[func_113(Global_1879514->f_1) /*49*/])->f_12, 1) || func_114(((*Global_1347702)[func_113(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_174(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_179(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_497(&Global_0, 8);
	}
	if (!func_344() || func_108() != -1)
	{
		return;
	}
	func_497(&Global_0, 1);
}

int func_180()
{
	return Global_40.f_4283;
}

int func_181(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_70(iParam0))
	{
		return 0;
	}
	uVar0 = func_177(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_182(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

void func_183(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_184(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

Vector3 func_185(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	vector3 vVar0;

	vVar0 = { func_498(vParam0, uParam3, uParam4, bParam5, bParam6, 1, iParam7, bParam8, fParam9, iParam10, -1, 1103626240) };
	if (func_499(vVar0))
	{
		vVar0 = { func_498(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_186(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_187(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_188(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_294();
	if (func_500(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_501(vParam0, bParam3);
}

void func_189()
{
	func_502();
	func_503();
	func_504();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

char* func_190(int iParam0)
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

bool func_191(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_192()
{
	return Global_40.f_4283.f_1;
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_505(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_194(int iParam0)
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

void func_195(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_194(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_506(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_507(iVar0);
	*uParam0 = 0;
}

bool func_196(var uParam0)
{
	return func_508(*uParam0, 1);
}

void func_197(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_198(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	uParam0->f_269 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_264);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return 1;
		}
		if (!bParam4)
		{
			uParam0->f_264 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_264 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_270 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_264);
	if (!uParam0->f_270)
	{
		if (!bParam4)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_509(uParam0);
	uParam0->f_264.f_2 = 0;
	uParam0->f_277 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_264.f_2 = 12;
	uParam0->f_279 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_270 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_199(var uParam0, int iParam1)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_264.f_1), &(uParam0->f_264));
}

bool func_200(var uParam0, int iParam1, int iParam2, char[4] cParam3, var uParam4, var uParam5)
{
	bool bVar0;

	if (iParam2 == -1)
	{
		if (func_201(uParam0, 2, uParam4))
		{
			*uParam5 = *uParam4;
		}
		if (func_201(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_201(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_201(uParam0, 5, uParam4))
		{
			cParam3->f_9 = *uParam4;
		}
		return true;
	}
	if (func_201(uParam0, 2, uParam4))
	{
		*uParam5 = *uParam4;
	}
	if (func_201(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_201(uParam0, 5, uParam4))
	{
		cParam3->f_9 = *uParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_272) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_201(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_201(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_201(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_264));
}

bool func_202(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_264.f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_STRING(cParam2, &(uParam0->f_264));
}

int func_203(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_54((*uParam0)[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*16*/], sParam1)) && ((*uParam0)[iVar0 /*16*/])->f_9 == sParam1->f_9) && ((*uParam0)[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_204(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_205(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_264);
	uParam0->f_264 = 0;
	uParam0->f_270 = 0;
}

int func_206(var uParam0, var uParam1)
{
	vector3 vVar0;

	if (func_510(&(uParam1->f_565)))
	{
		return 1;
	}
	else if ((func_511(&(uParam1->f_121)) || uParam1->f_565.f_2 < 1) || uParam1->f_565.f_2 > 5)
	{
		return 0;
	}
	if (!func_29(&(uParam1->f_1111.f_40[3]), 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(215), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!func_29(&(uParam1->f_1111.f_40[3]), 1))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(218), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!func_29(&(uParam1->f_1111.f_40[0]), 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(214), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (!func_29(&(uParam1->f_1111.f_40[4]), 0))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(216), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (uParam1->f_565.f_2 == 5)
		{
			if (func_516(Global_35, func_515(3), 100f, 1, 1))
			{
				if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
				{
					uParam0->f_14 = 2;
					StringCopy(&(uParam0->f_15), func_227(219), 24);
					func_513(&(uParam1->f_565), 1);
					return 0;
				}
			}
		}
		else if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(211), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	else if (func_517(&(uParam1->f_1111.f_40[0]), 0, 0, 0, 1) || func_517(&(uParam1->f_1111.f_40[4]), 0, 0, 0, 1))
	{
		if (func_512(&(uParam1->f_730), 208, 3, 0, 0))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), func_227(213), 24);
			func_513(&(uParam1->f_565), 1);
			return 0;
		}
	}
	switch (uParam1->f_565.f_2)
	{
		case 1:
			if (!func_518(&(uParam1->f_1111), 2, 0, 60f, 1))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (func_518(&(uParam1->f_1111), 2, 0, 40f, 1))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(209), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 2:
			if (func_521(&(uParam1->f_565), 200) || func_522(1120403456, 1106247680))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(217), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam1->f_1111.f_40[6])))
			{
				if ((func_523(&(uParam1->f_1111), 6) || func_524(&(uParam1->f_1111), 6)) || PED::_0x9682F850056C9ADE(&(uParam1->f_1111.f_40[6])))
				{
					if (func_520(&(uParam1->f_730), 208))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(211), 24);
						func_513(&(uParam1->f_565), 1);
					}
					return 0;
				}
				else if (func_525(&(uParam1->f_1111), 6) && !func_526(&(uParam1->f_1111)))
				{
					if (func_520(&(uParam1->f_730), 208))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(212), 24);
						func_513(&(uParam1->f_565), 1);
					}
					return 0;
				}
			}
			else if (func_525(&(uParam1->f_1111), 6))
			{
				func_527(&(uParam1->f_730), 208, 0);
				uParam0->f_14 = 0;
				StringCopy(&(uParam0->f_15), "", 24);
				func_513(&(uParam1->f_565), 0);
				TASK::CLEAR_PED_TASKS(Global_35, 0, 0);
				func_266(1, 0);
				func_528(&(uParam1->f_1111), 6, 0);
			}
			vVar0 = { func_529(0) };
			if (!func_516(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (func_516(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 3:
			if (!func_530(&(uParam1->f_565)))
			{
				if (!func_531(&(uParam1->f_565)))
				{
					if (func_521(&(uParam1->f_565), 200) || func_522(1120403456, 1106247680))
					{
						uParam0->f_14 = 2;
						StringCopy(&(uParam0->f_15), func_227(217), 24);
						func_513(&(uParam1->f_565), 1);
						return 0;
					}
				}
			}
			if (func_532(&(uParam1->f_730), 199))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(220), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			vVar0 = { func_529(0) };
			if (!func_516(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (func_516(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 4:
			vVar0 = { func_529(0) };
			if (!func_516(Global_35, vVar0, 80f, 1, 0))
			{
				func_519(&(uParam1->f_565), 1);
			}
			else if (func_516(Global_35, vVar0, 60f, 1, 0))
			{
				func_519(&(uParam1->f_565), 0);
			}
			if (func_520(&(uParam1->f_730), 208))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), func_227(210), 24);
				func_513(&(uParam1->f_565), 1);
				return 0;
			}
			break;
		case 5:
			break;
	}
	return 0;
}

void func_207(int iParam0)
{
	if (func_533())
	{
		Global_1357509 = 1;
	}
	if (func_534(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_208(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_54((*uParam1)[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 7)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 3)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if (((*uParam1)[iVar0 /*16*/])->f_9 == 2)
					{
						func_56((*uParam1)[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_209(var uParam0)
{
	if (((((uParam0->f_565.f_2 < 1 || uParam0->f_565.f_2 > 5) || !func_535(&(uParam0->f_565))) || func_537(func_536(&(uParam0->f_730)))) || (uParam0->f_730.f_2 == 225 && func_538(&(uParam0->f_730), 199))) || func_526(&(uParam0->f_1111)))
	{
		return;
	}
	if (func_525(&(uParam0->f_1111), 6))
	{
		func_539(&(uParam0->f_730), 23, 1, 0);
	}
	else
	{
		func_539(&(uParam0->f_730), 20, 1, 0);
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	func_540(uParam0, uParam1, uParam2, 0);
	func_540(uParam0, uParam1, uParam2, 2);
	func_540(uParam0, uParam1, uParam2, 4);
	func_540(uParam0, uParam1, uParam2, 6);
}

void func_211(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;

	switch (uParam0->f_730.f_2)
	{
		case 221:
			bVar4 = true;
			break;
		case 222:
		case 223:
		case 224:
		case 227:
		case 228:
			bVar1 = true;
			break;
		case 225:
			bVar0 = func_532(&(uParam0->f_730), 184);
			break;
		case 229:
			bVar3 = (func_532(&(uParam0->f_730), 190) && !func_541(uParam0, 0, 3));
			break;
		case 230:
		case 231:
			bVar2 = true;
			break;
		case 232:
			bVar7 = true;
			break;
		case 233:
			bVar6 = true;
			break;
		case 235:
			bVar5 = (func_542(&(uParam0->f_730), 235) || func_532(&(uParam0->f_730), 204));
			break;
		case 226:
		case 234:
		default:
			func_543(&(uParam0->f_730.f_377));
			break;
	}
	func_544(uParam0, bVar0);
	func_545(uParam0, bVar1);
	func_546(uParam0, bVar2);
	func_547(uParam0, bVar3);
	func_548(uParam0, bVar4);
	func_549(uParam0, bVar5);
	func_550(uParam0, bVar6);
	func_551(uParam0, bVar7);
	if (bVar4)
	{
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), &(uParam0->f_1111.f_40[3]));
	}
	bVar8 = ((func_552(&(uParam0->f_565), 3, 19) || func_532(&(uParam0->f_730), 197)) && !func_552(&(uParam0->f_565), 5, 5));
	func_553(uParam0, bVar8);
}

void func_212(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_213(var uParam0)
{
	switch (uParam0->f_565.f_2)
	{
		case 1:
			return;
		case 2:
		case 3:
		case 4:
			PED::_0xBA0980B5C0A11924(0f);
			PED::_0x28CB6391ACEDD9DB(0f);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			break;
		case 5:
			if (!func_516(Global_35, func_529(0), 100f, 1, 1))
			{
				func_554(uParam0, 5);
				func_554(uParam0, 6);
				func_554(uParam0, 7);
				func_554(uParam0, 8);
				func_554(uParam0, 15);
			}
			break;
	}
}

void func_214(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			func_555(uParam0, 1);
			break;
		case 1:
			if (func_556(uParam0) && func_552(uParam0, 5, 15))
			{
				func_555(uParam0, 2);
				return;
			}
			else if (!func_552(uParam0, 5, 0))
			{
				return;
			}
			if (!SCRIPTS::_0x7409669C5ED50144(-1392528840))
			{
				SCRIPTS::_0x7D654266025E921B(-1392528840);
			}
			else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Global_35) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Global_35)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Global_35))
			{
				func_555(uParam0, 2);
			}
			else if (func_552(uParam0, 5, 14))
			{
				func_555(uParam0, 2);
			}
			break;
		case 2:
			if (SCRIPTS::_0x7409669C5ED50144(-1392528840))
			{
				SCRIPTS::_0x50B72A754EE64A71(-1392528840);
			}
			break;
	}
}

void func_215(var uParam0, var uParam1)
{
	if (func_520(uParam1, 208))
	{
		AUDIO::CANCEL_MUSIC_EVENT(func_278(uParam0->f_4));
		func_557(uParam0, 12);
	}
	switch (uParam0->f_4)
	{
		case 0:
			func_557(uParam0, 1);
			break;
		case 1:
			if (func_552(uParam0, 1, 8))
			{
				func_557(uParam0, 2);
			}
			break;
		case 2:
			if (func_552(uParam0, 2, 0))
			{
				func_557(uParam0, 3);
			}
			break;
		case 3:
			if (func_552(uParam0, 2, 5))
			{
				func_557(uParam0, 4);
			}
			break;
		case 4:
			if (func_552(uParam0, 3, 4))
			{
				func_557(uParam0, 5);
			}
			break;
		case 5:
			if (func_552(uParam0, 3, 10))
			{
				func_557(uParam0, 6);
			}
			break;
		case 6:
			if ((func_552(uParam0, 3, 14) || func_558(uParam0)) || func_530(uParam0))
			{
				func_557(uParam0, 7);
			}
			break;
		case 7:
			if (func_552(uParam0, 4, 8))
			{
				func_557(uParam0, 8);
			}
			break;
		case 8:
			if (func_552(uParam0, 5, 4))
			{
				func_557(uParam0, 9);
			}
			break;
		case 9:
			if (func_552(uParam0, 5, 7))
			{
				func_557(uParam0, 10);
			}
			break;
		case 10:
			if (func_552(uParam0, 5, 15))
			{
				func_557(uParam0, 11);
			}
			else if (func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_557(uParam0, 9);
			}
			break;
		case 11:
		case 12:
			break;
		default:
			break;
	}
	func_559(uParam0);
}

void func_216(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	switch (uParam0->f_2)
	{
		case 1:
			iVar0 = 11;
			iVar1 = 18;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 4;
			break;
		case 3:
			iVar0 = 21;
			iVar1 = 4;
			break;
		case 4:
			iVar0 = 11;
			iVar1 = 4;
			break;
		case 5:
			iVar0 = 0;
			iVar1 = 4;
			break;
	}
	if (uParam0->f_112 <= iVar0)
	{
		bVar2 = CLOCK::GET_CLOCK_HOURS() >= iVar1;
		CLOCK::PAUSE_CLOCK(bVar2, 0);
	}
	else
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
}

void func_217(var uParam0)
{
	bool bVar0;

	if (*uParam0 == 8)
	{
		if (func_560(uParam0, 0))
		{
			func_561(uParam0, 0);
		}
		if (func_560(uParam0, 1))
		{
			func_561(uParam0, 1);
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 1, 6) && !func_562(&(uParam0->f_565)))
	{
		return;
	}
	if (*uParam0 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 0);
		func_563(&(uParam0->f_565), uParam0, 1);
	}
	switch (*uParam0)
	{
		case -1:
			return;
		case 0:
			func_564(uParam0, 1);
			break;
		case 1:
			bVar0 = true;
			if (!func_565(uParam0, 0, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 0))
			{
				bVar0 = false;
			}
			if (!func_565(uParam0, 1, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 1))
			{
				bVar0 = false;
			}
			if (!func_565(uParam0, 9, 0, 58))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_564(uParam0, 2);
			}
			break;
		case 2:
			if (func_552(&(uParam0->f_565), 1, 10))
			{
				if (func_567(uParam0, 0, 2, 2) && func_567(uParam0, 1, 2, 11))
				{
					func_564(uParam0, 3);
				}
			}
			break;
		case 3:
			if (func_552(&(uParam0->f_565), 2, 9))
			{
				func_568(uParam0, 0, 0, 1);
				func_564(uParam0, 4);
			}
			break;
		case 4:
			if (!func_569(&(uParam0->f_565)))
			{
				if (func_570(uParam0, 1, 5))
				{
					func_571(&(uParam0->f_487[33]), 1);
					func_572(&(uParam0->f_565), 1);
				}
				else if (!func_541(uParam0, 1, 6))
				{
					if (func_573(uParam0, 19))
					{
						func_568(uParam0, 1, 0, 1);
						func_574(uParam0, 1, 6);
					}
				}
			}
			else
			{
				func_554(uParam0, 19);
			}
			if (!func_575(uParam0, 0, 6, 1))
			{
				if (!func_541(uParam0, 0, 6))
				{
					if (func_573(uParam0, 18))
					{
						func_574(uParam0, 0, 6);
					}
				}
				else
				{
					if (func_576(&(uParam0->f_1111.f_40[0]), 0, 4) >= 0.874f)
					{
						func_577(&(uParam0->f_565), 1);
					}
					if (func_576(&(uParam0->f_1111.f_40[0]), 0, 4) >= 0.575f)
					{
						func_578(&(uParam0->f_565), 1);
						if (func_579(uParam0, 9, 37, 0) != &uParam0->f_487[37])
						{
							func_580(uParam0, 9, 37, &(uParam0->f_487[37]), 0);
						}
						func_554(uParam0, 18);
					}
				}
			}
			else if (!func_541(uParam0, 0, 5))
			{
				func_568(uParam0, 0, 0, 0);
				func_574(uParam0, 0, 5);
			}
			if (func_532(&(uParam0->f_730), 190))
			{
				if (func_581(&(uParam0->f_565), &(uParam0->f_487[37]), func_227(253), 1082130432, 1073741824, -473983589, 261))
				{
					func_582(&(uParam0->f_565), 0);
					func_583(Global_35, 0);
					func_584(&(uParam0->f_565), 1);
					func_585(uParam0, 9, 0, &(uParam0->f_543[0]), 0);
					func_568(uParam0, 0, 0, 1);
					func_574(uParam0, 0, 3);
					func_564(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 9, 58, 0, 0, -1))
				{
					if (func_567(uParam0, 9, 0, 58))
					{
						func_564(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			if (func_588(uParam0, 9))
			{
				if (func_575(uParam0, 0, 3, 1))
				{
					func_578(&(uParam0->f_565), 0);
					func_564(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_541(uParam0, 3, 24))
			{
				func_564(uParam0, 8);
			}
			else if (!func_541(uParam0, 0, 5))
			{
				func_568(uParam0, 0, 0, 0);
				func_574(uParam0, 0, 5);
			}
			break;
		case 8:
			return;
	}
}

void func_218(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	if (uParam0->f_1 == 20)
	{
		if (func_560(uParam0, 2))
		{
			func_561(uParam0, 2);
		}
		if (func_560(uParam0, 3))
		{
			func_561(uParam0, 3);
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 2, 6))
	{
		return;
	}
	if (uParam0->f_1 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 2);
		func_563(&(uParam0->f_565), uParam0, 3);
	}
	switch (uParam0->f_1)
	{
		case -1:
			return;
		case 0:
			func_589(uParam0, 1);
			break;
		case 1:
			bVar0 = true;
			if (!func_565(uParam0, 2, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 2))
			{
				bVar0 = false;
			}
			if (!func_590(uParam0, &(uParam0->f_1224), 0))
			{
				bVar0 = false;
			}
			else if (!func_565(uParam0, 3, 2, -1))
			{
				bVar0 = false;
			}
			else if (!func_566(uParam0, 3))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_589(uParam0, 2);
			}
			break;
		case 2:
			if (*uParam0 >= 7)
			{
				func_589(uParam0, 3);
			}
			break;
		case 3:
			if (func_591(Global_35, &(uParam0->f_487[33]), 1.5f, 1))
			{
				if (func_567(uParam0, 2, 2, 30) && func_567(uParam0, 3, 2, 24))
				{
					func_589(uParam0, 4);
				}
			}
			break;
		case 4:
			if (!func_541(uParam0, 3, 24))
			{
				func_574(uParam0, 3, 24);
			}
			if (func_575(uParam0, 2, 30, 1))
			{
				func_592(uParam0->f_487[43], 1);
				func_593(Global_35, 1, 12, -1065353216);
				func_589(uParam0, 5);
			}
			break;
		case 5:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
				else if (!func_594(uParam0, 3, 0.6f))
				{
					if (func_594(uParam0, 3, 0.476f))
					{
						func_595(&(uParam0->f_565), 1);
					}
					return;
				}
			}
			if (func_538(&(uParam0->f_730), 196))
			{
				func_195(&(uParam0->f_565.f_86), 1, 1);
				func_589(uParam0, 6);
				return;
			}
			if (func_581(&(uParam0->f_565), &(uParam0->f_487[33]), func_227(262), 1082130432, 1073741824, -719620017, 239))
			{
				func_197(uParam0->f_565.f_31[8 /*3*/]);
				func_582(&(uParam0->f_565), 0);
				func_589(uParam0, 8);
			}
			else if (func_558(&(uParam0->f_565)))
			{
				func_195(&(uParam0->f_565.f_86), 1, 1);
				func_197(uParam0->f_565.f_31[8 /*3*/]);
				func_582(&(uParam0->f_565), 0);
				func_589(uParam0, 15);
			}
			break;
		case 6:
			if (func_574(uParam0, 3, 20))
			{
				if (!func_530(&(uParam0->f_565)))
				{
					if (func_596(&(uParam0->f_543[2]), 1, 14, 0.366f))
					{
						func_597(&(uParam0->f_565), 1);
					}
				}
				if (func_575(uParam0, 3, 20, 1))
				{
					func_589(uParam0, 16);
				}
			}
			break;
		case 8:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			vVar1 = { func_228(3, 8) };
			fVar4 = func_229(3, 8);
			func_598(&(uParam0->f_471));
			func_599(&(uParam0->f_471.f_3), 32);
			func_600(&(uParam0->f_471.f_3), 1);
			func_601(&(uParam0->f_471.f_3), 0);
			func_602(&(uParam0->f_471.f_3), 0);
			func_603(&(uParam0->f_471.f_3), 1);
			func_604(func_228(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			func_266(0, 0);
			switch (func_606(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), func_605(fVar4), vVar1, 1060437492))
			{
				case 0:
				case 2:
					func_589(uParam0, 9);
					break;
				case 1:
					func_589(uParam0, 10);
					break;
				case 3:
					func_589(uParam0, 11);
					break;
			}
			break;
		case 9:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			func_604(func_228(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (func_607(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 2, 13, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 13))
					{
						func_589(uParam0, 12);
					}
				}
			}
			break;
		case 10:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			func_604(func_228(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (func_608(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 2, 14, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 14))
					{
						func_589(uParam0, 12);
					}
				}
			}
			break;
		case 11:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			func_604(func_228(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (func_608(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 2, 15, 0, 0, -1))
				{
					if (func_574(uParam0, 2, 15))
					{
						func_589(uParam0, 12);
					}
				}
			}
			break;
		case 12:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			func_266(1, 0);
			func_604(func_228(3, 9), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 2500, 1000, 1);
			if (func_608(&(uParam0->f_471)) > uParam0->f_471.f_4)
			{
				func_584(&(uParam0->f_565), 1);
			}
			if (func_609(Global_35, 1, 11))
			{
				func_568(uParam0, 2, 0, 0);
				func_589(uParam0, 13);
			}
			break;
		case 13:
			if (!func_541(uParam0, 3, 17))
			{
				if (func_575(uParam0, 3, 24, 1))
				{
					func_574(uParam0, 3, 17);
				}
			}
			if (func_581(&(uParam0->f_565), &(uParam0->f_487[33]), func_227(238), 1082130432, 1073741824, -473983589, 254) || func_610(uParam0->f_565.f_31[4 /*3*/], 30f, 1, 1))
			{
				func_195(&(uParam0->f_565.f_86), 1, 1);
				func_582(&(uParam0->f_565), 0);
				func_568(uParam0, 2, 0, 1);
				func_589(uParam0, 14);
			}
			break;
		case 14:
			if (!func_530(&(uParam0->f_565)))
			{
				if (func_596(Global_35, 1, 21, 0.12f))
				{
					func_597(&(uParam0->f_565), 1);
				}
			}
			if (!func_541(uParam0, 3, 26))
			{
				func_574(uParam0, 3, 26);
			}
			else if (func_575(uParam0, 3, 26, 1))
			{
				func_592(uParam0->f_487[43], 1);
				func_593(Global_35, 1, 21, -1065353216);
				func_266(1, 0);
				func_589(uParam0, 16);
			}
			break;
		case 15:
			if (func_574(uParam0, 3, 27))
			{
				if (!func_596(&(uParam0->f_543[2]), 1, 22, 0.1f))
				{
					func_611(&(uParam0->f_543[2]), 1, 22, 0.1f);
				}
				else if (func_596(&(uParam0->f_543[2]), 1, 22, 1f))
				{
					func_612(uParam0, 27, 1);
					func_589(uParam0, 16);
				}
			}
			break;
		case 16:
			if (func_574(uParam0, 3, 21))
			{
				if (func_575(uParam0, 3, 21, 1))
				{
					func_568(uParam0, 3, 0, 0);
					func_589(uParam0, 17);
				}
			}
			break;
		case 17:
			if (!func_541(uParam0, 3, 22))
			{
				func_613(&(uParam0->f_565), 1);
				func_574(uParam0, 3, 22);
			}
			if (func_614(Global_35, &(uParam0->f_565.f_91[10]), 0, 1))
			{
				func_568(uParam0, 3, 0, 1);
				func_589(uParam0, 18);
			}
			break;
		case 18:
			if (func_574(uParam0, 3, 23))
			{
				if (func_609(&(uParam0->f_543[2]), 1, 16))
				{
					if (!func_596(&(uParam0->f_543[2]), 1, 16, 0.37f))
					{
						func_611(&(uParam0->f_543[2]), 1, 16, 0.37f);
					}
					else if (func_596(&(uParam0->f_543[2]), 1, 16, 1f))
					{
						func_612(uParam0, 23, 1);
						func_589(uParam0, 19);
					}
					else if (func_596(&(uParam0->f_1111.f_40[0]), 1, 16, 0.75f))
					{
						func_613(&(uParam0->f_565), 0);
					}
				}
				if (func_609(&(uParam0->f_487[44]), 1, 17))
				{
					if (!func_596(&(uParam0->f_487[44]), 1, 17, 0.37f))
					{
						func_611(&(uParam0->f_487[44]), 1, 17, 0.37f);
					}
				}
				if (func_609(&(uParam0->f_487[53]), 1, 18))
				{
					if (!func_596(&(uParam0->f_487[53]), 1, 18, 0.37f))
					{
						func_611(&(uParam0->f_487[53]), 1, 18, 0.37f);
					}
				}
			}
			break;
		case 19:
			if (func_552(&(uParam0->f_565), 4, 11))
			{
				func_589(uParam0, 20);
			}
			break;
		case 20:
			return;
	}
}

void func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (func_552(&(uParam0->f_565), 5, 0))
	{
		return;
	}
	else if (uParam0->f_2 == 6)
	{
		if (func_552(&(uParam0->f_565), 4, 9) && func_560(uParam0, 4))
		{
			func_561(uParam0, 4);
		}
		iVar0 = 5;
		while (iVar0 <= 8)
		{
			if (func_560(uParam0, iVar0))
			{
				func_561(uParam0, iVar0);
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 54)
		{
			if ((((((iVar1 != 44 && iVar1 != 45) && iVar1 != 50) && iVar1 != 51) && iVar1 != 52) && iVar1 != 53) && iVar1 != 54)
			{
				func_592(uParam0->f_487[iVar1], 1);
			}
			iVar1++;
		}
		return;
	}
	else if (!func_552(&(uParam0->f_565), 3, 16) && !func_615(&(uParam0->f_565)))
	{
		return;
	}
	if (uParam0->f_2 > 1)
	{
		func_563(&(uParam0->f_565), uParam0, 4);
		func_563(&(uParam0->f_565), uParam0, 5);
		func_563(&(uParam0->f_565), uParam0, 6);
		func_563(&(uParam0->f_565), uParam0, 7);
		func_563(&(uParam0->f_565), uParam0, 8);
		func_616(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (((func_590(uParam0, &(uParam0->f_1224), 1) && func_590(uParam0, &(uParam0->f_1224), 2)) && func_590(uParam0, &(uParam0->f_1224), 3)) && func_590(uParam0, &(uParam0->f_1224), 4))
			{
				func_617(uParam0, 1);
			}
			break;
		case 1:
			bVar2 = true;
			iVar3 = 4;
			while (iVar3 <= 8)
			{
				if (!func_565(uParam0, iVar3, 0, -1))
				{
					bVar2 = false;
				}
				else if (!func_566(uParam0, iVar3))
				{
					bVar2 = false;
				}
				iVar3++;
			}
			if (bVar2)
			{
				func_617(uParam0, 2);
			}
			break;
		case 2:
			bVar2 = true;
			if (func_615(&(uParam0->f_565)))
			{
				if (func_590(uParam0, &(uParam0->f_1224), 0))
				{
					func_618(&(uParam0->f_487[53]), 18, 1, 1148846080, 0, 1, 0, 1f, 2);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (func_567(uParam0, 5, 0, 43))
			{
				if (func_609(&(uParam0->f_487[50]), 2, 32))
				{
					if (func_576(&(uParam0->f_487[50]), 2, 32) < 1f)
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(&(uParam0->f_552[5]), 1);
						func_611(&(uParam0->f_487[50]), 2, 32, 1f);
						bVar2 = false;
					}
					else
					{
						func_568(uParam0, 4, 0, 0);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			else
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				func_617(uParam0, 3);
			}
			break;
		case 3:
			if (func_619(uParam0, 23))
			{
				if (func_567(uParam0, 4, 2, 40))
				{
					func_617(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_620(&(uParam0->f_121)) == 3)
			{
				func_617(uParam0, 6);
			}
			else if (!func_541(uParam0, 4, 40))
			{
				func_574(uParam0, 4, 40);
			}
			break;
		case 6:
			return;
	}
}

void func_220(int iParam0, bool bParam1)
{
	if (Local_18.f_565.f_2 != iParam0)
	{
		Local_18.f_565.f_2 = iParam0;
		Local_18.f_565.f_112 = 0;
		if (bParam1)
		{
			func_621(&(Local_18.f_565), &(Local_18.f_730), &uLocal_1250);
		}
	}
}

int func_221(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Local_18.f_565.f_112;
	switch (iVar0)
	{
		case -1:
			return 0;
		case 0:
			func_622(uParam0, 0);
			func_623(1);
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_1111.f_40[0])))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(Local_18.f_1111.f_40[0])) && !PED::IS_PED_INJURED(&(Local_18.f_1111.f_40[0])))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(&(Local_18.f_1111.f_40[0]), joaat("weapon_unarmed"), true, 0, false, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_1111.f_40[4])))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(Local_18.f_1111.f_40[4])) && !PED::IS_PED_INJURED(&(Local_18.f_1111.f_40[4])))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(&(Local_18.f_1111.f_40[4]), joaat("weapon_unarmed"), true, 0, false, false);
				}
			}
			func_624(&(Local_18.f_1111), 1, 0, 1);
			func_624(&(Local_18.f_1111), 1, 1, 1);
			func_626(&(Local_18.f_1171), func_625(6, 0), func_625(6, 2));
			func_627(&(Local_18.f_1171), func_625(6, 1), func_625(6, 3));
			func_628(&(Local_18.f_1171), 25896);
			func_629(&(Local_18.f_1171), func_227(264));
			func_631(&(Local_18.f_1171), func_630(&(Local_18.f_1171)), &(Local_18.f_1111.f_40[0]), 0f, -6f);
			func_623(2);
			break;
		case 2:
			func_632(&(Local_18.f_121));
			func_623(3);
			break;
		case 3:
			if (func_516(Global_35, func_228(2, 1), 50f, 1, 1))
			{
				func_633(&(Local_18.f_121), func_227(181), 1, 0);
			}
			if (func_634(&Local_18))
			{
				func_623(4);
			}
			break;
		case 4:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(5);
			break;
		case 5:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(6);
			break;
		case 6:
			func_633(&(Local_18.f_121), func_227(181), 1, 0);
			func_623(7);
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (func_635(Global_35, func_625(2, 1), 0) && !func_226(Global_35, -982327190))
			{
				TASK::TASK_STAND_STILL(Global_35, -1);
			}
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 0))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(181), 1, 0))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f || !func_516(Global_35, func_228(2, 1), 5f, 1, 0))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(8);
			}
			break;
		case 8:
			if (!func_637(&Local_18))
			{
			}
			if (func_639(func_638(func_227(181)), &(Local_18.f_121)))
			{
				func_623(9);
			}
			break;
		case 9:
			func_258(&Local_18, &(Local_18.f_1111), 0, 0);
			func_640(&(Local_18.f_1111.f_40[0]), func_625(3, 2), 2);
			func_640(&(Local_18.f_1111.f_40[4]), func_625(3, 4), 2);
			func_623(10);
			break;
		case 10:
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	int iVar0;

	iVar0 = Local_18.f_565.f_112;
	if (func_569(&(Local_18.f_565)))
	{
		func_642(&(Local_18.f_1111.f_40[4]), 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(func_228(4, 4), func_229(4, 4), 1, 1, 0, false);
		}
		else if (!func_226(&(Local_18.f_1111.f_40[4]), -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(&(Local_18.f_1111.f_40[4]), func_228(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
	}
	if (iVar0 > 2)
	{
		func_643(&Local_18);
	}
	switch (iVar0)
	{
		case -1:
			return 0;
		case 0:
			func_622(uParam0, 1);
			func_261(&(Local_18.f_1111), 1);
			func_642(Global_35, 1, 0);
			func_623(1);
			break;
		case 1:
			func_644();
			func_645(&(Local_18.f_565), 0);
			func_646(Global_35, 130, 1);
			func_623(2);
			break;
		case 2:
			func_266(1, 0);
			func_647(&(Local_18.f_1111), 1);
			func_623(3);
			break;
		case 3:
			PLAYER::_0x9AFCF9FE1884BF62(PLAYER::PLAYER_ID(), 1269650476);
			if ((func_648(&(Local_18.f_1111.f_40[6]), Global_35) || PED::GET_PED_CONFIG_FLAG(&(Local_18.f_1111.f_40[6]), 10, false)) || PED::GET_PED_CONFIG_FLAG(&(Local_18.f_1111.f_40[6]), 11, false))
			{
				if (PED::GET_PED_CONFIG_FLAG(&(Local_18.f_1111.f_40[6]), 9, false) || WEAPON::_0xEA522F991E120D45(PED::GET_PED_CAUSE_OF_DEATH(&(Local_18.f_1111.f_40[6]))))
				{
					func_645(&(Local_18.f_565), 1);
				}
				func_623(4);
			}
			else
			{
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
			}
			break;
		case 4:
			func_623(5);
			break;
		case 5:
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
			func_646(Global_35, 130, 0);
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_623(8);
			break;
		case 8:
			if (func_591(Global_35, &(Local_18.f_1111.f_40[0]), 5f, 1))
			{
				func_623(9);
			}
			break;
		case 9:
			if (func_532(&(Local_18.f_730), 189))
			{
				func_623(10);
			}
			break;
		case 10:
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_223(var uParam0)
{
	int iVar0;

	iVar0 = Local_18.f_565.f_112;
	func_649(&Local_18, iVar0);
	if (func_569(&(Local_18.f_565)))
	{
		func_642(&(Local_18.f_1111.f_40[4]), 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(func_228(4, 4), func_229(4, 4), 1, 2, 0, false);
		}
		else if (!func_226(&(Local_18.f_1111.f_40[4]), -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(&(Local_18.f_1111.f_40[4]), func_228(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.5f);
		}
	}
	if (!INTERIOR::IS_VALID_INTERIOR(Local_18.f_1224))
	{
		Local_18.f_1224 = INTERIOR::GET_INTERIOR_AT_COORDS(func_529(9));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_18.f_1224);
	}
	if (iVar0 > 0)
	{
		if (iVar0 < 15)
		{
			func_650(&Local_18);
		}
		if (iVar0 < 10)
		{
			func_651(&Local_18);
			func_643(&Local_18);
		}
	}
	if (iVar0 >= 17)
	{
		func_633(&(Local_18.f_121), func_227(182), 1, 1);
	}
	switch (iVar0)
	{
		case -1:
			return 0;
		case 0:
			func_622(uParam0, 2);
			func_623(1);
			break;
		case 1:
			func_623(2);
			break;
		case 2:
			if (func_652(&Local_18, 9))
			{
				func_623(3);
			}
			break;
		case 3:
			if (func_588(&Local_18, 9))
			{
				func_623(4);
			}
			break;
		case 4:
			func_623(5);
			break;
		case 5:
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_623(8);
			break;
		case 8:
			if (Local_18.f_687.f_1 > 9)
			{
				func_623(9);
			}
			break;
		case 9:
			if (func_619(&Local_18, 30))
			{
				func_623(10);
			}
			break;
		case 10:
			func_623(11);
			break;
		case 11:
			func_623(12);
			break;
		case 12:
			if (func_619(&Local_18, 24) || Local_18.f_1 >= 16)
			{
				func_623(13);
			}
			break;
		case 13:
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_487[35])))
			{
				if ((func_653(&(Local_18.f_487[35]), 1, 1, 1, 0) || func_521(&(Local_18.f_565), 200)) || func_522(1120403456, 1106247680))
				{
					PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
				}
			}
			if (Local_18.f_687 >= 3)
			{
				func_654(&(Local_18.f_1111));
			}
			if (Local_18.f_1 >= 16)
			{
				func_623(14);
			}
			break;
		case 14:
			if (Local_18.f_687 >= 5)
			{
				func_623(15);
			}
			break;
		case 15:
			func_623(16);
			break;
		case 16:
			func_623(17);
			break;
		case 17:
			func_623(18);
			break;
		case 18:
			if (((func_614(Global_35, &(Local_18.f_565.f_91[11]), 0, 1) && !PED::IS_PED_CLIMBING(Global_35)) && !func_538(&(Local_18.f_730), 199)) || func_614(Global_35, &(Local_18.f_565.f_91[10]), 0, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, func_655(Global_36, func_529(10)), false, true);
				func_623(19);
			}
			break;
		case 19:
			if (func_614(Global_35, &(Local_18.f_565.f_91[10]), 0, 1))
			{
				if (Local_18.f_565.f_113 >= 10)
				{
					func_656(&(Local_18.f_565), 1);
				}
				func_197(Local_18.f_565.f_31[16 /*3*/]);
				Local_18.f_565.f_113 = 0;
				func_623(20);
			}
			break;
		case 20:
			func_641(&(Local_18.f_565), 0);
			func_623(21);
			break;
		case 21:
			return 1;
	}
	return 0;
}

int func_224(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Local_18.f_565.f_112;
	func_642(Global_35, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	PAD::DISABLE_CONTROL_ACTION(0, 782960533, false);
	PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
	HUD::_0xC9CAEAEEC1256E54(-1249243147);
	func_586(Global_35);
	if (func_569(&(Local_18.f_565)) && iVar0 < 6)
	{
		func_642(&(Local_18.f_1111.f_40[4]), 0, 0);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(Local_18.f_565.f_87))
		{
			Local_18.f_565.f_87 = TASK::ADD_COVER_POINT(func_228(4, 4), func_229(4, 4), 1, 2, 0, false);
		}
		else if (!func_226(&(Local_18.f_1111.f_40[4]), -1959848946))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(&(Local_18.f_1111.f_40[4]), func_228(4, 4), -1, 1, 0, 0, 1, Local_18.f_565.f_87, 1, 0, 0);
		}
	}
	if (iVar0 > 8)
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
	}
	if (!INTERIOR::IS_VALID_INTERIOR(Local_18.f_1224))
	{
		Local_18.f_1224 = INTERIOR::GET_INTERIOR_AT_COORDS(func_529(9));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(Local_18.f_1224);
	}
	switch (iVar0)
	{
		case -1:
			return 0;
		case 0:
			func_622(uParam0, 3);
			func_646(Global_35, 334, 1);
			func_646(Global_35, 335, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 2, 1);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK09BX", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET09X_L", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET09X_R", false);
			func_623(1);
			break;
		case 1:
			if (Local_18.f_2 >= 5 && func_532(&(Local_18.f_730), 201))
			{
				func_632(&(Local_18.f_121));
				func_623(2);
			}
			break;
		case 2:
			if (func_657(&(Local_18.f_565)) && !func_556(&(Local_18.f_565)))
			{
				func_658(Local_18.f_565.f_31[17 /*3*/], 4f);
				Local_18.f_565.f_113 = 4;
			}
			else
			{
				func_658(Local_18.f_565.f_31[17 /*3*/], 0f);
			}
			func_623(3);
			break;
		case 3:
			func_633(&(Local_18.f_121), func_227(182), 1, 1);
			if (func_610(Local_18.f_565.f_31[17 /*3*/], 16f, 1, 0) || ((func_659(&(Local_18.f_565), 2) && func_659(&(Local_18.f_565), 3)) && func_659(&(Local_18.f_565), 4)))
			{
				Local_18.f_565.f_113 = 0;
				func_623(4);
			}
			break;
		case 4:
			if (Local_18.f_3 <= 2 && func_610(Local_18.f_565.f_31[4 /*3*/], 3f, 1, 0))
			{
				func_623(5);
			}
			break;
		case 5:
			func_197(Local_18.f_565.f_31[4 /*3*/]);
			func_660(&Local_18, 13);
			func_623(6);
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 1))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(182), 1, 1))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(8);
			}
			break;
		case 8:
			if (func_639(func_638(func_227(182)), &(Local_18.f_121)))
			{
				func_623(9);
			}
			break;
		case 9:
			func_258(&Local_18, &(Local_18.f_1111), 1, 0);
			func_623(10);
			break;
		case 10:
			PLAYER::_0x93624B36E8851B42(PLAYER::PLAYER_ID());
			TASK::RESET_SCENARIO_GROUPS_ENABLED();
			func_641(&(Local_18.f_565), 0);
			func_623(11);
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_225(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Local_18.f_565.f_112;
	if (iVar0 > 0)
	{
		if (iVar0 < 14)
		{
			func_661(&(Local_18.f_565), &(Local_18.f_1111));
		}
		if (iVar0 >= 8 && iVar0 < 14)
		{
			func_633(&(Local_18.f_121), func_227(183), 1, 1);
		}
		if ((iVar0 >= 10 && iVar0 < 15) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			func_662(Global_35, func_228(5, 6), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
		}
	}
	if (func_516(Global_35, func_529(11), 2f, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 325, true);
	switch (iVar0)
	{
		case -1:
			return 0;
		case 0:
			func_622(uParam0, 4);
			func_623(1);
			break;
		case 1:
			PHYSICS::_0x0348469DAA17576C(&(Local_18.f_1111.f_40[3]));
			func_640(&(Local_18.f_1111.f_40[3]), func_625(5, 3), 2);
			PHYSICS::_0x0348469DAA17576C(&(Local_18.f_1111.f_40[1]));
			func_640(&(Local_18.f_1111.f_40[1]), func_625(5, 4), 2);
			func_663(&(Local_18.f_1111.f_40[0]), 869278708, 68916947);
			if (!func_556(&(Local_18.f_565)))
			{
				TASK::TASK_MOUNT_ANIMAL(&(Local_18.f_1111.f_40[0]), &(Local_18.f_1111.f_40[1]), -1, -1, 2f, 1, 0, 0);
			}
			TASK::TASK_GO_TO_WHISTLE(&(Local_18.f_1111.f_40[1]), &(Local_18.f_1111.f_40[0]), 3);
			PHYSICS::_0x0348469DAA17576C(&(Local_18.f_1111.f_40[5]));
			func_640(&(Local_18.f_1111.f_40[5]), func_625(5, 5), 2);
			TASK::TASK_GO_TO_WHISTLE(&(Local_18.f_1111.f_40[5]), &(Local_18.f_1111.f_40[4]), 3);
			func_664(&(Local_18.f_1111), 0, func_50());
			func_664(&(Local_18.f_1111), 4, func_50());
			func_665(func_50(), 10);
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(&(Local_18.f_1111.f_40[0]), func_50(), true);
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(&(Local_18.f_1111.f_40[4]), func_50(), true);
			PED::_0xA8A95CECB1906EA2(func_50(), 1);
			func_658(Local_18.f_565.f_31[4 /*3*/], 0f);
			func_658(Local_18.f_565.f_31[5 /*3*/], 0f);
			func_623(2);
			break;
		case 2:
			if (func_610(Local_18.f_565.f_31[4 /*3*/], 1.5f, 1, 0))
			{
				AUDIO::_0xCCE219C922737BFA("POLICE_WHISTLE_SINGLE", func_228(5, 14), "NBD1_Sounds", 0, 0, 1, 0);
				func_623(3);
			}
			break;
		case 3:
			if (!func_226(&(Local_18.f_1111.f_40[3]), 2043986356) && !func_666(Global_35, &(Local_18.f_1111.f_40[3]), 0))
			{
				if (func_610(Local_18.f_565.f_31[5 /*3*/], 3f, 0, 1))
				{
					TASK::TASK_GO_TO_WHISTLE(&(Local_18.f_1111.f_40[3]), Global_35, 3);
				}
			}
			if (func_610(Local_18.f_565.f_31[4 /*3*/], 5f, 1, 1))
			{
				func_32(1);
				func_667(0);
				func_277(0);
				func_668(&(Local_18.f_565), &(Local_18.f_1111));
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
				PLAYER::_0xD2DFC9CCA5596A11(0f);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), 1780145725, 0, 0, 0, 0, 0, 0, 0);
				LAW::_0x956510F8C36B5C64();
				LAW::_0xF60386770878A98F(PLAYER::PLAYER_ID(), 1780145725, 0, 0, 1);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, 707888648, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
				func_623(4);
			}
			break;
		case 4:
			func_261(&(Local_18.f_1111), 1);
			func_623(5);
			break;
		case 5:
			func_668(&(Local_18.f_565), &(Local_18.f_1111));
			if (func_516(Global_35, func_529(0), 100f, 1, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 128, true);
				PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::PLAYER_ID());
			}
			if (!func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_623(6);
			}
			break;
		case 6:
			func_623(7);
			break;
		case 7:
			func_261(&(Local_18.f_1111), 0);
			LAW::_0x55F37F5F3F2475E1();
			func_669(7);
			func_623(8);
			break;
		case 8:
			func_632(&(Local_18.f_121));
			func_623(9);
			break;
		case 9:
			func_623(10);
			break;
		case 10:
			if (func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_623(4);
			}
			else if (func_516(Global_35, func_228(5, 6), 25f, 1, 1) && func_670(Global_35))
			{
				func_623(11);
			}
			else if (func_516(Global_35, func_671(3), 100f, 1, 1))
			{
				func_623(13);
			}
			break;
		case 11:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			func_672(Global_35, func_625(5, 6), 1.25f, -1, 1048576000, 0);
			func_623(12);
			break;
		case 12:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (func_516(Global_35, func_228(5, 6), 15f, 1, 1))
			{
				func_669(7);
				func_623(13);
			}
			break;
		case 13:
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			if (func_538(&(Local_18.f_730), 207))
			{
				if (func_532(&(Local_18.f_730), 207))
				{
					func_623(14);
				}
			}
			else
			{
				func_623(14);
			}
			break;
		case 14:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
			func_641(&(Local_18.f_565), 0);
			bVar1 = true;
			if (!func_636(&Local_18, &(Local_18.f_1111), 2))
			{
				bVar1 = false;
			}
			if (!func_633(&(Local_18.f_121), func_227(183), 1, 1))
			{
				bVar1 = false;
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f)
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_623(15);
			}
			break;
		case 15:
			if (func_639(func_638(func_227(183)), &(Local_18.f_121)))
			{
				func_258(&Local_18, &(Local_18.f_1111), 2, 1);
				func_623(16);
			}
			break;
		case 16:
			func_623(17);
			break;
		case 17:
			func_623(18);
			break;
		case 18:
			func_641(&(Local_18.f_565), 0);
			func_623(19);
			break;
		case 19:
			return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
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

char* func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_CA@CACHR@IG@IG3_Explosives";
		case 1:
			return "SCRIPT_CA@CACHR@IG@IG4_Detonate";
		case 2:
			return "SCRIPT_CA@CACHR@IG@IG4_VaultLoot";
		case 3:
			return "script_story@wnt4@ig@ig32_Arthur_Spool_Pickups";
		case 4:
			return "script_story@wnt4@ig@ig_unapproved";
		case 5:
			return "IDLE_READY_charlesSmith";
		case 6:
			return "IDLE_READY_uncle";
		case 7:
			return "INSTRUCT_ARTHUR_LEFT_charlesSmith";
		case 8:
			return "INSTRUCT_ARTHUR_LEFT_p_cs_fusespool01x";
		case 9:
			return "SET_DYNAMITE_charlesSmith";
		case 10:
			return "SET_DYNAMITE_p_detonator01x";
		case 11:
			return "SET_DYNAMITE_uncle";
		case 12:
			return "ARTHUR_CLIMB_Player_Zero";
		case 13:
			return "ARTHUR_DETONATOR_ENTER_BACK_Player_Zero";
		case 14:
			return "ARTHUR_DETONATOR_ENTER_FRONT_Player_Zero";
		case 15:
			return "ARTHUR_DETONATOR_ENTER_RIGHT_Player_Zero";
		case 16:
			return "IDLE_READY_Player_Zero";
		case 17:
			return "WIRE_DETONATOR_Player_Zero";
		case 18:
			return "CHARLES_TAKE_COVER_IG_CharlesSmith";
		case 19:
			return "CHARLES_DETONATE_IG_CharlesSmith";
		case 20:
			return "CHARLES_CLIMB_IG_CharlesSmith";
		case 21:
			return "charles_enter_vault_ig_charlessmith";
		case 22:
			return "CHARLES_ENTER_VAULT_s_mp_moneybag02x";
		case 23:
			return "CHARLES_ENTER_VAULT_small_vault";
		case 24:
			return "CHARLES_WALL_APPROACH_IG_CharlesSmith";
		case 25:
			return "CHARLES_WALL_IDLE_IG_CharlesSmith";
		case 26:
			return "EXPLOSION_REACT_A_Player_Zero";
		case 27:
			return "EXPLOSION_REACT_B_BACK_IG_CharlesSmith";
		case 28:
			return "ACTION_IG_CharlesSmith";
		case 29:
			return "action_player_zero";
		case 30:
			return "CHARLES_ENTER_LOOT_IG_CharlesSmith";
		case 31:
			return "CHARLES_LOOT_IDLE_01_IG_CharlesSmith";
		case 32:
			return "CHARLES_LOOT_IDLE_02_IG_CharlesSmith";
		case 33:
			return "CHARLES_LOOT_IDLE_03_IG_CharlesSmith";
		case 34:
			return "OPEN_LARGE_VAULT_EASYOPEN_Player_Zero";
		case 35:
			return "OPEN_LARGE_VAULT_EASYOPEN_02_s_vault_med_r_val01x";
		case 36:
			return "OPEN_LARGE_VAULT_EASYOPEN_02_Player_Zero";
		case 37:
			return "OPEN_LARGE_VAULT_ENTER_A_Player_Zero";
		case 38:
			return "OPEN_LARGE_VAULT_ENTER_B_Player_Zero";
		case 39:
			return "OPEN_LARGE_VAULT_LOOP_A_01_Player_Zero";
		case 40:
			return "OPEN_LARGE_VAULT_LOOP_A_02_Player_Zero";
		case 41:
			return "OPEN_LARGE_VAULT_LOOP_A_03_Player_Zero";
		case 42:
			return "OPEN_LARGE_VAULT_LOOP_A_04_Player_Zero";
		case 43:
			return "OPEN_LARGE_VAULT_LOOP_B_01_Player_Zero";
		case 44:
			return "OPEN_LARGE_VAULT_OPEN_A_Player_Zero";
		case 45:
			return "OPEN_LARGE_VAULT_OPEN_B_Player_Zero";
		case 46:
			return "OPEN_SMALL_VAULT_Player_Zero";
		case 47:
			return "w_walk_spool";
		case 48:
			return "b_breakout";
		case 49:
			return "script@common@cnv_camp@cachr@ig3_Explosives@CACHR_EXPLOSIVES_IG3";
		case 50:
			return "script@common@cnv_camp@cachr@ig4_Detonate@Action";
		case 51:
			return "script@common@cnv_camp@cachr@ig4_VaultLoot@ig4_VaultLoot";
		case 52:
			return "script@story@WNT4@ig@ig32_arthur_spool_pickups@ig32_arthur_spool_pickups";
		case 53:
			return "BILLSINGLE";
		case 54:
			return "BILLSINGLE_1";
		case 55:
			return "BILLSINGLE_2";
		case 56:
			return "BILLSINGLE_3";
		case 57:
			return "BILLSINGLE_4";
		case 58:
			return "BILLSTACK";
		case 59:
			return "BILLSTACK_1";
		case 60:
			return "BILLSTACK_2";
		case 61:
			return "BILLSTACK_3";
		case 62:
			return "BILLSTACK_4";
		case 63:
			return "BILLSTACK_5";
		case 64:
			return "BILLSTACK_6";
		case 65:
			return "BILLSTACK_7";
		case 66:
			return "BILLSTACK";
		case 67:
			return "BILLSTACK_1";
		case 68:
			return "BILLSTACK_2";
		case 69:
			return "BILLSTACK_3";
		case 70:
			return "BILLSTACK";
		case 71:
			return "BILLSTACK_1";
		case 72:
			return "BILLSTACK_2";
		case 73:
			return "BILLSTACK_3";
		case 74:
			return "BILLSTACK_4";
		case 75:
			return "BILLSTACK_5";
		case 76:
			return "BILLSTACK_6";
		case 77:
			return "BILLSTACK_1";
		case 78:
			return "BILLSTACK_2";
		case 79:
			return "BILLSTACK_3";
		case 80:
			return "BOND";
		case 81:
			return "BOTTLEJD";
		case 82:
			return "CHAIR_CRATE";
		case 83:
			return "CHAIRFOLDING";
		case 84:
			return "COINCUP_A";
		case 85:
			return "COINCUP_B";
		case 86:
			return "DETONATOR";
		case 87:
			return "DOCUMENTFOLDER";
		case 88:
			return "DYNAMITE_BUNDLE";
		case 89:
			return "DYNAMITE_BUNDLE_1";
		case 90:
			return "FUSESPOOL";
		case 91:
			return "FUSESPOOLWIRE";
		case 92:
			return "GOLDBAR_A";
		case 93:
			return "GOLDBAR_B";
		case 94:
			return "JEWELRYBAG_A";
		case 95:
			return "JEWELRYBAG_B";
		case 96:
			return "KNIFE";
		case 97:
			return "MONEYBAG";
		case 98:
			return "MONEYBAG_1";
		case 99:
			return "MONEYSTACK";
		case 100:
			return "REVOLVER_CATTLEMAN";
		case 101:
			return "SHOTGUN_SAWEDOFF";
		case 102:
			return "UNCLEHAT";
		case 103:
			return "VAULT_MEDIUM";
		case 104:
			return "VAULT_MEDIUM_1";
		case 105:
			return "VAULT_MEDIUM_2";
		case 106:
			return "VAULT_SMALL";
		case 107:
			return "VAULT_SMALL_1";
		case 108:
			return "ARTHUR";
		case 109:
			return "PLAYER_HORSE";
		case 110:
			return "CHARLES";
		case 111:
			return "CHARLES_HORSE";
		case 112:
			return "PATROLMAN";
		case 113:
			return "UNCLE";
		case 114:
			return "UNCLE_HORSE";
		case 115:
			return "pl_charles_idle_enter";
		case 116:
			return "pl_charles_idle_exit";
		case 117:
			return "pl_charles_idle_ready";
		case 118:
			return "pl_instruct_arthur_left";
		case 119:
			return "pl_place_dynamite";
		case 120:
			return "pl_place_dynamite_loop";
		case 121:
			return "pl_set_dynamite";
		case 122:
			return "pl_uncle_idle_enter";
		case 123:
			return "pl_uncle_idle_exit_without_prop";
		case 124:
			return "pl_uncle_idle_exit_with_prop";
		case 125:
			return "pl_uncle_idle_ready_without_prop";
		case 126:
			return "pl_uncle_idle_ready_with_prop";
		case 127:
			return "pl_ARTHUR_CLIMB";
		case 128:
			return "pl_ARTHUR_DETONATOR_ENTER_BACK";
		case 129:
			return "pl_ARTHUR_DETONATOR_ENTER_FRONT";
		case 130:
			return "pl_ARTHUR_DETONATOR_ENTER_RIGHT";
		case 132:
			return "pl_CHARLES_CLIMB";
		case 133:
			return "pl_CHARLES_COVER_IDLE";
		case 134:
			return "pl_CHARLES_COVER_IDLE_2_CHARLES_DETONATE";
		case 135:
			return "pl_CHARLES_COVER_IDLE_2_CHARLES_ENTER_VAULT";
		case 136:
			return "pl_CHARLES_DETONATE";
		case 137:
			return "pl_CHARLES_WALL_APPROACH";
		case 138:
			return "pl_CHARLES_WALL_IDLE";
		case 139:
			return "pl_CHARLES_ENTER_VAULT";
		case 140:
			return "pl_CHARLES_TAKE_COVER";
		case 141:
			return "pl_CHARLES_WALL_IDLE";
		case 142:
			return "pl_EXPLOSION_REACT_A";
		case 143:
			return "pl_EXPLOSION_REACT_B_BACK";
		case 144:
			return "pl_EXPLOSION_REACT_B_LEFT";
		case 145:
			return "pl_EXPLOSION_REACT_C_BACK";
		case 146:
			return "pl_WIRE_DETONATOR";
		case 147:
			return "pl_ACTION";
		case 148:
			return "pl_CHARLES_ENTER_LOOT";
		case 149:
			return "pl_CHARLES_EXIT_LOOT";
		case 150:
			return "pl_CHARLES_GUNSHOT_REACT_01";
		case 151:
			return "pl_CHARLES_GUNSHOT_REACT_02";
		case 152:
			return "pl_CHARLES_GUNSHOT_REACT_03";
		case 153:
			return "pl_CHARLES_GUNSHOT_REACT_04";
		case 154:
			return "pl_CHARLES_LOOT_FAST";
		case 155:
			return "pl_CHARLES_LOOT_IDLE";
		case 156:
			return "pl_CHARLES_LOOT_SLOW";
		case 157:
			return "pl_...";
		case 158:
			return "pl_..._1";
		case 159:
			return "pl_OPEN_LARGE_VAULT_EASYOPEN";
		case 160:
			return "pl_OPEN_LARGE_VAULT_EASYOPEN_1";
		case 161:
			return "pl_OPEN_LARGE_VAULT_ENTER_A";
		case 163:
			return "pl_OPEN_LARGE_VAULT_ENTER_B";
		case 165:
			return "pl_OPEN_LARGE_VAULT_LOOP_A";
		case 167:
			return "pl_OPEN_LARGE_VAULT_LOOP_B";
		case 169:
			return "pl_OPEN_LARGE_VAULT_OPEN_A";
		case 171:
			return "pl_OPEN_LARGE_VAULT_OPEN_B";
		case 173:
			return "pl_OPEN_SMALL_VAULT";
		case 174:
			return "pl_OPEN_SMALL_VAULT_RIGHT";
		case 175:
			return "s_CHARLES_LOOT_SLOW";
		case 176:
			return "s_MUD5_LOO_B";
		case 177:
			return "s_MUD5_LOOT_A";
		case 178:
			return "s_MUD5_LOOT_MED";
		case 179:
			return "s_MUD5_LOOT_SM";
		case 180:
			return "pl_Left_Enter";
		case 181:
			return "CACHR_MCS1";
		case 182:
			return "CACHR_MCS2";
		case 183:
			return "CACHR_EXT";
		case 184:
			return "CABR1_WHERE";
		case 185:
			return "CABR1_CAMP_IDLE";
		case 186:
			return "CABR1_CHAT1";
		case 187:
			return "CABR1_TREES";
		case 188:
			return "CABR1_CUT";
		case 189:
			return "CABR1_CLEAR";
		case 190:
			return "CABR1_SPOOLPICK";
		case 191:
			return "CABR1_BANK_IDLE";
		case 192:
			return "RE_PH_RHD_V3_AGGRO";
		case 193:
			return "PTRL_ALERT";
		case 194:
			return "SICK_BASTARD";
		case 195:
			return "CABR1_DETO_IDLE";
		case 196:
			return "CABR1_DETO_TMOT";
		case 197:
			return "CABR1_VAULT_GO";
		case 198:
			return "CABR1_VAULT_IDL";
		case 199:
			return "CABR1_VAULT_TO";
		case 200:
			return "CABR1_VAULT_DMG";
		case 201:
			return "CABR1_IG4_LOOT";
		case 202:
			return "CABR1_ESC_BEGIN";
		case 203:
			return "CABR1_ESC_CONT";
		case 204:
			return "CABR1_ESC_CLEAR";
		case 205:
			return "CABR1_CHAT2";
		case 206:
			return "CABR1_HOLD_UP";
		case 207:
			return "CABR1_END";
		case 208:
			return "BR1_FAIL_GEN";
		case 209:
			return "BR1_FAIL_ABNDCHR";
		case 210:
			return "BR1_FAIL_ABNDBNK";
		case 212:
			return "BR1_FAIL_PTRL";
		case 213:
			return "BR1_FAIL_ATKCMP";
		case 214:
			return "BR1_FAIL_DEADCHR";
		case 215:
			return "BR1_FAIL_DEDPHRS";
		case 216:
			return "BR1_FAIL_DEADUNC";
		case 217:
			return "BR1_FAIL_FRDWPN";
		case 218:
			return "BR1_FAIL_INJPHRS";
		case 219:
			return "BR1_FAIL_LAWCMP";
		case 211:
			return "BR1_FAIL_LAWWNT";
		case 220:
			return "BR1_FAIL_VLTTMT";
		case 221:
			return "BR1_OBJ_MOUNT";
		case 222:
			return "BR1_OBJ_FOLLOW";
		case 223:
			return "BR1_OBJ_WAITCHR";
		case 224:
			return "BR1_OBJ_RTRNCHR";
		case 225:
			return "BR1_OBJ_RTRNBNK";
		case 226:
			return "BR1_OBJ_PATROL";
		case 227:
			return "BR1_OBJ_RTRNGNG";
		case 228:
			return "BR1_OBJ_JOINCHR";
		case 229:
			return "BR1_OBJ_PKUPSPL";
		case 230:
			return "BR1_OBJ_UNSPOOL";
		case 231:
			return "BR1_OBJ_DTNATE";
		case 232:
			return "BR1_OBJ_ENTRVLT";
		case 233:
			return "BR1_OBJ_LOOT";
		case 234:
			return "BR1_OBJ_ESCLAW";
		case 235:
			return "BR1_OBJ_RNDZVS";
		case 236:
			return "BR1_TXT_BANK";
		case 237:
			return "BR1_TXT_CAMP";
		case 238:
			return "BR1_TXT_DTNATE";
		case 239:
			return "BR1_TXT_DETONTR";
		case 240:
			return "BR1_TXT_FUSESPL";
		case 241:
			return "BR1_TXT_OPEN";
		case 242:
			return "BR1_TXT_PTRLMAN";
		case 243:
			return "RHD_Sheriff";
		case 244:
			return "miss_brob1_patrolLM01";
		case 245:
			return "miss_brob1_patrolLM02";
		case 246:
			return "miss_brob1_patrolLM03";
		case 247:
			return "miss_brob1_patrolLM04";
		case 248:
			return "miss_brob1_patrolLM05";
		case 249:
			return "miss_brob1_patrolLM06";
		case 250:
			return "miss_brob1_patrolLM07";
		case 251:
			return "miss_brob1_patrolLM08";
		case 252:
			return "miss_brob1_patrolPM";
		case 253:
			return "BR1_TXT_PICKUP";
		case 254:
			return "BR1_TXT_PLUNGER";
		case 255:
			return "BR1_TXT_PULDOOR";
		case 256:
			return "DES_rho_bankwall";
		case 257:
			return "0405_U_M_M_RhdSheriff_01";
		case 258:
			return "BR1_TXT_SAFE";
		case 259:
			return "CACHR_Sounds";
		case 260:
			return "DynamiteBox";
		case 261:
			return "BR1_TXT_SPOOL";
		case 262:
			return "BR1_TXT_USE";
		case 263:
			return "BR1_TXT_VAULT";
		case 264:
			return "bankrob01_CharlesGotoStakeout";
		case 265:
			return "bankrob01_CharlesGotoWaitDepart";
		case 266:
			return "bankrob01_CharlesReturnCamp";
		case 267:
			return "bankrob01_PlayerUnspoolFuse";
		case 268:
			return "bankrob01_UncleGotoWaitDepart";
		case 269:
			return "bankrob01_UncleReturnCamp";
		default:
			break;
	}
	return "";
}

Vector3 func_228(int iParam0, int iParam1)
{
	return func_673(iParam0, iParam1);
}

float func_229(int iParam0, int iParam1)
{
	return func_674(iParam0, iParam1);
}

void func_230(var uParam0, int iParam1, int* iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7)
{
	if (bParam6)
	{
		TASK::CLEAR_PED_TASKS(&(uParam0->f_40[iParam1]), iParam7, 0);
	}
	func_675(&(uParam0->f_40[iParam1]), iParam2, fParam3, fParam4, bParam5, 1);
}

int func_231(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_267(iParam1);
	if (!func_10(iVar0))
	{
		return 1;
	}
	else if (!func_29(&(uParam0->f_40[iParam1]), 0))
	{
		return 0;
	}
	if (func_67(iVar0, 1))
	{
		func_68(iVar0);
	}
	func_65(iVar0, 0, 0, bParam2, fParam3, 1, 1, 0, 0, 0, 0);
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_175(0, func_676(iParam1, 1), 11, 2116153146);
	}
	return func_175(0, func_676(iParam1, 1), 11, iParam1);
}

void func_233(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	func_677(iParam0, iParam1);
}

void func_234(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_678(iParam0);
	if (bParam3)
	{
		func_485(iParam0, sParam1, iParam2);
	}
}

int func_235(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
	{
		return 1;
	}
	if (!uParam0->f_11)
	{
		SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_18));
		uParam0->f_11 = 1;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_18)))
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18))) > 0)
	{
		SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(uParam0->f_18)));
		return 0;
	}
	else
	{
		uParam0->f_27 = BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_18)), uParam0->f_26);
		func_61(&(uParam0->f_9), 4, 1);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
	}
	return 1;
}

int func_236(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_237(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

int func_238(int iParam0)
{
	if (func_58(iParam0))
	{
		if (func_29(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_58(iParam0))
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
			if (func_284(iParam0, 2, 1))
			{
				func_282(iParam0, 2, 1);
			}
			if (func_280(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_59(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_65(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_29(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_679(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_680(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_680(iParam0, 1);
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
			if (!func_284(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_681(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_680(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_282(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_286(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_682(iParam0, 0, 0, 1);
			}
			func_282(iParam0, 33, 1);
			func_282(iParam0, 34, 1);
			func_282(iParam0, 29, 1);
			if (!func_499(vVar0) && iParam7)
			{
				func_680(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_680(iParam0, 4);
			}
			else
			{
				func_680(iParam0, 5);
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
						func_679(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_683(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
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
				func_680(iParam0, 4);
			}
			else
			{
				func_680(iParam0, 5);
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
				if (func_684(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_685(iParam0, iParam13, 0);
						func_686(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_284(iParam0, 25, 0))
						{
							func_282(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_680(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_680(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_680(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_680(iParam0, 6);
			}
			break;
		case 6:
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
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
					func_687(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_688(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_680(iParam0, 7);
		case 7:
			func_286(iParam0, bParam9, bParam15, 0);
			func_63(iParam0, 4, bParam11);
			func_281(iParam0);
			if (bParam20)
			{
				if (func_689(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_690(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_680(iParam0, 0);
			func_480(iParam0, 16, 1);
			func_282(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_240(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_58(iParam0))
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
	if (func_67(iParam0, 0))
	{
		func_691(iParam0, 1);
		return 1;
	}
	if (!func_692())
	{
		return 0;
	}
	if (bParam1)
	{
		func_679(iParam0, 0, "Adding to Group");
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
	func_691(iParam0, 1);
	Global_1359489->f_15 = func_292(1);
	func_59(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_66(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_66(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_50(), 0);
	func_693(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_294();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

bool func_241(var uParam0)
{
	func_61(&(uParam0->f_9), 256, 1);
	return func_694(uParam0, &Local_18);
}

int func_242(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_192();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_671(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_243(var uParam0, var uParam1)
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

	uParam1->f_10 = func_695(uParam1->f_10);
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
		if (func_499(uParam1->f_6))
		{
		}
	}
	bVar0 = func_344();
	if (*uParam1)
	{
		if (bVar0 && !func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_696(5))
			{
				func_697(5);
				func_698(5);
				func_699(0);
				func_700(0);
			}
		}
	}
	if (func_701(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_139(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_139(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_139(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_702(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_703(iVar1))
	{
		bVar3 = true;
		if (func_704(iVar1))
		{
			bVar4 = true;
		}
		if (func_705(iVar1))
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
				func_706(uParam1->f_10);
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
			if (!func_696(0) && func_696(1))
			{
				func_707(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_708())
			{
				func_709();
			}
			func_699(0);
			func_700(0);
			func_710(uParam1->f_6);
		}
	}
	if (!func_703(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_711(uParam1->f_10) == 0 || func_712(uParam1->f_10) == 0) || func_713(uParam1->f_10) == 0)
			{
				func_714(uParam1->f_10);
			}
			func_715(uParam1->f_10);
			func_716(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_702(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_703(iVar1))
	{
		bVar3 = true;
		if (func_704(iVar1))
		{
			bVar4 = true;
		}
		if (func_705(iVar1))
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
			if (!func_499(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_717(uParam1->f_10))
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
			Var8 = { func_718(uParam1->f_10) };
			Var10 = { func_719() };
			func_720(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_721(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_722(uParam1->f_10);
		if (uParam1->f_2 && !func_499(uParam1->f_6))
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
	func_723(uParam1->f_10);
	if (func_721(uParam1->f_10))
	{
		iVar16 = func_724(uParam1->f_10);
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

void func_244(var uParam0)
{
	COMPANION::_0x0F1CD8CA9E65D5F6(func_50(), *uParam0);
	COMPANION::_0xD55A871E1CE3481B(func_50(), uParam0->f_37);
}

int func_245(var uParam0)
{
	if (func_88(&Global_1935630, 2048))
	{
		return 0;
	}
	if (func_725(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		func_726(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return 1;
	}
	return 0;
}

bool func_246()
{
	return (func_727() || func_728());
}

void func_247(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_729(0f);
	Global_1935436->f_11 = 1;
	if (func_117())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_730();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_248(int iParam0)
{
	switch (func_108())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_249(vector3 vParam0, float fParam3)
{
	int iVar0;

	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_731(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_732(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_733(0, 0);
		if (func_461(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_734(1, 0);
		}
	}
	else
	{
		func_734(1, 0);
	}
	func_94(0);
	func_735(0, vParam0, fParam3);
	return 1;
}

int func_250(var uParam0)
{
	return uParam0->f_9;
}

bool func_251(int iParam0)
{
	return iParam0 > -1;
}

int func_252(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_253(var uParam0)
{
	func_658(uParam0, 0f);
}

void func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (STREAMING::DOES_ANIM_DICT_EXIST(func_227(iVar0)))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_227(iVar0)))
			{
				STREAMING::REMOVE_ANIM_DICT(func_227(iVar0));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (STREAMING::IS_MODEL_VALID(func_736(iVar1)))
		{
			if (STREAMING::HAS_MODEL_LOADED(func_736(iVar1)))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_736(iVar1));
			}
		}
		iVar1++;
	}
	iVar2 = 264;
	while (iVar2 <= 269)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_227(iVar2)))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(func_227(iVar2));
		}
		iVar2++;
	}
}

void func_255(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_554(uParam0, iVar0);
		iVar0++;
	}
}

void func_256(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 270)
	{
		uParam0->f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_257(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 54)
	{
		if (!func_737(uParam0, iVar0))
		{
			func_592(uParam0->f_487[iVar0], 1);
			func_738(uParam0, iVar0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		func_739(uParam0, 0, iVar1);
		func_739(uParam0, 1, iVar1);
		iVar1++;
	}
	iVar1 = 12;
	while (iVar1 <= 30)
	{
		func_739(uParam0, 2, iVar1);
		func_739(uParam0, 3, iVar1);
		iVar1++;
	}
	iVar1 = 31;
	while (iVar1 <= 52)
	{
		func_739(uParam0, 4, iVar1);
		func_739(uParam0, 5, iVar1);
		func_739(uParam0, 6, iVar1);
		func_739(uParam0, 7, iVar1);
		func_739(uParam0, 8, iVar1);
		iVar1++;
	}
	func_739(uParam0, 9, 58);
}

void func_258(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 0:
			func_741(&(uParam0->f_121), &(uParam0->f_487[37]), func_740(37));
			func_741(&(uParam0->f_121), &(uParam0->f_487[33]), func_740(33));
			func_741(&(uParam0->f_121), &(uParam0->f_487[44]), func_740(44));
			func_741(&(uParam0->f_121), Global_35, func_742(2));
			func_741(&(uParam0->f_121), &(uParam0->f_543[7]), "Horse_01^1");
			func_741(&(uParam0->f_121), &(uParam1->f_40[0]), func_742(0));
			func_741(&(uParam0->f_121), &(uParam1->f_40[1]), func_742(1));
			func_741(&(uParam0->f_121), &(uParam1->f_40[4]), func_742(4));
			func_741(&(uParam0->f_121), &(uParam1->f_40[5]), func_742(5));
			func_741(&(uParam0->f_121), &(uParam1->f_40[6]), func_742(6));
			func_592(uParam0->f_487[37], bParam3);
			func_592(uParam0->f_487[33], bParam3);
			func_592(uParam0->f_487[44], bParam3);
			break;
		case 1:
			func_741(&(uParam0->f_121), &(uParam0->f_487[27]), func_740(27));
			func_741(&(uParam0->f_121), &(uParam0->f_487[31]), func_740(31));
			func_741(&(uParam0->f_121), &(uParam0->f_487[32]), func_740(32));
			func_741(&(uParam0->f_121), &(uParam0->f_487[39]), func_740(39));
			func_741(&(uParam0->f_121), &(uParam0->f_487[40]), func_740(40));
			func_741(&(uParam0->f_121), &(uParam0->f_487[41]), func_740(41));
			func_741(&(uParam0->f_121), &(uParam0->f_487[42]), func_740(42));
			func_741(&(uParam0->f_121), &(uParam0->f_487[46]), func_740(46));
			func_741(&(uParam0->f_121), &(uParam0->f_487[44]), func_740(44));
			func_741(&(uParam0->f_121), &(uParam0->f_487[45]), func_740(45));
			func_741(&(uParam0->f_121), &(uParam0->f_487[54]), func_740(54));
			func_741(&(uParam0->f_121), Global_35, func_742(2));
			func_741(&(uParam0->f_121), &(uParam1->f_40[0]), func_742(0));
			func_741(&(uParam0->f_121), &(uParam1->f_40[4]), func_742(4));
			func_592(uParam0->f_487[27], bParam3);
			func_592(uParam0->f_487[31], bParam3);
			func_592(uParam0->f_487[32], bParam3);
			func_592(uParam0->f_487[39], bParam3);
			func_592(uParam0->f_487[40], bParam3);
			func_592(uParam0->f_487[41], bParam3);
			func_592(uParam0->f_487[42], bParam3);
			func_592(uParam0->f_487[46], bParam3);
			func_592(uParam0->f_487[44], bParam3);
			func_592(uParam0->f_487[45], bParam3);
			func_592(uParam0->f_487[54], bParam3);
			break;
		case 2:
			func_741(&(uParam0->f_121), &(uParam0->f_487[0]), func_740(0));
			func_741(&(uParam0->f_121), &(uParam0->f_487[1]), func_740(1));
			func_741(&(uParam0->f_121), &(uParam0->f_487[2]), func_740(2));
			func_741(&(uParam0->f_121), &(uParam0->f_487[3]), func_740(3));
			func_741(&(uParam0->f_121), &(uParam0->f_487[4]), func_740(4));
			func_741(&(uParam0->f_121), &(uParam0->f_487[5]), func_740(5));
			func_741(&(uParam0->f_121), &(uParam0->f_487[6]), func_740(6));
			func_741(&(uParam0->f_121), &(uParam0->f_487[7]), func_740(6));
			func_741(&(uParam0->f_121), &(uParam0->f_487[44]), func_740(44));
			func_741(&(uParam0->f_121), &(uParam0->f_487[45]), func_740(45));
			func_741(&(uParam0->f_121), Global_35, func_742(2));
			func_741(&(uParam0->f_121), &(uParam0->f_543[7]), "Horse_01^2");
			func_741(&(uParam0->f_121), &(uParam1->f_40[0]), func_742(0));
			func_741(&(uParam0->f_121), &(uParam1->f_40[1]), "Horse_01^1");
			func_741(&(uParam0->f_121), &(uParam1->f_40[4]), func_742(4));
			func_741(&(uParam0->f_121), &(uParam1->f_40[5]), func_742(5));
			func_592(uParam0->f_487[0], bParam3);
			func_592(uParam0->f_487[1], bParam3);
			func_592(uParam0->f_487[2], bParam3);
			func_592(uParam0->f_487[3], bParam3);
			func_592(uParam0->f_487[4], bParam3);
			func_592(uParam0->f_487[5], bParam3);
			func_592(uParam0->f_487[6], bParam3);
			func_592(uParam0->f_487[44], bParam3);
			func_592(uParam0->f_487[45], bParam3);
			break;
	}
}

void func_259(bool bParam0)
{
	func_743(2058564250, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1152844617, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-977211145, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1206757990, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1634148892, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-811723029, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1862376969, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(972368328, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1060413677, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(743565308, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(393076024, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1410133961, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(934926308, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1247339802, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(2046695029, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(834296435, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1124531468, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(717342088, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-360567618, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1905757044, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(2040679168, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(870793095, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1482639045, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-902483455, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-566797819, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1544280705, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1847993131, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1469250492, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(678501753, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1079073283, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-860602360, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1614494720, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(349074475, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1878514758, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(2049773380, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1404294126, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1914972453, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1567970773, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1405538538, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(269176415, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-293074087, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(414143916, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1196776392, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(1479867783, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1088690954, bParam0, 0, 0, !bParam0, 0, 0, 0);
	func_743(-1627226365, bParam0, 0, 0, !bParam0, 0, 0, 0);
	if (bParam0)
	{
		func_744(1, 1);
	}
}

void func_260(var uParam0, bool bParam1)
{
	func_646(&(uParam0->f_40[0]), 130, bParam1);
	func_646(&(uParam0->f_40[0]), 297, !bParam1);
	func_646(&(uParam0->f_40[0]), 153, bParam1);
	func_646(&(uParam0->f_40[0]), 245, bParam1);
	func_745(&(uParam0->f_40[1]), 0, bParam1);
	func_745(&(uParam0->f_40[1]), 3, bParam1);
	func_745(&(uParam0->f_40[1]), 4, bParam1);
	func_646(&(uParam0->f_40[4]), 130, bParam1);
	func_646(&(uParam0->f_40[4]), 297, !bParam1);
	func_646(&(uParam0->f_40[4]), 153, bParam1);
	func_646(&(uParam0->f_40[4]), 245, bParam1);
	func_745(&(uParam0->f_40[5]), 0, bParam1);
	func_745(&(uParam0->f_40[5]), 3, bParam1);
	func_745(&(uParam0->f_40[5]), 4, bParam1);
	func_745(&(uParam0->f_40[3]), 2, bParam1);
	func_745(&(uParam0->f_40[3]), 3, bParam1);
	if (!bParam1)
	{
		func_646(Global_35, 43, 0);
		func_646(Global_35, 130, 0);
		func_646(Global_35, 249, 0);
		func_646(Global_35, 334, 0);
		func_646(Global_35, 335, 0);
		func_646(Global_35, 352, 0);
		func_646(Global_35, 404, 0);
		func_646(&(uParam0->f_40[0]), 279, 0);
		func_646(&(uParam0->f_40[0]), 280, 0);
		func_646(&(uParam0->f_40[0]), 167, 0);
		func_646(&(uParam0->f_40[4]), 279, 0);
		func_646(&(uParam0->f_40[4]), 280, 0);
		func_646(&(uParam0->f_40[4]), 167, 0);
	}
}

void func_261(var uParam0, bool bParam1)
{
	func_583(Global_35, bParam1);
	func_583(&(uParam0->f_40[0]), bParam1);
	func_583(&(uParam0->f_40[4]), bParam1);
}

void func_262(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (ENTITY::_0x1FF441D7954F8709(&(uParam0->f_481[iVar0])))
		{
			ENTITY::_0xD2B9C78537ED5759(&(uParam0->f_481[iVar0]));
		}
		iVar0++;
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_746(1497516462);
			func_747(2016141805);
			func_747(1010885152);
			func_747(-502324015);
			break;
		case 2016141805:
			func_747(1497516462);
			func_746(2016141805);
			func_747(1010885152);
			func_747(-502324015);
			break;
		case 1010885152:
			func_747(1497516462);
			func_747(2016141805);
			func_746(1010885152);
			func_747(-502324015);
			break;
		case -502324015:
			func_747(1497516462);
			func_747(2016141805);
			func_747(1010885152);
			func_746(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_747(-538889627);
			func_747(-538880323);
			func_747(-1056767524);
			func_746(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_748();
			func_746(iParam0);
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
			func_749();
			func_746(iParam0);
			break;
		case 2019386373:
			func_747(-664252410);
			func_747(2109952320);
			func_746(2019386373);
			break;
		case -664252410:
			func_747(2019386373);
			func_747(2109952320);
			func_746(-664252410);
			break;
		case 2109952320:
			func_747(2019386373);
			func_747(-664252410);
			func_746(2109952320);
			break;
		case -1674179981:
			func_747(-1835851517);
			func_747(-1838352012);
			func_746(-1674179981);
			break;
		case -1835851517:
			func_747(-1674179981);
			func_747(-1838352012);
			func_746(-1835851517);
			break;
		case -1838352012:
			func_747(-1674179981);
			func_747(-1835851517);
			func_746(-1838352012);
			break;
		case -1717960576:
			func_747(210001842);
			func_746(-1717960576);
			break;
		case 210001842:
			func_747(-1717960576);
			func_746(210001842);
			break;
		case -150493654:
			func_747(-1271608261);
			func_747(1846061697);
			func_747(-1145519186);
			func_746(-150493654);
			break;
		case -1271608261:
			func_747(-150493654);
			func_747(1846061697);
			func_747(-1145519186);
			func_746(-1271608261);
			break;
		case 1846061697:
			func_747(-150493654);
			func_747(-1271608261);
			func_747(-1145519186);
			func_746(1846061697);
			break;
		case -1145519186:
			func_747(-150493654);
			func_747(-1271608261);
			func_747(1846061697);
			func_746(-1145519186);
			break;
		case 1766284049:
			func_747(280705402);
			func_747(1926308480);
			func_746(1766284049);
			break;
		case 280705402:
			func_747(1766284049);
			func_747(1926308480);
			func_746(280705402);
			break;
		case 1926308480:
			func_747(1766284049);
			func_747(280705402);
			func_746(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_747(439465264);
				func_746(1609506757);
			}
			else
			{
				func_747(1609506757);
				func_747(439465264);
			}
			break;
		case 439465264:
			if (func_193(1609506757))
			{
				if (bParam1)
				{
					func_746(439465264);
				}
				else
				{
					func_747(439465264);
				}
			}
			break;
		case 1822001510:
			func_747(-1612662716);
			func_746(1822001510);
			break;
		case -1612662716:
			func_747(1822001510);
			func_746(-1612662716);
			break;
		case 1306158345:
			func_747(1952610440);
			func_747(-223469678);
			func_747(-404698347);
			func_747(1517904467);
			func_746(1306158345);
			break;
		case 1952610440:
			func_747(1306158345);
			func_747(-223469678);
			func_747(-404698347);
			func_747(1517904467);
			func_746(1952610440);
			break;
		case -223469678:
			func_747(1306158345);
			func_747(1952610440);
			func_747(-404698347);
			func_747(1517904467);
			func_746(-223469678);
			break;
		case -404698347:
			func_747(1306158345);
			func_747(1952610440);
			func_747(-223469678);
			func_747(1517904467);
			func_746(-404698347);
			break;
		case 1517904467:
			func_747(1306158345);
			func_747(1952610440);
			func_747(-223469678);
			func_747(-404698347);
			func_746(1517904467);
			break;
		case 1376646519:
			func_747(931649776);
			func_747(-434590080);
			func_747(1743048395);
			func_747(449774763);
			func_746(1376646519);
			break;
		case 931649776:
			func_747(1376646519);
			func_747(-434590080);
			func_747(1743048395);
			func_747(449774763);
			func_746(931649776);
			break;
		case -434590080:
			func_747(1376646519);
			func_747(931649776);
			func_747(1743048395);
			func_747(449774763);
			func_746(-434590080);
			break;
		case 1743048395:
			func_747(1376646519);
			func_747(931649776);
			func_747(-434590080);
			func_747(449774763);
			func_746(1743048395);
			break;
		case 449774763:
			func_747(1376646519);
			func_747(931649776);
			func_747(-434590080);
			func_747(1743048395);
			func_746(449774763);
			break;
		case -1414537028:
			func_747(38162571);
			func_747(1350391819);
			func_747(54073871);
			func_746(-1414537028);
			break;
		case 38162571:
			func_747(-1414537028);
			func_747(1350391819);
			func_747(54073871);
			func_746(38162571);
			break;
		case 1350391819:
			func_747(-1414537028);
			func_747(38162571);
			func_747(54073871);
			func_746(1350391819);
			break;
		case 54073871:
			func_747(-1414537028);
			func_747(38162571);
			func_747(1350391819);
			func_746(54073871);
			break;
		case 198200492:
			func_746(198200492);
			func_747(-1124061431);
			func_747(52706132);
			func_747(-259123672);
			break;
		case -1124061431:
			func_747(198200492);
			func_746(-1124061431);
			func_747(52706132);
			func_747(-259123672);
			break;
		case 52706132:
			func_747(198200492);
			func_747(-1124061431);
			func_746(52706132);
			func_747(-259123672);
			break;
		case -259123672:
			func_747(198200492);
			func_747(-1124061431);
			func_747(52706132);
			func_746(-259123672);
			break;
		case -919512195:
			func_746(-919512195);
			func_747(-1925798111);
			func_747(420709909);
			func_747(1703426636);
			break;
		case -1925798111:
			func_746(-1925798111);
			func_747(-919512195);
			func_747(420709909);
			func_747(1703426636);
			break;
		case 420709909:
			func_746(420709909);
			func_747(-919512195);
			func_747(-1925798111);
			func_747(1703426636);
			break;
		case 1703426636:
			func_746(1703426636);
			func_747(-919512195);
			func_747(-1925798111);
			func_747(420709909);
			break;
		case -1223121209:
			func_746(-1223121209);
			func_747(630808005);
			break;
		case 630808005:
			func_746(630808005);
			func_747(-1223121209);
			break;
		case 1453909576:
			func_746(1453909576);
			func_747(1643531967);
			break;
		case 1643531967:
			func_746(1643531967);
			func_747(1453909576);
			break;
		case 0:
			func_746(0);
			func_747(473295046);
			func_747(-1738165526);
			break;
		case 473295046:
			func_746(473295046);
			func_747(0);
			func_747(-1738165526);
			break;
		case -1738165526:
			func_746(-1738165526);
			func_747(0);
			func_747(473295046);
			break;
		case 932909855:
			func_746(932909855);
			func_747(2051822093);
			break;
		case 2051822093:
			func_746(2051822093);
			func_747(932909855);
			break;
		case 405586984:
			func_746(405586984);
			func_747(1509509592);
			func_747(-959357075);
			func_747(-1311865656);
			break;
		case 1509509592:
			func_746(1509509592);
			func_747(405586984);
			func_747(-959357075);
			func_747(-1311865656);
			break;
		case -959357075:
			func_746(-959357075);
			func_747(1509509592);
			func_747(405586984);
			func_747(-1311865656);
			break;
		case -1311865656:
			func_746(-1311865656);
			func_747(1509509592);
			func_747(-959357075);
			func_747(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_746(-524145696);
			}
			else
			{
				func_747(-524145696);
			}
			func_747(1626481264);
			func_747(282809459);
			break;
		case 282809459:
			func_746(282809459);
			func_747(1626481264);
			func_747(-524145696);
			break;
		case 1626481264:
			func_746(1626481264);
			func_747(-524145696);
			func_747(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_746(885203519);
			}
			else
			{
				func_747(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_746(-1080627546);
			}
			else
			{
				func_747(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_193(iParam0))
				{
					func_746(iParam0);
				}
			}
			else if (func_193(iParam0))
			{
				func_747(iParam0);
			}
			break;
	}
}

void func_264()
{
	if (func_193(-2020023971))
	{
		func_750(758684739);
		func_750(-661825463);
		func_751(518127510);
		func_752(182);
		func_753(181);
	}
	else
	{
		func_750(518127510);
		func_751(758684739);
		func_751(-661825463);
		func_752(181);
		func_753(182);
	}
}

void func_265(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_754(uParam0, iParam1, iParam2))
		{
			PED::_0x1902C4CFCC5BE57C(&(uParam0->f_40[iParam1]), func_755(iParam2));
			PED::_0xCC8CA3E88256E58F(&(uParam0->f_40[iParam1]), 0, 1, 1, 1, 0);
			func_624(uParam0, iParam1, iParam2, 1);
		}
	}
	else if (func_754(uParam0, iParam1, iParam2))
	{
		PED::_0xA2F8B3B5FEDFC100(&(uParam0->f_40[iParam1]), func_755(iParam2));
		PED::_0xCC8CA3E88256E58F(&(uParam0->f_40[iParam1]), 0, 1, 1, 1, 0);
		func_624(uParam0, iParam1, iParam2, 0);
	}
}

void func_266(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, iParam1, 1);
		}
	}
	else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, iParam1, 1);
	}
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 4:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_268(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_269(int iParam0, bool bParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_268(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_63(iParam0, 1, 0);
		}
	}
	func_63(iParam0, 16, bParam1);
}

int func_270(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_97)
	{
		if (uParam0[iVar0 /*4*/] == iParam1)
		{
			(*uParam0)[iVar0 /*4*/] = 0;
			StringCopy(&(((*uParam0)[iVar0 /*4*/])->f_1), "", 24);
			if (iVar0 != (uParam0->f_97 - 1))
			{
				(*uParam0)[iVar0 /*4*/] = uParam0[(uParam0->f_97 - 1) /*4*/];
				((*uParam0)[iVar0 /*4*/])->f_1 = { ((*uParam0)[(uParam0->f_97 - 1) /*4*/])->f_1 };
				(*uParam0)[(uParam0->f_97 - 1) /*4*/] = 0;
				StringCopy(&(((*uParam0)[(uParam0->f_97 - 1) /*4*/])->f_1), "", 24);
			}
			uParam0->f_97 = (uParam0->f_97 - 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_66(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_66(iParam0), 204, false);
	}
}

void func_272(int iParam0, bool bParam1)
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
	if (!func_756(iParam0))
	{
		return;
	}
	iVar0 = func_757(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_669(iVar0);
	func_723(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_724(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_721(iVar0))
		{
			return;
		}
	}
	func_758(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_108() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

int func_273(int iParam0)
{
	if (!func_759(iParam0))
	{
		return 0;
	}
	if (!func_761(func_760(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_762(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_762(iParam0));
	return 1;
}

void func_274(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	LAW::_0x9C8A2BF37E966464(PLAYER::PLAYER_ID(), iVar0);
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar2 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			PED::DELETE_PED(&iVar2);
		}
		iVar1++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	iVar3 = 7;
	while (iVar3 <= 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_40[iVar3])))
		{
			PED::DELETE_PED(uParam0->f_40[iVar3]);
		}
		iVar3++;
	}
}

void func_275()
{
	func_763();
	func_764();
	func_765();
	func_766();
}

void func_276(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_767(iVar0, 4096);
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
	if (func_108() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_277(int iParam0)
{
	Global_1934266->f_56 = iParam0;
}

char* func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "CABR01_START";
		case 2:
			return "CABR01_ARRIVE";
		case 3:
			return "CABR01_GUARD";
		case 4:
			return "CABR01_RETURN";
		case 5:
			return "CABR01_SPOOL";
		case 6:
			return "CABR01_DETONATOR";
		case 7:
			return "CABR01_EXPLOSION";
		case 8:
			return "CABR01_ESCAPE_CS";
		case 9:
			return "CABR01_WANTED";
		case 10:
			return "CABR01_ESCAPED";
		case 11:
			return "CABR01_STOP";
		case 12:
			return "CABR01_FAIL";
		default:
			break;
	}
	return "";
}

void func_279(var uParam0, var uParam1, bool bParam2)
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

bool func_280(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_251(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_281(int iParam0)
{
	func_59(iParam0, 36, 1);
}

void func_282(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_251(iParam0))
		{
			return;
		}
	}
	func_252(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_283(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_768(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_284(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_251(iParam0))
		{
			return false;
		}
	}
	func_252(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_58(iParam0))
	{
		iVar1 = func_66(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_769(iParam0);
		}
	}
	if (func_284(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_66(iParam0), 137, true);
	}
}

void func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_251(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_282(iParam0, 50, 1);
		func_282(iParam0, 48, 1);
		func_282(iParam0, 49, 1);
		func_282(iParam0, 51, 1);
		func_282(iParam0, 52, 1);
		func_282(iParam0, 54, 1);
		func_282(iParam0, 55, 1);
	}
	else
	{
		func_59(iParam0, 50, 1);
		func_59(iParam0, 48, 1);
		func_59(iParam0, 49, 1);
		func_59(iParam0, 51, 1);
		if (bParam3)
		{
			func_59(iParam0, 54, 1);
		}
		else
		{
			func_282(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_59(iParam0, 52, 1);
			if (bParam3)
			{
				func_59(iParam0, 55, 1);
			}
		}
		else
		{
			func_282(iParam0, 52, 1);
			if (!bParam3)
			{
				func_282(iParam0, 55, 1);
			}
		}
	}
}

void func_287(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_58(iParam0))
	{
		return;
	}
	if (func_64(iParam0))
	{
		if (!func_10(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_284(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_283(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_66(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_770(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_59(iParam0, 2, 1);
	}
	else
	{
		func_771(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_289(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_290(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_251(iParam1))
	{
		return;
	}
	iVar0 = func_289(iParam1);
	if (func_772(iParam1))
	{
		if (!func_773(iParam1))
		{
			return;
		}
	}
	func_282(iParam1, 39, 1);
	func_774(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_774(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_774(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_775(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_58(iParam0))
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
		COMPANION::_0xD747979C053EFA7A(func_50());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_776(iParam0, 0, 0);
}

int func_292(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_777(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_50(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_50(), iVar3);
		if (func_778(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_293()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_779(iVar0);
		iVar2 = func_779(iVar0 + 1);
		if (!func_58(iVar1))
		{
			if (func_58(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

var func_294()
{
	return Global_1894899->f_2;
}

int func_295(int iParam0)
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

int func_296(var uParam0)
{
	return uParam0 & 31;
}

int func_297(int iParam0)
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

int func_298(int iParam0)
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

int func_299(int iParam0)
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
	func_780(iParam0, Global_1898164->f_162);
	return 1;
}

void func_300(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_781(iParam0);
	}
	else
	{
		func_782(iParam0, iParam1);
	}
	func_783();
}

void func_301(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_784(iParam0, iParam1, bParam2);
}

bool func_302(int iParam0)
{
	return iParam0 != 0;
}

int func_303()
{
	return -1904156936;
}

int func_304(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_70(iParam0))
	{
		return 0;
	}
	switch (func_73(iParam0))
	{
		case 1:
			iVar0 = func_113(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_113(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return 0;
}

int func_305()
{
	return 166188472;
}

int func_306()
{
	return 2015838421;
}

int func_307()
{
	return 207908017;
}

var func_308(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_309(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;

	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE76::_0x815C4065AE6E6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_310()
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

int func_311(int iParam0)
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

int func_312(int iParam0)
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

void func_313(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_314()
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

int func_315(int iParam0)
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

void func_316(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_317(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	switch (func_73(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
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
			switch (func_113(iParam0))
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

void func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	uVar2 = func_785(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_370(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(uVar2, iVar1);
		}
		iVar0++;
	}
	func_787(func_786(iParam0), 6);
}

void func_319(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	uVar2 = func_785(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_370(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(uVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_788(func_786(iParam0), 6);
}

int func_320(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_789(iParam0);
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

int func_321(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_336(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_322(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_323(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

int func_324(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_325()
{
	return Global_40.f_11095.f_35;
}

void func_326(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_790(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_327(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_327(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_790(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_791(1);
	}
}

bool func_328(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_329()
{
	int iVar0;
	int iVar1;

	iVar0 = func_792(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_792(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_793(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_330(int iParam0)
{
	if (!func_794(iParam0))
	{
		return 0;
	}
	return func_139(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_331(int iParam0)
{
	if (func_73(iParam0) == 1)
	{
		return func_113(iParam0);
	}
	return -1;
}

int func_332(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_795(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_796(iVar6);
	}
	return iVar5;
}

int func_333(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_797(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_334(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_798(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_335(int iParam0)
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

void func_336(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_334(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_337(2, *uParam0);
		}
		else
		{
			func_338(2, *uParam0);
		}
	}
	func_799(uParam0);
}

void func_337(int iParam0, int iParam1)
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

void func_338(int iParam0, int iParam1)
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

int func_339(int iParam0)
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

int func_340(int iParam0)
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

void func_341(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_800();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_801(iParam0);
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
	if (func_368(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_802())
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
	Global_40.f_11095.f_35 = func_122(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_800();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_803(iVar1);
		func_805(func_804(), 0, 4000);
		func_806(Global_40.f_11095.f_35);
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
		func_807(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_383(func_112(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_340(14))
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
					sParam4 = func_808(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_477(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_477(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_383(func_112(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_340(4))
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
					sParam4 = func_808(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_477(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_477(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_112(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_174(10, 1);
	}
}

void func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_343(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_344()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_346(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_347(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_108() == -1)
	{
		if (func_809(iParam0) && func_810(iParam0))
		{
			func_811(iParam0, iParam1, 1, &iParam2, iParam3);
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

int func_348(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_812(iParam0, uParam1);
	Var0 = { func_458(iParam0, 0, 1) };
	iVar5 = func_813(iParam0, &Var0, 0, 0);
	iVar6 = func_814(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_366(iParam0, -2051813666))
		{
			func_137(583, 1);
		}
		else
		{
			func_137(582, 0);
		}
	}
	if (func_815(iParam0, &Var0, *uParam1, 0, 0))
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

void func_349(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_428(iParam0, -949239683))
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

int func_350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_816(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_817(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_785(bParam2), iParam0, 0);
	return iVar2;
}

bool func_351(int iParam0)
{
	if (func_108() != -1)
	{
		return false;
	}
	return func_352(iParam0) != 0;
}

int func_352(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_818())
	{
		uVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_819(uVar0))
		{
			return uVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_353(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_354(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_818())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_353(iVar0))
		{
			if (func_159(func_819(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_355(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_820(48);
	func_179(0, -1);
}

int func_356(int iParam0)
{
	if (func_108() != -1)
	{
		return 0;
	}
	return func_139(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_357(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_358(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_359(int iParam0)
{
	if (func_108() != -1)
	{
		return 0;
	}
	return func_139(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_360(int iParam0)
{
	if (func_108() != -1)
	{
		return 0;
	}
	if (!func_128(iParam0))
	{
		return 0;
	}
	return func_13(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_361()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_159(func_821(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_344() && (func_360(38) || func_356(38)))
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
			if (func_344() && (func_360(39) || func_356(39)))
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
			iVar9 = func_822(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_344() && (func_360(41) || func_356(41)))
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
			if (func_344() && (func_360(49) || func_356(49)))
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
			iVar9 = func_822(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_823(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_824(iParam0, iVar13, iVar14))
	{
	}
	if (func_825(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_826(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_827(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_828(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_829(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_363(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_344() && (func_360(38) || func_356(38)))
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
			if (func_344() && (func_360(39) || func_356(39)))
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
			if (func_344() && (func_360(49) || func_356(49)))
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
		if (func_344() && (func_360(38) || func_356(38)))
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
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_484(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_831(func_358(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_344() && (func_360(39) || func_356(39)))
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
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_344() && (func_360(49) || func_356(49)))
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
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_830(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_365(int iParam0)
{
	vector3 vVar0;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_366(int iParam0, int iParam1)
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

int func_367(int iParam0, int iParam1)
{
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_368(int iParam0)
{
	if (!func_832(iParam0))
	{
		return 0;
	}
	return func_833(iParam0);
}

void func_369(int iParam0)
{
	if (!func_832(iParam0))
	{
		return;
	}
	func_834(iParam0);
	func_835(iParam0);
}

int func_370(int iParam0)
{
	struct<2> Var0;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_371(int iParam0, bool bParam1)
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
	if (func_346(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_836(iVar0) || func_837(iVar0))
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

int func_372(int iParam0, bool bParam1)
{
	if (!func_346(iParam0, 0))
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

void func_373(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_461(iParam0))
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

int func_374(bool bParam0)
{
	if (func_108() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_785(bParam0));
}

int func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_458(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_838((375 + iVar28), 1);
			if (func_839(iParam0, &Var0, iVar5, 0))
			{
				if (func_840(iParam0, &Var6, iVar5))
				{
					Var29 = { func_841(iParam0, Var0, iVar5, 0) };
					func_842(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_374(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_376(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_843(iParam0, iParam1);
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

int func_376(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_378(iParam0))
	{
		return 0;
	}
	if (!func_374(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_372(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_108() == -1)
		{
			func_373(iVar0);
			if (iParam1 == 1248274121)
			{
				func_844(iVar0);
			}
		}
		if (!func_815(iParam0, &uVar1, 1, 0, 0))
		{
			func_811(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_845(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_375(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_375(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_375(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_802())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_846(iVar0))
				{
					func_375(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_375(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_847(Global_35, 2, 0, 1);
				if ((((func_461(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_159(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_461(iVar7) && func_159(-1185145312, 1, 0))
				{
					if (!func_375(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_375(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_375(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_137(480, 1);
	}
	return 1;
}

bool func_378(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_378(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_461(iVar4))
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
	if (func_159(611073244, 1, 0) && iParam2 == -897553835)
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
		func_415(func_848(iParam0), func_414(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_108() == -1)
		{
			if (func_139(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_137(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_374(0))
	{
		if (func_376(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_420(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_380(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_150()) || iParam0 != -615217896)
	{
		if (func_849(Global_35, iParam0, &uVar0))
		{
			func_399(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_405();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_405();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_405();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_403();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_401();
			break;
	}
}

void func_381(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_401();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_402();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_403();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_404();
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
			func_405();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_850();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_851();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_382(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_383(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_384(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_385(int iParam0)
{
	bool bVar0;

	bVar0 = func_366(iParam0, -2017733358);
	if (func_852() < 3)
	{
		if (bVar0)
		{
			if (func_854(func_853(iParam0), iParam0))
			{
				func_415(79, func_414(func_853(iParam0)), 1);
			}
			else
			{
				func_415(78, func_414(func_853(iParam0)), 1);
			}
		}
		else
		{
			func_415(80, func_414(func_855(iParam0)), 1);
		}
	}
}

int func_386()
{
	if (((((func_856(839908568, 400) || func_856(-1134030454, 400)) || func_856(623353496, 400)) || func_856(-344413337, 400)) || func_856(-1664948962, 400)) || func_856(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_496(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_857(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_858(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_388(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_362(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_364(51, 0, 0, 0, 0, -1, 0);
			func_859(8192);
			break;
		case 581047644:
			func_362(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_364(51, 0, 0, 0, 0, -1, 0);
			func_859(524288);
			break;
		case -644199619:
			func_362(39, 0, 0, 0, 0, 0, 1, 0);
			func_364(39, 0, 0, 0, 0, -1, 0);
			func_860(16);
			break;
		case 684296857:
			func_362(41, 0, 0, 0, 0, 0, 1, 0);
			func_364(41, 0, 0, 0, 0, -1, 0);
			func_861(8);
			break;
		case 466137807:
			func_362(49, 0, 0, 0, 0, 0, 1, 0);
			func_364(49, 0, 0, 0, 0, -1, 0);
			func_862(16);
			break;
		case -1087522507:
			func_362(43, 0, 0, -1791518714, func_863(1), 0, -1, 0);
			func_864(1);
			break;
		case -405829000:
			func_362(43, 0, 0, -2087881550, func_863(2), 0, -1, 0);
			func_864(2);
			break;
		case 378660860:
			func_362(43, 0, 0, 1908068621, func_863(4), 0, -1, 0);
			func_864(4);
			break;
		case 1566111097:
			func_362(43, 0, 0, 1611247019, func_863(8), 0, -1, 0);
			func_864(8);
			break;
		case 1276007140:
			func_362(43, 0, 0, 1319635688, func_863(16), 0, -1, 0);
			func_864(16);
			break;
	}
}

void func_389(int iParam0)
{
	if (func_865() == 1)
	{
		if (func_356(39))
		{
			func_137(342, 0);
		}
		else
		{
			func_137(343, 0);
			func_860(1);
		}
	}
	if (func_865() >= 30)
	{
		func_137(344, 0);
	}
	func_362(39, 0, 0, 0, 0, 0, -1, 0);
	func_364(39, 0, 0, func_865(), 30, 1, 0);
}

void func_390(int iParam0)
{
	if (func_866() == 1)
	{
		if (func_356(49))
		{
			func_137(409, 0);
		}
		else
		{
			func_137(410, 0);
			func_862(1);
		}
	}
	if (func_866() >= 10)
	{
		func_137(411, 0);
	}
	func_362(49, 0, 0, 0, 0, 0, -1, 0);
	func_364(49, 0, 0, func_866(), 10, 1, 0);
}

void func_391(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_137(437, 0);
			func_137(440, 0);
			func_867(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_362(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_364(51, 0, 0, iVar0, func_822(-949689219, 20), 1, 0);
			func_859(1);
			func_263(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_867(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_362(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_364(51, 0, 0, iVar0, func_822(-1248968496, 20), 1, 0);
			func_859(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_867(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_362(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_364(51, 0, 0, iVar0, func_822(1706369307, 20), 1, 0);
			func_859(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_867(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_362(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_364(51, 0, 0, iVar0, func_822(1520110311, 20), 1, 0);
			func_859(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_137(438, 0);
			func_867(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_362(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_364(51, 0, 0, iVar0, func_822(-1992824800, 20), 1, 0);
			func_859(32768);
			break;
		default:
			func_137(439, 0);
			break;
	}
}

void func_392()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_108() == -1)
	{
		if (!func_356(43))
		{
			if (iParam0 == 281887510)
			{
				func_137(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_137(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_137(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_137(400, 0);
			}
		}
		else if (func_366(iParam0, 412399755))
		{
			func_868(-1791518714);
			if (func_869() == 0)
			{
				func_179(0, 10);
				iVar1 = func_870(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_356(44))
		{
			if (iParam0 == -222563712)
			{
				func_137(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_137(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_137(401, 0);
			}
		}
		else if (func_366(iParam0, 709057512))
		{
			func_868(-2087881550);
			if (func_869() == 1)
			{
				func_179(0, 10);
				iVar1 = func_870(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (iParam0 == 2116770557)
			{
				func_137(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_137(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_137(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_137(398, 0);
			}
		}
		else if (func_366(iParam0, -1478961327))
		{
			func_868(1908068621);
			if (func_869() == 2)
			{
				func_179(0, 10);
				iVar1 = func_870(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_873(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_874(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_820(48);
					}
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (iParam0 == 2085530337)
			{
				func_137(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_137(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_137(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_137(406, 0);
			}
		}
		else if (func_366(iParam0, -1238404098))
		{
			func_868(1611247019);
			if (func_869() == 3)
			{
				func_179(0, 10);
				iVar1 = func_870(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (iParam0 == -1521783510)
			{
				func_137(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_137(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_137(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_137(403, 0);
			}
		}
		else if (func_366(iParam0, 1160548794))
		{
			func_868(1319635688);
			if (func_869() == 4)
			{
				func_179(0, 10);
				iVar1 = func_870(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_871(iParam0) < func_872(iParam0))
					{
						func_362(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_364(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_394(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_873(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_874(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_820(48);
		}
	}
}

void func_395(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_159(func_875(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_876(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_877(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_108() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_387(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_387(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_387(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_387(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_387(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_387(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_387(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_387(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_387(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_387(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_387(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_387(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_387(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_878())
			{
				func_387(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_387(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_387(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_387(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_387(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_387(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_387(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_387(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_387(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_387(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_387(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_387(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_387(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_397(int iParam0)
{
	if (func_356(41))
	{
		func_137(363, 0);
	}
	else
	{
		func_137(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_879(-1865241121);
			func_880(-642026005);
			func_881(-642026005);
			func_179(0, 10);
			break;
		case -2108314374:
			func_879(2117142684);
			func_880(-940584364);
			func_881(-940584364);
			func_179(0, 10);
			break;
		case -1193798153:
			func_879(-1409326024);
			func_880(1972645282);
			func_881(1972645282);
			func_179(0, 10);
			break;
		case -787702678:
			func_879(-641744968);
			func_880(1667205433);
			func_881(1667205433);
			func_179(0, 10);
			break;
		case -804542901:
			func_879(-946988203);
			func_880(1362715885);
			func_881(1362715885);
			func_179(0, 10);
			break;
		case -1696275132:
			func_879(-646136018);
			func_880(1053540370);
			func_881(1053540370);
			func_179(0, 10);
			break;
		case -161595323:
			func_879(-955835837);
			func_880(-1100103852);
			func_881(-1100103852);
			func_179(0, 10);
			break;
		case -1114363619:
			func_879(-179276075);
			func_880(-1409869209);
			func_881(-1409869209);
			func_179(0, 10);
			break;
		case -368407134:
			func_879(-492711560);
			func_880(-1760235357);
			func_881(-1760235357);
			func_179(0, 10);
			break;
		case 1997759228:
			func_879(1764383959);
			func_880(-138366827);
			func_881(-138366827);
			func_179(0, 10);
			break;
		case 1265573293:
			func_879(317501533);
			func_880(-1261163843);
			func_881(-1261163843);
			func_179(0, 10);
			break;
		case -1030441283:
			func_879(817753087);
			func_880(-963523016);
			func_881(-963523016);
			func_179(0, 10);
			break;
		case -1490884871:
			func_879(576606016);
			func_880(560825326);
			func_881(560825326);
			func_179(0, 10);
			break;
		case -395458616:
			func_879(814934957);
			func_880(858269539);
			func_881(858269539);
			break;
	}
}

void func_398(int iParam0, int iParam1)
{
	var uVar0;

	func_882(iParam0, iParam1, &uVar0);
}

int func_399(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_458(iParam1, 1, 0) };
		iParam3 = func_459(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_883(iParam1, iParam2, func_446(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_884(1, (func_108() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_446(iParam3, 1) /*11*/])
			{
				func_457(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_885(32768) && iParam1 != &Global_1946804->f_57[func_446(iParam3, 1) /*11*/])
			{
				func_886();
				func_457(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_457(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_887(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_457(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_888(0);
			func_889(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_457(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_400(var uParam0, bool bParam1)
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
	iVar18 = func_847(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_847(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_890("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_891(&Var3, iVar2, iVar0, iVar1))
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
						func_892(iVar0);
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

void func_401()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_402()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_403()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_404()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_405()
{
	func_893();
	func_894();
	func_895();
}

void func_406(int iParam0, int iParam1, bool bParam2)
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

void func_407(int iParam0, bool bParam1)
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
	func_830(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_408(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_409(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_410(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_411(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_412(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_413(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_414(int iParam0)
{
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_415(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_453(iParam0, &iVar0, &iVar1);
	if (!func_454(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_896(iParam0, 1024))
	{
		return;
	}
	func_455(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_416(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_453(iParam0, &iVar0, &iVar1);
	if (!func_454(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_896(iParam0, 1024))
	{
		return;
	}
	func_455(iVar0, iVar1);
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

int func_417()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_818())
	{
		return func_418();
	}
	iVar4 = (func_818() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_818())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_897(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_819(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_418()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_818());
	return func_819(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_419(int iParam0)
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

int func_420(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_458(iParam0, 0, 1) };
	Var5 = { func_841(iParam0, Var0, Var0.f_4, 0) };
	return func_898(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_108() != -1)
	{
		return;
	}
	switch (func_370(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_899(81053684, 0) <= 0)
			{
				func_457(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_457(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_900(iParam0);
			if (func_901(iVar0))
			{
				func_902(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_457(30, iParam0, 0, 0, 0);
			}
			if (func_448() == -2125499975 || func_448() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_457(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_448() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_457(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_903(-525676072, 0))
			{
				if (func_904(-525676072, &iVar1))
				{
					func_457(33, iVar1, 0, 0, 0);
				}
			}
			func_457(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_905(99217379))
		{
			func_399(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_369(24);
		if (func_400(&iVar2, 0))
		{
			func_375(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_422(int iParam0)
{
	if (func_366(iParam0, 943695443))
	{
		func_906(0, iParam0);
	}
	else if (func_366(iParam0, -2096528786))
	{
		func_906(1, iParam0);
	}
	else if (func_366(iParam0, -1094167013))
	{
		func_906(2, iParam0);
	}
	else if (func_366(iParam0, 1936654645))
	{
		func_906(3, iParam0);
	}
	else if (func_366(iParam0, 1306489306))
	{
		func_906(4, iParam0);
	}
	else if (func_366(iParam0, 435762317))
	{
		func_906(5, iParam0);
	}
	else if (func_366(iParam0, 1259363210))
	{
		func_906(6, iParam0);
	}
	else if (func_366(iParam0, 881398259))
	{
		func_906(7, iParam0);
	}
	else if (func_366(iParam0, -541549214))
	{
		func_906(8, iParam0);
	}
	else if (func_366(iParam0, 130796156))
	{
		func_906(-1, iParam0);
	}
}

int func_423(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_907(&Var4, 1356624740);
	return func_908(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_424(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_346(iParam0, 0))
	{
		return Var0;
	}
	if (func_366(iParam0, -305066475))
	{
		if (func_108() == -1)
		{
			if (func_366(iParam0, -537818634))
			{
				return func_112(189951448);
			}
			else
			{
				return func_112(1176172851);
			}
		}
	}
	else if (func_366(iParam0, -537818634))
	{
		return func_112(-963660207);
	}
	if (func_366(iParam0, 2084895747))
	{
		return func_112(1694039471);
	}
	return Var2;
}

void func_425(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_108() == -1)
			{
				if (func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_137(109, 1);
				}
			}
			break;
	}
}

void func_426(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_910(func_909(0));
	func_477(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_911(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_427(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_346(iParam0, 0))
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
	if (!func_912())
	{
		func_913(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_914(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_914(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_367(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_365(iParam0);
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
	else if (!func_915(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_916(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_414(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_366(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_414(iParam0));
	}
	func_477(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_428(int iParam0, int iParam1)
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

struct<10> func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_430(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0, int iParam1)
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

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_917(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_917(iParam0, Var2, 1))
				{
					if (func_918(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_918(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_137(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_87(0, 0, 1))
		{
			func_179(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_434(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_137(iVar0, 0);
	}
}

void func_435()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_919(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_920();
		}
		return;
	}
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_921();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_919(1);
}

void func_436()
{
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_131(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_437()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_922(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_922(1);
}

void func_438()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_234(15000, 0, 0, 0, 1);
			func_922(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_488(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_922(1);
}

void func_439()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_159(1191437462, 1, 0) && !func_13(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_131(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_923(1))
			{
				func_411(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_159(1119149048, 1, 0) && !func_13(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_131(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_923(2))
			{
				func_411(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_923(4))
		{
			func_411(4);
		}
		if (func_923(0))
		{
			func_924(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_159(1191437462, 1, 0))
			{
				func_442(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_159(1119149048, 1, 0))
			{
				func_442(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_923(1))
		{
			func_924(1);
		}
		if (func_923(2))
		{
			func_924(2);
		}
		if (func_923(4))
		{
			func_924(4);
		}
		if (!func_923(0))
		{
			func_411(0);
		}
	}
}

void func_440()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_925() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_373(joaat("weapon_revolver_doubleaction"));
		if (func_375(joaat("weapon_revolver_doubleaction"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_925() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_926(-2055673461, Var1, 1423542233);
		func_926(-202131179, Var1, -1264898804);
		func_926(2013836545, Var1, 1592019450);
		func_926(1497476650, Var1, 1117400455);
		func_926(1063571467, Var1, 1150213537);
		func_926(2107224237, Var1, 1598825281);
		func_926(1747981656, Var1, -712527121);
		func_926(-1371140647, Var1, 454332195);
		func_926(-19142973, Var1, 256105670);
		func_926(-2074737817, Var1, -1328061889);
		func_926(-1114256243, Var1, -782241404);
		func_926(-1653277288, Var1, 1669853467);
		func_926(1869398132, Var1, -1559225678);
		func_926(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_927())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_461(iVar16))
			{
				if (iVar16 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_368(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_368(24) && func_461(iVar15)) && iVar15 != joaat("weapon_revolver_doubleaction"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_461(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (iVar15 != joaat("weapon_revolver_doubleaction"))
			{
				if (func_368(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_441()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_442(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_816(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_427(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_159(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_424(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_350(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_350(iParam0, 0, 0) - iParam1) < 0)
		{
			func_442(iParam0, func_350(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_365(iParam0) == -427144552)
	{
		if (!func_928(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_929(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_374(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_427(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_930(iParam0, iParam1);
	return 1;
}

int func_443(int iParam0)
{
	switch (func_370(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_444(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_370(iParam0))
	{
		case -2061583405:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_931(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_932();
	}
	if (bParam1)
	{
		func_933(0, 0);
	}
}

int func_445(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_458(iParam0, 1, 0) };
	return func_459(Var0.f_4);
}

int func_446(int iParam0, int iParam1)
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

void func_447(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_108() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_446(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_934(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_448()
{
	return Global_1946804->f_1;
}

int func_449(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_935(iParam6);
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
		func_937(uParam0, func_936(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_446(iVar3, 1);
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
							if (func_938(iVar3) && func_939(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
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
							func_940(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_450(int iParam0, int iParam1)
{
	if (func_108() == -1)
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

int func_451(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_450(iParam0, iParam1) };
	return vVar0.x;
}

void func_452(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_453(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_454(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_941(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_942(iParam0))
	{
		return 0;
	}
	if (func_943(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_896(iParam0, 1)) || func_20(32768))
	{
		if (!func_896(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_944())
	{
		return 0;
	}
	return 1;
}

void func_455(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_456(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_945(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_946(Var0);
}

struct<5> func_458(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_947(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_365(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_841(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_948(bParam1) };
			if (iParam2 && func_949(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_839(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_839(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_840(iParam0, &Var5, 1728382685))
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
			Var0 = { func_950(bParam1) };
			switch (func_370(iParam0))
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
			if (func_951(iParam0, -1823706425))
			{
				Var0 = { func_841(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_951(iParam0, -1483207246))
			{
				Var0 = { func_841(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_952(Var0, &Var27, bParam1, 0))
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

int func_459(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_953(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_460(int iParam0)
{
	func_934(Global_1946804->f_1497.f_1[func_446(iParam0, 1) /*3*/], 2, 6);
	func_934(Global_1946804->f_1378.f_1[func_446(iParam0, 1) /*3*/], 2, 6);
}

bool func_461(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_462(int iParam0)
{
	return iParam0 != 0;
}

int func_463(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_462(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_464(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

var func_465(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_954(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_466(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_467(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_468(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_469(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_470(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_471(int iParam0, int iParam1)
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

void func_472(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_955(uParam0, iParam6);
	func_956(uParam0, iParam5);
	func_957(uParam0, iParam4);
	func_958(uParam0, iParam3);
	func_959(uParam0, iParam2);
	func_960(uParam0, iParam1);
}

int func_473(int iParam0)
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
	iVar0 = func_470(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_469(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_468(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_465(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_466(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_467(iParam0);
	if (iVar5 < 1 || iVar5 > func_471(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_474(int iParam0, bool bParam1)
{
	return func_793(func_106(), iParam0, bParam1);
}

void func_475(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_476(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_816(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_890("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_891(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_461(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_892(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_892(iVar1);
	}
	return 0;
}

var func_477(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_961(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_478()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_962(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_963(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_479()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_962(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_963(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_963(iVar1), true);
		}
		iVar0++;
	}
}

void func_480(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_481(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_482()
{
	return (func_88(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_483(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_108() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_346(iVar0, 0))
	{
		return 0;
	}
	if (!func_964(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_965(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_366(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_458(iVar0, 0, 1) };
	iVar10 = func_966(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_967(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_968(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_131(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	func_234(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

var func_484(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_485(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_477(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_486(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_487(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_108() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_488(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_857(iParam0, sParam4, iParam5);
	}
	func_858(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_489(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	sVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_969())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(sVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = sVar1;
	if (func_969())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_72(iParam0), iVar3, sVar1, iParam3);
	iVar4 = func_113(iParam0);
	if (func_73(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_73(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_970(1, sVar1);
					func_970(8, sVar1);
					func_970(7, sVar1);
					break;
				case 12:
					func_970(6, sVar1);
					break;
				case 53:
					func_970(3, sVar1);
					func_970(7, sVar1);
					func_970(4, sVar1);
					break;
				case 20:
					func_970(8, sVar1);
					break;
				case 19:
					func_970(1, sVar1);
					func_970(2, sVar1);
					break;
				case 24:
					func_970(3, sVar1);
					func_970(9, sVar1);
					func_970(20, sVar1);
					break;
				case 28:
					func_970(1, sVar1);
					break;
				case 34:
					func_970(23, sVar1);
					func_970(2, sVar1);
					func_970(18, sVar1);
					break;
				case 29:
					func_970(0, sVar1);
					func_970(9, sVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_970(0, sVar1);
					func_970(3, sVar1);
					func_970(2, sVar1);
					func_970(11, sVar1);
					func_970(6, sVar1);
					func_970(25, sVar1);
					func_970(24, sVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_970(5, sVar1);
					break;
				case 63:
					func_970(1, sVar1);
					func_970(3, sVar1);
					break;
				case 37:
					func_970(23, sVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_175(0, 10, 11, 2116153146))
			{
				func_970(7, sVar1);
				func_970(4, sVar1);
			}
			else if (iParam0 == func_175(0, 7, 11, -379687487))
			{
				func_970(8, sVar1);
				func_970(15, sVar1);
			}
			else if (iParam0 == func_175(0, 8, 11, -1386089015))
			{
				func_970(3, sVar1);
			}
			else if (iParam0 == func_175(0, 11, 11, -1952009645))
			{
				func_970(6, sVar1);
				func_970(3, sVar1);
			}
			else if (iParam0 == func_175(0, 12, 11, 2065895756))
			{
				func_970(9, sVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_971()));
	if (!func_972(629))
	{
		func_137(629, 0);
	}
}

int func_490(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_492(int iParam0, var uParam1, var uParam2)
{
	if (!func_491(iParam0))
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

int func_493()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_494(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_495(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_973(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_493())
	{
		return -1;
	}
	uVar0 = func_494(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_300(iVar1, 0);
	func_323(iVar1, 0);
	func_677(iVar1, 0);
	func_974(iVar1, 0);
	func_975(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_976(iVar1, iParam4);
	}
	return iVar1;
}

int func_496(int iParam0, int iParam1, int iParam2)
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
	if (iParam1 && func_159(1811977508, 1, 0))
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
			if (func_346(iVar25, 0) && func_366(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_497(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

Vector3 func_498(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
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
	func_977(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_978() == 0 && !func_979(0))
		{
			bVar14 = true;
		}
	}
	if (!func_980(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_981();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_982(Global_1310720->f_21))
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
			vVar7 = { func_983(iVar0, iVar1) };
			bVar11 = func_984(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_499(vVar7)) && func_985(iVar0, uParam8, iParam12)) && !func_986(iVar0)) || bVar11)
			{
				if (func_987(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
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

int func_499(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_500(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_501(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_988(vParam0);
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

void func_502()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_503()
{
}

void func_504()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

int func_505(int iParam0, int iParam1)
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

int func_506(int iParam0)
{
	return iParam0;
}

void func_507(int iParam0)
{
	if (!func_989(iParam0))
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

bool func_508(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_509(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_264, iVar0, func_990(iVar0));
		iVar0++;
	}
}

bool func_510(var uParam0)
{
	return func_991(uParam0, 64);
}

bool func_511(var uParam0)
{
	return (ANIMSCENE::_0x25557E324489393C(uParam0->f_264) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_264, 0));
}

int func_512(var uParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	char* sVar0;

	sVar0 = func_227(iParam1);
	if (!func_992(sVar0, iParam2))
	{
		return 0;
	}
	if ((iParam2 == 0 || iParam2 == 1) || iParam2 == 4)
	{
		if (iParam2 == 4 && func_542(uParam0, iParam1))
		{
			func_197(&(uParam0->f_374));
			return 1;
		}
		if (func_993(1) || func_994())
		{
			return 0;
		}
	}
	if (fParam3 > 0f && !func_610(&(uParam0->f_374), fParam3, 1, 0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 0:
			if (func_996(&(uParam0->f_276), func_995(sVar0), 0, -1, 0, 0))
			{
				func_997(uParam0, iParam1, bParam4);
			}
			else
			{
				func_997(uParam0, iParam1, 0);
				return 0;
			}
			break;
		case 1:
			if (func_996(&(uParam0->f_276), func_995(sVar0), 0, -1, 0, 0))
			{
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			func_998(1, 0, 0);
			func_999();
			if (func_996(&(uParam0->f_276), func_995(sVar0), 0, -1, 0, 0))
			{
				func_997(uParam0, iParam1, bParam4);
			}
			else
			{
				func_997(uParam0, iParam1, 0);
				return 0;
			}
			break;
		case 3:
			Global_1347343->f_3 = { func_1000(sVar0) };
			func_527(uParam0, iParam1, bParam4);
			break;
		case 4:
			func_1001(sVar0, 7500, 1, 1, 0, 0, -1, -1, 0);
			func_1002(uParam0, iParam1, bParam4);
			break;
		case 5:
			func_1001(sVar0, 7500, 1, 1, 0, 0, -1, -1, 0);
			func_1002(uParam0, iParam1, bParam4);
			break;
	}
	if (iParam2 == 4 || iParam2 == 5)
	{
		if (uParam0->f_2 != iParam1)
		{
			if (uParam0->f_1 != uParam0->f_2)
			{
				uParam0->f_1 = uParam0->f_2;
			}
			uParam0->f_2 = iParam1;
		}
	}
	func_197(&(uParam0->f_374));
	return 1;
}

void func_513(var uParam0, bool bParam1)
{
	func_1003(uParam0, 64, bParam1);
}

int func_514(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1004(bParam1, iParam2, bParam3);
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

Vector3 func_515(int iParam0)
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
	return func_1006(func_1005(iParam0), 0);
}

int func_516(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1007(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_517(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1008(iVar0, &iVar2))
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
	if (func_1009(iVar0, iParam0))
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

bool func_518(var uParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	return func_591(&(uParam0->f_40[iParam1]), &(uParam0->f_40[iParam2]), fParam3, bParam4);
}

void func_519(var uParam0, bool bParam1)
{
	func_1003(uParam0, 32, bParam1);
}

bool func_520(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 2);
}

int func_521(var uParam0, int iParam1)
{
	if (PED::_0x5203038FF8BAE577(Global_35, 46, iParam1) || PED::_0x5203038FF8BAE577(Global_35, 55, iParam1))
	{
		if (uParam0->f_19 == 0)
		{
			uParam0->f_19 = func_732(Global_35, 1, 0, 0);
		}
		else
		{
			return ((((!WEAPON::_0x5809DBCA0A37C82B(uParam0->f_19) && uParam0->f_19 != joaat("weapon_thrown_throwing_knives")) && uParam0->f_19 != joaat("weapon_thrown_tomahawk")) && uParam0->f_19 != joaat("weapon_thrown_tomahawk_ancient")) && uParam0->f_19 != joaat("weapon_unarmed"));
		}
	}
	else if (uParam0->f_19 != 0)
	{
		uParam0->f_19 = 0;
	}
	return 0;
}

bool func_522(float fParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, fParam0, fParam0, fParam1) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -fParam0, -fParam0, -fParam1) };
	return FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0, vVar3, fParam0) == func_1011(Global_35);
}

bool func_523(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 8);
}

bool func_524(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 16);
}

bool func_525(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 4);
}

bool func_526(var uParam0)
{
	return (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1064, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == &uParam0->f_40[6]);
}

void func_527(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 2, bParam2);
}

void func_528(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 4, bParam2);
}

Vector3 func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1289.174f, -1305.588f, 78.55461f;
		case 1:
			return 1289.01f, -1315.91f, 78.562f;
		case 2:
			return 1292.076f, -1318.483f, 78.5622f;
		case 3:
			return 1283.986f, -1335.099f, 77.50442f;
		case 4:
			return 1851.8f, -1836.5f, 43f;
		case 5:
			return 1394.433f, -1313.324f, 80f;
		case 6:
			return 1327.497f, -1329.895f, 79f;
		case 7:
			return 1316.8f, -1242.581f, 78f;
		case 8:
			return 1431.622f, -1431.545f, 79.57056f;
		case 9:
			return 1285.35f, -1312.86f, 78.27924f;
		case 10:
			return 1285.104f, -1312.597f, 77.08605f;
		case 11:
			return 1288.937f, -1316.071f, 79.16551f;
		case 12:
			return 1287.76f, -1314.827f, 77.01488f;
		case 13:
			return 1287.057f, -1315.633f, 77.01488f;
		case 14:
			return 1286.313f, -1315.43f, 77.01488f;
		case 16:
			return 1288.641f, -1315.823f, 77.45092f;
		case 17:
			return 1289.435f, -1316.491f, 76.89983f;
		case 18:
			return func_228(3, 2);
		case 19:
			return func_228(3, 4);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_530(var uParam0)
{
	return func_991(uParam0, 8192);
}

bool func_531(var uParam0)
{
	return func_991(uParam0, 4096);
}

bool func_532(var uParam0, int iParam1)
{
	return (func_538(uParam0, iParam1) && !func_1015(func_227(iParam1)));
}

int func_533()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_534(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_1016(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_535(var uParam0)
{
	return func_991(uParam0, 32);
}

int func_536(var uParam0)
{
	return uParam0->f_4;
}

bool func_537(int iParam0)
{
	return (iParam0 >= 20 && iParam0 <= 24);
}

bool func_538(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 1);
}

void func_539(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_4 != iParam1)
	{
		if (func_1017(uParam0->f_4))
		{
			uParam0->f_3 = uParam0->f_4;
		}
		uParam0->f_4 = iParam1;
	}
	if (bParam2)
	{
		func_197(&(uParam0->f_374));
	}
	if (bParam3)
	{
		func_999();
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	}
}

void func_540(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (func_1018(uParam1, uParam2, iParam3))
	{
		if (!func_1019(uParam2, iParam3))
		{
			iVar0 = func_1020(uParam1, uParam2, iParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				TASK::TASK_LOOK_AT_ENTITY(&(uParam2->f_40[iParam3]), iVar0, -1, 33794, 51, 1);
				func_1021(uParam2, iParam3, 1);
			}
		}
	}
	else if (func_610(uParam0->f_31[func_1022(iParam3) /*3*/], 1f, 1, 1))
	{
		if (func_1019(uParam2, iParam3))
		{
			TASK::TASK_CLEAR_LOOK_AT(&(uParam2->f_40[iParam3]));
			func_1021(uParam2, iParam3, 0);
		}
	}
}

bool func_541(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x1F0E401031E20146(&(uParam0->f_552[iParam1]), func_1023(iParam2));
}

bool func_542(var uParam0, int iParam1)
{
	return func_1010(uParam0, iParam1, 4);
}

void func_543(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_212((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_544(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 1))
		{
			func_543(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_0x554D9D53F696D002(408396114, func_529(0));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[0]), func_227(236));
			MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[0]), 231194138);
			func_1025(&(uParam0->f_730), 1, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 1))
	{
		func_1025(&(uParam0->f_730), 1, 0);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 4))
		{
			func_543(&(uParam0->f_730.f_377));
			if (!func_1026(func_267(0)))
			{
				func_1027(func_267(0));
			}
			else
			{
				func_1025(&(uParam0->f_730), 4, 1);
			}
		}
	}
	else if (func_1024(&(uParam0->f_730), 4))
	{
		if (func_1026(func_267(0)))
		{
			func_9(func_267(0));
		}
		else
		{
			func_1025(&(uParam0->f_730), 4, 0);
		}
	}
}

void func_546(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 8))
		{
			func_543(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_0x23F74C2FDA6E7C61(408396114, &(uParam0->f_487[33]));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[0]), func_227(239));
			MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[0]), 231194138);
			func_1025(&(uParam0->f_730), 8, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 8))
	{
		func_1025(&(uParam0->f_730), 8, 0);
	}
}

void func_547(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 16))
		{
			func_543(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_0x23F74C2FDA6E7C61(408396114, &(uParam0->f_487[37]));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[0]), func_227(240));
			MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[0]), 231194138);
			func_1025(&(uParam0->f_730), 16, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 16))
	{
		func_1025(&(uParam0->f_730), 16, 0);
	}
}

void func_548(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 32))
		{
			func_543(&(uParam0->f_730.f_377));
			if (!func_1028(7))
			{
				func_1029(7);
			}
			else
			{
				func_1025(&(uParam0->f_730), 32, 1);
			}
		}
	}
	else if (func_1024(&(uParam0->f_730), 32))
	{
		if (func_1028(7))
		{
			func_669(7);
		}
		else
		{
			func_1025(&(uParam0->f_730), 32, 0);
		}
	}
}

void func_549(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 2))
		{
			func_543(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = func_1030(408396114, func_228(5, 6), 1109393408, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[0]), func_227(237));
			MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[0]), 231194138);
			func_1025(&(uParam0->f_730), 2, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 2))
	{
		func_1025(&(uParam0->f_730), 2, 0);
	}
}

void func_550(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 64))
		{
			func_543(&(uParam0->f_730.f_377));
			func_1025(&(uParam0->f_730), 64, 1);
		}
		else
		{
			iVar0 = 0;
			iVar1 = 2;
			while (iVar1 <= 4)
			{
				iVar2 = iVar0;
				if (func_1031(&(uParam0->f_565), iVar1) || (iVar1 == 2 && func_1032(&(uParam0->f_565))))
				{
					func_212(uParam0->f_730.f_377[iVar2]);
					iVar0++;
					Jump @239; //curOff = 128
				}
				else if (!MAP::DOES_BLIP_EXIST(&(uParam0->f_730.f_377[iVar2])))
				{
					uParam0->f_730.f_377[iVar2] = func_1033(&(uParam0->f_1224.f_1[iVar1]), 203020899, 1, 1);
					MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[iVar2]), 231194138);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[iVar2]), func_227(258));
				}
				iVar0++;
				iVar1++;
			}
		}
	}
	else if (func_1024(&(uParam0->f_730), 64))
	{
		func_1025(&(uParam0->f_730), 64, 0);
	}
}

void func_551(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 128))
		{
			func_543(&(uParam0->f_730.f_377));
			uParam0->f_730.f_377[0] = MAP::_0xA6EF0C54A3443E70(408396114, &(uParam0->f_565.f_91[9]));
			MAP::_0x662D364ABF16DE2F(&(uParam0->f_730.f_377[0]), 231194138);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_730.f_377[0]), func_227(263));
			func_1025(&(uParam0->f_730), 128, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 128))
	{
		func_1025(&(uParam0->f_730), 128, 0);
	}
}

bool func_552(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_2 > iParam1 || (uParam0->f_2 == iParam1 && uParam0->f_112 >= iParam2));
}

void func_553(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1024(&(uParam0->f_730), 256))
		{
			uParam0->f_692.f_34 = MAP::_0x45F13B7E0A15C880(693035517, func_228(3, 7), 30f);
			MAP::_0x662D364ABF16DE2F(uParam0->f_692.f_34, 231194138);
			func_1034(2);
			func_1035();
			func_1036(3);
			func_1025(&(uParam0->f_730), 256, 1);
		}
	}
	else if (func_1024(&(uParam0->f_730), 256))
	{
		func_212(&(uParam0->f_692.f_34));
		func_275();
		func_1025(&(uParam0->f_730), 256, 0);
	}
}

void func_554(var uParam0, int iParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_565.f_91[iParam1])))
	{
		return;
	}
	switch (iParam1)
	{
		case 15:
			PATHFIND::_0xE5EF9DE716FF737E(&(uParam0->f_565.f_91[15]), 1, 0);
			PATHFIND::_0xD17672447692478E(&(uParam0->f_565.f_91[15]), 0);
			func_1037(&(uParam0->f_565.f_90), &(uParam0->f_565.f_91[15]), 0);
			break;
		case 4:
			if (PATHFIND::_0xDE0EA444735C1368(&(uParam0->f_565.f_91[4])))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(&(uParam0->f_565.f_91[4]));
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
			VOLUME::_0x5B23DFF8E0948BB2(&(uParam0->f_565.f_91[iParam1]), 0);
			POPULATION::_0x74C2B3DC0B294102(&(uParam0->f_565.f_91[iParam1]));
			break;
	}
	VOLUME::_0x43F867EF5C463A53(&(uParam0->f_565.f_91[iParam1]));
}

void func_555(var uParam0, int iParam1)
{
	if (uParam0->f_3 != iParam1)
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_556(var uParam0)
{
	return func_991(uParam0, 2);
}

void func_557(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_4 = iParam1;
	}
}

bool func_558(var uParam0)
{
	return func_991(uParam0, 16384);
}

void func_559(var uParam0)
{
	if (!func_1038(uParam0, uParam0->f_4))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(func_278(uParam0->f_4)))
		{
			AUDIO::TRIGGER_MUSIC_EVENT(func_278(uParam0->f_4));
			func_1039(uParam0, uParam0->f_4, 1);
		}
	}
}

bool func_560(var uParam0, int iParam1)
{
	return ANIMSCENE::_0x25557E324489393C(&(uParam0->f_552[iParam1]));
}

void func_561(var uParam0, int iParam1)
{
	ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_552[iParam1]));
}

bool func_562(var uParam0)
{
	return func_991(uParam0, 4);
}

void func_563(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 54)
	{
		func_1040(uParam0, uParam1, iParam2, iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		func_1041(uParam1, iParam2, iVar1);
		iVar1++;
	}
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 2:
		case 3:
			iVar2 = 12;
			while (iVar2 <= 30)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			iVar2 = 31;
			while (iVar2 <= 52)
			{
				func_1042(uParam1, iParam2, iVar2);
				iVar2++;
			}
			break;
		case 9:
			func_1042(uParam1, iParam2, 58);
			break;
	}
}

void func_564(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

int func_565(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1 && !func_1043(iParam1, iParam3))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
		uParam0->f_552[iParam1] = func_1044(iParam1, iParam2, iParam3);
	}
	else if (!func_1045(uParam0, iParam1, 1, 0))
	{
		if (!func_1046(uParam0, iParam1))
		{
			func_1047(uParam0, iParam1);
		}
	}
	else if (!func_1048(uParam0, iParam1))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_566(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_560(uParam0, iParam1))
	{
		return 0;
	}
	else if (!func_1045(uParam0, iParam1, 1, 0))
	{
		return 0;
	}
	if (func_1049(uParam0, iParam1, 0))
	{
		if (func_1050(uParam0, iParam1, 0))
		{
			func_568(uParam0, iParam1, 0, 0);
		}
	}
	iVar0 = 1;
	if ((iParam1 >= 4 && iParam1 <= 8) && iParam1 != 5)
	{
		switch (iParam1)
		{
			case 4:
				iVar1 = 53;
				break;
			case 6:
				iVar1 = 56;
				break;
			case 7:
				iVar1 = 55;
				break;
			case 8:
				iVar1 = 57;
				break;
		}
		if (!func_1051(uParam0, iParam1, iVar1))
		{
			return 0;
		}
		else if (iParam1 == 7)
		{
			if (!func_1051(uParam0, 7, 54))
			{
				return 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 <= 54)
	{
		if (((!func_1052(iParam1, iVar2) || !func_1053(uParam0, iParam1, iVar2)) || func_737(uParam0, iVar2)) || (iVar2 == 53 && iParam1 == 4))
		{
		}
		else if (!func_1054(uParam0, iParam1, iVar2))
		{
			iVar0 = 0;
		}
		else if (func_579(uParam0, iParam1, iVar2, 0) != &uParam0->f_487[iVar2])
		{
			if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(&(uParam0->f_487[iVar2])))
			{
				func_580(uParam0, iParam1, iVar2, &(uParam0->f_487[iVar2]), 0);
			}
			iVar0 = 0;
		}
		iVar2++;
	}
	if (&uParam0->f_543[0] != Global_35)
	{
		uParam0->f_543[0] = Global_35;
		iVar0 = 0;
	}
	if (&uParam0->f_543[2] != &uParam0->f_1111.f_40[0])
	{
		uParam0->f_543[2] = &uParam0->f_1111.f_40[0];
		iVar0 = 0;
	}
	if (&uParam0->f_543[5] != &uParam0->f_1111.f_40[4])
	{
		uParam0->f_543[5] = &uParam0->f_1111.f_40[4];
		iVar0 = 0;
	}
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_1055(iParam1, iVar3) || !func_1056(uParam0, iParam1, iVar3))
		{
		}
		else if (func_1057(uParam0, iParam1, iVar3, 0) != &uParam0->f_543[iVar3])
		{
			func_585(uParam0, iParam1, iVar3, &(uParam0->f_543[iVar3]), 0);
			iVar0 = 0;
		}
		iVar3++;
	}
	return iVar0;
}

int func_567(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_560(uParam0, iParam1))
	{
		if (func_652(uParam0, iParam1) || func_588(uParam0, iParam1))
		{
			return 1;
		}
	}
	if (!func_565(uParam0, iParam1, iParam2, -1))
	{
		return 0;
	}
	else if (!func_566(uParam0, iParam1))
	{
		return 0;
	}
	if (iParam3 != -1)
	{
		if (!func_1051(uParam0, iParam1, iParam3))
		{
			return 0;
		}
		else if (!func_574(uParam0, iParam1, iParam3))
		{
			return 0;
		}
	}
	if (!func_588(uParam0, iParam1))
	{
		func_1058(uParam0, iParam1);
	}
	return 0;
}

void func_568(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1059(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1049(uParam0, iParam1, iParam2))
	{
	}
	if (bParam3)
	{
		if (!func_1050(uParam0, iParam1, iParam2))
		{
			func_1060(uParam0, iParam1, iParam2, 1);
		}
	}
	else if (func_1050(uParam0, iParam1, iParam2))
	{
		func_1060(uParam0, iParam1, iParam2, 0);
	}
}

bool func_569(var uParam0)
{
	return func_991(uParam0, 2097152);
}

bool func_570(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0xB89FCFF19DAFFF28(&(uParam0->f_552[iParam1]), func_1061(iParam2));
}

void func_571(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!ENTITY::_0x083D497D57B7400F(iParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		}
	}
	else if (ENTITY::_0x083D497D57B7400F(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	}
}

void func_572(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2097152, bParam1);
}

bool func_573(var uParam0, int iParam1)
{
	var uVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_565.f_91[iParam1])))
	{
		return true;
	}
	if (func_1062(iParam1))
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_CREATE_VOLUME_AGGREGATE();
	}
	else if (func_1063(iParam1))
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_0x0EB78C2B156635B1(func_1064(iParam1), func_529(iParam1), func_1065(iParam1), func_1066(iParam1));
	}
	else
	{
		uParam0->f_565.f_91[iParam1] = VOLUME::_CREATE_VOLUME_BY_HASH(func_1064(iParam1), func_529(iParam1), func_1065(iParam1), func_1066(iParam1));
	}
	switch (iParam1)
	{
		case 16:
		case 17:
			POPULATION::_0xB56D41A694E42E86(&(uParam0->f_565.f_91[iParam1]), 10208, 0, 0, -1, -1, 2);
			VOLUME::_0x5B23DFF8E0948BB2(&(uParam0->f_565.f_91[iParam1]), 1);
			break;
		case 18:
		case 19:
			POPULATION::_0xB56D41A694E42E86(&(uParam0->f_565.f_91[iParam1]), 10208, 0, 0, -1, -1, 2);
			VOLUME::_0x5B23DFF8E0948BB2(&(uParam0->f_565.f_91[iParam1]), 1);
			if (iParam1 == 18)
			{
				uVar0 = &uParam0->f_1111.f_40[0];
			}
			else if (iParam1 == 19)
			{
				uVar0 = &uParam0->f_1111.f_40[4];
			}
			PED::_0x7C00CFC48A782DC0(&(uParam0->f_565.f_91[iParam1]), uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			break;
		case 4:
			if (!PATHFIND::_0xDE0EA444735C1368(&(uParam0->f_565.f_91[4])))
			{
				PATHFIND::_0x19C7567D2F2287D6(&(uParam0->f_565.f_91[4]), 7);
			}
			break;
		case 15:
			VOLUME::_0x6E0D3C3F828DA773(&(uParam0->f_565.f_91[15]), &(uParam0->f_565.f_91[5]));
			VOLUME::_0x6E0D3C3F828DA773(&(uParam0->f_565.f_91[15]), &(uParam0->f_565.f_91[6]));
			VOLUME::_0x6E0D3C3F828DA773(&(uParam0->f_565.f_91[15]), &(uParam0->f_565.f_91[7]));
			VOLUME::_0x6E0D3C3F828DA773(&(uParam0->f_565.f_91[15]), &(uParam0->f_565.f_91[8]));
			PATHFIND::_0xE5EF9DE716FF737E(&(uParam0->f_565.f_91[15]), 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(&(uParam0->f_565.f_91[15]), 0, 0, 0);
			if (!PED::_0x91A5F9CBEBB9D936(uParam0->f_565.f_90))
			{
				uParam0->f_565.f_90 = func_1067(&(uParam0->f_565.f_91[15]), 0, 0, 647168);
			}
			break;
	}
	return VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_565.f_91[iParam1]));
}

bool func_574(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1068(uParam0, iParam1, iParam2))
	{
	}
	else if (!func_541(uParam0, iParam1, iParam2))
	{
		func_1069(uParam0, iParam1, iParam2, 1);
	}
	return func_541(uParam0, iParam1, iParam2);
}

int func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_619(uParam0, iParam2))
	{
		return 1;
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_541(uParam0, iParam1, iParam2))
	{
	}
	else if (func_594(uParam0, iParam1, 1f))
	{
		func_612(uParam0, iParam2, bParam3);
		return 1;
	}
	return 0;
}

float func_576(int iParam0, int iParam1, int iParam2)
{
	return ENTITY::_0x627520389E288A73(iParam0, func_1070(iParam1), func_1071(iParam2));
}

void func_577(var uParam0, bool bParam1)
{
	func_1003(uParam0, 8388608, bParam1);
}

void func_578(var uParam0, bool bParam1)
{
	func_1003(uParam0, 4194304, bParam1);
}

int func_579(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	return ANIMSCENE::_GET_ANIM_SCENE_OBJECT(&(uParam0->f_552[iParam1]), func_1072(iParam2), bParam3);
}

void func_580(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_552[iParam1]), func_1072(iParam2), iParam3, iParam4);
}

int func_581(var uParam0, int iParam1, char* sParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	return func_1073(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), sParam2, fParam3, fParam4, iParam5, iParam6);
}

void func_582(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

void func_583(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (PED::_0xA29FD00D45311EB7(iParam0, "Stealth") != 1f)
		{
			PED::_0x437C08DB4FEBE2BD(iParam0, "Stealth", 1f, -1);
		}
	}
	else if (PED::_0xA29FD00D45311EB7(iParam0, "Stealth") > 0f)
	{
		PED::_0x411189E51B8020BA(iParam0, "Stealth");
	}
}

void func_584(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16, bParam1);
}

void func_585(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_552[iParam1]), func_1061(iParam2), iParam3, iParam4);
}

int func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, false);
	if (iVar1 != joaat("weapon_unarmed"))
	{
		if (!func_226(iParam0, 716706914))
		{
			WEAPON::_0xFCCC886EDE3C63EC(iParam0, 2, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, true, 1, false);
	if (iVar2 != joaat("weapon_unarmed"))
	{
		if (!func_226(iParam0, 716706914))
		{
			WEAPON::_0xFCCC886EDE3C63EC(iParam0, 2, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, 1) != 8)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_587(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!ANIMSCENE::_0x337F1CC8EE895601(&(uParam0->f_552[iParam1]), func_1061(0)))
	{
		if (!func_226(Global_35, 1369124074))
		{
			TASK::TASK_ENTER_ANIM_SCENE(Global_35, &(uParam0->f_552[iParam1]), func_1061(0), func_1023(iParam2), 1069379748, iParam3, iParam4, iParam5, -1082130432);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_588(var uParam0, int iParam1)
{
	return ANIMSCENE::_0xD8254CB2C586412B(&(uParam0->f_552[iParam1]), 0);
}

void func_589(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

int func_590(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;

	fVar0 = 0.2f;
	iVar1 = 1;
	iVar2 = func_1074(iParam2);
	iVar3 = func_1075(iVar2);
	vVar4 = { func_1076(iParam2) };
	if (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar4, fVar0, iVar3, false))
	{
		iVar1 = 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_487[iVar2])))
	{
		if (&uParam0->f_481[iParam2] == 0)
		{
			uParam0->f_481[iParam2] = ENTITY::_0x6F3068258A499E52(iVar3, vVar4, 15);
		}
		if (&uParam0->f_481[iParam2] != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(&(uParam0->f_481[iParam2])))
			{
				iVar7 = ENTITY::_0x4735E2A4BB83D9DA(&(uParam0->f_481[iParam2]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					uParam1->f_1[iParam2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar7);
					uParam0->f_487[iVar2] = &uParam1->f_1[iParam2];
				}
			}
		}
		iVar1 = 0;
	}
	return iVar1;
}

int func_591(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_592(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

var func_593(int iParam0, int iParam1, int iParam2, float fParam3)
{
	return ENTITY::STOP_ENTITY_ANIM(iParam0, func_1071(iParam2), func_1070(iParam1), fParam3);
}

int func_594(var uParam0, int iParam1, float fParam2)
{
	if (func_652(uParam0, iParam1))
	{
		return func_1077(uParam0, iParam1) >= fParam2;
	}
	return 0;
}

void func_595(var uParam0, bool bParam1)
{
	func_1003(uParam0, 4096, bParam1);
}

int func_596(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (func_609(iParam0, iParam1, iParam2))
	{
		return func_576(iParam0, iParam1, iParam2) >= fParam3;
	}
	return 0;
}

void func_597(var uParam0, bool bParam1)
{
	func_1003(uParam0, 8192, bParam1);
}

void func_598(var uParam0)
{
	func_197(uParam0);
	func_1078(&(uParam0->f_3), 1);
	uParam0->f_4 = 0;
}

void func_599(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_600(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_599(uParam0, 2);
	}
	else
	{
		func_1078(uParam0, 2);
	}
}

void func_601(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_599(uParam0, 4);
	}
	else
	{
		func_1078(uParam0, 4);
	}
}

void func_602(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_599(uParam0, 8);
	}
	else
	{
		func_1078(uParam0, 8);
	}
}

void func_603(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_599(uParam0, 16);
	}
	else
	{
		func_1078(uParam0, 16);
	}
}

void func_604(vector3 vParam0, var uParam3, vector3 vParam4, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	if (func_1079(&(uParam3->f_3), 1))
	{
		func_1080(uParam3);
		if (func_1081(vParam0, fParam8, 2.5f, iParam12, 1084227584))
		{
			func_1082();
		}
	}
	if (func_1083(vParam0, uParam3, fParam8))
	{
		if (func_1079(&(uParam3->f_3), 128))
		{
			func_1084(uParam3, vParam0, fParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!func_1079(&(uParam3->f_3), 128))
		{
			func_1084(uParam3, vParam0, fParam7, iParam10);
		}
	}
}

Vector3 func_605(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

int func_606(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { vParam6 - vParam0 };
	fVar3 = func_1085(vParam3, vVar0);
	if (MISC::ABSF(fVar3) > fParam9)
	{
		if (fVar3 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_1086(vParam0, vParam0 + vParam3, vParam6))
	{
		return 3;
	}
	return 2;
}

int func_607(var uParam0)
{
	if (!func_196(uParam0))
	{
		return 0;
	}
	if (func_1087(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_1088() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_608(var uParam0)
{
	if (!func_196(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_1087(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_1088() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_609(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_1070(iParam1), func_1071(iParam2), 1);
	}
	return 0;
}

int func_610(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		func_60(uParam0, 0);
	}
	if (func_196(uParam0))
	{
		if (func_1089(uParam0, fParam1))
		{
			if (bParam3)
			{
				func_197(uParam0);
			}
			return 1;
		}
	}
	return 0;
}

void func_611(var uParam0, int iParam1, int iParam2, float fParam3)
{
	ENTITY::_0x11CDABDC7783B2BC(uParam0, func_1070(iParam1), func_1071(iParam2), fParam3);
}

void func_612(var uParam0, int iParam1, bool bParam2)
{
	func_1090(uParam0, iParam1, 2, bParam2);
}

void func_613(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16777216, bParam1);
}

bool func_614(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_615(var uParam0)
{
	return func_991(uParam0, 8);
}

void func_616(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_196(uParam0->f_565.f_31[17 /*3*/]))
	{
		if (uParam0->f_3 <= 2)
		{
			if (func_1087(uParam0->f_565.f_31[17 /*3*/]))
			{
				func_1091(uParam0->f_565.f_31[17 /*3*/]);
			}
		}
		else if (!func_1087(uParam0->f_565.f_31[17 /*3*/]))
		{
			func_1092(uParam0->f_565.f_31[17 /*3*/]);
		}
	}
	switch (uParam0->f_3)
	{
		case 0:
			func_660(uParam0, 1);
			break;
		case 1:
			func_660(uParam0, 2);
			break;
		case 2:
			iVar0 = -1;
			if (!func_1031(&(uParam0->f_565), 2) && !func_1032(&(uParam0->f_565)))
			{
				if (func_614(Global_35, &(uParam0->f_565.f_91[12]), 0, 1))
				{
					iVar0 = 2;
				}
			}
			if (!func_1031(&(uParam0->f_565), 3))
			{
				if (func_614(Global_35, &(uParam0->f_565.f_91[13]), 0, 1))
				{
					iVar0 = 3;
				}
			}
			if (!func_1031(&(uParam0->f_565), 4))
			{
				if (func_614(Global_35, &(uParam0->f_565.f_91[14]), 0, 1))
				{
					iVar0 = 4;
				}
			}
			if (iVar0 != -1)
			{
				if (func_581(&(uParam0->f_565), &(uParam0->f_1224.f_1[iVar0]), func_227(241), 1082130432, 1073741824, -719620017, 258))
				{
					func_582(&(uParam0->f_565), 0);
					switch (iVar0)
					{
						case 2:
							func_660(uParam0, 3);
							break;
						case 3:
							func_660(uParam0, 7);
							break;
						case 4:
							func_660(uParam0, 11);
							break;
					}
				}
			}
			else
			{
				func_582(&(uParam0->f_565), 0);
				func_195(&(uParam0->f_565.f_86), 1, 1);
			}
			break;
		case 3:
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 6, 46, 0, 0, -1))
				{
					if (func_567(uParam0, 6, 0, 46))
					{
						func_660(uParam0, 4);
					}
				}
			}
			break;
		case 4:
			if (!func_541(uParam0, 6, 48))
			{
				if (func_594(uParam0, 6, 0.97f))
				{
					uParam0->f_565.f_86 = func_1093(func_227(255), 1367437629, func_228(4, 8), 2f, 3, 0, 0, 9, 570, 4000, 6, 3f, 0, 1704213876, 0);
					func_1094(uParam0->f_565.f_86, 1, 1);
					func_574(uParam0, 6, 48);
				}
			}
			else if (func_1095(uParam0->f_565.f_86, 1) >= 1f)
			{
				func_1094(uParam0->f_565.f_86, 0, 1);
				func_195(&(uParam0->f_565.f_86), 1, 1);
				func_660(uParam0, 5);
			}
			break;
		case 5:
			if (func_574(uParam0, 6, 50))
			{
				func_266(0, 256);
				func_1096(&(uParam0->f_565), 2, 1);
				func_660(uParam0, 6);
			}
			break;
		case 6:
			if (func_594(uParam0, 6, 0.97f))
			{
				iVar1 = 13;
				while (iVar1 <= 16)
				{
					func_592(uParam0->f_487[iVar1], 1);
					iVar1++;
				}
				func_612(uParam0, 50, 1);
				func_1097(&(uParam0->f_565), 2, 1);
				func_266(1, 256);
				uParam0->f_1224.f_7 += 21010;
				func_233(func_232(3, -1891229662), uParam0->f_1224.f_7);
				func_488(21010, 0, 1065353216, 1, 0, 0, 1, 752097756);
				func_660(uParam0, 1);
			}
			break;
		case 7:
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 7, 45, 0, 0, -1))
				{
					if (func_567(uParam0, 7, 0, 45))
					{
						func_660(uParam0, 8);
					}
				}
			}
			break;
		case 8:
			if (!func_541(uParam0, 7, 47))
			{
				if (func_594(uParam0, 7, 0.97f))
				{
					uParam0->f_565.f_86 = func_1093(func_227(255), 1367437629, func_228(4, 9), 2f, 3, 0, 0, 9, 570, 4000, 10, 3f, 0, 1704213876, 0);
					func_1094(uParam0->f_565.f_86, 1, 1);
					func_574(uParam0, 7, 47);
				}
			}
			else if (func_1095(uParam0->f_565.f_86, 1) >= 1f)
			{
				func_1094(uParam0->f_565.f_86, 0, 1);
				func_195(&(uParam0->f_565.f_86), 1, 1);
				func_660(uParam0, 9);
			}
			break;
		case 9:
			if (func_574(uParam0, 7, 49))
			{
				func_266(0, 256);
				func_1096(&(uParam0->f_565), 3, 1);
				func_660(uParam0, 10);
			}
			break;
		case 10:
			if (func_594(uParam0, 7, 0.97f))
			{
				iVar2 = 17;
				while (iVar2 <= 23)
				{
					func_592(uParam0->f_487[iVar2], 1);
					iVar2++;
				}
				func_612(uParam0, 49, 1);
				func_1097(&(uParam0->f_565), 3, 1);
				func_266(1, 256);
				uParam0->f_1224.f_7 += 24972;
				func_233(func_232(3, -1891229662), uParam0->f_1224.f_7);
				func_488(24972, 0, 1065353216, 1, 0, 0, 1, 752097756);
				func_660(uParam0, 1);
			}
			break;
		case 11:
			if (func_586(Global_35))
			{
				if (func_587(uParam0, 8, 52, 0, 0, -1))
				{
					func_266(0, 256);
					if (func_567(uParam0, 8, 0, 52))
					{
						func_660(uParam0, 12);
					}
				}
			}
			break;
		case 12:
			if (func_594(uParam0, 8, 0.97f))
			{
				iVar3 = 24;
				while (iVar3 <= 26)
				{
					func_592(uParam0->f_487[iVar3], 1);
					iVar3++;
				}
				func_612(uParam0, 52, 1);
				func_266(1, 0);
				uParam0->f_1224.f_7 += 9618;
				func_233(func_232(3, -1891229662), uParam0->f_1224.f_7);
				func_488(9618, 0, 1065353216, 1, 0, 0, 1, 752097756);
				func_1096(&(uParam0->f_565), 4, 1);
				func_1097(&(uParam0->f_565), 4, 1);
				func_660(uParam0, 1);
			}
			break;
		case 13:
			func_195(&(uParam0->f_565.f_86), 1, 1);
			func_660(uParam0, 14);
			break;
		case 14:
			return;
	}
}

void func_617(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_618(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, int iParam8)
{
	return ENTITY::PLAY_ENTITY_ANIM(iParam0, func_1071(iParam1), func_1070(iParam2), fParam3, bParam4, bParam5, bParam6, fParam7, iParam8);
}

bool func_619(var uParam0, int iParam1)
{
	return func_1098(uParam0, iParam1, 2);
}

int func_620(var uParam0)
{
	return *uParam0;
}

void func_621(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_2)
	{
		case 0:
		case 1:
			*uParam2 = 207336/*func_1099*/;
			break;
		case 2:
			*uParam2 = 208449/*func_1100*/;
			break;
		case 3:
			*uParam2 = 209689/*func_1101*/;
			break;
		case 4:
			*uParam2 = 211450/*func_1102*/;
			break;
		case 5:
		case 6:
		case 8:
			*uParam2 = 211783/*func_1103*/;
			break;
	}
	func_256(uParam1);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
	func_999();
	func_1104();
	func_1105();
	func_197(&(uParam1->f_374));
	uParam1->f_3 = -1;
	uParam1->f_4 = 0;
	uParam1->f_1 = -1;
	uParam1->f_2 = -1;
}

void func_622(var uParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			break;
	}
	func_1107(uParam0, func_1106(iParam1), func_1106(iVar0), iParam1, iVar0);
}

void func_623(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (Local_18.f_565.f_112 == iVar0)
	{
		return;
	}
	Local_18.f_565.f_112 = iVar0;
}

void func_624(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam2)
	{
		case 0:
			func_1108(uParam0, iParam1, 1, bParam3);
			break;
		case 1:
			func_1108(uParam0, iParam1, 2, bParam3);
			break;
		case 2:
			func_1108(uParam0, iParam1, 4, bParam3);
			break;
		case 3:
			func_1108(uParam0, iParam1, 8, bParam3);
			break;
	}
}

struct<4> func_625(int iParam0, int iParam1)
{
	return func_1109(iParam0, iParam1);
}

void func_626(var uParam0, struct<4> Param1, struct<4> Param5)
{
	uParam0->f_20 = { Param1 };
	uParam0->f_24 = { Param5 };
}

void func_627(var uParam0, struct<4> Param1, struct<4> Param5)
{
	uParam0->f_28 = { Param1 };
	uParam0->f_32 = { Param5 };
}

void func_628(var uParam0, int iParam1)
{
	func_1110(&(uParam0->f_2), iParam1);
}

void func_629(var uParam0, char* sParam1)
{
	uParam0->f_52 = sParam1;
}

var func_630(var uParam0)
{
	return uParam0->f_52;
}

void func_631(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4)
{
	uParam0->f_36 = uParam1;
	uParam0->f_36.f_3 = uParam0->f_2;
	uParam0->f_36.f_9 = uParam2;
	uParam0->f_36.f_10 = fParam3;
	uParam0->f_36.f_11 = fParam4;
	uParam0->f_36.f_13 = 0;
	uParam0->f_36.f_12 = 3f;
	uParam0->f_36.f_14 = 0.4f;
}

void func_632(var uParam0)
{
	func_1111(uParam0);
	func_1112(uParam0);
	func_1114(uParam0, 213214/*func_1113*/);
	func_1116(uParam0, 213644/*func_1115*/);
	func_1118(uParam0, 214859/*func_1117*/);
}

int func_633(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_331++;
		if (uParam0->f_331 < 10)
		{
			return (func_1119(uParam0, 256) && !func_1119(uParam0, 4194304));
		}
		uParam0->f_331 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_1120(uParam0, sParam1);
	if (!func_1119(uParam0, 64))
	{
		if (!func_499(func_1121(uParam0)))
		{
			func_1122(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1123(uParam0) };
			if (!func_499(vVar0))
			{
				func_1124(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_1125(Global_35, func_1121(uParam0), 1);
	if (func_1119(uParam0, 128) || func_1119(uParam0, 256))
	{
		if ((fVar3 >= func_1126(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
		{
			if (uParam0->f_349)
			{
				func_1127();
				uParam0->f_349 = 0;
			}
			func_1128(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_264);
			}
			func_1129(uParam0);
			func_1130(uParam0, 128, 1);
			func_1130(uParam0, 256, 1);
			func_1130(uParam0, 4096, 1);
			func_1130(uParam0, 32768, 1);
			func_1130(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1131(uParam0) || bParam2)
	{
		if (!func_1119(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
			{
				if (func_1131(uParam0) >= func_1126(uParam0))
				{
				}
				Var4 = { func_1132(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_1133(uParam0);
				}
				Var4 = { func_1132(uParam0) };
				iVar12 = 256;
				if (!func_1119(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_264 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_260), iVar12, &Var4, false, true);
				func_1134(uParam0, 0, 0, 0, 0);
				func_1122(uParam0, 128);
			}
		}
	}
	if (func_1119(uParam0, 128))
	{
		if (func_1119(uParam0, 256) && !func_1119(uParam0, 4194304))
		{
			return 1;
		}
		func_1135(uParam0);
		if (!uParam0->f_349)
		{
			if (func_1136())
			{
				func_888(4096);
				uParam0->f_349 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_264, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_1137(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_282[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_282[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_282[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_282[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_264, uParam0->f_282[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, uParam0->f_282[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_1119(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_264, &Var15))
				{
					if (!func_1119(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_264, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_264, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_264, &Var15);
						}
						func_1122(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_1122(uParam0, 256);
			func_1130(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

int func_634(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;

	iVar0 = &uParam0->f_1111.f_40[3];
	iVar1 = &uParam0->f_1111.f_40[0];
	iVar2 = &uParam0->f_1111.f_40[1];
	iVar3 = &uParam0->f_1111.f_40[4];
	iVar4 = &uParam0->f_1111.f_40[5];
	fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1138(Global_35, func_630(&(uParam0->f_1171))), func_1138(&(uParam0->f_1111.f_40[0]), func_630(&(uParam0->f_1171))), true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_630(&(uParam0->f_1171))))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar18);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_1111.f_40[0]), true, false), &iVar19);
	}
	switch (uParam0->f_1171.f_1)
	{
		case 0:
			func_646(iVar1, 167, 1);
			func_271(func_267(0), 0);
			AUDIO::STOP_PED_SPEAKING(iVar1, false);
			func_646(iVar3, 167, 1);
			func_271(func_267(4), 0);
			AUDIO::STOP_PED_SPEAKING(iVar3, false);
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(45, 2, 1);
			func_1139(&(uParam0->f_1171), 1);
			break;
		case 1:
			if (func_666(iVar1, iVar2, 1) && func_666(iVar3, iVar4, 1))
			{
				if (uParam0->f_1171 == 0)
				{
					func_197(uParam0->f_565.f_31[2 /*3*/]);
					func_197(uParam0->f_565.f_31[14 /*3*/]);
					func_1139(&(uParam0->f_1171), 3);
				}
				else
				{
					func_1139(&(uParam0->f_1171), 5);
				}
			}
			if (func_666(iVar1, iVar2, 1))
			{
				if (!func_666(iVar3, iVar4, 1) && !func_226(iVar1, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar3, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			else if (!func_226(iVar1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar1, iVar2, -1, -1, 2f, 1, 0, 0);
			}
			if (func_666(iVar3, iVar4, 1))
			{
				if (!func_666(iVar1, iVar2, 1) && !func_226(iVar3, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, iVar1, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			else if (!func_226(iVar3, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar3, iVar4, -1, -1, 2f, 1, 0, 0);
			}
			break;
		case 3:
			if (!func_666(iVar1, iVar2, 0) || !func_666(iVar3, iVar4, 0))
			{
				func_1139(&(uParam0->f_1171), 1);
				return 0;
			}
			vVar8 = { uParam0->f_1171.f_20 };
			vVar11 = { uParam0->f_1171.f_28 };
			if (!func_516(iVar1, vVar8, 3f, 1, 1))
			{
				if (!func_226(iVar1, 658540077))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, func_227(265), 0, 0, -1, 0, 0, -1);
				}
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(iVar1, vVar8, vLocal_0, false, true, 0))
			{
				if (!func_226(iVar1, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, vVar8, 1.001f, -1, 0.25f, false, 40000f);
				}
			}
			else if (!func_226(iVar1, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (!func_518(&(uParam0->f_1111), 4, 0, 5f, 1))
			{
				if (!func_516(iVar3, vVar11, 3f, 1, 1))
				{
					if (!func_226(iVar3, 658540077))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar3, func_227(268), 0, 0, -1, 0, 0, -1);
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(iVar3, vVar11, vLocal_0, false, true, 0))
				{
					if (!func_226(iVar3, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar3, vVar11, 1.25f, -1, 0.25f, false, 40000f);
					}
				}
				else if (!func_226(iVar3, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			if ((((func_666(iVar1, iVar2, 0) && func_666(iVar3, iVar4, 0)) && func_666(Global_35, iVar0, 0)) && func_516(iVar1, vVar8, 20f, 1, 1)) && func_518(&(uParam0->f_1111), 2, 0, 20f, 1))
			{
				func_197(uParam0->f_565.f_31[14 /*3*/]);
				func_1139(&(uParam0->f_1171), 4);
			}
			break;
		case 4:
			TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
			TASK::CLEAR_PED_TASKS(iVar3, 1, 0);
			uParam0->f_1171.f_51 = PED::CREATE_GROUP(0);
			func_665(uParam0->f_1171.f_51, 10);
			func_1140(&(uParam0->f_1111), 0, uParam0->f_1171.f_51);
			func_664(&(uParam0->f_1111), 4, uParam0->f_1171.f_51);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iVar1, -1082130432, -1082130432, 2, 3, 1);
			PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iVar1, 3);
			func_1139(&(uParam0->f_1171), 5);
			break;
		case 5:
			if (!func_666(iVar1, iVar2, 0) || !func_666(iVar3, iVar4, 0))
			{
				func_1139(&(uParam0->f_1171), 1);
				return 0;
			}
			func_1141(&(uParam0->f_1111), &(uParam0->f_1171));
			vVar8 = { uParam0->f_1171.f_24 };
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar1, func_630(&(uParam0->f_1171))))
			{
				if (!func_226(iVar1, 658540077))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar1, func_630(&(uParam0->f_1171)), 0, uParam0->f_1171.f_2, -1, 0, 0, -1);
				}
			}
			else if ((iVar19 > iVar18 && ((fVar17 > 30f && !func_591(Global_35, iVar3, 20f, 1)) || !func_670(Global_35))) && !func_516(iVar1, vVar8, 30f, 1, 1))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iVar1, 1, 0, 0);
				}
				else if (func_591(iVar3, iVar1, 8f, 1))
				{
					if (!func_226(iVar3, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar3, Global_35, -1, -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iVar1))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(iVar1, false, -1, 0);
				if (func_226(iVar3, 1435919172))
				{
					TASK::CLEAR_PED_TASKS(iVar3, 1, 0);
				}
			}
			else if (iVar19 >= 425)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iVar3, func_630(&(uParam0->f_1171))) && !func_226(iVar3, 999013589))
				{
					TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(iVar3, iVar1, func_630(&(uParam0->f_1171)), 0, -6f, (iVar19 - 1), uParam0->f_1171.f_2, -1, 0);
				}
			}
			if (func_1142(iVar1, uParam0->f_1171.f_52) >= 457 || func_516(iVar1, vVar8, 20f, 1, 1))
			{
				func_1139(&(uParam0->f_1171), 6);
			}
			else if (func_1142(iVar1, uParam0->f_1171.f_52) >= 425)
			{
				PED::SET_PED_RESET_FLAG(iVar1, 12, true);
			}
			break;
		case 6:
			vVar5 = { func_228(2, 1) };
			fVar14 = func_229(2, 1);
			vVar8 = { uParam0->f_1171.f_24 };
			fVar15 = uParam0->f_1171.f_24.f_3;
			vVar11 = { uParam0->f_1171.f_32 };
			fVar16 = uParam0->f_1171.f_32.f_3;
			func_662(Global_35, vVar5, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (!func_226(Global_35, 713668775))
			{
				if (func_516(Global_35, vVar5, 10f, 1, 1) && func_666(Global_35, iVar0, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar5, 1.001f, -1, 0.25f, false, fVar14);
				}
			}
			if (!func_226(iVar1, 713668775))
			{
				if (!func_1143(iVar2, vVar8, fVar15, 1056964608, 5f, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, vVar8, 1.25f, -1, 0.25f, false, fVar15);
				}
			}
			if (!func_226(iVar3, 713668775))
			{
				if (!func_1143(iVar4, vVar11, fVar16, 1056964608, 5f, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar3, vVar11, 1.25f, -1, 0.25f, false, fVar16);
				}
			}
			if (func_516(Global_35, vVar5, 10f, 1, 1) || func_226(Global_35, 713668775))
			{
				func_1139(&(uParam0->f_1171), 7);
			}
			break;
		case 7:
			func_1144(&(uParam0->f_1111), 0);
			func_1145(&(uParam0->f_1111), 2);
			func_1145(&(uParam0->f_1111), 4);
			func_646(iVar1, 167, 0);
			func_271(func_267(0), 1);
			AUDIO::STOP_PED_SPEAKING(iVar1, true);
			func_646(iVar3, 167, 0);
			func_271(func_267(4), 1);
			AUDIO::STOP_PED_SPEAKING(iVar3, true);
			AUDIO::_0x660A8F876DF1D4F8(7);
			AUDIO::_0x660A8F876DF1D4F8(25);
			AUDIO::_0x660A8F876DF1D4F8(45);
			func_1139(&(uParam0->f_1171), 8);
			break;
		case 8:
			return 1;
	}
	return 0;
}

bool func_635(int iParam0, struct<4> Param1, bool bParam5)
{
	return func_1146(iParam0, Param1, Param1.f_3, bParam5);
}

int func_636(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 1;
	switch (iParam2)
	{
		case 0:
			vVar1 = { func_228(7, 10) };
			if (!func_1147(uParam0, 37, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 33, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (PED::GET_MOUNT(Global_35) != 0 && PED::GET_MOUNT(Global_35) != &uParam1->f_40[3])
			{
				uParam0->f_543[7] = PED::GET_MOUNT(Global_35);
			}
			else
			{
				uParam0->f_543[7] = &uParam1->f_40[3];
			}
			if (!func_1149(&(uParam0->f_121), &(uParam0->f_543[7])))
			{
				func_1150(&(uParam0->f_121), &(uParam0->f_543[7]), "Horse_01^1", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 5))
			{
				iVar0 = 0;
			}
			if (!func_1151(uParam1))
			{
				iVar0 = 0;
			}
			else if (!func_1148(uParam0, uParam1, 6))
			{
				iVar0 = 0;
			}
			break;
		case 1:
			vVar1 = { func_228(7, 11) };
			if (!func_1147(uParam0, 44, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 45, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			break;
		case 2:
			vVar1 = { func_228(7, 12) };
			if (!func_1147(uParam0, 0, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 1, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 2, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 3, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 4, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 5, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 6, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 7, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 44, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1147(uParam0, 45, vVar1))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 2))
			{
				iVar0 = 0;
			}
			if (PED::GET_MOUNT(Global_35) != 0 && PED::GET_MOUNT(Global_35) != &uParam1->f_40[3])
			{
				uParam0->f_543[7] = PED::GET_MOUNT(Global_35);
			}
			else
			{
				uParam0->f_543[7] = &uParam1->f_40[3];
			}
			if (!func_1149(&(uParam0->f_121), &(uParam0->f_543[7])))
			{
				func_1150(&(uParam0->f_121), &(uParam0->f_543[7]), "Horse_01^2", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 0))
			{
				iVar0 = 0;
			}
			if (!func_1149(&(uParam0->f_121), &(uParam1->f_40[1])))
			{
				func_1150(&(uParam0->f_121), &(uParam1->f_40[1]), "Horse_01^1", 0, 0, 0);
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 4))
			{
				iVar0 = 0;
			}
			if (!func_1148(uParam0, uParam1, 5))
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

int func_637(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = &uParam0->f_1111.f_40[6];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	func_1152(iVar0, joaat("weapon_repeater_carbine"), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	fVar1 = 15f;
	fVar2 = 70f;
	PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
	PED::SET_PED_HEARING_RANGE(iVar0, 7.5f);
	PED::SET_PED_ID_RANGE(iVar0, fVar1);
	PED::SET_PED_SEEING_RANGE(iVar0, fVar1);
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iVar0, fVar1);
	PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iVar0, -fVar2);
	PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iVar0, fVar2);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iVar0, fVar2);
	PED::_0x9AB33CB5834885B3(iVar0, 6f, 8f, -1082130432, -1082130432);
	PED::_0x899DFA0009AC93DE(iVar0, 0.5f);
	PED::_0x3A5697B80FED5EBE(iVar0, 3f, 3f, 8f, 8f);
	PED::SET_PED_HEARING_RANGE(Global_35, 7.5f);
	if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, true);
	}
	MISC::_0x6AC4AF46A6B8DFB2(0);
	PED::SET_PED_CAN_TORSO_REACT_IK(iVar0, false);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 14, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
	func_646(iVar0, 80, 0);
	func_646(iVar0, 81, 0);
	func_646(iVar0, 113, 1);
	func_646(iVar0, 119, 0);
	func_646(iVar0, 123, 0);
	func_646(iVar0, 130, 1);
	func_646(iVar0, 168, 0);
	func_646(iVar0, 217, 1);
	func_646(iVar0, 245, 1);
	func_646(iVar0, 250, 1);
	func_646(iVar0, 353, 1);
	func_1153(&(uParam0->f_692.f_1), 1);
	func_1154(&(uParam0->f_692.f_1), 1);
	func_1155(&(uParam0->f_692.f_1), 1);
	func_1156(&(uParam0->f_692.f_1), 1);
	func_1157(&(uParam0->f_692.f_1), 1);
	func_1158(&(uParam0->f_692.f_1), 0);
	func_1159(&(uParam0->f_692.f_1), 0);
	func_1160(&(uParam0->f_692.f_1), 0);
	func_1161(&(uParam0->f_692.f_1), 0);
	func_1162(&(uParam0->f_692.f_1), 0);
	func_1163(&(uParam0->f_692.f_1), 0);
	func_1164(&(uParam0->f_692.f_1), 0);
	func_1165(&(uParam0->f_692.f_1), 1);
	func_1166(&(uParam0->f_692.f_1), 0);
	func_1167(&(uParam0->f_692.f_1), 1);
	func_1168(&(uParam0->f_692.f_1), 0);
	func_1169(&(uParam0->f_692.f_1), 1);
	func_1170(&(uParam0->f_692.f_1), 1);
	func_1171(&(uParam0->f_692.f_1), 1);
	func_1172(&(uParam0->f_692.f_1), 1);
	func_1173(&(uParam0->f_692.f_1), 1);
	func_1174(&(uParam0->f_692.f_1), 1);
	func_1175(&(uParam0->f_692.f_1), 1);
	func_1176(&(uParam0->f_692.f_1), 0);
	func_1177(&(uParam0->f_692.f_1), 1);
	func_1178(&(uParam0->f_692.f_1), 1);
	if (!func_226(iVar0, -982327190))
	{
		TASK::TASK_STAND_STILL(iVar0, -1);
	}
	func_598(&(uParam0->f_471));
	func_1179(&(uParam0->f_730.f_276), &(uParam0->f_1111.f_40[6]), func_227(243), 0);
	return 1;
}

struct<4> func_638(char* sParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_639(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_1120(uParam4, &sParam0);
	if (func_1119(uParam4, 2) && !func_1119(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_620(uParam4) != 1)
	{
		func_1180(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_620(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_264, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_264, 0))
				{
					func_1181(uParam4, &sParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
				{
					func_1182(uParam4, 4);
					return 0;
				}
				else if (func_1183(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_257);
				}
				func_1182(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_266)) && func_1119(uParam4, 134217728))
				{
				}
				else
				{
					func_1112(uParam4);
				}
				func_253(&(uParam4->f_1));
				func_1182(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_1135(uParam4);
				if (!func_196(&(uParam4->f_1)))
				{
					func_60(&(uParam4->f_1), 0);
				}
				else if (func_1184(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
					}
					func_1182(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_264) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_264, 1, 0))
			{
				if (func_633(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_264, 1, 0))
					{
						func_1182(uParam4, 4);
					}
					else if (!func_499(func_1121(uParam4)) && !func_516(Global_35, func_1121(uParam4), 100f, 1, 1))
					{
						func_1185(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_1121(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_1184(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
					}
					func_1182(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_1186(1, 0);
					func_1181(uParam4, &sParam0);
					func_1182(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_1184(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_264);
				}
				func_1182(uParam4, 4);
			}
			break;
		case 3:
			func_1187(uParam4);
			if (func_1183(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_257);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_264) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_264, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264) || func_1119(uParam4, 512)))
			{
				if (!func_1119(uParam4, 1024) && func_1188(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_1119(uParam4, 512))
				{
					func_253(&(uParam4->f_1));
					func_1122(uParam4, 512);
					func_1182(uParam4, 4);
				}
				else if (func_1119(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_1180(uParam4);
			}
			if (func_1119(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_1189(uParam4) - func_1190(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_1191(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_1190(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_1192(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
				{
				}
				func_1193(uParam4);
				func_1194(uParam4);
				return 1;
			}
			else
			{
				if (func_1119(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_264) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_264);
						}
						func_253(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_1122(uParam4, 512);
						func_1130(uParam4, 67108864, 1);
						func_1182(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_1119(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_264)) && CAM::IS_SCREEN_FADED_OUT()) && func_1190(uParam4) <= 5000) && func_1190(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_1119(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_1195(&(uParam4->f_321), 0);
					func_1122(uParam4, 536870912);
				}
				if (func_1190(uParam4) >= 5000 && func_1190(uParam4) <= (func_1189(uParam4) - 5000))
				{
					func_1196();
				}
			}
			break;
		case 6:
			if (func_1192(uParam4))
			{
				func_1193(uParam4);
				func_1194(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_1119(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_264))
					{
						func_1122(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_264))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_264))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1183(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_258);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_264))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, 0);
						}
						func_1182(uParam4, 3);
					}
					else if (func_1184(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_264) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_264))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_264, 0);
						}
						func_1182(uParam4, 3);
					}
				}
				if (func_620(uParam4) == 3)
				{
					if (func_1119(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_1182(uParam4, 4);
			break;
	}
	return 0;
}

bool func_640(int iParam0, struct<4> Param1, int iParam5)
{
	return func_1197(iParam0, Param1, Param1.f_3, iParam5);
}

void func_641(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2, bParam1);
}

void func_642(int iParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, true, 0, iParam2);
		}
	}
	else if (PED::_0xD5FE956C70FF370B(iParam0))
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, iParam2);
	}
}

void func_643(var uParam0)
{
	int iVar0;

	iVar0 = 11;
	while (iVar0 <= 18)
	{
		func_1198(&(uParam0->f_1111), iVar0, 0);
		iVar0++;
	}
	func_1199(uParam0);
}

void func_644()
{
	struct<4> Var0;

	TASK::OPEN_PATROL_ROUTE(func_227(245));
	Var0 = { func_625(10, 5) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 6) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 7) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 8) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 9) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(246));
	Var0 = { func_625(10, 10) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 11) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 12) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { func_625(10, 13) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(247));
	Var0 = { func_625(10, 14) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 15) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 16) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { func_625(10, 17) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 18) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(30000, 45000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(248));
	Var0 = { func_625(10, 19) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 20) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 21) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { func_625(10, 22) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(249));
	Var0 = { func_625(10, 23) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 24) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(251));
	Var0 = { func_625(10, 30) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 31) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 32) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(10, 33) };
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_SMOKE", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(45000, 60000), 0);
	Var0 = { func_625(10, 34) };
	TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_GUARD_SCOUT", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 4);
	TASK::ADD_PATROL_ROUTE_LINK(4, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE(func_227(252));
	Var0 = { func_625(9, 2) };
	TASK::ADD_PATROL_ROUTE_NODE(0, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(9, 3) };
	TASK::ADD_PATROL_ROUTE_NODE(1, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	Var0 = { func_625(9, 4) };
	TASK::ADD_PATROL_ROUTE_NODE(2, "", Var0, func_1200(Var0), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 0);
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_645(var uParam0, bool bParam1)
{
	func_1003(uParam0, 1024, bParam1);
}

void func_646(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		if (!PED::GET_PED_CONFIG_FLAG(iParam0, iParam1, true))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(iParam0, iParam1, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, false);
	}
}

void func_647(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 11;
	while (iVar0 <= 18)
	{
		func_1198(uParam0, iVar0, bParam1);
		iVar0++;
	}
	func_1198(uParam0, 6, bParam1);
}

int func_648(int iParam0, int iParam1)
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

void func_649(var uParam0, int iParam1)
{
	if ((iParam1 > 15 || !func_1201(&(uParam0->f_565))) || CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_480))
		{
			CAM::DESTROY_CAM(uParam0->f_480, false);
		}
		func_584(&(uParam0->f_565), 0);
		return;
	}
	CAM::_0x05AB44D906738426();
	PAD::DISABLE_CONTROL_ACTION(0, -1450761377, true);
	PAD::DISABLE_CONTROL_ACTION(0, -771458680, true);
	if (CAM::DOES_CAM_EXIST(uParam0->f_480))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_480))
		{
			HUD::_0xC9CAEAEEC1256E54(724769646);
		}
	}
	if (iParam1 >= 2 && iParam1 <= 8)
	{
		switch (uParam0->f_120)
		{
			case 0:
				if (uParam0->f_687.f_1 >= 7)
				{
					func_1202(uParam0, 2);
				}
				else if (!CAM::DOES_CAM_EXIST(uParam0->f_480))
				{
					uParam0->f_480 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1289.853f, -1321.032f, 77.9334f, -15.8028f, 0f, 12.1559f, 45f, false, 2);
				}
				else
				{
					func_1202(uParam0, 1);
				}
				break;
			case 1:
				if (!CAM::IS_CAM_ACTIVE(uParam0->f_480))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_480, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				}
				else if (uParam0->f_687.f_1 >= 7)
				{
					func_1203(136.72f, -8.7426f);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_1202(uParam0, 2);
				}
				break;
			case 2:
				CAM::DESTROY_CAM(uParam0->f_480, false);
				func_584(&(uParam0->f_565), 0);
				func_1202(uParam0, 0);
				break;
		}
	}
	else if (iParam1 >= 11 && iParam1 <= 15)
	{
		switch (uParam0->f_120)
		{
			case 0:
				if (!CAM::DOES_CAM_EXIST(uParam0->f_480))
				{
					uParam0->f_480 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1298.405f, -1328.297f, 76.944f, 4.7002f, 0.5578f, 40.0691f, 41f, false, 2);
				}
				else
				{
					func_1202(uParam0, 1);
				}
				break;
			case 1:
				if (!CAM::IS_CAM_ACTIVE(uParam0->f_480))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_480, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
				}
				else if (func_596(Global_35, 1, 21, 0.75f))
				{
					func_1203(0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_1202(uParam0, 2);
				}
				break;
			case 2:
				CAM::DESTROY_CAM(uParam0->f_480, false);
				func_584(&(uParam0->f_565), 0);
				func_1202(uParam0, 0);
				break;
		}
	}
}

void func_650(var uParam0)
{
	bool bVar0;
	vector3 vVar1;

	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_487[35])) && func_531(&(uParam0->f_565)))
	{
		bVar0 = uParam0->f_1 != 6;
		OBJECT::SET_OBJECT_TARGETTABLE(&(uParam0->f_487[35]), bVar0);
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(&(uParam0->f_487[35]), bVar0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uParam0->f_487[35]), bVar0, 10f);
		func_571(&(uParam0->f_487[35]), 1);
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(&(uParam0->f_487[35]), false);
		ENTITY::SET_ENTITY_PROOFS(&(uParam0->f_487[35]), 120, false);
	}
	switch (uParam0->f_687)
	{
		case -1:
			return;
		case 0:
			func_1204(&(uParam0->f_687), 1);
		case 1:
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uParam0->f_687.f_2))
			{
				uParam0->f_687.f_2 = OBJECT::GET_RAYFIRE_MAP_OBJECT(ENTITY::GET_ENTITY_COORDS(&(uParam0->f_487[35]), true, false), 5f, func_227(256));
			}
			else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 5)
			{
				func_1204(&(uParam0->f_687), 2);
			}
			else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) != 4)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2, 4);
			}
			else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
			}
			break;
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uParam0->f_487[35]), Global_35, 1, 1))
			{
				func_1205(&(uParam0->f_565), 1);
				func_1206(uParam0, 3, 0);
				func_1204(&(uParam0->f_687), 3);
			}
			else if (func_530(&(uParam0->f_565)))
			{
				func_1204(&(uParam0->f_687), 3);
			}
			break;
		case 3:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_487[35]), true, false) };
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2, 6);
			FIRE::ADD_EXPLOSION(vVar1, 29, 1f, 0, 1, 0f);
			AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_FUSSAR1_BUILDING", vVar1);
			if (CAM::DOES_CAM_EXIST(uParam0->f_480))
			{
				CAM::SHAKE_CAM(uParam0->f_480, "SMALL_EXPLOSION_SHAKE", 0.6f);
			}
			else
			{
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.6f);
			}
			PAD::SET_PAD_SHAKE(0, 2000, 150);
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[1]), true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[2]), true, 0))
			{
				PED::_0x09E378C52B1433B5(Global_35, vVar1, 15f);
			}
			AICOVERPOINT::_0x2A31D13C5F021D0D(&(uParam0->f_1111.f_40[4]));
			if (!func_737(uParam0, 35))
			{
				func_592(uParam0->f_487[35], 1);
				func_738(uParam0, 35, 1);
			}
			func_573(uParam0, 16);
			func_573(uParam0, 17);
			func_751(-661825463);
			func_752(181);
			func_753(182);
			func_747(-2020023971);
			func_1204(&(uParam0->f_687), 4);
		case 4:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 9 || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uParam0->f_687.f_2) == 10)
			{
				func_554(uParam0, 16);
				func_554(uParam0, 17);
				func_1204(&(uParam0->f_687), 5);
			}
			break;
		case 5:
			break;
	}
}

void func_651(var uParam0)
{
	if (uParam0->f_687.f_1 > 4 && uParam0->f_687.f_1 < 9)
	{
		func_1207(uParam0, &(uParam0->f_687));
	}
	switch (uParam0->f_687.f_1)
	{
		case -1:
			return;
		case 0:
			func_1208(&(uParam0->f_687), 2);
			break;
		case 2:
			if (func_1209(&(uParam0->f_565)))
			{
				uParam0->f_687.f_3 = PHYSICS::ADD_ROPE(PED::GET_PED_BONE_COORDS(&(uParam0->f_543[2]), 16749, 0f, 0f, 0f), 0f, 0f, 0f, 30f, 2, 3f, 1056964608, 1056964608, 0, 1, 0, 1065353216, 0, 0, 1);
				PHYSICS::_0x462FF2A432733A44(uParam0->f_687.f_3, &(uParam0->f_543[2]), &(uParam0->f_487[37]), 0f, 0f, 0f, 0f, 0f, 0.15f, "SKEL_R_Finger12", 0);
				PHYSICS::_0xFB9153A54AC713E8(uParam0->f_687.f_3, 1);
				PHYSICS::ROPE_SET_UPDATE_ORDER(uParam0->f_687.f_3, 1);
				PHYSICS::_0x1FC92BDBA1106BD2(uParam0->f_687.f_3, 1f);
				PHYSICS::_0x1D97DA8ACB5D2582(uParam0->f_687.f_3, 20);
				func_1208(&(uParam0->f_687), 3);
			}
			break;
		case 3:
			if (func_541(uParam0, 0, 5) || func_541(uParam0, 0, 3))
			{
				func_1210(uParam0->f_687.f_3, &(uParam0->f_1111.f_40[0]));
				func_1211(uParam0->f_687.f_3, &(uParam0->f_487[35]), 0f, 0f, 0f, 0, 0, 1);
				func_1208(&(uParam0->f_687), 4);
			}
			break;
		case 4:
			if (func_652(uParam0, 9))
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "spool");
			}
			if (func_1212(uParam0, 9, 0))
			{
				func_646(Global_35, 352, 1);
				func_646(Global_35, 404, 1);
				func_646(Global_35, 249, 1);
				func_646(Global_35, 43, 1);
				func_266(0, 0);
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_227(267), 1, 1065353216, 1f, 0);
				PED::_0x49DADFC4CD808B0A(Global_35, 1, -1);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(uParam0->f_552[0]), func_227(90), &(uParam0->f_487[37]));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_487[37]), Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
				ENTITY::PLAY_ENTITY_ANIM(&(uParam0->f_487[37]), func_227(47), func_227(4), 8f, true, false, false, 0f, 0);
				func_1208(&(uParam0->f_687), 5);
			}
			break;
		case 5:
			if (!func_1213(Global_35, &(uParam0->f_487[33]), 0.9f))
			{
				if (!func_591(Global_35, &(uParam0->f_487[33]), 3f, 1) && !func_226(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, &(uParam0->f_487[33]), 1500, -1082130432, -1082130432, -1082130432);
				}
			}
			else if (!func_226(Global_35, -875674219))
			{
				func_598(&(uParam0->f_471));
				func_599(&(uParam0->f_471.f_3), 32);
				func_600(&(uParam0->f_471.f_3), 1);
				func_601(&(uParam0->f_471.f_3), 0);
				func_602(&(uParam0->f_471.f_3), 0);
				func_603(&(uParam0->f_471.f_3), 1);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				func_1208(&(uParam0->f_687), 6);
			}
			break;
		case 6:
			if (func_610(uParam0->f_565.f_31[4 /*3*/], 0.5f, 1, 0))
			{
				func_1208(&(uParam0->f_687), 7);
			}
			break;
		case 7:
			func_604(func_228(3, 8), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 4000, 1000, 1);
			if (func_610(uParam0->f_565.f_31[4 /*3*/], 2f, 1, 1))
			{
				func_266(1, 0);
				func_1208(&(uParam0->f_687), 8);
			}
			break;
		case 8:
			func_604(func_228(3, 8), &(uParam0->f_471), 0f, 0f, 0f, CAM::GET_GAMEPLAY_CAM_FOV(), 20f, 1000, 4000, 1000, 1);
			if (func_541(uParam0, 2, 30))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_227(267), 0, 1065353216, 0.5f, 1);
				func_646(Global_35, 352, 0);
				func_646(Global_35, 404, 0);
				func_646(Global_35, 249, 0);
				func_646(Global_35, 43, 0);
				func_642(Global_35, 0, 0);
				func_583(Global_35, 1);
				PED::_0x58F7DB5BD8FA2288(Global_35);
				PED::_0x49DADFC4CD808B0A(Global_35, 0, -1);
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uParam0->f_487[37]), func_227(4), func_227(47), 1))
				{
					ENTITY::STOP_ENTITY_ANIM(&(uParam0->f_487[37]), func_227(47), func_227(4), -8f);
				}
				func_1214(&(uParam0->f_487[37]), 0, 1);
				PHYSICS::_0x10DAA76CB8A201A1(uParam0->f_687.f_3);
				func_1208(&(uParam0->f_687), 9);
			}
			break;
		case 9:
			if (func_609(Global_35, 1, 12))
			{
				if (func_576(Global_35, 1, 12) >= 0.77f)
				{
					func_1210(uParam0->f_687.f_3, Global_35);
					func_1211(uParam0->f_687.f_3, &(uParam0->f_487[33]), 0.03f, 0.11f, 0.3f, 0, (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else if (func_576(Global_35, 1, 12) >= 0.2f)
				{
					func_1210(uParam0->f_687.f_3, &(uParam0->f_487[37]));
					func_1211(uParam0->f_687.f_3, Global_35, 0f, 0f, 0f, "SKEL_L_Finger12", (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else if (func_576(Global_35, 1, 12) >= 0.1f)
				{
					func_1211(uParam0->f_687.f_3, Global_35, 0f, 0f, 0f, "SKEL_L_Finger12", (PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_687.f_3) - 1), 1);
				}
				else
				{
					func_1210(uParam0->f_687.f_3, Global_35);
				}
			}
			if (func_1215(uParam0, 2, 37))
			{
				func_571(&(uParam0->f_487[37]), 1);
			}
			if (func_619(uParam0, 30))
			{
				func_1208(&(uParam0->f_687), 11);
			}
			break;
		case 11:
			if (uParam0->f_687 >= 3)
			{
				func_1210(uParam0->f_687.f_3, &(uParam0->f_487[35]));
				func_1208(&(uParam0->f_687), 12);
			}
			break;
		case 12:
			break;
	}
}

bool func_652(var uParam0, int iParam1)
{
	return ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_552[iParam1]), 0);
}

int func_653(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_1216(iVar0, 0)))
		{
			if (func_1217(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_654(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 11;
	while (iVar1 <= 18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_40[iVar1])))
		{
			func_1218(uParam0->f_40[iVar1], 0);
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

float func_655(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_656(var uParam0, bool bParam1)
{
	func_1003(uParam0, 2048, bParam1);
}

bool func_657(var uParam0)
{
	return func_991(uParam0, 2048);
}

void func_658(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1219() - fParam1);
	func_1220(uParam0, 1);
	func_1221(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_659(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return func_991(uParam0, 65536);
		case 3:
			return func_991(uParam0, 262144);
		case 4:
			return func_991(uParam0, 1048576);
		default:
			break;
	}
	return 0;
}

void func_660(var uParam0, int iParam1)
{
	if (uParam0->f_3 != iParam1)
	{
		uParam0->f_3 = iParam1;
	}
}

void func_661(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35));
	func_646(&(uParam1->f_40[0]), 167, bVar0);
	func_646(&(uParam1->f_40[0]), 59, 1);
	func_646(&(uParam1->f_40[0]), 333, bVar0);
	if (func_666(&(uParam1->f_40[0]), &(uParam1->f_40[1]), 0))
	{
		bVar1 = func_591(&(uParam1->f_40[0]), Global_35, 50f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[0]), !bVar1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[1]), !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[0]), 6, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[0]), 17, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[0]), 58, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[0]), 87, true);
		COMPANION::_0x2917E634206B9E17(&(uParam1->f_40[0]), 1);
		func_271(func_267(0), 0);
	}
	else if (bVar0 && PED::_0x2D64376CF437363E(&(uParam1->f_40[1])))
	{
		if (!func_226(&(uParam1->f_40[0]), 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(&(uParam1->f_40[0]), &(uParam1->f_40[1]), -1, -1, 2f, 1, 0, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[0]), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[1]), true);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(uParam1->f_40[0]), 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(uParam1->f_40[0]), 2f);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(&(uParam1->f_40[0])) && !func_226(&(uParam1->f_40[0]), 501393341))
	{
		TASK::TASK_DISMOUNT_ANIMAL(&(uParam1->f_40[0]), 0, 0, 0, 0, 0);
	}
	if (!func_610(uParam0->f_31[14 /*3*/], 2f, 1, 0))
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(uParam1->f_40[4]), 1.6f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(uParam1->f_40[4]), 1.6f);
		return;
	}
	func_646(&(uParam1->f_40[4]), 167, bVar0);
	func_646(&(uParam1->f_40[4]), 59, 1);
	func_646(&(uParam1->f_40[4]), 333, bVar0);
	if (func_666(&(uParam1->f_40[4]), &(uParam1->f_40[5]), 0))
	{
		bVar1 = func_591(&(uParam1->f_40[4]), Global_35, 50f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[4]), !bVar1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[5]), !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[4]), 6, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[4]), 17, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[4]), 58, !bVar1);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam1->f_40[4]), 87, true);
		COMPANION::_0x2917E634206B9E17(&(uParam1->f_40[4]), 1);
		func_271(func_267(4), 0);
	}
	else if (bVar0 && PED::_0x2D64376CF437363E(&(uParam1->f_40[5])))
	{
		if (!func_226(&(uParam1->f_40[4]), 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(&(uParam1->f_40[4]), &(uParam1->f_40[5]), -1, -1, 2f, 1, 0, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[4]), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam1->f_40[5]), true);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(uParam1->f_40[4]), 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(uParam1->f_40[4]), 2f);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(&(uParam1->f_40[4])) && !func_226(&(uParam1->f_40[4]), 501393341))
	{
		TASK::TASK_DISMOUNT_ANIMAL(&(uParam1->f_40[4]), 0, 0, 0, 0, 0);
	}
}

void func_662(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_1222(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_1125(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1223() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_1224(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1224(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

void func_663(var uParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(uParam0, iParam1, iParam2);
}

void func_664(var uParam0, int iParam1, int iParam2)
{
	func_646(&(uParam0->f_40[iParam1]), 279, 1);
	func_646(&(uParam0->f_40[iParam1]), 280, 1);
	func_1225(&(uParam0->f_40[iParam1]), iParam2, 0);
}

void func_665(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::DOES_GROUP_EXIST(iParam0))
	{
		return;
	}
	iVar0 = PED::_0x13A1B061007C906B(iParam0);
	if (iVar0 != iParam1)
	{
		PED::SET_GROUP_FORMATION(iParam0, iParam1);
	}
}

int func_666(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

void func_667(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_668(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 11;
	while (iVar0 <= 18)
	{
		if (func_591(&(uParam1->f_40[iVar0]), Global_35, 150f, 1))
		{
			if (!func_226(&(uParam1->f_40[iVar0]), -2117564886))
			{
				if (!func_610(uParam0->f_31[6 /*3*/], 30f, 1, 0) && PED::_0x7F9B9791D4CB71F6(&(uParam1->f_40[iVar0]), Global_35, 1, 0) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS(&(uParam1->f_40[iVar0]), 3f);
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_40[iVar0])))
		{
			if ((func_610(uParam0->f_31[6 /*3*/], 30f, 1, 0) && !ENTITY::IS_ENTITY_DEAD(&(uParam1->f_40[iVar0]))) && !ENTITY::IS_ENTITY_ON_SCREEN(&(uParam1->f_40[iVar0])))
			{
				PED::DELETE_PED(uParam1->f_40[iVar0]);
				iVar1 = func_1226(iVar0);
				if (iVar1 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_40[iVar1])))
					{
						PED::DELETE_PED(uParam1->f_40[iVar1]);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_669(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1227(iParam0, 32);
	func_1228();
}

int func_670(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

Vector3 func_671(int iParam0)
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
			return func_1229();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_672(int iParam0, struct<4> Param1, float fParam5, int iParam6, float fParam7, bool bParam8)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam0 == 0)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param1, fParam5, iParam6, fParam7, bParam8, Param1.f_3);
	}
}

Vector3 func_673(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1854.121f, -1833.442f, 42.23f;
				case 1:
					return 1853.181f, -1835.967f, 42.08f;
				case 2:
					return 1849.417f, -1837.232f, 43.1456f;
				case 3:
					return 1852.237f, -1834.174f, 43.2114f;
				case 4:
					return 1851.667f, -1834.536f, 43.22f;
				case 5:
					return 1850.665f, -1838.582f, 43.2875f;
				case 6:
					return 1853.13f, -1835.622f, 43.0861f;
				case 7:
					return 1851.652f, -1836.283f, 43.1655f;
				case 8:
					return 1872.729f, -1871.582f, 38.803f;
				case 9:
					return 1872.613f, -1870.361f, 42.0604f;
				case 10:
					return 1872.729f, -1871.582f, 41.8031f;
				case 11:
					return 1872.715f, -1871.616f, 42.361f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1850.665f, -1838.582f, 43.2875f;
				case 1:
					return 1850.665f, -1838.582f, 43.2875f;
				case 2:
					return 1819.868f, -1812.098f, 47.9294f;
				case 3:
					return 1819.868f, -1812.098f, 47.9294f;
				case 4:
					return 1827.635f, -1808.716f, 46.8184f;
				case 5:
					return 1827.635f, -1808.716f, 46.8184f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1228.311f, -1389.083f, 75.347f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1227.607f, -1386.947f, 75.3254f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1225.056f, -1388.16f, 75.2839f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1282.97f, -1329.29f, 76.5069f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1284.826f, -1333.042f, 77.6169f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1285.517f, -1333.449f, 77.6379f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
				case 6:
					return 1288.604f, -1317.472f, 75.6878f;
				case 7:
					return 1288.936f, -1315.848f, 78.5622f;
				case 8:
					return 1295.14f, -1325.34f, 76.2762f;
				case 9:
					return 1288.684f, -1316.235f, 77.231f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1285.212f, -1311.949f, 77.3398f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1287.708f, -1313.133f, 77.0928f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1299.267f, -1316.643f, 75.5287f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
				case 6:
					return 1288.199f, -1312.921f, 76.8528f;
				case 7:
					return 1288.968f, -1314.061f, 76.1452f;
				case 8:
					return 1288.278f, -1314.884f, 76.1452f;
				case 9:
					return 1287.592f, -1315.702f, 76.1452f;
				case 10:
					return 1285.959f, -1315.588f, 76.8529f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1286.958f, -1321.473f, 76.1364f;
				case 1:
					return 1279.188f, -1331.192f, 76.3773f;
				case 2:
					return 1283.119f, -1325.791f, 76.5221f;
				case 3:
					return 1224.693f, -1356.646f, 70.347f;
				case 4:
					return 1221.632f, -1360.558f, 69.5754f;
				case 5:
					return 1220.293f, -1356.839f, 70.0339f;
				case 6:
					return 1665.751f, -1744.769f, 54.9967f;
				case 7:
					return 1658.241f, -1749.014f, 53.3317f;
				case 8:
					return 1659.451f, -1751.873f, 53.2434f;
				case 9:
					return 1328.839f, -1308.861f, 76.1814f;
				case 10:
					return 1333.077f, -1308.992f, 75.9314f;
				case 11:
					return 1340.116f, -1315.991f, 76.2719f;
				case 12:
					return 1344.93f, -1313.637f, 76.0442f;
				case 13:
					return 1348.91f, -1313.535f, 75.7942f;
				case 14:
					return 1313.987f, -1303.52f, 75.4751f;
				case 15:
					return 1315.845f, -1304.718f, 75.4751f;
				case 16:
					return 1317.008f, -1302.785f, 75.4751f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1819.868f, -1812.098f, 47.9294f;
				case 1:
					return 1827.635f, -1808.716f, 46.8184f;
				case 2:
					return 1227.607f, -1386.947f, 75.3254f;
				case 3:
					return 1225.056f, -1388.16f, 75.2839f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1284.73f, -1333.08f, 75f;
				case 1:
					return 1295.466f, -1326.976f, 75f;
				case 2:
					return 1286.965f, -1316.782f, 76.5f;
				case 3:
					return 1288.818f, -1314.281f, 76.045f;
				case 4:
					return 1288.095f, -1315.166f, 76.045f;
				case 5:
					return 1287.458f, -1314.777f, 77.0447f;
				case 6:
					return 1287.383f, -1315.913f, 76.025f;
				case 7:
					return 1286.682f, -1315.459f, 77.0446f;
				case 8:
					return 1286.218f, -1315.834f, 76.045f;
				case 9:
					return 1286.612f, -1315.148f, 76.9718f;
				case 10:
					return 1226.423f, -1388.662f, 71.5841f;
				case 11:
					return 1286.965f, -1316.782f, 76.5f;
				case 12:
					return 1659f, -1743.935f, 53.04f;
				case 13:
					return 1295.363f, -1325.833f, 76.165f;
				case 14:
					return 1295.036f, -1324.743f, 76.165f;
				case 15:
					return 1295.768f, -1325.178f, 76.165f;
				case 16:
					return 1288.362f, -1316.985f, 75.581f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1850.64f, -1831.084f, 43.7936f;
				case 1:
					return 1856.537f, -1827.593f, 43.7769f;
				case 2:
					return 1864.604f, -1859.801f, 42.1066f;
				case 3:
					return 1866.967f, -1849.354f, 42f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1278.16f, -1312.19f, 75.9417f;
				case 1:
					return 1302.444f, -1306.99f, 75.6625f;
				case 2:
					return 1275.817f, -1304.436f, 75.3857f;
				case 3:
					return 1269.311f, -1309.146f, 75.429f;
				case 4:
					return 1285.293f, -1321.281f, 76.0873f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1231.319f, -1272.271f, 74.947f;
				case 1:
					return 1242.892f, -1255.462f, 73.512f;
				case 2:
					return 1275.844f, -1273.989f, 74.1435f;
				case 3:
					return 1257.124f, -1296.946f, 75.2074f;
				case 4:
					return 1250.768f, -1281.653f, 75.2718f;
				case 5:
					return 1231.939f, -1273.814f, 74.947f;
				case 6:
					return 1244.74f, -1253.985f, 73.512f;
				case 7:
					return 1275.119f, -1275.456f, 74.1435f;
				case 8:
					return 1255.746f, -1297.952f, 75.2074f;
				case 9:
					return 1252.059f, -1281.341f, 75.2718f;
				case 10:
					return 1294.071f, -1293.788f, 76.2873f;
				case 11:
					return 1311.503f, -1276.038f, 75.6115f;
				case 12:
					return 1321.668f, -1294.244f, 76.2537f;
				case 13:
					return 1300.012f, -1298.963f, 76.2873f;
				case 14:
					return 1341.856f, -1267.556f, 76.8004f;
				case 15:
					return 1353.167f, -1271.844f, 77.0164f;
				case 16:
					return 1381.175f, -1294.115f, 76.2502f;
				case 17:
					return 1363.415f, -1309.869f, 76.2937f;
				case 18:
					return 1332.951f, -1296.247f, 79.4686f;
				case 19:
					return 1382.594f, -1319.632f, 76.5855f;
				case 20:
					return 1398.04f, -1332.995f, 76.925f;
				case 21:
					return 1411.925f, -1308.848f, 76.9018f;
				case 22:
					return 1397.915f, -1296.422f, 76.8687f;
				case 23:
					return 1356.897f, -1307.054f, 76.9818f;
				case 24:
					return 1360.498f, -1308.146f, 76.9818f;
				case 25:
					return 1358.22f, -1323.62f, 76.6151f;
				case 26:
					return 1360.15f, -1368.508f, 78.3813f;
				case 27:
					return 1360.621f, -1389.984f, 78.8609f;
				case 28:
					return 1333.506f, -1382.241f, 79.529f;
				case 29:
					return 1343.535f, -1350.851f, 77.4349f;
				case 30:
					return 1359.91f, -1324.911f, 76.6151f;
				case 31:
					return 1359.673f, -1367.094f, 78.3813f;
				case 32:
					return 1358.782f, -1391.058f, 78.8609f;
				case 33:
					return 1335.014f, -1382.442f, 79.529f;
				case 34:
					return 1345.711f, -1351.49f, 77.4349f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_674(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 26.03f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 0f;
				case 5:
					return 57.82f;
				case 6:
					return 38.03f;
				case 7:
					return 4.73f;
				case 8:
					return 0f;
				case 9:
					return 183.9948f;
				case 10:
					return -176.32f;
				case 11:
					return 0f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 57.82f;
				case 1:
					return 57.82f;
				case 2:
					return -113.1942f;
				case 3:
					return -113.1942f;
				case 4:
					return -154.1319f;
				case 5:
					return -154.1319f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.92f;
				case 1:
					return -37.92f;
				case 2:
					return -53.35f;
				case 3:
					return -53.35f;
				case 4:
					return -38.15f;
				case 5:
					return -38.15f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -14.9588f;
				case 1:
					return -37.92f;
				case 2:
					return -9.37f;
				case 3:
					return -53.35f;
				case 4:
					return -14.32f;
				case 5:
					return -38.15f;
				case 6:
					return 18.73f;
				case 7:
					return 0f;
				case 8:
					return 15.07f;
				case 9:
					return -2.17f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 221.1245f;
				case 1:
					return -37.92f;
				case 2:
					return -150.45f;
				case 3:
					return -53.35f;
				case 4:
					return 332.5082f;
				case 5:
					return -38.15f;
				case 6:
					return -39.83f;
				case 7:
					return -130.14f;
				case 8:
					return -130.14f;
				case 9:
					return -130.14f;
				case 10:
					return 140.1f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 137.23f;
				case 1:
					return -45.33f;
				case 2:
					return 136.49f;
				case 3:
					return -57.92f;
				case 4:
					return -47.35f;
				case 5:
					return -58.15f;
				case 6:
					return -47.15f;
				case 7:
					return -53.85f;
				case 8:
					return -54.45f;
				case 9:
					return 106.5359f;
				case 10:
					return 98.4891f;
				case 11:
					return 156.4891f;
				case 12:
					return 122.4891f;
				case 13:
					return 94.4891f;
				case 14:
					return 88.4891f;
				case 15:
					return 80.4891f;
				case 16:
					return 94.4891f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -113.1942f;
				case 1:
					return -154.1319f;
				case 2:
					return -53.35f;
				case 3:
					return -38.15f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -40f;
				case 3:
					return -132f;
				case 4:
					return -120f;
				case 5:
					return -144.16f;
				case 6:
					return -130.14f;
				case 7:
					return -149.06f;
				case 8:
					return 150f;
				case 9:
					return 124.28f;
				case 10:
					return 0f;
				case 11:
					return -40f;
				case 12:
					return 126.4f;
				case 13:
					return 15.14f;
				case 14:
					return -162.26f;
				case 15:
					return 74.53f;
				case 16:
					return 130.79f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 209.2047f;
				case 1:
					return 257.0394f;
				case 2:
					return 306.7165f;
				case 3:
					return 133.1102f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 139.3678f;
				case 1:
					return 309.1488f;
				case 2:
					return 19.9618f;
				case 3:
					return 96.9134f;
				case 4:
					return -154.9532f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 476.339f;
				case 1:
					return 386.339f;
				case 2:
					return 244.339f;
				case 3:
					return 214.339f;
				case 4:
					return 366.339f;
				case 5:
					return 462.339f;
				case 6:
					return 398.339f;
				case 7:
					return 254.339f;
				case 8:
					return 222.339f;
				case 9:
					return 382.339f;
				case 10:
					return 318.339f;
				case 11:
					return 272.339f;
				case 12:
					return 170.339f;
				case 13:
					return 270.339f;
				case 14:
					return 426.339f;
				case 15:
					return 336.339f;
				case 16:
					return 252.339f;
				case 17:
					return 154.339f;
				case 18:
					return 514.339f;
				case 19:
					return 482.339f;
				case 20:
					return 520.339f;
				case 21:
					return 284.339f;
				case 22:
					return 384.339f;
				case 23:
					return 510.339f;
				case 24:
					return 204.339f;
				case 25:
					return 374.339f;
				case 26:
					return 228.339f;
				case 27:
					return 240.339f;
				case 28:
					return 170.339f;
				case 29:
					return 358.339f;
				case 30:
					return 284.339f;
				case 31:
					return 324.339f;
				case 32:
					return 162.339f;
				case 33:
					return 170.339f;
				case 34:
					return 300.339f;
			}
			break;
	}
	return 0f;
}

void func_675(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_676(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
			return 15;
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

void func_677(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_678(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1230(1) < iParam0)
	{
		iParam0 = func_1230(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_112(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_679(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_66(iParam0);
	if (!func_58(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
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

void func_680(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_681(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_251(iParam0))
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
					iParam4 = func_1231(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_86(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_13(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_1231(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_1232(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_1233(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_1234(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_282(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_29(func_66(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_29(func_289(iParam0), 0))
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

void func_682(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1235(iParam0, bParam3);
	}
	else
	{
		func_1236(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1237(iParam0, bParam3);
	}
	else
	{
		func_1238(iParam0, bParam3);
	}
}

void func_683(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1011(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1239(iParam0))
	{
		if (func_1240(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_191(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_683(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_683(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_191(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_191(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_191(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_191(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_191(iParam5, 129))
	{
		if (func_191(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_191(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_191(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_191(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1239(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_191(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_191(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_684(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1241(iParam0, iParam1);
	return uVar0;
}

void func_685(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_684(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_686(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_1242(iParam2))
		{
			iVar0 = func_1243(iParam2, -1);
			if (func_1244(iParam1, iVar0))
			{
				if (func_1245(iParam1, iVar0))
				{
					if (func_1246(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_1247(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_1248(iParam0, iParam1, 0);
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
			func_59(iParam0, 66, 0);
		}
	}
}

void func_687(int iParam0)
{
	func_1249(iParam0);
	func_1250(iParam0, 0);
}

void func_688(int iParam0, int iParam1)
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

int func_689(int iParam0)
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

void func_690(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_1152(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_1152(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_691(int iParam0, bool bParam1)
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
	if (!func_58(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_50());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_776(iParam0, 1, Global_35);
	}
}

bool func_692()
{
	return func_292(1) < 3;
}

void func_693(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_58(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1251(&iVar0, 1);
				break;
			case 14:
				func_1251(&iVar0, 8);
				func_1251(&iVar1, 4);
				func_1251(&iVar1, 5);
				func_1251(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1251(&iVar0, 8);
				func_1251(&iVar0, 5);
				func_1251(&iVar1, 4);
				func_1251(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_66(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_66(iParam0), iVar1);
	}
}

bool func_694(var uParam0, var uParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (!func_1252())
	{
		return false;
	}
	bVar0 = true;
	if (!AUDIO::_0xD9130842D7226045(func_227(259), 0))
	{
		bVar0 = false;
	}
	if (!func_1253(uParam1))
	{
		bVar0 = false;
	}
	func_259(1);
	if (PED::_0x62DE46F061CAA468() != 19)
	{
		PED::_0xED9582B3DA8F02B4(19);
		bVar0 = false;
	}
	else if (!PED::_0x5E420FF293EE5472())
	{
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[2]), 0))
	{
		uParam1->f_1111.f_40[2] = Global_35;
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[0]), 0))
	{
		uParam1->f_1111.f_40[0] = func_239(func_267(0), 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, -2040275819, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[4]), 0))
	{
		uParam1->f_1111.f_40[4] = func_239(func_267(4), 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, -922193456, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[3]), 0))
	{
		Var1 = { func_625(0, 5) };
		uParam1->f_1111.f_40[3] = func_1254(Var1, Var1.f_3, 1, 1, 0, 1, 1);
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[1]), 0))
	{
		uParam1->f_1111.f_40[1] = func_1255(func_267(0), 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		bVar0 = false;
	}
	if (!func_29(&(uParam1->f_1111.f_40[5]), 0))
	{
		uParam1->f_1111.f_40[5] = func_1255(func_267(4), 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		bVar0 = false;
	}
	if (!func_268(&(((*Global_1360165)[func_267(0) /*1157*/])->f_12), 16))
	{
		func_269(func_267(0), 1);
		bVar0 = false;
	}
	if (!func_268(&(((*Global_1360165)[func_267(4) /*1157*/])->f_12), 16))
	{
		func_269(func_267(4), 1);
		bVar0 = false;
	}
	if (bVar0)
	{
		func_260(&(uParam1->f_1111), 1);
		func_1179(&(uParam1->f_730.f_276), Global_35, "ARTHUR", 0);
		func_1179(&(uParam1->f_730.f_276), &(uParam1->f_1111.f_40[0]), func_1256(func_267(0)), 0);
		func_1179(&(uParam1->f_730.f_276), &(uParam1->f_1111.f_40[4]), func_1256(func_267(4)), 0);
		func_1152(&(uParam1->f_1111.f_40[0]), joaat("weapon_revolver_cattleman"), 0, 1, 14, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		func_1152(&(uParam1->f_1111.f_40[4]), joaat("weapon_revolver_cattleman"), 0, 1, 14, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		uParam0->f_4 = &uParam1->f_1111.f_40[3];
		func_571(&(uParam1->f_1111.f_40[3]), 0);
		ENTITY::SET_ENTITY_INVINCIBLE(&(uParam1->f_1111.f_40[1]), true);
		ENTITY::SET_ENTITY_INVINCIBLE(&(uParam1->f_1111.f_40[5]), true);
		func_271(func_267(0), 1);
		func_271(func_267(4), 1);
		Global_1430231->f_2 = 1;
		func_1257();
		func_248(64);
		func_276(0);
		func_1258(70);
		func_277(1);
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 2116153146))
		{
			UILOG::_UILOG_ADD_ENTRY_HASH(3, 2116153146, func_228(0, 11), 1492523666, 835736364, iVar5);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, 2116153146, 623155783, 676312963);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, 2116153146, -377947604, -1524039902);
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -485522501, "CABR01_CHALL_1", 0, 1, 0);
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, 2116153146, -1964527373, "MISS_CHALL_TIME_5_45", 0, 1, 0);
		}
	}
	return bVar0;
}

int func_695(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_696(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_713(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_697(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_703(iParam0))
	{
		return;
	}
	iVar0 = func_702(iParam0);
	func_1259(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1260(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1261(iParam0, 0);
	func_758(iParam0);
}

void func_698(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_695(iParam0);
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
	func_1262(&Var0);
	func_1263(iParam0, Var0);
	func_1264(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1265(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1266(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1267(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1268(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1269(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1270(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1271(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1272(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

void func_699(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_700(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_701(vector3 vParam0)
{
	return func_1273(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_702(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_703(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_704(int iParam0)
{
	int iVar0;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_703(iParam0))
	{
		return 0;
	}
	iVar0 = func_702(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_705(int iParam0)
{
	int iVar0;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_703(iParam0))
	{
		return 0;
	}
	iVar0 = func_702(iParam0);
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

void func_706(int iParam0)
{
	int iVar0;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_703(iParam0))
	{
		return;
	}
	iVar0 = func_702(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_707(int iParam0, int iParam1)
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
	func_1274(iParam0);
	func_1274(iParam0);
	func_1275(iParam0, iParam1);
	func_1276(iParam0, iParam1);
	func_1277(iParam0, iParam1);
	iVar1 = func_702(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1278(iVar1);
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
	iVar3 = func_702(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1278(iVar3);
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
	func_1228();
}

int func_708()
{
	int iVar0;

	iVar0 = func_1279();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_709()
{
	int iVar0;

	iVar0 = func_1279();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1280(0);
}

void func_710(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_711(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_712(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_713(int iParam0)
{
	iParam0 = func_695(iParam0);
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

void func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1281(&iVar0, &iVar1, &iVar2);
	func_1282(iParam0, iVar0);
	func_1283(iParam0, iVar1);
	func_1284(iParam0, iVar2);
	func_1285(iParam0, 1);
	func_1286(iParam0, 1);
}

void func_715(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1287(iParam0, 1);
}

void func_716(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_695(iParam0);
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

int func_717(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1288(iParam0, 1);
}

struct<2> func_718(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1289(iParam0, &uVar2))
	{
	}
	if (!func_1290(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_719()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1291(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1291(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1291(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1291(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1291(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1291(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_720(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1292(iParam0);
	func_1293(iParam0, uParam1);
	func_1294(iParam0);
	func_1295(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1296(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

int func_721(int iParam0)
{
	iParam0 = func_695(iParam0);
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

void func_722(int iParam0)
{
	iParam0 = func_695(iParam0);
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

void func_723(int iParam0)
{
	int iVar0;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_724(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_758(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_758(iParam0);
	}
}

int func_724(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_725(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_7;
	func_641(&(Local_18.f_565), 1);
	Global_1879514->f_11 = func_1297();
	switch (iVar0)
	{
		case 0:
			return func_1298(&uLocal_1250);
		case 1:
			return func_1299(&uLocal_1250);
		case 2:
			return func_1300(&uLocal_1250);
		case 3:
			return func_1301(&uLocal_1250);
		case 4:
			return func_1302(&uLocal_1250);
		case 5:
			return func_1303(&uLocal_1250);
		default:
			break;
	}
	return 0;
}

void func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_87(0, 0, 1) || iParam0)
	{
		iVar0 = func_800();
		iVar1 = func_803(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_1304(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_1304(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

bool func_727()
{
	return &Global_1935436 == 1;
}

bool func_728()
{
	return &Global_1935436 == 2;
}

void func_729(float fParam0)
{
	func_1305(10, fParam0);
}

void func_730()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

void func_731(int iParam0, bool bParam1)
{
	if (func_108() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_20(32768))
	{
		return;
	}
	if (!func_20(32768))
	{
		func_1306(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_20(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_106();
	}
}

int func_732(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_733(int iParam0, int iParam1)
{
	var uVar0;

	return func_1307(&uVar0, iParam0, iParam1);
}

void func_734(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_461(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_1308(1);
	}
}

void func_735(int iParam0, vector3 vParam1, var uParam4)
{
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_7 = { vParam1 };
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_13 = uParam4;
	((*Global_2621440)[iParam0 /*12065*/])->f_9 = 5;
	((*Global_2621440)[iParam0 /*12065*/])->f_9.f_15 = func_188(vParam1, 1);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_cs_billsingle01x");
		case 1:
			return joaat("p_cs_billstack01x");
		case 2:
			return 242358089;
		case 3:
			return joaat("p_bottlejd01x");
		case 4:
			return joaat("p_chair_crate02x");
		case 5:
			return joaat("p_chairfolding02x");
		case 6:
			return -1611207257;
		case 7:
			return 1663466431;
		case 8:
			return joaat("p_detonator01x");
		case 9:
			return joaat("p_gen_documentfolder01x");
		case 10:
			return joaat("p_stickydymt_bundle");
		case 11:
			return joaat("p_cs_fusespool01x");
		case 12:
			return 1184093122;
		case 13:
			return 1604166241;
		case 14:
			return 432839080;
		case 15:
			return 737252554;
		case 16:
			return 891692655;
		case 17:
			return joaat("w_melee_knife02");
		case 18:
			return joaat("s_m_m_ambientlawrural_01");
		case 19:
			return 1072019803;
		case 20:
			return -2040421904;
		case 21:
			return joaat("p_moneystack01x");
		case 22:
			return joaat("s_m_m_ambientlawrural_01");
		case 23:
			return joaat("w_revolver_cattleman01");
		case 24:
			return joaat("w_shotgun_doublebarrel01");
		case 25:
			return joaat("p_cs_unclehat01x");
		case 26:
			return 906000539;
		case 27:
			return 292662918;
		case 28:
			return 230276839;
		case 29:
			return -1451297983;
		case 30:
			return 14669240;
		case 31:
			return 1408938498;
		default:
			break;
	}
	return 0;
}

bool func_737(var uParam0, int iParam1)
{
	return func_1309(uParam0, iParam1, 1);
}

void func_738(var uParam0, int iParam1, bool bParam2)
{
	func_1310(uParam0, iParam1, 1, bParam2);
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	if (func_1043(iParam1, iParam2))
	{
		if (func_1068(uParam0, iParam1, iParam2))
		{
			func_1311(uParam0, iParam1, iParam2);
		}
	}
}

char* func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_cs_billsingle01x";
		case 1:
			return "p_cs_billsingle01x^1";
		case 2:
			return "p_cs_billsingle01x^2";
		case 3:
			return "p_cs_billsingle01x^3";
		case 4:
			return "p_cs_billsingle01x^4";
		case 5:
			return "p_cs_billstack01x";
		case 6:
			return "p_cs_billstack01x^1";
		case 7:
			return "p_cs_billstack01x^2";
		case 8:
			return "p_cs_billstack01x^3";
		case 9:
			return "p_cs_billstack01x^4";
		case 10:
			return "p_cs_billstack01x^5";
		case 11:
			return "p_cs_billstack01x^6";
		case 12:
			return "p_cs_billstack01x^7";
		case 27:
			return "s_pickup_bond01x";
		case 28:
			return "p_bottleJD01x";
		case 29:
			return "p_chair_crate02x";
		case 30:
			return "p_chairfolding02x";
		case 31:
			return "s_pickup_coincup01x";
		case 32:
			return "s_pickup_coincup02x";
		case 33:
			return "p_detonator01x";
		case 35:
			return "p_StickyDymt_bundle";
		case 36:
			return "p_StickyDymt_bundle^1";
		case 37:
			return "p_cs_fusespool01x";
		case 39:
			return "s_pickup_goldbar01x";
		case 40:
			return "s_pickup_goldbar02x";
		case 41:
			return "s_pickup_jewelrybag01x";
		case 42:
			return "s_pickup_jewelrybag02x";
		case 44:
			return "s_mp_moneybag02x";
		case 45:
			return "s_mp_moneybag02x^1";
		case 46:
			return "p_moneyStack01x";
		case 47:
			return "w_revolver_cattleman01";
		case 48:
			return "w_shotgun_sawed01";
		case 49:
			return "p_cs_unclehat01x";
		case 50:
			return "s_vault_med_r_val01x";
		case 51:
			return "s_vault_med_r_val02x";
		case 52:
			return "s_vault_med_r_val01x";
		case 53:
			return "s_vault_sml_l_val01x";
		case 54:
			return "s_vault_sml_r_val01x";
		default:
			break;
	}
	return "";
}

void func_741(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
	{
		return;
	}
	if (!func_1149(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1312(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_264, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_264, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_264, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_264, sParam2, iParam1);
		}
	}
}

char* func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CharlesSmith";
		case 1:
			return "Horse_01^2";
		case 2:
			return "ARTHUR";
		case 3:
			return "Horse_01^1";
		case 4:
			return "uncle";
		case 5:
			return "Horse_01";
		case 6:
			return "S_M_M_AmbientLawRural_01";
		default:
			break;
	}
	return "";
}

void func_743(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1313(iParam0, 0, 0);
	if (func_1314(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1315(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1316(iParam0, 1);
			}
			else
			{
				func_1317(iParam0, 1);
			}
		}
		else
		{
			func_1318(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_1319())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_744(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (func_193(-1741667789))
				{
					func_747(-1741667789);
				}
			}
			else if (!func_193(-1741667789))
			{
				func_746(-1741667789);
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	GRAPHICS::_0xBFCB17895BB99E4E(iVar1, bParam1);
	if (GRAPHICS::_0x113857D66A9CABE6(iVar1))
	{
	}
	GRAPHICS::_0x67B0778C62E74423(!bParam1);
	GRAPHICS::_0x6C03118E9E5C1A14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (func_193(-1799960545))
			{
				func_747(-1799960545);
			}
		}
		else if (!func_193(-1799960545))
		{
			func_746(-1799960545);
		}
	}
}

void func_745(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		if (!AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
		{
			AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 1);
		}
	}
	else if (AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
	{
		AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 0);
	}
}

void func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_505(iParam0, 1);
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

void func_747(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_505(iParam0, 1);
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

void func_748()
{
	func_747(-939420910);
	func_747(-1187950766);
	func_747(356365161);
	func_747(753127042);
	func_747(-2038424081);
	func_747(1884271742);
	func_747(459290420);
}

void func_749()
{
	func_747(704802028);
	func_747(588987611);
	func_747(2008888900);
	func_747(1649996811);
	func_747(227918160);
	func_747(168171957);
	func_747(1193080109);
	func_747(-491981251);
	func_747(-639037538);
	func_747(-618620429);
}

void func_750(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_751(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

void func_752(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

int func_754(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			return func_1320(uParam0, iParam1, 1);
		case 1:
			return func_1320(uParam0, iParam1, 2);
		case 2:
			return func_1320(uParam0, iParam1, 4);
		case 3:
			return func_1320(uParam0, iParam1, 8);
		default:
			break;
	}
	return 0;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1653067266;
		case 1:
			return 1312911644;
		case 2:
			return -265605994;
		case 3:
			return 1268180497;
		default:
			break;
	}
	return -1;
}

int func_756(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_757(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_757(int iParam0)
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

void func_758(int iParam0)
{
	iParam0 = func_695(iParam0);
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

bool func_759(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_760(int iParam0)
{
	if (!func_759(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_761(int iParam0)
{
	return iParam0 != 0;
}

int func_762(int iParam0)
{
	if (!func_759(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_763()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_764()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_765()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_766()
{
	Global_1934266->f_78.f_63 = 0;
}

void func_767(int iParam0, int iParam1)
{
	if (!func_1321(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_768(int iParam0)
{
	int iVar0;

	if (!func_251(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1322(iParam0);
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

void func_769(int iParam0)
{
	if (func_58(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_66(iParam0)))
		{
			func_480(iParam0, 67108864, 1);
			func_282(iParam0, 19, 1);
		}
	}
}

float func_770(int iParam0)
{
	if (!func_251(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_66(iParam0);
	iVar1 = func_283(iParam0, 0);
	func_1323(iParam0, iVar0);
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

int func_772(int iParam0)
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_773(int iParam0)
{
	if (!func_251(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_774(int iParam0, int iParam1, bool bParam2)
{
	if (!func_251(iParam0))
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

int func_775(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_251(iParam0))
	{
		return 0;
	}
	iVar0 = func_289(iParam0);
	if (func_29(iVar0, 0))
	{
		if (func_29(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_772(iParam0)) || func_773(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1324(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1325(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1326(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_1327(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1327(iParam0, 0));
					func_1328(iParam0);
				}
			}
			else
			{
				if (func_280(iParam0, 32768, 1))
				{
					iVar2 = func_1327(iParam0, 0);
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
		if (func_29(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_280(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1326(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_1327(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_1327(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1326(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1329(iParam0, 0);
	return 1;
}

void func_776(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!func_238(iParam0))
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
	iVar0 = func_66(iParam0);
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
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_190(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1330())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_777(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_1331(&iVar1, -2147483648);
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

int func_778(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_108() != -1)
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

int func_779(int iParam0)
{
	if (!func_251(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_292(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

void func_780(int iParam0, int iParam1)
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
			func_1332((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1332(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_70(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_77(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

int func_781(int iParam0)
{
	int iVar0;

	iVar0 = func_297(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1333(iVar0);
}

int func_782(int iParam0, int iParam1)
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
			func_1334(iVar2);
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

void func_783()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_784(int iParam0, int iParam1, bool bParam2)
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

int func_785(bool bParam0)
{
	if (func_108() == -1)
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

int func_786(int iParam0)
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

void func_787(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_788(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_789(int iParam0)
{
	int iVar0;
	int iVar1;

	func_798(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_790(var uParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(uParam0);
	if (iParam1 == 1)
	{
		func_791(1);
	}
}

void func_791(bool bParam0)
{
	if (bParam0)
	{
		func_1110(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_1335(&(Global_40.f_12018.f_42), 1);
	}
}

int func_792(int iParam0)
{
	if (!func_70(iParam0))
	{
		return -15;
	}
	return func_1336(iParam0);
}

bool func_793(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_473(iParam1) || !func_473(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_794(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_795(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_796(int iParam0)
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

int func_797(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_798(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1337(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_799(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_800()
{
	int iVar0;

	iVar0 = func_325();
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

int func_801(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_108() != -1)
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
	fVar1 = func_1304(MISC::ABSF(fVar1) < 1f, func_1304(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_802()
{
	if (func_108() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_803(int iParam0)
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

int func_804()
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

void func_805(int iParam0, bool bParam1, int iParam2)
{
	func_1338((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1339(iParam0);
}

void func_806(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1340(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_807(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1341(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1342(iVar5, &iVar2, &iVar0))
			{
				if (!func_346(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1343(iVar2);
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
							if (func_365(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_800() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_800() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1344();
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

char* func_808(int iParam0)
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

bool func_809(int iParam0)
{
	return func_365(iParam0) == -427144552;
}

int func_810(int iParam0)
{
	var uVar0;

	if (func_108() != -1)
	{
		return 0;
	}
	if (func_367(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_815(iParam0, &uVar0, 1, 0, 0);
	}
	return func_159(iParam0, 1, 0);
}

void func_811(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_365(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_372(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_837(iVar0))
	{
		if (func_108() == -1)
		{
			func_373(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_350(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_427(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_812(int iParam0, var uParam1)
{
	int iVar0;

	if (func_366(iParam0, 58855631))
	{
		func_965(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_813(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!func_374(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_785(bParam3), iParam0);
}

int func_814(int iParam0, bool bParam1)
{
	if (func_378(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_785(bParam1), iParam0, 0);
}

int func_815(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1345(&iParam0);
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!func_374(0))
	{
		bParam3 = true;
	}
	if (func_809(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_948(0) };
			Var4.f_9 = -1591664384;
			if (!func_839(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_840(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_949(iParam0, 1))
			{
				if (!func_839(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_840(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1346(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_813(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1347(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_785(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_816(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_366(iParam0, 1399091007))
	{
		func_882(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_817(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1348(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1349(&Var0, func_948(0));
	}
	if (!func_1350(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_892(iVar14);
	return uVar15;
}

int func_818()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_819(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_820(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_108() != -1)
	{
		return;
	}
	iVar0 = func_1351(iParam0);
	fVar1 = func_1352(iParam0);
	if ((Global_1347477->f_117 || !func_368(31)) || !func_1353(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1354(iVar0) >= 7)
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
	func_1355(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_477(MISC::_CREATE_VAR_STRING(6, func_1356(iParam0), fVar1), "itemtype_textures", func_1357(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_821(int iParam0)
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

int func_822(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_980(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_823(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_361() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1358(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1359(), 12);
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
			else if (func_865() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1360(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_865(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1361(), 13);
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
			else if (func_866() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1362(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_866(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_822(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_824(int iParam0, int iParam1, int iParam2)
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

int func_825(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_826(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_827(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1363(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_159(iVar2, 1, 0) || func_1365(func_1364(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_831(func_1363(iVar0))), func_831(func_1363(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_865() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1366(iVar0)), func_1366(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1360() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1366(iVar0)), func_1366(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1366(iVar0)), func_1366(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_875(iParam3, func_1367(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_871(iVar2) - iParam7) >= func_822(iParam3, func_1368(iVar0));
				}
				else
				{
					bVar1 = func_871(iVar2) >= func_822(iParam3, func_1368(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_871(iVar2) + iParam7) >= func_822(iParam3, func_1368(iVar0));
			}
			else
			{
				bVar1 = func_871(iVar2) >= func_822(iParam3, func_1368(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1369(iVar2)), func_1369(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1370(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1371(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1371(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_866() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1372(iVar0)), func_1372(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1362() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1372(iVar0)), func_1372(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1372(iVar0)), func_1372(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_875(iParam3, func_1367(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_871(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1373(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1373(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1374(iVar2)), func_1374(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_828(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1361() >= 13)
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

int func_829(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_70(func_71(0)) && ((func_1375(0) == 1 || func_1375(0) == 8) || func_1375(0) == 6))
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

var func_830(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_831(int iParam0)
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

int func_832(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_833(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_834(int iParam0)
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

void func_835(int iParam0)
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
			func_1376(1);
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
			func_1377(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1377(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1377(3);
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
			func_1378(1);
			break;
		case 34:
			func_1379(1);
			break;
		case 35:
			func_1380(1);
			break;
		case 36:
			break;
		case 37:
			func_1381(0);
			break;
		case 38:
			func_1382(0);
			break;
		case 39:
			func_1383(0);
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
			if ((!&Global_1879534 && func_344()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_484("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_137(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_344()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_484("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_137(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_344()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_484("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_137(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_344()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_484("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_137(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_108() == -1)
			{
				if (!func_905(99217379) || func_1384(99217379) == 2110595215)
				{
					if (func_802())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_159(iVar0, 1, 0))
					{
						func_420(iVar0, 1, 752097756);
					}
					func_399(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_108() == -1)
			{
				if (!func_159(1013902307, 1, 0))
				{
					func_420(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_108() == -1)
			{
				if (!func_159(1013902307, 1, 0))
				{
					func_420(1013902307, 1, 752097756);
				}
				if (!func_159(142640135, 1, 0))
				{
					func_420(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_108() == -1)
			{
				if (!func_159(786809402, 1, 0))
				{
					func_420(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_108() == -1)
			{
				if (!func_159(786809402, 1, 0))
				{
					func_420(786809402, 1, 752097756);
				}
				if (!func_159(-518019409, 1, 0))
				{
					func_420(-518019409, 1, 752097756);
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
			func_1385();
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

int func_836(int iParam0)
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

int func_837(int iParam0)
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

int func_838(int iParam0, int iParam1)
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

bool func_839(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1347(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_840(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1386(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_841(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_346(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_785(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_842(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1387(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_952(*uParam1, &Var0, bParam6, 0))
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
	if (!func_374(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_785(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_843(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1388(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_844(int iParam0)
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
	iVar2 = func_106();
	func_146(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_845(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1389(iParam0))
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

bool func_846(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_847(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_848(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_368(50))
			{
				if (!func_368(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_368(51))
			{
				if (!func_368(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_849(int iParam0, int iParam1, var uParam2)
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

	if (!func_346(iParam1, 0))
	{
		return 0;
	}
	if (func_365(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_108() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_370(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_445(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_366(iParam1, 866047851))
	{
		iVar5 = func_446(iVar4, 1);
		if (func_1390(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_370(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_366(iParam1, -1638171711))
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
			if (func_1391(1868067663, &uVar0))
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
				iVar10 = func_1392(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1392(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_370(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_366(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_850()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_851()
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

int func_852()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_159(func_1393(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_853(int iParam0)
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

int func_854(int iParam0, int iParam1)
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
	if (func_159(iVar0, 1, 0) && func_159(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_855(int iParam0)
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

int func_856(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1394(iParam0);
	if (iVar0 != -15)
	{
		func_146(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_474(iVar0, 1);
	}
	return 0;
}

void func_857(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_477(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_858(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_969())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_477(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1395(iVar0);
			func_1396(iVar0, 0, 0);
		}
		func_477(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_383(func_112(1644987397), iVar1);
	}
}

void func_859(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_860(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_861(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_862(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_863(int iParam0)
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
	iVar1 = func_871(iVar9);
	iVar2 = func_871(iVar10);
	iVar3 = func_871(iVar11);
	iVar5 = func_872(iVar9);
	iVar6 = func_872(iVar10);
	iVar7 = func_872(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_871(iVar12);
		iVar8 = func_872(iVar12);
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

void func_864(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_865()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1397(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_866()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_867(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1373(iVar0))
		{
			*iParam2++;
		}
		if (func_1373(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1373(iVar0))
		{
			*iParam2++;
		}
		if (func_1373(iVar1))
		{
			*iParam2++;
		}
		if (func_1373(iVar0) && func_1373(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1373(iVar0))
		{
			*iParam2++;
		}
		if (func_1373(iVar1))
		{
			*iParam2++;
		}
		if (func_1373(iVar2))
		{
			*iParam2++;
		}
		if ((func_1373(iVar0) && func_1373(iVar1)) && func_1373(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1373(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1373(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1373(iVar0))
		{
			*iParam2++;
		}
		if (func_1373(iVar1))
		{
			*iParam2++;
		}
		if (func_1373(iVar2))
		{
			*iParam2++;
		}
		if (func_1373(iVar3))
		{
			*iParam2++;
		}
		if (((func_1373(iVar0) && func_1373(iVar1)) && func_1373(iVar2)) && func_1373(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_868(int iParam0)
{
	if (!func_1398(iParam0))
	{
		func_1400(func_1399(iParam0));
	}
}

int func_869()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1398(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_870(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_871(iVar9);
	iVar2 = func_871(iVar10);
	iVar3 = func_871(iVar11);
	iVar5 = func_872(iVar9);
	iVar6 = func_872(iVar10);
	iVar7 = func_872(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_871(iVar12);
		iVar8 = func_872(iVar12);
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

int func_871(int iParam0)
{
	int iVar0;

	if (func_159(iParam0, 1, 0))
	{
		iVar0 = func_350(iParam0, 0, 0);
	}
	return iVar0;
}

int func_872(int iParam0)
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

int func_873(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_874(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_875(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_980(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_876(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_875(iParam1, 5) || iParam0 == func_875(iParam1, 6)) || iParam0 == func_875(iParam1, 7)) || iParam0 == func_875(iParam1, 8)) || iParam0 == func_875(iParam1, 9))
	{
		func_867(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_362(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_364(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_877(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_875(iParam1, 5) || iParam0 == func_875(iParam1, 6)) || iParam0 == func_875(iParam1, 7)) || iParam0 == func_875(iParam1, 8)) || iParam0 == func_875(iParam1, 9))
	{
		if (func_867(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_362(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_364(51, 0, 0, iVar0, func_822(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_362(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_364(51, 0, 0, iVar0, func_822(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_878()
{
	if (func_13(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_879(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_880(int iParam0)
{
	if (!func_1401(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_881(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_882(int iParam0, var uParam1, var uParam2)
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
			Jump @526; //curOff = 333
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			Jump @526; //curOff = 352
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			Jump @526; //curOff = 371
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			Jump @526; //curOff = 390
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			Jump @526; //curOff = 409
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			Jump @526; //curOff = 428
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			Jump @526; //curOff = 447
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			Jump @526; //curOff = 466
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			Jump @526; //curOff = 485
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			Jump @526; //curOff = 504
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
		}

int func_883(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1402();
	if (iParam2 == 39)
	{
		Var0 = { func_458(iParam0, 1, 0) };
		iParam2 = func_446(func_459(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_366(iParam0, 866047851) && func_1390(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_885(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1403(func_953(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1404(iParam2);
	func_1405(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_934(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_934(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_940(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1406(iParam0, iParam2, iParam1, func_108() != -1);
	if (bParam4)
	{
		func_1407(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1407(&(Global_1946804->f_1378), 1, 0);
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
				func_1408(func_953(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_884(bool bParam0, bool bParam1, bool bParam2)
{
	func_1409(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_885(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_886()
{
	func_1410(&(Global_1946804->f_2776));
	func_1411(32768);
	func_1408(1108822547, 8, 6);
}

int func_887(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_446(iParam0, 1);
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

void func_888(int iParam0)
{
	struct<4> Var0;

	if (func_1412(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1413(Var0);
}

void func_889(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1413(Var0);
}

int func_890(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_785(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_891(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_892(int iParam0)
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

float func_893()
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

	if (func_1414())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1415(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1415(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1416();
	fVar2 = func_1417();
	fVar3 = func_1418();
	fVar4 = func_1419();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1420()));
	fVar7 = (func_1415(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1421(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1422(3, fVar9, fVar9 > 100f);
	return func_1423(fVar7, -100f, 100f);
}

float func_894()
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

	if (func_1414())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1415(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1415(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1416();
	fVar2 = func_1417();
	fVar3 = func_1418();
	fVar4 = func_1419();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1420()));
	fVar7 = (func_1415(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1421(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1422(2, fVar9, fVar9 > 100f);
	return func_1423(fVar7, -100f, 100f);
}

float func_895()
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

	if (func_1414())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1415(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1424())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1425())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1415(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1416();
	fVar2 = func_1417();
	fVar3 = func_1418();
	fVar4 = func_1419();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1420()));
	fVar7 = (func_1415(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1421(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1422(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1415(0);
	}
	return func_1423(fVar7, -100f, 100f);
}

bool func_896(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_897(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_898(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_346(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_815(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_374(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_785(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_899(int iParam0, bool bParam1)
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
				return func_1426();
			}
			break;
	}
	return 0;
}

int func_900(int iParam0)
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

int func_901(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_902(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_901(iParam0))
	{
		return;
	}
	if (func_1427(iParam0))
	{
		return;
	}
	if (!func_1428(iParam0))
	{
		func_1429(iParam0, 1, 0);
	}
	iVar0 = func_1430(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1431(iParam0, 512))
		{
			func_457(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1432() && !bParam1) && !func_87(0, 0, 1))
	{
		func_486(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1433(iParam0, 6);
	if (bParam2)
	{
		if (!func_87(0, 0, 1))
		{
			func_179(1, 4);
		}
	}
}

bool func_903(int iParam0, bool bParam1)
{
	return func_899(iParam0, 0) < func_1434(iParam0, bParam1);
}

int func_904(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_370(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_905(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_446(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_446(iParam0, 1) /*11*/];
}

void func_906(int iParam0, int iParam1)
{
	if (func_366(iParam1, 130796156))
	{
		func_1435(iParam1, 0);
	}
	else if (func_366(iParam1, 930141731))
	{
		func_1435(iParam1, 1);
		func_1436(iParam0);
	}
}

void func_907(var uParam0, int iParam1)
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

int func_908(int iParam0, var uParam1, var uParam2, var uParam3)
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
	func_1437(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1438(uParam2, iParam0, Var1);
	return 1;
}

int func_909(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_910(int iParam0)
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

int func_911(var uParam0)
{
	var uVar0;

	if (!func_1439(uParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_912()
{
	return !&Global_1911774;
}

void func_913(int iParam0, int iParam1, var uParam2, var uParam3)
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

char* func_914(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_915(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_916(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_917(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((iParam2 && func_108() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1440(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_918(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_108() != -1)
	{
		return false;
	}
	if (func_1440(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_919(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_131(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_920();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1441(2032023096);
		func_134(-615217896);
		func_442(655868243, 1, 1, -142743235, 1);
		func_1443(146323340, func_1442());
		Var0 = { func_719() };
		if (func_1444(&Var0) == -1387633835)
		{
			func_1445(&Var0);
			func_1446(Var0);
		}
		iVar7 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1281(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_712(iVar6) == 2010625508)
			{
				func_1282(iVar6, iVar7);
				func_1283(iVar6, iVar8);
				func_1284(iVar6, iVar9);
				func_1447(iVar6, 0);
				if (func_1448(iVar6))
				{
					func_1449(iVar6);
				}
				iVar10 = func_1450(iVar8);
				func_1451(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_920()
{
	if (!func_1452(-1898635967, func_1442(), 1))
	{
		return 0;
	}
	if (func_150())
	{
		if (!func_1452(146323340, func_1442(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_921()
{
	func_144(joaat("weapon_pistol_volcanic"));
	func_144(joaat("weapon_shotgun_pump"));
	func_144(joaat("weapon_rifle_varmint"));
}

void func_922(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_131(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_131(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_442(-1080874779, 3, 1, -142743235, 1);
		func_442(-223790555, 3, 1, -142743235, 1);
		func_442(1566032147, 3, 1, -142743235, 1);
		func_442(891311852, 5, 1, -142743235, 1);
		func_442(-1353737667, 5, 1, -142743235, 1);
		func_442(-330313895, 5, 1, -142743235, 1);
		func_442(-2051332199, 5, 1, -142743235, 1);
		func_442(1237770824, 5, 1, -142743235, 1);
		func_442(-1795542128, 3, 1, -142743235, 1);
		func_442(-1757588258, 3, 1, -142743235, 1);
		func_442(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1281(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_712(iVar0) == 153881023)
			{
				func_1282(iVar0, iVar1);
				func_1283(iVar0, iVar2);
				func_1284(iVar0, iVar3);
				func_1447(iVar0, 0);
				if (func_1448(iVar0))
				{
					func_1449(iVar0);
				}
				iVar4 = func_1450(iVar2);
				func_1451(iVar0, iVar4);
			}
			iVar0++;
		}
		func_920();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

bool func_923(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_924(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_925()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_890("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_891(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_840(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_892(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_892(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_926(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1453(Param1, iParam5, &Var5, 0))
	{
		func_842(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_898(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1454(Var19, 1);
}

bool func_927()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

int func_928(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1348(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1349(&Var0, func_948(0));
	}
	if (!func_1350(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_891(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_842(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_892(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_929(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_458(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1455(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_841(iParam0, Var0, Var0.f_4, bParam4) };
	return func_842(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_930(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_366(iParam0, 606799272))
		{
			func_1456(iParam0, iParam1);
		}
		if (func_366(iParam0, -1112814642) && func_366(iParam0, -1697809989))
		{
			func_395(iParam0, iParam1, 1, 0);
		}
	}
}

int func_931(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1457(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_370(iParam0) != -999503751)
		{
			func_1458(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_370(iParam0) != -999503751)
	{
		func_1458(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1459(iParam0, 1);
	return 1;
}

void func_932()
{
	int iVar0;

	if (func_108() == -1)
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

void func_933(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1460(0);
	}
	if (bParam0)
	{
		func_945(8);
		func_945(512);
	}
	else
	{
		func_945(8);
		func_945(16);
	}
}

void func_934(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_935(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_448();
	}
	if (func_108() == -1)
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

int func_936(int iParam0)
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

void func_937(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1461(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_953(iVar0, 1);
			if (func_1462(iVar0, iParam1))
			{
				vVar4 = { func_450(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1463(iVar7, 4))
				{
					func_1408(iVar7, 4, 6);
				}
			}
			else
			{
				func_1464(iVar7, 4, 6);
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

int func_938(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_108() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1465(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_939(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_940(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_370(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1462(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1405(iVar1, iVar3);
		}
	}
	if (func_905(-1586649372) && func_1462(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1405(iVar1, iVar3);
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
						func_1405(iVar1, iVar3);
					}
				}
			}
			func_1466(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1466(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1405(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1466(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1405(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1405(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1466(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1466(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1405(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1466(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1405(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1405(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_370(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1405(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_366(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_370(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_370(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1405(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_370(&(uParam0->f_1[iVar1 /*3*/])) || func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1405(iVar1, iVar3);
						}
					}
					break;
			}
		}

bool func_941(int iParam0, int iParam1)
{
	if (func_108() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_942(int iParam0)
{
	if (func_108() != -1)
	{
		if (func_896(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_896(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_896(iParam0, 65536) && !func_896(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_896(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_896(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_944()
{
	return Global_1905944->f_5694;
}

void func_945(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_946(struct<4> Param0)
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
			if (func_1467(Param0))
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
			func_1468(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_945(8);
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
			if (func_1467(Param0))
			{
				return;
			}
			func_1468(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_945(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_889(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_947(bool bParam0)
{
	return func_841(1328661203, func_1469(), -1591664384, bParam0);
}

struct<4> func_948(bool bParam0)
{
	int iVar0;

	iVar0 = func_785(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_841(923904168, func_947(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_841(923904168, func_947(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_841(923904168, func_947(bParam0), -740156546, 0);
}

int func_949(int iParam0, bool bParam1)
{
	if (func_370(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_814(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_950(bool bParam0)
{
	int iVar0;

	iVar0 = func_785(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_841(271701509, func_947(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_841(271701509, func_947(bParam0), 12999093, 0);
}

int func_951(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_370(iParam0);
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

int func_952(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_785(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_953(int iParam0, int iParam1)
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

int func_954(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_955(var uParam0, int iParam1)
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

void func_956(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_957(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_466(*uParam0);
	iVar1 = func_465(*uParam0);
	if (iParam1 < 1 || iParam1 > func_471(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_958(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_959(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_960(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_961(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_962(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_964(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_108() == -1)
	{
		if (func_809(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_965(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_346(iParam0, 0))
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
	*iParam2 = Var0.f_1;
	return 1;
}

int func_966(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1345(&iParam0);
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	if (!func_374(0))
	{
		bParam2 = true;
	}
	iVar0 = func_813(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1347(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_785(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_967(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (func_366(iParam0, -5284486))
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
		if (func_1470(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_428(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_431(iVar62, iVar61);
					if (func_346(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_967(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_967(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1470(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_968(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1230(1);
}

int func_969()
{
	if (func_150())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_970(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1471(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_101(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1471(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_101(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_971()
{
	return Global_40.f_4283.f_325;
}

bool func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_108() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_973(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_974(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_975(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_976(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_977(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_344();
	bVar1 = false;
	if (bVar0 && !func_1472(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1472(37)) && !func_1472(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1472(43)) && !func_1472(44))
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
		if (func_713(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_713(1) == 1)
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

int func_978()
{
	return Global_40.f_1095.f_3054;
}

int func_979(int iParam0)
{
	iParam0 = func_695(iParam0);
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

int func_980(int iParam0, var uParam1)
{
	if (!func_1473(iParam0))
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

int func_981()
{
	if (func_344())
	{
		if (!func_1472(3))
		{
			return func_1474(43);
		}
		if (func_1472(38) && !func_1472(43))
		{
			return func_1475(8);
		}
	}
	return 0;
}

bool func_982(int iParam0)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_1476(iParam0));
}

Vector3 func_983(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	func_980(15, &Var0);
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

int func_984(int iParam0, int iParam1)
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
	iVar0 = func_1477(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_980(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1478(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_985(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1479(iParam0);
	if (func_193(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_986(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_980(15, &Var0))
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

int func_987(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_1480(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1481(5))
	{
		if (func_1482(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_701(vParam0);
	if (bParam6)
	{
		iVar1 = func_188(vParam0, 1);
		if (func_1483(iVar1) || func_1484(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1485(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1486())
	{
		if (func_1487(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1488(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_188(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1489(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1490(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1491(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_344())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1492(vParam0, fParam10) || func_1493(vParam0, fParam10))
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

int func_988(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1494(vParam0, 0f, 0f, 0, 2);
	return func_1494(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_989(int iParam0)
{
	return func_1495(iParam0, 2);
}

char* func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		case 1:
			return ":EVENT_INDEX";
		case 2:
			return ":EVENT_TYPE";
		case 3:
			return ":EVENT_LABEL";
		case 4:
			return ":EVENT_FLAGS";
		case 5:
			return ":EVENT_START";
		case 6:
			return ":EVENT_START_INT";
		case 7:
			return ":EVENT_START_INT2";
		case 8:
			return ":EVENT_END";
		case 9:
			return ":EVENT_END_INT";
		case 10:
			return ":EVENT_END_INT2";
		case 11:
			return ":EVENT_PED_USEAGE";
		case 12:
			return "musicData/entities/entity(%i)";
		case 13:
			return ":INDEX";
		case 14:
			return ":MODEL_NAME";
	}
	return "";
}

bool func_991(var uParam0, int iParam1)
{
	return func_1496(*uParam0, iParam1);
}

int func_992(char* sParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = 184;
			while (iVar0 <= 207)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return 1;
				}
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 208;
			while (iVar0 <= 220)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return 1;
				}
				iVar0++;
			}
			break;
		case 4:
		case 5:
			iVar0 = 221;
			while (iVar0 <= 235)
			{
				if (MISC::ARE_STRINGS_EQUAL(func_227(iVar0), sParam0))
				{
					return 1;
				}
				iVar0++;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_993(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_994()
{
	return func_302(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

Vector3 func_995(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_996(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1497(vParam1, uParam0);
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

void func_997(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 1, bParam2);
}

void func_998(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_999()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
}

struct<8> func_1000(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

var func_1001(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	var uVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1498(sParam0, iParam1, 0, 0, 1, 1);
	}
	uVar0 = func_1499(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(uVar0);
	}
	return func_1498(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1002(var uParam0, int iParam1, bool bParam2)
{
	func_1013(uParam0, iParam1, 4, bParam2);
}

void func_1003(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_991(uParam0, iParam1))
		{
			func_1110(uParam0, iParam1);
		}
	}
	else if (func_991(uParam0, iParam1))
	{
		func_1335(uParam0, iParam1);
	}
}

int func_1004(bool bParam0, var uParam1, var uParam2)
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

int func_1005(int iParam0)
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

Vector3 func_1006(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_500(iParam0))
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

float func_1007(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_1008(int iParam0, var uParam1)
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

int func_1009(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_732(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_1010(var uParam0, int iParam1, int iParam2)
{
	return func_1496(&(uParam0->f_5[iParam1]), iParam2);
}

int func_1011(var uParam0)
{
	return uParam0;
}

bool func_1012(var uParam0, int iParam1, int iParam2)
{
	return func_1496(&(uParam0->f_20[iParam1]), iParam2);
}

void func_1013(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1010(uParam0, iParam1, iParam2))
		{
			func_1110(uParam0->f_5[iParam1], iParam2);
		}
	}
	else if (func_1010(uParam0, iParam1, iParam2))
	{
		func_1335(uParam0->f_5[iParam1], iParam2);
	}
}

void func_1014(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1012(uParam0, iParam1, iParam2))
		{
			func_1110(uParam0->f_20[iParam1], iParam2);
		}
	}
	else if (func_1012(uParam0, iParam1, iParam2))
	{
		func_1335(uParam0->f_20[iParam1], iParam2);
	}
}

int func_1015(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_1016(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

bool func_1017(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 19);
}

int func_1018(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 184;
	while (iVar1 <= 207)
	{
		if (func_538(uParam0, iVar1) && !func_532(uParam0, iVar1))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	else if (!func_1500(uParam0, uParam1, iParam2, iVar0))
	{
		return 0;
	}
	switch (iParam2)
	{
		case 0:
			return (((((((((((((iVar0 == 184 || iVar0 == 185) || iVar0 == 188) || iVar0 == 190) || iVar0 == 191) || iVar0 == 195) || iVar0 == 196) || iVar0 == 197) || iVar0 == 198) || iVar0 == 201) || iVar0 == 202) || iVar0 == 203) || iVar0 == 204) || iVar0 == 207);
		case 2:
			return (((iVar0 == 187 || iVar0 == 189) || iVar0 == 200) || iVar0 == 206);
		case 4:
			return (((iVar0 == 186 || iVar0 == 189) || iVar0 == 199) || iVar0 == 205);
		case 6:
			return iVar0 == 193;
		default:
			break;
	}
	return 0;
}

bool func_1019(var uParam0, int iParam1)
{
	return func_1012(uParam0, iParam1, 2);
}

int func_1020(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!func_1501(1) || !func_993(1))
	{
		return 0;
	}
	iVar0 = 184;
	while (iVar0 <= 207)
	{
		if ((func_538(uParam0, iVar0) && !func_532(uParam0, iVar0)) && func_1500(uParam0, uParam1, iParam2, iVar0))
		{
			return AUDIO::_0x152ED1B56E8F1F50(func_227(iVar0), AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_227(iVar0)));
		}
		iVar0++;
	}
	return 0;
}

void func_1021(var uParam0, int iParam1, bool bParam2)
{
	func_1014(uParam0, iParam1, 2, bParam2);
}

int func_1022(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 11;
		case 0:
			return 3;
		case 4:
			return 15;
		case 6:
			return 10;
		default:
			break;
	}
	return -1;
}

char* func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(115);
		case 1:
			return func_227(116);
		case 2:
			return func_227(117);
		case 3:
			return func_227(118);
		case 4:
			return func_227(119);
		case 5:
			return func_227(120);
		case 6:
			return func_227(121);
		case 7:
			return func_227(122);
		case 8:
			return func_227(123);
		case 9:
			return func_227(124);
		case 10:
			return func_227(125);
		case 11:
			return func_227(126);
		case 12:
			return func_227(127);
		case 13:
			return func_227(128);
		case 14:
			return func_227(129);
		case 15:
			return func_227(130);
		case 16:
			return func_227(132);
		case 17:
			return func_227(133);
		case 18:
			return func_227(134);
		case 19:
			return func_227(135);
		case 20:
			return func_227(136);
		case 21:
			return func_227(137);
		case 22:
			return func_227(138);
		case 23:
			return func_227(139);
		case 24:
			return func_227(140);
		case 25:
			return func_227(141);
		case 26:
			return func_227(142);
		case 27:
			return func_227(143);
		case 28:
			return func_227(144);
		case 29:
			return func_227(145);
		case 30:
			return func_227(146);
		case 31:
			return func_227(147);
		case 32:
			return func_227(148);
		case 33:
			return func_227(149);
		case 34:
			return func_227(150);
		case 35:
			return func_227(151);
		case 36:
			return func_227(152);
		case 37:
			return func_227(153);
		case 38:
			return func_227(154);
		case 39:
			return func_227(155);
		case 40:
			return func_227(156);
		case 41:
			return func_227(157);
		case 42:
			return func_227(158);
		case 43:
			return func_227(159);
		case 44:
			return func_227(160);
		case 45:
			return func_227(161);
		case 46:
			return func_227(163);
		case 47:
			return func_227(165);
		case 48:
			return func_227(167);
		case 49:
			return func_227(169);
		case 50:
			return func_227(171);
		case 51:
			return func_227(173);
		case 52:
			return func_227(174);
		case 53:
			return func_227(175);
		case 54:
			return func_227(176);
		case 55:
			return func_227(177);
		case 56:
			return func_227(178);
		case 57:
			return func_227(179);
		case 58:
			return func_227(180);
		default:
			break;
	}
	return "";
}

bool func_1024(var uParam0, int iParam1)
{
	return func_1496(*uParam0, iParam1);
}

void func_1025(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1024(uParam0, iParam1))
		{
			func_1110(uParam0, iParam1);
		}
	}
	else if (func_1024(uParam0, iParam1))
	{
		func_1335(uParam0, iParam1);
	}
}

int func_1026(int iParam0)
{
	var uVar0;

	uVar0 = func_1502(iParam0);
	if (func_268(&uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_1027(int iParam0)
{
	func_63(iParam0, 8, 1);
}

int func_1028(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1288(iParam0, 32))
	{
		return 1;
	}
	return 0;
}

void func_1029(int iParam0)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1287(iParam0, 32);
	func_1228();
}

int func_1030(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;

	if (func_499(vParam1))
	{
		return 0;
	}
	iVar0 = MAP::_0x554D9D53F696D002(iParam0, vParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0;
	}
	if (bParam5)
	{
		if ((iParam0 == 408396114 || iParam0 == 1259054292) || iParam0 == -308585968)
		{
			MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true) > fParam4)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, -1878373110);
	}
	return iVar0;
}

int func_1031(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return func_991(uParam0, 32768);
		case 3:
			return func_991(uParam0, 131072);
		case 4:
			return func_991(uParam0, 524288);
		default:
			break;
	}
	return 0;
}

bool func_1032(var uParam0)
{
	return func_991(uParam0, 16777216);
}

int func_1033(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::_0x23F74C2FDA6E7C61(iParam1, iParam0);
	}
	else
	{
		MAP::_0xEDD964B7984AC291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
		}
	}
	return iVar0;
}

void func_1034(int iParam0)
{
	Global_1934266->f_78.f_63 = iParam0;
}

void func_1035()
{
	int iVar0;
	struct<17> Var1;

	if (Global_1935630->f_18)
	{
		LAW::_0x9C5BD8C562565CE6(&Var1);
		if (Var1.f_16 || Var1.f_15)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if ((LAW::_0x89E005B1662F6E48(PLAYER::PLAYER_ID(), 1, 0) || LAW::_0x3738B784DDD35CC6(PLAYER::PLAYER_ID(), 1, 0)) || Global_1934266->f_78.f_62 > -1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (Global_1934266->f_78.f_63 > 0)
	{
		iVar0 = Global_1934266->f_78.f_63;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266->f_78.f_1.f_3, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266->f_78.f_19.f_3, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266->f_78.f_37.f_3, iVar0);
}

void func_1036(int iParam0)
{
	Global_1934266->f_78.f_62 = iParam0;
}

void func_1037(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

bool func_1038(var uParam0, int iParam1)
{
	return func_1503(uParam0, iParam1, 1);
}

void func_1039(var uParam0, int iParam1, bool bParam2)
{
	func_1504(uParam0, iParam1, 1, bParam2);
}

void func_1040(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_487[iParam3])) || !func_1052(iParam2, iParam3)) || func_737(uParam1, iParam3)) || (iParam3 == 53 && iParam2 == 4)) || ((iParam3 == 35 || iParam3 == 37) && func_1505(uParam0)))
	{
		return;
	}
	if (func_1053(uParam1, iParam2, iParam3))
	{
		if (func_579(uParam1, iParam2, iParam3, 0) != &uParam1->f_487[iParam3])
		{
			func_580(uParam1, iParam2, iParam3, &(uParam1->f_487[iParam3]), 0);
		}
	}
}

void func_1041(var uParam0, int iParam1, int iParam2)
{
	if (!func_1055(iParam1, iParam2) || (iParam2 == 5 && func_619(uParam0, 30)))
	{
		return;
	}
	if (func_1056(uParam0, iParam1, iParam2))
	{
		if (func_1057(uParam0, iParam1, iParam2, 0) != &uParam0->f_543[iParam2])
		{
			func_585(uParam0, iParam1, iParam2, &(uParam0->f_543[iParam2]), 0);
		}
	}
}

void func_1042(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
		return;
	}
	else if (func_619(uParam0, iParam2))
	{
		func_1311(uParam0, iParam1, iParam2);
		return;
	}
	if (!func_1068(uParam0, iParam1, iParam2))
	{
		if (!func_1506(uParam0, iParam1, iParam2))
		{
			if (func_1507(uParam0, iParam1))
			{
				func_1508(uParam0, iParam1, iParam2);
			}
		}
	}
}

int func_1043(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return ((((((iParam1 == 0 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4) || iParam1 == 5) || iParam1 == 6);
		case 1:
			return (((((iParam1 == 7 || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 6);
		case 2:
			return (((((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 26) || iParam1 == 30);
		case 3:
			return ((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 23) || iParam1 == 24) || iParam1 == 26) || iParam1 == 27);
		case 4:
			return ((((((((((iParam1 == 31 || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || iParam1 == 35) || iParam1 == 36) || iParam1 == 37) || iParam1 == 38) || iParam1 == 39) || iParam1 == 40) || iParam1 == 53);
		case 5:
			return iParam1 == 43;
		case 6:
			return (((iParam1 == 46 || iParam1 == 48) || iParam1 == 50) || iParam1 == 56);
		case 7:
			return ((((iParam1 == 45 || iParam1 == 47) || iParam1 == 49) || iParam1 == 55) || iParam1 == 54);
		case 8:
			return ((iParam1 == 51 || iParam1 == 52) || iParam1 == 57);
		case 9:
			return iParam1 == 58;
		default:
			break;
	}
	return 0;
}

int func_1044(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return ANIMSCENE::_CREATE_ANIM_SCENE(func_1509(iParam0), iParam1, 0, false, true);
	}
	return ANIMSCENE::_CREATE_ANIM_SCENE(func_1509(iParam0), iParam1, func_1023(iParam2), false, true);
}

bool func_1045(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_552[iParam1]), iParam2, iParam3);
}

bool func_1046(var uParam0, int iParam1)
{
	return ANIMSCENE::_0x59606519FF9D3EC2(&(uParam0->f_552[iParam1]), 1);
}

void func_1047(var uParam0, int iParam1)
{
	ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_552[iParam1]));
}

int func_1048(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;

	switch (iParam1)
	{
		case 4:
			vVar0 = { func_625(4, 6) };
			break;
		case 5:
			vVar0 = { func_625(4, 7) };
			break;
		case 6:
			vVar0 = { func_625(4, 8) };
			break;
		case 7:
			vVar0 = { func_625(4, 9) };
			break;
		case 8:
			vVar0 = { func_625(4, 10) };
			break;
		case 9:
			vVar0 = { func_625(7, 16) };
			break;
		default:
			return 1;
	}
	ANIMSCENE::_0xADF1D53F3B1FE0A7(&(uParam0->f_552[iParam1]), &vVar4, &uVar7, 2);
	if (!func_1222(vVar0, vVar4))
	{
		vVar10 = { 0f, 0f, vVar0.f_3 };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(uParam0->f_552[iParam1]), vVar0, vVar10, 2);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1049(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(&(uParam0->f_552[iParam1]), func_1510(iParam2));
}

bool func_1050(var uParam0, int iParam1, int iParam2)
{
	if (!func_1059(iParam1, iParam2))
	{
	}
	else if (!func_560(uParam0, iParam1))
	{
	}
	else if (!func_1049(uParam0, iParam1, iParam2))
	{
	}
	return func_1511(uParam0, iParam1, iParam2);
}

int func_1051(var uParam0, int iParam1, int iParam2)
{
	if (!func_1043(iParam1, iParam2))
	{
	}
	else if (!func_1507(uParam0, iParam1))
	{
	}
	else if (!func_1068(uParam0, iParam1, iParam2))
	{
		if (!func_1506(uParam0, iParam1, iParam2))
		{
			func_1508(uParam0, iParam1, iParam2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1052(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return ((iParam1 == 35 || iParam1 == 37) || iParam1 == 44);
		case 1:
			return iParam1 == 33;
		case 2:
			return ((iParam1 == 33 || iParam1 == 37) || iParam1 == 43);
		case 3:
			return (((iParam1 == 33 || iParam1 == 35) || iParam1 == 44) || iParam1 == 53);
		case 5:
			return iParam1 == 50;
		case 6:
			return ((((iParam1 == 51 || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16);
		case 7:
			return (((((((iParam1 == 52 || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 23);
		case 8:
			return (((iParam1 == 54 || iParam1 == 24) || iParam1 == 25) || iParam1 == 26);
		case 4:
			return ((((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 34) || iParam1 == 44) || iParam1 == 53);
		case 9:
			return iParam1 == 37;
		default:
			break;
	}
	return 0;
}

bool func_1053(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(&(uParam0->f_552[iParam1]), func_1072(iParam2));
}

int func_1054(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_487[iParam2])))
	{
		vVar0 = { func_1512(uParam0, iParam1, iParam2) };
		vVar3 = { func_1513(uParam0, iParam1, iParam2) };
		iVar6 = func_1075(iParam2);
		uParam0->f_487[iParam2] = OBJECT::CREATE_OBJECT(iVar6, vVar0, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(&(uParam0->f_487[iParam2]), vVar3, 2, true);
		func_571(&(uParam0->f_487[iParam2]), 1);
		return 0;
	}
	return 1;
}

int func_1055(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return iParam1 == 2;
		case 2:
		case 3:
			return (iParam1 == 0 || iParam1 == 2);
		case 1:
			return iParam1 == 5;
		case 4:
			return iParam1 == 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return iParam1 == 0;
		default:
			break;
	}
	return 0;
}

bool func_1056(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x6F1F0B17109309DA(&(uParam0->f_552[iParam1]), func_1061(iParam2));
}

int func_1057(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	return ANIMSCENE::_GET_ANIM_SCENE_PED(&(uParam0->f_552[iParam1]), func_1061(iParam2), bParam3);
}

void func_1058(var uParam0, int iParam1)
{
	ANIMSCENE::START_ANIM_SCENE(&(uParam0->f_552[iParam1]));
}

int func_1059(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return iParam1 == 0;
		default:
			break;
	}
	return 0;
}

void func_1060(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_552[iParam1]), func_1510(iParam2), bParam3, false);
}

char* func_1061(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(108);
		case 1:
			return func_227(109);
		case 2:
			return func_227(110);
		case 3:
			return func_227(111);
		case 4:
			return func_227(112);
		case 5:
			return func_227(113);
		case 6:
			return func_227(114);
		default:
			break;
	}
	return "";
}

bool func_1062(int iParam0)
{
	return iParam0 == 15;
}

bool func_1063(int iParam0)
{
	return (((iParam0 == 16 || iParam0 == 17) || iParam0 == 18) || iParam0 == 19);
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
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
		case 16:
			return -1612834106;
		case 1:
		case 3:
		case 17:
		case 18:
		case 19:
			return 665633627;
		default:
			break;
	}
	return -1;
}

Vector3 func_1065(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -129.8942f;
		case 1:
			return 0f, 0f, 50f;
		case 2:
			return 0f, 0f, 50f;
		case 3:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, 42.9092f;
		case 5:
			return 0f, 0f, -60.00001f;
		case 6:
			return 0f, 0f, 140f;
		case 7:
			return 0f, 0f, -22f;
		case 8:
			return 0f, 0f, 20f;
		case 9:
			return 0f, 0f, -129.8565f;
		case 10:
			return 0f, 0f, 50.04242f;
		case 11:
			return 0f, 0f, -130f;
		case 12:
		case 13:
		case 14:
			return 0f, 0f, -40f;
		case 16:
		case 17:
			return 0f, 0f, -130f;
		case 18:
		case 19:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 21.56125f, 12.21044f, 7.860487f;
		case 1:
			return 8f, 8f, 5f;
		case 2:
			return 16f, 8f, 10f;
		case 3:
			return 5f, 5f, 1.5f;
		case 4:
			return 10f, 6f, 5f;
		case 5:
			return 25f, 70f, 10f;
		case 6:
			return 290f, 70f, 15f;
		case 7:
			return 40f, 80f, 10f;
		case 8:
			return 20f, 15f, 10f;
		case 9:
			return 4.655136f, 8.5f, 4.534712f;
		case 10:
			return 4.653793f, 7.809516f, 2.117258f;
		case 11:
			return 1.5f, 1.2f, 1.6f;
		case 12:
		case 13:
		case 14:
			return 0.7f, 0.7f, 2f;
		case 16:
			return 2.5f, 0.5f, 4f;
		case 17:
			return 1f, 1f, 1.5f;
		case 18:
		case 19:
			return 0.75f, 0.75f, 1f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

var func_1067(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return uVar0;
	}
	func_1514(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

bool func_1068(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x23E33CB9F4A3F547(&(uParam0->f_552[iParam1]), func_1023(iParam2));
}

void func_1069(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(uParam0->f_552[iParam1]), func_1023(iParam2), bParam3);
}

char* func_1070(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(0);
		case 1:
			return func_227(1);
		case 2:
			return func_227(2);
		case 3:
			return func_227(4);
		case 4:
			return func_227(3);
		default:
			break;
	}
	return "";
}

char* func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(5);
		case 1:
			return func_227(6);
		case 2:
			return func_227(7);
		case 3:
			return func_227(8);
		case 4:
			return func_227(9);
		case 5:
			return func_227(10);
		case 6:
			return func_227(11);
		case 7:
			return func_227(12);
		case 8:
			return func_227(13);
		case 9:
			return func_227(14);
		case 10:
			return func_227(15);
		case 11:
			return func_227(16);
		case 12:
			return func_227(17);
		case 13:
			return func_227(18);
		case 14:
			return func_227(19);
		case 15:
			return func_227(20);
		case 16:
			return func_227(21);
		case 17:
			return func_227(22);
		case 18:
			return func_227(23);
		case 19:
			return func_227(24);
		case 20:
			return func_227(25);
		case 21:
			return func_227(26);
		case 22:
			return func_227(27);
		case 23:
			return func_227(28);
		case 24:
			return func_227(29);
		case 25:
			return func_227(30);
		case 28:
			return func_227(31);
		case 29:
			return func_227(32);
		case 30:
			return func_227(33);
		case 31:
			return func_227(34);
		case 32:
			return func_227(35);
		case 33:
			return func_227(36);
		case 34:
			return func_227(37);
		case 35:
			return func_227(38);
		case 36:
			return func_227(39);
		case 37:
			return func_227(40);
		case 38:
			return func_227(41);
		case 39:
			return func_227(42);
		case 40:
			return func_227(43);
		case 41:
			return func_227(44);
		case 42:
			return func_227(45);
		case 43:
			return func_227(46);
		default:
			break;
	}
	return "";
}

char* func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_227(53);
		case 1:
			return func_227(54);
		case 2:
			return func_227(55);
		case 3:
			return func_227(56);
		case 4:
			return func_227(57);
		case 5:
			return func_227(58);
		case 6:
			return func_227(59);
		case 7:
			return func_227(60);
		case 8:
			return func_227(61);
		case 9:
			return func_227(62);
		case 10:
			return func_227(63);
		case 11:
			return func_227(64);
		case 12:
			return func_227(65);
		case 13:
			return func_227(66);
		case 14:
			return func_227(67);
		case 15:
			return func_227(68);
		case 16:
			return func_227(69);
		case 17:
			return func_227(70);
		case 18:
			return func_227(71);
		case 19:
			return func_227(72);
		case 20:
			return func_227(73);
		case 21:
			return func_227(74);
		case 22:
			return func_227(75);
		case 23:
			return func_227(76);
		case 24:
			return func_227(77);
		case 25:
			return func_227(78);
		case 26:
			return func_227(79);
		case 27:
			return func_227(80);
		case 28:
			return func_227(81);
		case 29:
			return func_227(82);
		case 30:
			return func_227(83);
		case 31:
			return func_227(84);
		case 32:
			return func_227(85);
		case 33:
			return func_227(86);
		case 34:
			return func_227(87);
		case 35:
			return func_227(88);
		case 36:
			return func_227(89);
		case 37:
			return func_227(90);
		case 38:
			return func_227(91);
		case 39:
			return func_227(92);
		case 40:
			return func_227(93);
		case 41:
			return func_227(94);
		case 42:
			return func_227(95);
		case 43:
			return func_227(96);
		case 44:
			return func_227(97);
		case 45:
			return func_227(98);
		case 46:
			return func_227(99);
		case 47:
			return func_227(100);
		case 48:
			return func_227(101);
		case 49:
			return func_227(102);
		case 50:
			return func_227(103);
		case 51:
			return func_227(104);
		case 52:
			return func_227(105);
		case 53:
			return func_227(106);
		case 54:
			return func_227(107);
		default:
			break;
	}
	return "";
}

int func_1073(var uParam0, vector3 vParam1, char* sParam4, float fParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam8 != -1 && (iParam8 < 239 || iParam8 > 261))
	{
		return 0;
	}
	else if (uParam0->f_1 > 1 && PED::_0xA911EE21EDF69DAF(Global_35))
	{
		func_195(&(uParam0->f_86), 1, 1);
		func_582(uParam0, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			func_582(uParam0, 1);
			break;
		case 1:
			if (!PED::_0xA911EE21EDF69DAF(Global_35))
			{
				func_582(uParam0, 2);
			}
			break;
		case 2:
			if (!func_194(uParam0->f_86))
			{
				uParam0->f_86 = func_1093(sParam4, iParam7, vParam1, fParam5, 3, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_1515(uParam0->f_86, 0, 1);
				func_1516(uParam0->f_86, 0, 1);
			}
			else
			{
				func_582(uParam0, 3);
			}
			break;
		case 3:
			if (iParam8 != -1 && func_516(Global_35, vParam1, fParam5, 1, 1))
			{
				func_1517(uParam0->f_86, -739709650, 0, 1);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, fParam5, 3, 1, -739709650, func_227(iParam8), 0);
			}
			func_1515(uParam0->f_86, func_516(Global_35, vParam1, fParam5, 1, 1), 1);
			func_1516(uParam0->f_86, func_516(Global_35, vParam1, fParam6, 1, 1), 1);
			if (func_1518(uParam0->f_86, 1))
			{
				func_582(uParam0, 4);
			}
			break;
		case 4:
			func_195(&(uParam0->f_86), 1, 1);
			func_582(uParam0, 5);
			break;
		case 5:
			return 1;
	}
	return 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53;
		case 1:
			return 50;
		case 2:
			return 51;
		case 3:
			return 52;
		case 4:
			return 54;
		default:
			break;
	}
	return -1;
}

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return func_736(0);
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
		case 23:
		case 24:
		case 25:
		case 26:
			return func_736(1);
		case 27:
			return func_736(2);
		case 28:
			return func_736(3);
		case 29:
			return func_736(4);
		case 30:
			return func_736(5);
		case 31:
			return func_736(6);
		case 32:
			return func_736(7);
		case 33:
			return func_736(8);
		case 34:
			return func_736(9);
		case 35:
		case 36:
			return func_736(10);
		case 37:
			return func_736(11);
		case 38:
			return func_736(12);
		case 39:
			return func_736(13);
		case 40:
			return func_736(14);
		case 41:
			return func_736(15);
		case 42:
			return func_736(16);
		case 43:
			return func_736(17);
		case 44:
		case 45:
			return func_736(20);
		case 46:
			return func_736(21);
		case 47:
			return func_736(23);
		case 48:
			return func_736(24);
		case 49:
			return func_736(25);
		case 50:
			return func_736(26);
		case 51:
			return func_736(27);
		case 52:
			return func_736(26);
		case 53:
			return func_736(30);
		case 54:
			return func_736(29);
		default:
			break;
	}
	return 0;
}

Vector3 func_1076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_228(4, 6);
		case 1:
			return func_228(4, 7);
		case 2:
			return func_228(4, 8);
		case 3:
			return func_228(4, 9);
		case 4:
			return func_228(4, 10);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1077(var uParam0, int iParam1)
{
	return ANIMSCENE::_0x3FBC3F51BF12DFBF(&(uParam0->f_552[iParam1]));
}

void func_1078(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1079(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1080(var uParam0)
{
	if (func_1079(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_1519(uParam0) || func_1079(&(uParam0->f_3), 4)) && !func_1079(&(uParam0->f_3), 256))
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
	if (func_1520(uParam0))
	{
		func_1082();
	}
	if (!func_1079(&(uParam0->f_3), 16))
	{
		if (func_196(uParam0))
		{
			if (func_608(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_1081(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_1125(Global_35, vParam0, 1);
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

void func_1082()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_1521();
}

int func_1083(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_1522(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_1079(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_1125(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_1523(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_1079(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_1524(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_1084(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_1525(vParam1, 1);
	if (!func_1079(&(uParam0->f_3), 32))
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
	func_253(uParam0);
	func_599(&(uParam0->f_3), 1);
}

float func_1085(vector3 vParam0, vector3 vParam3)
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

bool func_1086(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_1087(var uParam0)
{
	return func_508(*uParam0, 2);
}

int func_1088()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_1089(var uParam0, float fParam1)
{
	if (!func_196(uParam0))
	{
		return 0;
	}
	if (func_1184(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_1090(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1098(uParam0, iParam1, iParam2))
		{
			func_1110(uParam0->f_60[iParam1], iParam2);
		}
	}
	else if (func_1098(uParam0, iParam1, iParam2))
	{
		func_1335(uParam0->f_60[iParam1], iParam2);
	}
}

void func_1091(var uParam0)
{
	if (!func_196(uParam0))
	{
	}
	if (func_1087(uParam0))
	{
		uParam0->f_1 = (func_1219() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_1221(uParam0, 2);
	}
}

void func_1092(var uParam0)
{
	if (!func_196(uParam0))
	{
	}
	if (!func_1087(uParam0))
	{
		uParam0->f_2 = (func_1219() - uParam0->f_1);
		func_1220(uParam0, 2);
	}
}

int func_1093(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
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
	if (func_499(vParam2))
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
		if (func_1495(iVar0, 2))
		{
			if (func_1526(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
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
		func_1527(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

void func_1094(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_194(iParam0))
	{
		return;
	}
	iVar0 = func_506(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, 8, iParam1);
}

float func_1095(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_194(iParam0))
	{
		return 0f;
	}
	iVar0 = func_506(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1096(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1003(uParam0, 32768, bParam2);
			break;
		case 3:
			func_1003(uParam0, 131072, bParam2);
			break;
		case 4:
			func_1003(uParam0, 524288, bParam2);
			break;
		default:
			break;
	}
}

void func_1097(var uParam0, int iParam1, bool bParam2)
{
	switch (iParam1)
	{
		case 2:
			func_1003(uParam0, 65536, bParam2);
			break;
		case 3:
			func_1003(uParam0, 262144, bParam2);
			break;
		case 4:
			func_1003(uParam0, 1048576, bParam2);
			break;
		default:
			break;
	}
}

bool func_1098(var uParam0, int iParam1, int iParam2)
{
	return func_1496(&(uParam0->f_60[iParam1]), iParam2);
}

void func_1099(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(func_630(&(uParam0->f_1171))))
	{
		return;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1138(Global_35, func_630(&(uParam0->f_1171))), func_1138(&(uParam0->f_1111.f_40[0]), func_630(&(uParam0->f_1171))), true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_630(&(uParam0->f_1171))))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_630(&(uParam0->f_1171)), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_1111.f_40[0]), true, false), &iVar2);
	}
	switch (func_536(&(uParam0->f_730)))
	{
		case 0:
			func_1528(&(uParam0->f_730), 222);
			func_512(&(uParam0->f_730), 222, 4, 6f, 1);
			if (fVar0 > 20f && iVar1 > iVar2)
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			if (!func_538(&(uParam0->f_730), 186))
			{
				if (func_1142(&(uParam0->f_1111.f_40[0]), uParam0->f_1171.f_52) >= 60)
				{
					func_512(&(uParam0->f_730), 186, 2, 0, 1);
				}
			}
			else if (!func_538(&(uParam0->f_730), 187))
			{
				if (func_1142(&(uParam0->f_1111.f_40[0]), uParam0->f_1171.f_52) >= 275)
				{
					func_512(&(uParam0->f_730), 187, 2, 0, 1);
				}
			}
			else if (!func_538(&(uParam0->f_730), 188))
			{
				if (func_1142(&(uParam0->f_1111.f_40[0]), uParam0->f_1171.f_52) >= 425)
				{
					func_512(&(uParam0->f_730), 188, 2, 0, 1);
				}
			}
			if (func_552(&(uParam0->f_565), 1, 6))
			{
				func_539(&(uParam0->f_730), -1, 1, 0);
			}
			else if (!func_666(Global_35, &(uParam0->f_1111.f_40[3]), 0))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			func_1528(&(uParam0->f_730), 221);
			if (fVar0 > 20f && iVar1 > iVar2)
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			if (func_552(&(uParam0->f_565), 1, 6))
			{
				func_539(&(uParam0->f_730), -1, 1, 0);
			}
			else if (func_666(Global_35, &(uParam0->f_1111.f_40[3]), 0))
			{
				func_539(&(uParam0->f_730), 0, 1, 0);
			}
			else
			{
				func_512(&(uParam0->f_730), 185, 1, 20f, 0);
			}
			break;
		case 2:
			func_1528(&(uParam0->f_730), 223);
			if (!func_542(&(uParam0->f_730), 223))
			{
				func_512(&(uParam0->f_730), 223, 5, 0, 1);
			}
			if (fVar0 < 10f)
			{
				func_1002(&(uParam0->f_730), 223, 0);
				if (func_666(Global_35, &(uParam0->f_1111.f_40[3]), 0))
				{
					func_539(&(uParam0->f_730), 0, 1, 0);
				}
				else
				{
					func_539(&(uParam0->f_730), 1, 1, 0);
				}
			}
			break;
		case 20:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			func_1528(&(uParam0->f_730), 224);
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 224, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 224, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (!func_518(&(uParam0->f_1111), 2, 0, 80f, 1) && !func_994())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case -1:
		case 23:
		case 24:
			break;
	}
}

void func_1100(var uParam0)
{
	switch (func_536(&(uParam0->f_730)))
	{
		case 0:
			func_1528(&(uParam0->f_730), 226);
			if (!func_542(&(uParam0->f_730), 226) && !func_648(&(uParam0->f_1111.f_40[6]), Global_35))
			{
				func_512(&(uParam0->f_730), 226, 4, 2f, 1);
			}
			if (func_648(&(uParam0->f_1111.f_40[6]), Global_35) && func_552(&(uParam0->f_565), 2, 6))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			func_1528(&(uParam0->f_730), 227);
			if (!func_542(&(uParam0->f_730), 227) && !func_591(Global_35, &(uParam0->f_1111.f_40[0]), 5f, 1))
			{
				func_512(&(uParam0->f_730), 227, 4, 2f, 1);
			}
			if (func_591(Global_35, &(uParam0->f_1111.f_40[0]), 5f, 1))
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			break;
		case 2:
			if (!func_538(&(uParam0->f_730), 189))
			{
				func_512(&(uParam0->f_730), 189, 2, 0, 1);
			}
			break;
		case 20:
			func_1528(&(uParam0->f_730), 225);
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 225, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (!func_516(Global_35, func_529(0), 100f, 1, 0) && !func_994())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case 23:
			if (!func_535(&(uParam0->f_565)) || ENTITY::IS_ENTITY_DEAD(&(uParam0->f_1111.f_40[6])))
			{
				func_997(&(uParam0->f_730), 193, 0);
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if ((func_523(&(uParam0->f_1111), 6) || func_524(&(uParam0->f_1111), 6)) || PED::_0x9682F850056C9ADE(&(uParam0->f_1111.f_40[6])))
			{
				if (!func_538(&(uParam0->f_730), 192))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uParam0->f_1111.f_40[6])) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_1111.f_40[6])))
					{
						if (func_610(uParam0->f_565.f_31[7 /*3*/], 2f, 1, 1))
						{
							if (func_1531(&(uParam0->f_1111.f_40[6]), func_227(192), 1744022339, Global_35, 1, func_227(257), 1, 1))
							{
								func_997(&(uParam0->f_730), 192, 1);
							}
						}
					}
				}
				else if (!func_538(&(uParam0->f_730), 194))
				{
					if (PED::_0x9682F850056C9ADE(&(uParam0->f_1111.f_40[6])))
					{
						func_997(&(uParam0->f_730), 194, 1);
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uParam0->f_1111.f_40[6])) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_1111.f_40[6])))
					{
						if (func_610(uParam0->f_565.f_31[7 /*3*/], 2f, 1, 1))
						{
							if (func_1531(&(uParam0->f_1111.f_40[6]), func_227(194), 1744022339, Global_35, 1, func_227(257), 1, 1))
							{
								func_997(&(uParam0->f_730), 194, 1);
							}
						}
					}
				}
				else if (func_610(uParam0->f_565.f_31[7 /*3*/], 2f, 1, 1))
				{
					func_539(&(uParam0->f_730), 24, 1, 0);
				}
			}
			else if (!func_538(&(uParam0->f_730), 193))
			{
				func_512(&(uParam0->f_730), 193, 2, 0, 1);
			}
			else if (func_532(&(uParam0->f_730), 193))
			{
				if (func_610(uParam0->f_565.f_31[7 /*3*/], 1f, 1, 1))
				{
					func_539(&(uParam0->f_730), 24, 1, 0);
				}
			}
			break;
		case 24:
			if (!func_520(&(uParam0->f_730), 208))
			{
				func_512(&(uParam0->f_730), 208, 3, 0, 1);
			}
			break;
		case -1:
			break;
	}
}

void func_1101(var uParam0)
{
	switch (func_536(&(uParam0->f_730)))
	{
		case 0:
			func_1528(&(uParam0->f_730), 228);
			if (((func_591(Global_35, &(uParam0->f_1111.f_40[0]), 5f, 1) && func_1505(&(uParam0->f_565))) && func_1209(&(uParam0->f_565))) || func_538(&(uParam0->f_730), 190))
			{
				if (!func_538(&(uParam0->f_730), 190))
				{
					func_512(&(uParam0->f_730), 190, 2, 0, 1);
				}
				else if (func_532(&(uParam0->f_730), 190))
				{
					func_539(&(uParam0->f_730), 1, 1, 0);
				}
			}
			if (!func_542(&(uParam0->f_730), 228))
			{
				func_512(&(uParam0->f_730), 228, 4, 2f, 1);
			}
			break;
		case 1:
			func_1528(&(uParam0->f_730), 229);
			if (!func_542(&(uParam0->f_730), 229))
			{
				if (!func_541(uParam0, 0, 3))
				{
					func_512(&(uParam0->f_730), 229, 4, 6f, 1);
				}
				else
				{
					UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
					func_1002(&(uParam0->f_730), 229, 1);
				}
			}
			if (func_619(uParam0, 3))
			{
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			break;
		case 2:
			func_1528(&(uParam0->f_730), 230);
			if (!func_541(uParam0, 2, 30))
			{
				func_512(&(uParam0->f_730), 191, 1, 15f, 0);
			}
			if (func_619(uParam0, 30))
			{
				func_197(uParam0->f_565.f_31[8 /*3*/]);
				func_539(&(uParam0->f_730), 3, 1, 0);
			}
			break;
		case 3:
			func_1528(&(uParam0->f_730), 231);
			if (!func_542(&(uParam0->f_730), 231))
			{
				if (func_619(uParam0, 24) && !func_558(&(uParam0->f_565)))
				{
					func_512(&(uParam0->f_730), 231, 4, 2f, 1);
				}
			}
			if (func_541(uParam0, 3, 17) && !func_609(Global_35, 1, 11))
			{
				if (func_610(uParam0->f_565.f_31[8 /*3*/], 40f, 1, 1))
				{
					func_539(&(uParam0->f_730), 4, 1, 0);
				}
				else if ((func_521(&(uParam0->f_565), 200) || func_522(1120403456, 1106247680)) && !func_558(&(uParam0->f_565)))
				{
					func_1532(uParam0->f_565.f_31[8 /*3*/], 37f, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 195, 1, 10f, 0);
				}
			}
			if (func_609(Global_35, 1, 11) || func_558(&(uParam0->f_565)))
			{
				func_197(uParam0->f_565.f_31[8 /*3*/]);
				func_539(&(uParam0->f_730), 5, 1, 0);
			}
			break;
		case 4:
			if (!func_538(&(uParam0->f_730), 196))
			{
				func_512(&(uParam0->f_730), 196, 2, 0, 1);
			}
			else if (func_619(uParam0, 20))
			{
				func_539(&(uParam0->f_730), 5, 1, 0);
			}
			break;
		case 5:
			func_1528(&(uParam0->f_730), 232);
			if (func_552(&(uParam0->f_565), 3, 16))
			{
				if (func_512(&(uParam0->f_730), 197, 2, 0, 1))
				{
					func_1532(&(uParam0->f_730.f_374), 10f, 1);
					func_539(&(uParam0->f_730), 6, 0, 0);
				}
			}
			break;
		case 6:
			if (!func_542(&(uParam0->f_730), 232))
			{
				if (func_532(&(uParam0->f_730), 197) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[11]), true, 0))
				{
					func_512(&(uParam0->f_730), 232, 4, 2f, 1);
				}
			}
			if (((func_541(uParam0, 3, 22) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[9]), true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[10]), true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(uParam0->f_565.f_91[11]), true, 0))
			{
				if ((!PED::IS_PED_CLIMBING(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_VAULTING(Global_35))
				{
					if (func_1533(uParam0->f_565.f_31[16 /*3*/]) > (20f - 1f) && func_516(Global_35, func_529(11), 2f, 1, 0))
					{
						PED::SET_PED_RESET_FLAG(Global_35, 168, true);
					}
					if (func_610(uParam0->f_565.f_31[16 /*3*/], 20f, 1, 1))
					{
						func_539(&(uParam0->f_730), 7, 1, 0);
					}
					else
					{
						func_512(&(uParam0->f_730), 198, 1, 5f, 0);
					}
				}
			}
			else
			{
				func_197(uParam0->f_565.f_31[16 /*3*/]);
			}
			break;
		case 7:
			if (!func_538(&(uParam0->f_730), 199))
			{
				func_512(&(uParam0->f_730), 199, 2, 0, 1);
			}
			else
			{
				func_266(0, 256);
			}
			break;
		case 20:
			func_1528(&(uParam0->f_730), 225);
			if (func_610(uParam0->f_565.f_31[16 /*3*/], 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 184, 2, 0, 1))
			{
				func_539(&(uParam0->f_730), 21, 1, 0);
			}
			break;
		case 21:
			if (func_610(uParam0->f_565.f_31[16 /*3*/], 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (func_512(&(uParam0->f_730), 225, 4, 0, 1))
			{
				func_539(&(uParam0->f_730), 22, 1, 0);
			}
			break;
		case 22:
			if (func_610(uParam0->f_565.f_31[16 /*3*/], 20f, 0, 0))
			{
				func_997(&(uParam0->f_730), 199, 1);
				func_539(&(uParam0->f_730), 7, 1, 0);
			}
			else if (!func_535(&(uParam0->f_565)))
			{
				func_997(&(uParam0->f_730), 184, 0);
				func_1002(&(uParam0->f_730), 225, 0);
				func_1529(&(uParam0->f_730));
				func_539(&(uParam0->f_730), func_1530(&(uParam0->f_730)), 1, 0);
			}
			else if (!func_516(Global_35, func_529(0), 100f, 1, 0) && !func_994())
			{
				if (!func_520(&(uParam0->f_730), 208))
				{
					func_512(&(uParam0->f_730), 208, 3, 0, 1);
				}
			}
			break;
		case -1:
		case 23:
		case 24:
			break;
	}
}

void func_1102(var uParam0)
{
	switch (func_536(&(uParam0->f_730)))
	{
		case 0:
			func_1528(&(uParam0->f_730), 233);
			if (func_512(&(uParam0->f_730), 200, 0, 3f, 1))
			{
				func_539(&(uParam0->f_730), 1, 1, 0);
			}
			break;
		case 1:
			if (!func_1032(&(uParam0->f_565)))
			{
				if (func_512(&(uParam0->f_730), 201, 0, 0, 1))
				{
					func_539(&(uParam0->f_730), 2, 1, 0);
				}
			}
			break;
		case 2:
			if (!func_542(&(uParam0->f_730), 233))
			{
				if (func_556(&(uParam0->f_565)))
				{
					func_512(&(uParam0->f_730), 233, 4, 0, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 233, 4, 2f, 1);
				}
			}
			break;
		case -1:
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
		case 23:
		case 24:
			break;
	}
}

void func_1103(var uParam0)
{
	bool bVar0;

	switch (func_536(&(uParam0->f_730)))
	{
		case 0:
			func_1528(&(uParam0->f_730), 234);
			if (func_610(uParam0->f_565.f_31[5 /*3*/], 1f, 1, 0))
			{
				if (!func_538(&(uParam0->f_730), 202))
				{
					func_512(&(uParam0->f_730), 202, 2, 0, 1);
				}
				else if (!func_542(&(uParam0->f_730), 234))
				{
					if (!func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_197(uParam0->f_565.f_31[4 /*3*/]);
						func_539(&(uParam0->f_730), 2, 1, 0);
					}
					else if (func_512(&(uParam0->f_730), 234, 4, 6f, 1))
					{
						func_539(&(uParam0->f_730), 1, 1, 0);
					}
				}
			}
			break;
		case 1:
			func_1528(&(uParam0->f_730), 234);
			if (!func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_197(uParam0->f_565.f_31[4 /*3*/]);
				func_539(&(uParam0->f_730), 2, 1, 0);
			}
			else if (func_1534())
			{
				func_512(&(uParam0->f_730), 203, 1, 20f, 0);
			}
			else if (func_1533(&(uParam0->f_730.f_374)) < 20f)
			{
				func_658(&(uParam0->f_730.f_374), 20f);
			}
			break;
		case 2:
			if (func_514(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_1002(&(uParam0->f_730), 234, 0);
				func_998(1, 0, 1);
				func_197(uParam0->f_565.f_31[5 /*3*/]);
				func_539(&(uParam0->f_730), 0, 1, 0);
				return;
			}
			bVar0 = (func_591(Global_35, &(uParam0->f_1111.f_40[0]), 40f, 1) || func_591(Global_35, &(uParam0->f_1111.f_40[4]), 40f, 1));
			if (bVar0 && !func_532(&(uParam0->f_730), 205))
			{
				if (!func_532(&(uParam0->f_730), 204))
				{
					func_512(&(uParam0->f_730), 204, 0, 3f, 1);
				}
				else
				{
					func_512(&(uParam0->f_730), 205, 0, 3f, 1);
				}
			}
			if (!func_542(&(uParam0->f_730), 235) && func_666(Global_35, &(uParam0->f_1111.f_40[3]), 0))
			{
				if (bVar0 || func_1015(func_227(204)))
				{
					func_197(uParam0->f_565.f_31[4 /*3*/]);
				}
				if (func_610(uParam0->f_565.f_31[4 /*3*/], 10f, 1, 1) || func_532(&(uParam0->f_730), 204))
				{
					func_512(&(uParam0->f_730), 235, 4, 0, 1);
				}
			}
			if (func_666(Global_35, &(uParam0->f_1111.f_40[3]), 0))
			{
				func_1528(&(uParam0->f_730), 235);
			}
			else
			{
				func_1528(&(uParam0->f_730), 221);
			}
			if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && func_516(Global_35, func_228(5, 6), 30f, 1, 1)) || func_552(&(uParam0->f_565), 5, 12))
			{
				if (func_591(Global_35, &(uParam0->f_1111.f_40[0]), 40f, 1) && func_591(Global_35, &(uParam0->f_1111.f_40[4]), 40f, 1))
				{
					func_512(&(uParam0->f_730), 206, 2, 0, 1);
				}
				func_539(&(uParam0->f_730), 3, 1, 0);
			}
			break;
		case 3:
			if (func_552(&(uParam0->f_565), 5, 17) && !func_538(&(uParam0->f_730), 207))
			{
				func_512(&(uParam0->f_730), 207, 0, 2f, 1);
			}
			break;
		case -1:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			break;
	}
}

void func_1104()
{
	func_1535();
}

void func_1105()
{
	func_1536();
}

struct<4> func_1106(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { func_228(1, 0) };
			Var0.f_3 = func_229(1, 0);
			break;
		case 1:
			Var0 = { func_228(2, 0) };
			Var0.f_3 = func_229(2, 0);
			break;
		case 2:
			Var0 = { func_228(2, 0) };
			Var0.f_3 = func_229(2, 0);
			break;
		case 3:
			Var0 = { func_228(4, 0) };
			Var0.f_3 = func_229(4, 0);
			break;
		case 4:
			Var0 = { func_228(5, 0) };
			Var0.f_3 = func_229(5, 0);
			break;
		case 5:
			Var0 = { func_228(5, 6) };
			Var0.f_3 = func_229(5, 6);
			break;
	}
	return Var0;
}

void func_1107(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (Global_1391438->f_3 != iParam9)
	{
		func_93(0);
	}
	uParam0->f_7 = iParam9;
	Global_1391438->f_3 = iParam9;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_1537(uParam0->f_5, Var0, Var4, iParam9, iParam10);
}

void func_1108(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1320(uParam0, iParam1, iParam2))
		{
			func_1110((*uParam0)[iParam1], iParam2);
		}
	}
	else if (func_1320(uParam0, iParam1, iParam2))
	{
		func_1335((*uParam0)[iParam1], iParam2);
	}
}

struct<4> func_1109(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_673(iParam0, iParam1) };
	Var0.f_3 = func_674(iParam0, iParam1);
	return Var0;
}

void func_1110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1111(int* iParam0)
{
	struct<283> Var0;

	Var0 = 1;
	Var0.f_13 = 20;
	Var0.f_254 = 1097859072;
	Var0.f_255 = 1101004800;
	Var0.f_282 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 350);
}

void func_1112(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1137(uParam0) };
	func_1538(uParam0, &Var0);
}

void func_1113(var uParam0)
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar7;

	Var0 = { func_1539(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(Global_35));
			PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
		if (PED::IS_PED_ON_MOUNT(&(Local_18.f_1111.f_40[0])))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(&(Local_18.f_1111.f_40[0])));
			PED::_REMOVE_PED_FROM_MOUNT(&(Local_18.f_1111.f_40[0]), true, false);
		}
		if (PED::IS_PED_ON_MOUNT(&(Local_18.f_1111.f_40[4])))
		{
			PHYSICS::_0xBDDA142759307528(PED::GET_MOUNT(&(Local_18.f_1111.f_40[4])));
			PED::_REMOVE_PED_FROM_MOUNT(&(Local_18.f_1111.f_40[4]), true, false);
		}
		func_1540();
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		func_1541(func_228(5, 6), 1120403456);
		vVar4 = { func_228(7, 12) };
		vVar7 = { 0f, 0f, func_229(7, 12) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_18.f_121.f_264, vVar4, vVar7, 2);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(&(Local_18.f_1111.f_40[0]), func_50(), false);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(&(Local_18.f_1111.f_40[4]), func_50(), false);
		PED::_0xA8A95CECB1906EA2(func_50(), 0);
		func_1144(&(Local_18.f_1111), 2);
		func_1145(&(Local_18.f_1111), 0);
		func_1145(&(Local_18.f_1111), 4);
		func_1542(vVar4, 50f, 0, 0);
		func_1543(vVar4, 50f, 0);
		func_1544(vVar4, 50f, 0);
		func_265(&(Local_18.f_1111), 0, 2, 0);
		func_265(&(Local_18.f_1111), 4, 2, 0);
	}
}

void func_1114(var uParam0, int iParam1)
{
	uParam0->f_256 = iParam1;
	func_1545(uParam0, 1);
}

void func_1115(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0 = { func_1539(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		iVar4 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
		iVar4 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		iVar4 = 2;
	}
	switch (iVar4)
	{
		case 0:
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				if (func_1190(uParam0) > 5100)
				{
					func_265(&(Local_18.f_1111), 2, 2, 1);
				}
			}
			if (func_1190(uParam0) >= 19800)
			{
				func_1546(&(Local_18.f_1111), 1);
			}
			if (func_1190(uParam0) >= 2170)
			{
				func_265(&(Local_18.f_1111), 1, 1, 0);
				func_265(&(Local_18.f_1111), 1, 0, 1);
			}
			func_583(Global_35, 1);
			func_642(Global_35, 1, 0);
			if (func_1547(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_1548(147004056, 2000, 0, 1, 1, 0, 0, 0);
			}
			break;
		case 1:
			if (!func_29(&(Local_18.f_1111.f_40[1]), 0) || !func_29(&(Local_18.f_1111.f_40[5]), 0))
			{
				return;
			}
			func_1546(&(Local_18.f_1111), 0);
			if (STREAMING::_IS_IMAP_ACTIVE(-661825463))
			{
				STREAMING::_REMOVE_IMAP(-661825463);
			}
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				if (func_1190(uParam0) >= 10150)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_487[44])))
					{
						func_741(uParam0, &(Local_18.f_487[44]), 0);
						func_1549(uParam0, &(Local_18.f_487[44]));
						func_592(Local_18.f_487[44], 1);
					}
					func_265(&(Local_18.f_1111), 2, 2, 1);
				}
				else if ((func_754(&(Local_18.f_1111), 2, 2) && !ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, func_742(2))) && !ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, func_742(2)))
				{
					func_265(&(Local_18.f_1111), 2, 2, 0);
				}
			}
			if (func_29(&(Local_18.f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[0])))
			{
				if (func_1190(uParam0) >= 9700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_487[45])))
					{
						func_741(uParam0, &(Local_18.f_487[45]), 0);
						func_1549(uParam0, &(Local_18.f_487[45]));
						func_592(Local_18.f_487[45], 1);
					}
					func_265(&(Local_18.f_1111), 0, 2, 1);
				}
				else if ((func_754(&(Local_18.f_1111), 0, 2) && !ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, func_742(0))) && !ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, func_742(0)))
				{
					func_265(&(Local_18.f_1111), 0, 2, 0);
				}
			}
			if (func_1547(uParam0, Global_35, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, -530524, false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, 0f, true, false);
				PED::_0x2208438012482A1A(Global_35, false, false);
			}
			if (func_1547(uParam0, &(Local_18.f_1111.f_40[4]), 0, 0, 1, 1))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(&(Local_18.f_1111.f_40[4]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_18.f_1111.f_40[4]), 0f, 15f, 0f), 1.6f, -1, 40000f, 1056964608, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
				func_658(Local_18.f_565.f_31[14 /*3*/], 0f);
			}
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 <= 7)
			{
				if (func_1550(uParam0, &(Local_18.f_487[iVar5]), func_740(iVar5), func_1075(iVar5), 0, 1))
				{
					func_592(Local_18.f_487[iVar5], 1);
				}
				iVar5++;
			}
			iVar5 = 44;
			while (iVar5 <= 45)
			{
				if (func_1550(uParam0, &(Local_18.f_487[iVar5]), func_740(iVar5), func_1075(iVar5), 0, 1))
				{
					func_592(Local_18.f_487[iVar5], 1);
				}
				iVar5++;
			}
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 0);
			}
			if (func_29(&(Local_18.f_1111.f_40[3]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[3])))
			{
				func_265(&(Local_18.f_1111), 3, 2, 0);
			}
			if (func_29(&(Local_18.f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[0])))
			{
				if (func_1547(uParam0, &(Local_18.f_1111.f_40[0]), func_742(0), 0, 1, 1))
				{
					func_265(&(Local_18.f_1111), 0, 2, 1);
				}
			}
			break;
	}
}

void func_1116(var uParam0, int iParam1)
{
	uParam0->f_257 = iParam1;
	func_1545(uParam0, 2);
}

int func_1117(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0 = { func_1539(uParam0) };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(181)))
	{
		iVar4 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(182)))
	{
		iVar4 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&Var0, func_227(183)))
	{
		iVar4 = 2;
	}
	switch (iVar4)
	{
		case 0:
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 1);
			}
			func_1546(&(Local_18.f_1111), 1);
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
			func_583(Global_35, 1);
			func_642(Global_35, 1, 0);
			func_1548(147004056, 2000, 0, 1, 1, 0, 0, 0);
			break;
		case 1:
			func_1546(&(Local_18.f_1111), 0);
			if (STREAMING::_IS_IMAP_ACTIVE(-661825463))
			{
				STREAMING::_REMOVE_IMAP(-661825463);
			}
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 1);
			}
			if (func_29(&(Local_18.f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[0])))
			{
				func_265(&(Local_18.f_1111), 0, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_487[44])))
			{
				func_741(uParam0, &(Local_18.f_487[44]), 0);
				func_1549(uParam0, &(Local_18.f_487[44]));
				func_592(Local_18.f_487[44], 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_18.f_487[45])))
			{
				func_741(uParam0, &(Local_18.f_487[45]), 0);
				func_1549(uParam0, &(Local_18.f_487[45]));
				func_592(Local_18.f_487[45], 1);
			}
			func_640(Global_35, func_625(5, 0), 2);
			func_640(&(Local_18.f_1111.f_40[0]), func_625(5, 1), 2);
			func_640(&(Local_18.f_1111.f_40[4]), func_625(5, 2), 2);
			PED::FORCE_PED_MOTION_STATE(Global_35, -530524, false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, 0f, true, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			if (func_29(Global_35, 0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(&(Local_18.f_1111.f_40[4]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_18.f_1111.f_40[4]), 0f, 15f, 0f), 1.6f, -1, 40000f, 1056964608, 1);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_18.f_1111.f_40[4]), 1.6f);
				func_658(Local_18.f_565.f_31[14 /*3*/], 0f);
			}
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 <= 7)
			{
				func_592(Local_18.f_487[iVar5], 1);
				iVar5++;
			}
			iVar5 = 44;
			while (iVar5 <= 45)
			{
				func_592(Local_18.f_487[iVar5], 1);
				iVar5++;
			}
			if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
			{
				func_265(&(Local_18.f_1111), 2, 2, 0);
			}
			if (func_29(&(Local_18.f_1111.f_40[3]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[3])))
			{
				func_265(&(Local_18.f_1111), 3, 2, 0);
			}
			if (func_29(&(Local_18.f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[0])))
			{
				func_265(&(Local_18.f_1111), 0, 2, 1);
			}
			func_640(Global_35, func_625(5, 6), 38);
			func_640(&(Local_18.f_1111.f_40[0]), func_625(5, 7), 38);
			func_640(&(Local_18.f_1111.f_40[4]), func_625(5, 8), 38);
			break;
	}
	return 1;
}

void func_1118(var uParam0, int iParam1)
{
	uParam0->f_258 = iParam1;
	func_1545(uParam0, 4);
}

bool func_1119(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_1120(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_1119(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_260), {func_1551("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_260), {func_1551("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_1122(uParam0, 8192);
}

Vector3 func_1121(var uParam0)
{
	return uParam0->f_5;
}

void func_1122(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_1123(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_1539(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_265))
	{
		uParam0->f_265 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_260), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_265, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_265, func_1552(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_265, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_265);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1124(var uParam0, vector3 vParam1)
{
	if (func_499(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1125(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_1126(var uParam0)
{
	return uParam0->f_255;
}

void func_1127()
{
	struct<4> Var0;

	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1413(Var0);
	}
}

void func_1128(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_264, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_282[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, uParam0->f_282[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_264, uParam0->f_282[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_264, uParam0->f_282[iVar0 /*9*/]);
		}
		(uParam0->f_282[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_1129(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_1119(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_1553(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_1119(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_1130(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1130(uParam0, 16, 1);
}

void func_1130(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_264)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_264))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_264);
	}
}

float func_1131(var uParam0)
{
	return uParam0->f_254;
}

struct<8> func_1132(var uParam0)
{
	return uParam0->f_266;
}

void func_1133(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1554() };
	func_1538(uParam0, &Var0);
}

void func_1134(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1119(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_1222(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1555());
		func_1122(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1556(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_1122(uParam0, 16);
	}
}

void func_1135(var uParam0)
{
	if ((!func_1119(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_264)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_264, 0))
	{
		func_1557(uParam0);
		func_1558(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_264, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_264);
		}
		func_1122(uParam0, 32768);
	}
}

bool func_1136()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

struct<8> func_1137(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1559(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_1560() };
	}
	return Var0;
}

Vector3 func_1138(int iParam0, char* sParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0f, 0f, 0f;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar1, &iVar0))
	{
		return 0f, 0f, 0f;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, &vVar4))
	{
		return 0f, 0f, 0f;
	}
	return vVar4;
}

void func_1139(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		*uParam0 = uParam0->f_1;
		uParam0->f_1 = iParam1;
	}
}

void func_1140(var uParam0, int iParam1, int iParam2)
{
	func_646(&(uParam0->f_40[iParam1]), 279, 1);
	func_646(&(uParam0->f_40[iParam1]), 280, 0);
	func_646(&(uParam0->f_40[iParam1]), 375, 1);
	func_646(&(uParam0->f_40[iParam1]), 390, 1);
	func_646(&(uParam0->f_40[iParam1]), 391, 1);
	func_1225(&(uParam0->f_40[iParam1]), iParam2, 1);
}

void func_1141(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1142(&(uParam0->f_40[0]), func_630(uParam1));
	if (iVar0 >= 437 && iVar0 <= 460)
	{
		PED::_0x9BBEAF8B0C007F1E(&(uParam0->f_40[0]), 0);
		PED::_0xD5BD1B5318A81994(uParam1->f_51, 1);
	}
	else
	{
		func_665(uParam1->f_51, 10);
		PED::_0xD5BD1B5318A81994(uParam1->f_51, 0);
		PED::_0x9BBEAF8B0C007F1E(&(uParam0->f_40[0]), 1);
	}
}

int func_1142(int iParam0, char[4] cParam1)
{
	if (!func_29(iParam0, 0))
	{
		return 0;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, cParam1))
	{
		return TASK::GET_PED_WAYPOINT_PROGRESS(iParam0);
	}
	return 0;
}

int func_1143(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_1561(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_1561(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

void func_1144(var uParam0, int iParam1)
{
	func_646(&(uParam0->f_40[iParam1]), 280, 1);
	if (iParam1 != 2)
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), &(uParam0->f_40[iParam1]));
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	func_1562(&(uParam0->f_40[iParam1]));
}

void func_1145(var uParam0, int iParam1)
{
	func_1562(&(uParam0->f_40[iParam1]));
}

bool func_1146(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	return (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, vLocal_0, false, bParam5, 0) && func_1563(iParam0, fParam4, 5f));
}

bool func_1147(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_487[iParam1])))
	{
		uParam0->f_487[iParam1] = OBJECT::CREATE_OBJECT(func_1075(iParam1), vParam2, true, true, false, false, true);
	}
	else if (!func_1149(&(uParam0->f_121), &(uParam0->f_487[iParam1])))
	{
		func_1150(&(uParam0->f_121), &(uParam0->f_487[iParam1]), func_740(iParam1), 0, 0, 0);
	}
	return func_1149(&(uParam0->f_121), &(uParam0->f_487[iParam1]));
}

bool func_1148(var uParam0, var uParam1, int iParam2)
{
	if (!func_1149(&(uParam0->f_121), &(uParam1->f_40[iParam2])))
	{
		func_1150(&(uParam0->f_121), &(uParam1->f_40[iParam2]), func_742(iParam2), 0, 0, 0);
	}
	return func_1149(&(uParam0->f_121), &(uParam1->f_40[iParam2]));
}

int func_1149(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1150(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_1564(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1565(uParam0, iParam1);
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
		iVar1 = func_1566(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1549(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1567(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1568(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1569(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

int func_1151(var uParam0)
{
	struct<4> Var0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_40[6])))
	{
		Var0 = { func_625(9, 0) };
		uParam0->f_40[6] = func_1570(func_736(18), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		iVar4 = MAP::_0x23F74C2FDA6E7C61(831283580, &(uParam0->f_40[6]));
		MAP::_0x662D364ABF16DE2F(iVar4, -662251075);
		MAP::_0x662D364ABF16DE2F(iVar4, 231194138);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar4, func_227(242));
		return 0;
	}
	return 1;
}

bool func_1152(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_461(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_461(iVar4) && iVar4 != bVar0)
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
	if (func_108() == -1 && !func_837(bVar0))
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
				if (func_837(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_461(bVar0))
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
		func_375(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1571(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_846(bVar0))
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

void func_1153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 256);
	}
	else
	{
		func_1110(&(uParam0->f_1), 256);
	}
}

void func_1154(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 4);
	}
	else
	{
		func_1110(&(uParam0->f_1), 4);
	}
}

void func_1155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 2);
	}
	else
	{
		func_1110(&(uParam0->f_1), 2);
	}
}

void func_1156(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 8);
	}
	else
	{
		func_1110(&(uParam0->f_1), 8);
	}
}

void func_1157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 2048);
	}
	else
	{
		func_1110(&(uParam0->f_1), 2048);
	}
}

void func_1158(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 1024);
	}
	else
	{
		func_1110(&(uParam0->f_1), 1024);
	}
}

void func_1159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 16384);
	}
	else
	{
		func_1110(&(uParam0->f_1), 16384);
	}
}

void func_1160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 1);
	}
	else
	{
		func_1110(&(uParam0->f_1), 1);
	}
}

void func_1161(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 128);
	}
	else
	{
		func_1110(&(uParam0->f_1), 128);
	}
}

void func_1162(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 256);
	}
	else
	{
		func_1335(uParam0, 256);
	}
}

void func_1163(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 32768);
	}
	else
	{
		func_1335(uParam0, 32768);
	}
}

void func_1164(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 4096);
	}
	else
	{
		func_1335(uParam0, 4096);
	}
}

void func_1165(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 65536);
	}
	else
	{
		func_1335(uParam0, 65536);
	}
}

void func_1166(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 8192);
	}
	else
	{
		func_1335(uParam0, 8192);
	}
}

void func_1167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 1);
	}
	else
	{
		func_1335(uParam0, 1);
	}
}

void func_1168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 2);
	}
	else
	{
		func_1335(uParam0, 2);
	}
}

void func_1169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 131072);
	}
	else
	{
		func_1110(&(uParam0->f_1), 131072);
	}
}

void func_1170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 4);
	}
	else
	{
		func_1335(uParam0, 4);
	}
}

void func_1171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 512);
	}
	else
	{
		func_1335(uParam0, 512);
	}
}

void func_1172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(&(uParam0->f_1), 16);
	}
	else
	{
		func_1110(&(uParam0->f_1), 16);
	}
}

void func_1173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 8);
	}
	else
	{
		func_1335(uParam0, 8);
	}
}

void func_1174(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 32);
	}
	else
	{
		func_1335(uParam0, 32);
	}
}

void func_1175(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 16);
	}
	else
	{
		func_1335(uParam0, 67108864);
		func_1335(uParam0, 16);
	}
}

void func_1176(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 64);
	}
	else
	{
		func_1335(uParam0, 64);
	}
}

void func_1177(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 1024);
	}
	else
	{
		func_1335(uParam0, 1024);
	}
}

void func_1178(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1110(uParam0, 128);
	}
	else
	{
		func_1335(uParam0, 128);
	}
}

void func_1179(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1572(uParam0, iParam1, sParam2))
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

void func_1180(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_264) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_264, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_264)) || func_1119(uParam0, 512))
	{
		if (!func_1573(uParam0->f_321, 128))
		{
			func_1574();
		}
		return;
	}
	if ((func_1191(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, func_1552(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, func_1552(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_264))
	{
		if (!func_1573(uParam0->f_321, 128))
		{
			func_1574();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_1575(iVar1))
		{
			if (func_1576(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_1573(uParam0->f_321, 512))
	{
		bVar2 = true;
	}
	if (func_1577(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_264);
		func_1574();
	}
}

void func_1181(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_620(uParam0) == 2 && (func_1578(uParam0->f_320, 16384) || func_1119(uParam0, 268435456)))
	{
		Var0 = { func_1137(uParam0) };
		func_1579(uParam0, &Var0);
	}
	func_1580(uParam0, sParam1);
	if (func_1119(uParam0, 131072))
	{
		func_1581(uParam0, 0);
	}
	if (func_1582())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_1583();
	}
	if (func_533())
	{
		func_207(1);
	}
	func_1134(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1584(uParam0, cVar8);
	func_1186(1, 0);
	func_1128(uParam0);
	if (func_1183(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_256);
	}
	func_1585(uParam0);
	func_1558(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_264);
	Global_43799 = uParam0->f_264;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_1182(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_253(&(uParam0->f_1));
}

bool func_1183(var uParam0, int iParam1)
{
	return (uParam0->f_259 && iParam1) != 0;
}

float func_1184(var uParam0)
{
	if (!func_196(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1087(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1219() - uParam0->f_1);
}

void func_1185(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_1186(bool bParam0, int iParam1)
{
	if (func_994())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1432())
		{
			func_1586(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_1187(var uParam0)
{
	vector3 vVar0;

	if (!func_1119(uParam0, 4))
	{
		if (func_1578(uParam0->f_320, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1587(uParam0) };
		if (!func_1578(uParam0->f_320, 524288))
		{
			func_1588(&(uParam0->f_332));
		}
		func_1589(&(uParam0->f_320), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1590(uParam0, 0f, 0f, 0f);
		func_1591(uParam0);
		func_1592(uParam0);
		func_1593(uParam0, 0f, 0f, 0f, 0, 0);
		func_1594(uParam0);
		func_1122(uParam0, 4);
		func_1595(uParam0, 0);
		func_1596(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_333)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_333));
		}
	}
}

int func_1188(var uParam0, int iParam1)
{
	if (func_1119(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_264, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_264, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_264))
	{
		func_1122(uParam0, 262144);
		func_1595(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_1189(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_264, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_264) * 1000f));
}

int func_1190(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_264, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_264) * 1000f));
}

int func_1191(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1597(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1192(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_264))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_264, 0))
	{
		if (func_1119(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_264) && func_1119(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_1193(var uParam0)
{
	if (((func_1119(uParam0, 1073741824) && !func_1119(uParam0, 524288)) && func_1119(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_1194(var uParam0)
{
	if (!func_1119(uParam0, 536870912))
	{
		func_1595(uParam0, 1);
		func_1195(&(uParam0->f_321), uParam0->f_332);
		func_1127();
		func_1122(uParam0, 536870912);
	}
	if (func_1119(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1598(uParam0);
	func_1182(uParam0, 1);
	func_1129(uParam0);
	func_1599(uParam0);
	func_1600(uParam0);
	func_1601(uParam0, 4);
	func_1133(uParam0);
	func_1581(uParam0, 1);
	func_1128(uParam0);
	func_197(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_264) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_264))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_264);
	}
	func_1602(!func_1573(uParam0->f_321, 128));
	if (!func_1573(uParam0->f_321, 128))
	{
		func_1574();
	}
}

void func_1195(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1603(2000);
	Global_16 = 0;
	func_1604();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1573(*uParam0, 8));
	if (!func_1573(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1573(*uParam0, 2) || func_1573(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1573(*uParam0, 16))
	{
		func_1605(1);
	}
	if (func_1573(*uParam0, 32))
	{
		func_399(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1606(-1623728698, 0);
	}
	func_1596(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1196()
{
	Global_1935630->f_52 = 1;
}

bool func_1197(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	func_683(iParam0, vParam1, fParam4, iParam5, 1073741824);
	return (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, vLocal_0, false, false, 0) && func_1563(iParam0, fParam4, 5f));
}

void func_1198(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	vector3 vVar8;
	int iVar12;
	vector3 vVar13;

	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_40[iParam1])))
	{
		return;
	}
	else if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_40[iParam1])) || PED::IS_PED_INJURED(&(uParam0->f_40[iParam1])))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(&(uParam0->f_40[iParam1]), 48, true);
	switch (iParam1)
	{
		case 6:
			sVar0 = func_227(252);
			break;
		case 11:
			break;
		case 12:
			sVar0 = func_227(245);
			break;
		case 13:
			sVar0 = func_227(246);
			break;
		case 14:
			sVar0 = func_227(247);
			break;
		case 15:
			sVar0 = func_227(248);
			break;
		case 16:
			sVar0 = func_227(249);
			break;
		case 17:
			break;
		case 18:
			sVar0 = func_227(251);
			break;
		default:
			return;
	}
	if (func_1607(iParam1))
	{
		iVar1 = iParam1 + 1;
		if (TASK::_0x643FD1556F621772(&(uParam0->f_40[iVar1]), &uVar2, &iVar3))
		{
			Var4 = { func_1608(iParam1, iVar3) };
			vVar8 = { func_1608(iVar1, iVar3) };
			if (func_516(&(uParam0->f_40[iVar1]), vVar8, 1f, 1, 1))
			{
				if (!func_226(&(uParam0->f_40[iParam1]), -1098463898))
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(&(uParam0->f_40[iParam1]), func_1609(iParam1, iVar3), Var4, Var4.f_3, -1, 1, 0, 0, -1082130432, 0);
					PED::_0x2208438012482A1A(&(uParam0->f_40[iParam1]), false, false);
				}
			}
			else if (!func_226(&(uParam0->f_40[iParam1]), 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(&(uParam0->f_40[iParam1]), &(uParam0->f_40[iVar1]), 0f, -1.5f, 0f, 1f, -1, 1036831949, 1, 1, 0, 0, 1);
				PED::_0x2208438012482A1A(&(uParam0->f_40[iParam1]), false, false);
			}
		}
	}
	else if (!func_226(&(uParam0->f_40[iParam1]), 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar12);
		if (bParam2)
		{
			vVar13 = { func_1610(iParam1, 1) };
			TASK::_TASK_PATROL_2(0, sVar0, 0, vVar13, 0, 1);
		}
		else
		{
			TASK::TASK_PATROL(0, sVar0, 0, false, true);
		}
		TASK::SET_SEQUENCE_TO_REPEAT(iVar12, true);
		func_230(uParam0, iParam1, &iVar12, 0, 0, 1, 1, 1);
	}
}

void func_1199(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &uParam0->f_1111.f_40[6];
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
	{
		if (uParam0->f_565.f_20 != 0)
		{
			uParam0->f_565.f_20 = 0;
		}
		return;
	}
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.5f);
	PED::_0x789DABD18E9024DB(iVar0, 4096, 1);
	PED::SET_PED_RESET_FLAG(iVar0, 48, true);
	PED::SET_PED_RESET_FLAG(iVar0, 54, true);
	PED::SET_PED_RESET_FLAG(iVar0, 83, true);
	PED::SET_PED_RESET_FLAG(iVar0, 290, true);
	PED::SET_PED_RESET_FLAG(iVar0, 310, false);
	PED::SET_PED_RESET_FLAG(iVar0, 318, true);
	PED::SET_PED_RESET_FLAG(iVar0, 324, false);
	if (func_591(Global_35, iVar0, 10f, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 53, true);
		PED::SET_PED_RESET_FLAG(Global_35, 83, true);
		PED::SET_PED_RESET_FLAG(Global_35, 290, true);
		PED::SET_PED_RESET_FLAG(Global_35, 318, true);
	}
	if (func_526(&(uParam0->f_1111)))
	{
		return;
	}
	else if (func_525(&(uParam0->f_1111), 6))
	{
		func_1611(uParam0);
		return;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 1, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iVar0)
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_1612(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		return;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 20496, 0) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == iVar0)
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_1613(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		return;
	}
	else if (func_1614(&(uParam0->f_565), 1000))
	{
		return;
	}
	if (!func_499(uParam0->f_692.f_35))
	{
		uParam0->f_692.f_35 = { func_1615() };
	}
	func_1616(iVar0, &(uParam0->f_692.f_1), &iVar1, 0);
	if (iVar1 != 0)
	{
	}
	switch (iVar1)
	{
		case 131072:
		case 262144:
			iVar2 = 1;
			break;
	}
	func_1617(iVar0, 0, &(uParam0->f_692.f_1), &iVar1, 0, 0);
	if (iVar1 != 0)
	{
	}
	switch (iVar1)
	{
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 64:
		case 128:
		case 256:
		case 1024:
		case 2048:
		case 8192:
		case 65536:
			iVar2 = 1;
			break;
		case 0:
			if (!func_226(iVar0, 1435919172))
			{
				if (func_610(uParam0->f_565.f_31[9 /*3*/], 10f, 1, 1))
				{
					func_1198(&(uParam0->f_1111), 6, 0);
				}
			}
			break;
	}
	if (iVar2 || PED::_0x9682F850056C9ADE(iVar0))
	{
		func_528(&(uParam0->f_1111), 6, 1);
		func_519(&(uParam0->f_565), 1);
	}
}

Vector3 func_1200(struct<4> Param0)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, Param0.f_3, 0f, 10f, 1f);
}

bool func_1201(var uParam0)
{
	return func_991(uParam0, 16);
}

void func_1202(var uParam0, int iParam1)
{
	if (uParam0->f_120 != iParam1)
	{
		uParam0->f_120 = iParam1;
	}
}

void func_1203(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_1204(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_1205(var uParam0, bool bParam1)
{
	func_1003(uParam0, 16384, bParam1);
}

void func_1206(var uParam0, int iParam1, int iParam2)
{
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(uParam0->f_552[iParam1]), func_1061(iParam2), &(uParam0->f_543[iParam2]));
}

void func_1207(var uParam0, var uParam1)
{
	float fVar0;

	if (func_29(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1242632265, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
		PAD::DISABLE_CONTROL_ACTION(0, 230775517, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1998417427, false);
		PAD::DISABLE_CONTROL_ACTION(0, 932393831, false);
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1963753488, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1934388793, false);
		PAD::DISABLE_CONTROL_ACTION(2, -209515122, false);
		func_1618();
		func_1619(0);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 9, 1);
		fVar0 = func_655(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_487[33]), true, false));
		PLAYER::_0xF993373285053D77(func_1620((fVar0 - 5f)), func_1620((fVar0 + 5f)), 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Global_35, false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 108, true);
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam1->f_3))
	{
		if (uParam1->f_1 > 7)
		{
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 0, 1288.65f, -1316.26f, 77.1715f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 1, 1288.69f, -1316.3f, 77.0079f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 2, 1288.69f, -1316.31f, 76.8357f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 3, 1288.69f, -1316.31f, 76.6644f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 4, 1288.68f, -1316.31f, 76.4938f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 5, 1288.68f, -1316.32f, 76.3239f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 6, 1288.68f, -1316.32f, 76.155f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 7, 1288.68f, -1316.33f, 75.987f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 8, 1288.67f, -1316.34f, 75.8197f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 9, 1288.66f, -1316.35f, 75.6537f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 10, 1288.79f, -1316.35f, 75.5495f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 11, 1288.77f, -1316.52f, 75.5494f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 12, 1288.83f, -1316.67f, 75.55f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 13, 1288.81f, -1316.84f, 75.559f);
			PHYSICS::_0xE54BF2CE6C7D23A9(uParam1->f_3, 14, 1288.74f, -1316.69f, 75.5571f);
		}
		PHYSICS::_0x1D97DA8ACB5D2582(uParam1->f_3, 3);
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1701958269))
		{
			func_1211(uParam1->f_3, Global_35, 0f, 0f, 0f, "SKEL_R_Finger12", 1, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1296638805))
		{
			func_1210(uParam1->f_3, Global_35);
		}
		else
		{
			func_1210(uParam1->f_3, Global_35);
		}
		if (uParam1->f_4 <= 0.001f)
		{
			PHYSICS::_0x10DAA76CB8A201A1(uParam1->f_3);
		}
		else
		{
			PHYSICS::_0x00F611A794A3C36E(uParam1->f_3);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_487[37])))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uParam0->f_487[37]), func_227(4), func_227(47), 1))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > uParam1->f_4)
			{
				uParam1->f_4 = (uParam1->f_4 + 0.05f);
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) < uParam1->f_4)
			{
				uParam1->f_4 = (uParam1->f_4 - 0.05f);
			}
			func_1423(uParam1->f_4, 0f, 1f);
			if (uParam1->f_4 < 0f)
			{
				uParam1->f_4 = 0f;
			}
			ENTITY::_0xEAA885BA3CEA4E4A(&(uParam0->f_487[37]), func_227(4), func_227(47), uParam1->f_4);
		}
	}
}

void func_1208(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

bool func_1209(var uParam0)
{
	return func_991(uParam0, 8388608);
}

void func_1210(int* iParam0, int iParam1)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	else if (PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(iParam0, iParam1);
	}
}

void func_1211(int* iParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, int iParam7)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	else if (!PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
	{
		PHYSICS::_0xC64E7A62632AD2FE(iParam0, iParam1, vParam2, sParam5, iParam6, iParam7);
	}
}

bool func_1212(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x005E6F28DD7ED58D(&(uParam0->f_552[iParam1]), func_1061(iParam2));
}

bool func_1213(int iParam0, int iParam1, float fParam2)
{
	return func_1621(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_1214(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

bool func_1215(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0x005E6F28DD7ED58D(&(uParam0->f_552[iParam1]), func_1072(iParam2));
}

var func_1216(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_1217(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_1218(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

float func_1219()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_1220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1221(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1222(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_1223()
{
	if (func_108() == -1 && func_87(0, 0, 1))
	{
		return (Global_1357549->f_1495 & 512 != 0 && Global_1357549->f_1494 & 2 != 0);
	}
	return 0;
}

int func_1224(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_1225(int iParam0, int iParam1, bool bParam2)
{
	if (PED::IS_PED_A_PLAYER(iParam0) || PED::GET_PED_GROUP_INDEX(iParam0) == iParam1)
	{
		return;
	}
	else if (!PED::DOES_GROUP_EXIST(iParam1))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iParam0) != iParam1)
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
	if (bParam2)
	{
		if (!PED::_0x878B68960C1C2A35(iParam0, iParam1))
		{
			PED::SET_PED_AS_GROUP_LEADER(iParam0, iParam1, 1);
		}
	}
	else if (!PED::IS_PED_GROUP_MEMBER(iParam0, iParam1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, iParam1);
	}
}

int func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
		case 16:
		case 17:
		case 18:
			return -1;
		default:
			break;
	}
	return -1;
}

void func_1227(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

void func_1228()
{
	if (func_703(0))
	{
		func_1622(0);
	}
	if (func_703(1))
	{
		func_1622(1);
	}
	if (func_703(5))
	{
		func_1622(5);
	}
	if (func_703(6))
	{
		func_1274(6);
	}
}

Vector3 func_1229()
{
	if (func_1472(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_1472(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_1230(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_1231(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_251(iParam0))
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
					if (func_139(((*Global_1835011)[4 /*74*/])->f_1, 1))
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
					if (func_1623(iVar0, 9, 11))
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
					if (func_139(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_13(((*Global_1347702)[63 /*49*/])->f_15))
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
					if (func_1623(iVar0, 9, 12))
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
					if (!func_139(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_280(18, 134217728, 1))
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
					if (func_1623(iVar0, 9, 11))
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
					if (func_139(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_13(((*Global_1347702)[134 /*49*/])->f_15))
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
					if (func_139(((*Global_1835011)[38 /*74*/])->f_1, 1))
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
					if (func_1623(iVar0, 9, 11))
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
					if (func_320(747937920, 1) && !func_139(((*Global_1347702)[1 /*49*/])->f_15, 1))
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
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_66(iParam0)))
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
	if (!func_684(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_1232(int iParam0)
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

bool func_1233(int iParam0, bool bParam1)
{
	if (!func_251(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_64(iParam0) || func_284(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_1234(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_1235(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_251(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	func_1624(iVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_1625(iParam0);
	}
}

void func_1236(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_251(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	func_1626(iVar0);
	func_282(iParam0, 60, 1);
	if (bParam1)
	{
		func_1627(iParam0);
	}
}

void func_1237(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_251(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	func_1628(iVar0);
	if (iParam0 == 14)
	{
		func_1629(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_1630(iParam0);
	}
}

void func_1238(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_251(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	func_1631(iVar0);
	func_282(iParam0, 61, 1);
	if (bParam1)
	{
		func_1632(iParam0);
	}
}

bool func_1239(int iParam0)
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

int func_1240(int iParam0)
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

bool func_1241(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_251(iParam0))
	{
		return false;
	}
	func_1633(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_1242(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1243(int iParam0, int iParam1)
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
			iVar0 = func_1634(296923297, iParam1);
			return func_1635(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1634(1237718549, iParam1);
			return func_1635(iVar0);
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

bool func_1244(int iParam0, int iParam1)
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

int func_1245(int iParam0, int iParam1)
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

int func_1246(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1244(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1247(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_1248(int iParam0, int iParam1, bool bParam2)
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_1244(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_1244(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_1244(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_1244(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_1244(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_1244(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_1244(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_1244(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_1244(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_1244(iParam1, -1100875244))
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_1244(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_1244(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_1244(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_1244(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_1244(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_1244(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_1244(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_1244(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_1244(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_1244(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_1244(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_1244(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_1244(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_1244(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_1244(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_1244(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_1249(int iParam0)
{
	func_1636(iParam0, 1);
	func_1636(iParam0, 128);
	func_1636(iParam0, 256);
	func_1636(iParam0, 512);
	func_1636(iParam0, 1024);
	func_1636(iParam0, 2048);
	func_1636(iParam0, 4096);
	func_1636(iParam0, 65536);
	func_1636(iParam0, 16384);
	func_1636(iParam0, 262144);
	func_1636(iParam0, 524288);
	func_1636(iParam0, 1048576);
	func_1636(iParam0, 2097152);
	func_1636(iParam0, 32768);
	func_1636(iParam0, 131072);
	func_1636(iParam0, 134217728);
	func_1636(iParam0, 1073741824);
}

void func_1250(int iParam0, bool bParam1)
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

void func_1251(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_1252()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (STREAMING::DOES_ANIM_DICT_EXIST(func_227(iVar1)))
		{
			STREAMING::REQUEST_ANIM_DICT(func_227(iVar1));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_227(iVar1)))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (STREAMING::IS_MODEL_VALID(func_736(iVar2)))
		{
			STREAMING::REQUEST_MODEL(func_736(iVar2), false);
			if (!STREAMING::HAS_MODEL_LOADED(func_736(iVar2)))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	iVar3 = 264;
	while (iVar3 <= 269)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_227(iVar3));
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_227(iVar3)))
		{
			iVar0 = 0;
		}
		iVar3++;
	}
	PED::_0xF7EA250B9A919E03(897044510, Global_35);
	if (!PED::_0x854BC9B1A1CCD034(897044510, Global_35))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_1253(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (((iVar1 == 16 || iVar1 == 17) || iVar1 == 18) || iVar1 == 19)
		{
			Jump @80; //curOff = 59
		}
		else if (!func_573(uParam0, iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1254(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;

	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = uParam3;
	return func_243(&uVar0, &Var1);
}

int func_1255(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;

	if (!func_251(iParam0))
	{
		return 0;
	}
	iVar1 = func_1637(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

char* func_1256(int iParam0)
{
	if (!func_58(iParam0))
	{
		return "INVALID";
	}
	switch (iParam0)
	{
		case 3:
			return "BILL";
		case 5:
			return "HOSEA";
		case 1:
			return "JOHN";
		case 7:
			return "CHARLES_SMITH";
		case 0:
			return "DUTCH";
		case 2:
			return "JAVIER";
		case 9:
			return "LENNY";
		case 8:
			return "SEAN";
		case 6:
			return "MICAH_BELL";
		case 4:
			return "UNCLE";
		case 11:
			return "SADIE_ADLER";
		case 21:
			return "SWANSON";
		case 23:
			return "TRELAWNY";
		case 18:
			return "STRAUSS";
		default:
			break;
	}
	return "NEEDS TO BE ADDED";
}

void func_1257()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(Global_1879514, &Var0, 20);
}

int func_1258(int iParam0)
{
	int iVar0;

	if (!func_759(iParam0))
	{
		return 0;
	}
	if (!func_761(func_760(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_762(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_762(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_762(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_762(iParam0));
	return 1;
}

void func_1259(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_702(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		uVar1 = func_1638(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, uVar1, 0))
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

int func_1260(int iParam0)
{
	if (!func_1639(iParam0))
	{
		return 0;
	}
	if (!func_143())
	{
		return 1;
	}
	return 0;
}

void func_1261(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

void func_1262(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1263(int iParam0, struct<2> Param1)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1640(iParam0, Param1))
	{
	}
	if (!func_1641(iParam0, Param1.f_1))
	{
	}
}

void func_1264(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1642((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1265(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1266(var uParam0)
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

void func_1267(var uParam0)
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

void func_1268(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1269(int iParam0, var uParam1)
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

void func_1270(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1271(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1272(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1273(int iParam0)
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

void func_1274(int iParam0)
{
	iParam0 = func_695(iParam0);
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

void func_1275(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1276(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1277(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1643(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1643(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1644(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1645(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1646(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1278(int iParam0)
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
	if (func_1647(iParam0))
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
	if (func_756(iParam0))
	{
		uVar3 = func_757(iParam0);
		if (func_1648(uVar3))
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

int func_1279()
{
	return Global_1900383->f_393;
}

void func_1280(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1281(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_344())
	{
		if (func_117())
		{
			bVar0 = false;
			if (!func_139(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_368(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1649();
				*iParam1 = func_1650();
				*iParam2 = func_1651();
				return 1;
			}
			else
			{
				*iParam0 = func_1652();
				*iParam1 = func_1653();
				*iParam2 = func_1654();
				return 1;
			}
		}
		else if (func_802())
		{
			if (!func_139(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1655();
				*iParam1 = func_1656();
				*iParam2 = func_1657();
				return 1;
			}
			else
			{
				*iParam0 = func_1658();
				*iParam1 = func_1659();
				*iParam2 = func_1660();
				return 1;
			}
		}
	}
	else if (func_117())
	{
		*iParam0 = func_1661();
		*iParam1 = func_1662();
		*iParam2 = func_1663();
		return 1;
	}
	else if (func_802())
	{
		*iParam0 = func_1664();
		*iParam1 = func_1665();
		*iParam2 = func_1666();
		return 1;
	}
	return 0;
}

void func_1282(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1283(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

void func_1284(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1285(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

void func_1286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_711(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1281(&iVar1, &iVar0, &iVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1667(iParam1);
	iVar5 = func_702(iParam0);
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

void func_1287(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

bool func_1288(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
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

int func_1289(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1643(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1668(Var0, 1415981582, 0);
	if (!func_346(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1290(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1643(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1668(Var0, -2119169513, 0);
	if (!func_346(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1291(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1669(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1442() };
	*uParam1 = func_1668(Var0, iParam0, 0);
	if (!func_346(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1292(int iParam0)
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

void func_1293(int iParam0, var uParam1)
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
	func_1670(iParam0, *uParam1);
	func_1670(iParam0, uParam1->f_1);
}

void func_1294(int iParam0)
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

void func_1295(int iParam0, var uParam1)
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
	func_1670(iParam0, *uParam1);
	func_1670(iParam0, uParam1->f_1);
	func_1670(iParam0, uParam1->f_2);
	func_1670(iParam0, uParam1->f_3);
	func_1670(iParam0, uParam1->f_4);
	func_1670(iParam0, uParam1->f_5);
}

int func_1296(int iParam0, int iParam1, bool bParam2)
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

var func_1297()
{
	return Global_1572864->f_15;
}

int func_1298(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 1, 0);
			func_264();
			return 0;
		}
		if (func_29(&(Local_18.f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[1])))
		{
			func_265(&(Local_18.f_1111), 1, 1, 1);
			func_265(&(Local_18.f_1111), 1, 0, 0);
		}
		Local_18.f_565.f_2 = 1;
		Local_18.f_565.f_112 = 0;
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		if (((((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(0, 5), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(6, 0), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(6, 1), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(0, 5), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(6, 0), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(6, 1), 2)) && func_1673(Global_35, &(Local_18.f_1111.f_40[3]), 0, -1, 1)) && func_1673(&(Local_18.f_1111.f_40[0]), &(Local_18.f_1111.f_40[1]), 0, -1, 1)) && func_1673(&(Local_18.f_1111.f_40[4]), &(Local_18.f_1111.f_40[5]), 0, -1, 1))
		{
			if (func_1674(func_228(1, 0), 1120403456))
			{
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_1675(&(Local_18.f_565), 1);
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 1);
		return 1;
	}
	return 0;
}

int func_1299(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 1, 0);
			func_264();
			return 0;
		}
		Local_18.f_565.f_2 = 2;
		Local_18.f_565.f_112 = 0;
		if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (func_29(&(Local_18.f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[1])))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		func_642(Global_35, 1, 1);
		if (!func_226(&(Local_18.f_1111.f_40[3]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[3]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[1]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[1]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[5]), -1);
		}
		func_1540();
		if ((((((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(3, 0), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(3, 2), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(3, 4), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(3, 1), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(3, 3), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(3, 5), 2)) && PED::_0xD5FE956C70FF370B(Global_35)) && func_226(&(Local_18.f_1111.f_40[3]), -982327190)) && func_226(&(Local_18.f_1111.f_40[1]), -982327190)) && func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			if (func_1151(&(Local_18.f_1111)))
			{
				if (func_1546(&(Local_18.f_1111), 1))
				{
					if (func_637(&Local_18))
					{
						if (func_1674(func_228(3, 0), 1120403456))
						{
							func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
							func_1675(&(Local_18.f_565), 1);
						}
					}
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 3);
		func_1676(&(Local_18.f_565), 1);
		func_217(&Local_18);
		return Local_18 >= 3;
	}
	return 0;
}

int func_1300(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(758684739) || STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 1, 0);
			func_264();
			return 0;
		}
		Local_18.f_565.f_2 = 3;
		Local_18.f_565.f_112 = 0;
		if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (func_29(&(Local_18.f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[1])))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_18.f_687.f_2))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_18.f_687.f_2, 11);
		}
		func_642(Global_35, 1, 1);
		func_645(&(Local_18.f_565), 1);
		if (!func_226(&(Local_18.f_1111.f_40[3]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[3]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[1]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[1]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[5]), -1);
		}
		if (func_1151(&(Local_18.f_1111)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(Local_18.f_1111.f_40[6])))
			{
				if (func_1197(&(Local_18.f_1111.f_40[6]), func_228(9, 2), 0f, 2))
				{
					func_1677(&(Local_18.f_1111.f_40[6]), 1, 1);
				}
			}
		}
		func_1540();
		if ((((((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(3, 0), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(3, 2), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(3, 4), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(3, 1), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(3, 3), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(3, 5), 2)) && PED::_0xD5FE956C70FF370B(Global_35)) && func_226(&(Local_18.f_1111.f_40[3]), -982327190)) && func_226(&(Local_18.f_1111.f_40[1]), -982327190)) && func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			if (func_1546(&(Local_18.f_1111), 1))
			{
				if (func_1674(func_228(3, 0), 1120403456))
				{
					func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
					func_1675(&(Local_18.f_565), 1);
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 5);
		func_261(&(Local_18.f_1111), 1);
		func_1676(&(Local_18.f_565), 1);
		func_217(&Local_18);
		return Local_18 >= 3;
	}
	return 0;
}

int func_1301(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 0, 0);
			func_264();
			return 0;
		}
		Local_18.f_565.f_2 = 4;
		Local_18.f_565.f_112 = 0;
		if (func_173(func_232(3, -1891229662)) > 0)
		{
			func_234(func_173(func_232(3, -1891229662)), 0, 0, 0, 1);
			Local_18.f_1224.f_7 = 0;
			func_233(func_232(3, -1891229662), Local_18.f_1224.f_7);
		}
		if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (func_29(&(Local_18.f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[1])))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[4]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[4]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[3]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[3]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[1]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[1]), -1);
		}
		if (!func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(Local_18.f_1111.f_40[5]), -1);
		}
		func_1540();
		if ((((((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(4, 0), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(4, 2), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(4, 4), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(4, 1), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(4, 3), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(4, 5), 2)) && func_226(&(Local_18.f_1111.f_40[4]), -982327190)) && func_226(&(Local_18.f_1111.f_40[3]), -982327190)) && func_226(&(Local_18.f_1111.f_40[1]), -982327190)) && func_226(&(Local_18.f_1111.f_40[5]), -982327190))
		{
			if (func_1674(func_228(4, 0), 1120403456))
			{
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_1675(&(Local_18.f_565), 1);
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 7);
		func_261(&(Local_18.f_1111), 1);
		func_539(&(Local_18.f_730), 1, 1, 0);
		func_564(&Local_18, 8);
		func_597(&(Local_18.f_565), 1);
		func_612(&Local_18, 23, 1);
		func_1678(&(Local_18.f_565), 1);
		func_219(&Local_18);
		return Local_18.f_2 >= 5;
	}
	return 0;
}

int func_1302(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 0, 0);
			func_264();
			return 0;
		}
		Local_18.f_565.f_2 = 5;
		Local_18.f_565.f_112 = 0;
		if (Local_18.f_1224.f_7 != func_173(func_232(3, -1891229662)))
		{
			Local_18.f_1224.f_7 = func_173(func_232(3, -1891229662));
		}
		if (func_29(Global_35, 0) && PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			func_265(&(Local_18.f_1111), 2, 2, 1);
		}
		if (func_29(&(Local_18.f_1111.f_40[0]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[0])))
		{
			func_265(&(Local_18.f_1111), 0, 2, 1);
		}
		if (func_29(&(Local_18.f_1111.f_40[1]), 0) && PED::_0xA0BC8FAED8CFEB3C(&(Local_18.f_1111.f_40[1])))
		{
			func_265(&(Local_18.f_1111), 1, 1, 0);
			func_265(&(Local_18.f_1111), 1, 0, 1);
		}
		func_1540();
		func_597(&(Local_18.f_565), 1);
		func_564(&Local_18, 8);
		func_589(&Local_18, 20);
		func_617(&Local_18, 6);
		if ((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(5, 0), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(5, 1), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(5, 2), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(5, 3), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(5, 4), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(5, 5), 2))
		{
			if (func_1546(&(Local_18.f_1111), 0))
			{
				if (func_1674(func_228(5, 0), 1120403456))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, -530524, false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.8f, 2000, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
					TASK::TASK_MOUNT_ANIMAL(&(Local_18.f_1111.f_40[4]), &(Local_18.f_1111.f_40[5]), -1, -1, 2f, 1, 0, 0);
					PED::_0x2208438012482A1A(&(Local_18.f_1111.f_40[4]), false, false);
					TASK::TASK_MOUNT_ANIMAL(&(Local_18.f_1111.f_40[0]), &(Local_18.f_1111.f_40[1]), -1, -1, 2f, 1, 0, 0);
					PED::_0x2208438012482A1A(&(Local_18.f_1111.f_40[0]), false, false);
					func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
					func_1675(&(Local_18.f_565), 1);
				}
			}
		}
	}
	else
	{
		func_557(&(Local_18.f_565), 9);
		return 1;
	}
	return 0;
}

int func_1303(var uParam0)
{
	if (!func_1671(&(Local_18.f_565)))
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(758684739) || !STREAMING::_IS_IMAP_ACTIVE(-661825463))
		{
			func_263(-2020023971, 0, 0);
			func_264();
			return 0;
		}
		Local_18.f_565.f_2 = 5;
		Local_18.f_565.f_112 = 15;
		if (Local_18.f_1224.f_7 != func_173(func_232(3, -1891229662)))
		{
			Local_18.f_1224.f_7 = func_173(func_232(3, -1891229662));
		}
		func_597(&(Local_18.f_565), 1);
		func_564(&Local_18, 8);
		func_589(&Local_18, 20);
		func_617(&Local_18, 6);
		if (((((((((func_1672(&(Local_18.f_565)) && func_640(Global_35, func_625(5, 6), 2)) && func_640(&(Local_18.f_1111.f_40[0]), func_625(5, 7), 2)) && func_640(&(Local_18.f_1111.f_40[4]), func_625(5, 8), 2)) && func_640(&(Local_18.f_1111.f_40[3]), func_625(5, 6), 2)) && func_640(&(Local_18.f_1111.f_40[1]), func_625(5, 7), 2)) && func_640(&(Local_18.f_1111.f_40[5]), func_625(5, 8), 2)) && func_1673(Global_35, &(Local_18.f_1111.f_40[3]), 0, -1, 1)) && func_1673(&(Local_18.f_1111.f_40[0]), &(Local_18.f_1111.f_40[1]), 0, -1, 1)) && func_1673(&(Local_18.f_1111.f_40[4]), &(Local_18.f_1111.f_40[5]), 0, -1, 1))
		{
			if (func_1674(func_228(5, 6), 1120403456))
			{
				func_632(&(Local_18.f_121));
				func_621(&(Local_18.f_565), &(Local_18.f_730), uParam0);
				func_539(&(Local_18.f_730), 3, 1, 0);
				func_1675(&(Local_18.f_565), 1);
			}
		}
	}
	else if (!func_636(&Local_18, &(Local_18.f_1111), 2))
	{
	}
	else if (!func_633(&(Local_18.f_121), func_227(183), 1, 0))
	{
	}
	else
	{
		func_639(func_638(func_227(183)), &(Local_18.f_121));
		return 1;
	}
	return 0;
}

float func_1304(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1305(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_914(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1679(1, bVar1, 1, sVar2);
		func_1680(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1681(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_405();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1681(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1681(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_1306(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_108() == -1)
	{
		func_1682();
	}
	else
	{
		return;
	}
	func_1683();
	Global_40.f_9.f_14 = func_106();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1684())
		{
			func_187(Global_1310720->f_1);
		}
		else if (func_192() == func_188(Global_36, 1) && func_1685() != 2)
		{
			func_187(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_187(Global_36);
		}
		func_1686(Global_36, &vVar0, &uVar4);
		if (!func_1684())
		{
			if (func_1007(vVar0, Global_36) < func_1007(Global_40.f_9.f_7, Global_36))
			{
				func_187(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_188(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1686(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_84(Global_1935630, 8192);
	}
	func_1687();
}

int func_1307(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1688(uParam1, 128);
	if (func_890("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_891(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_461(Var4.f_4))
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
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_1688(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_1688(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_1688(uParam1, 16384)))
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
		func_892(iVar1);
	}
	if (func_461(iVar0))
	{
	}
	return iVar0;
}

void func_1308(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

bool func_1309(var uParam0, int iParam1, int iParam2)
{
	return func_1496(&(uParam0->f_4[iParam1]), iParam2);
}

void func_1310(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!func_1309(uParam0, iParam1, iParam2))
		{
			func_1110(uParam0->f_4[iParam1], iParam2);
		}
	}
	else if (func_1309(uParam0, iParam1, iParam2))
	{
		func_1335(uParam0->f_4[iParam1], iParam2);
	}
}

var func_1311(var uParam0, int iParam1, int iParam2)
{
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(&(uParam0->f_552[iParam1]), func_1023(iParam2));
}

char* func_1312(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return func_1689((uParam0->f_13[iVar0 /*12*/])->f_1);
		}
		iVar0++;
	}
	return "";
}

int func_1313(int iParam0, int iParam1, bool bParam2)
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

int func_1314(int iParam0)
{
	if (func_1690(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_1315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1314(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, uParam1, uParam3);
	}
}

void func_1316(int iParam0, int iParam1)
{
	if (func_1314(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_1317(int iParam0, int iParam1)
{
	if (func_1314(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_1318(int iParam0, int iParam1)
{
	if (func_1314(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_1319()
{
	return 1;
}

bool func_1320(var uParam0, int iParam1, int iParam2)
{
	return func_1496(uParam0[iParam1], iParam2);
}

int func_1321(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_1322(int iParam0)
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

void func_1323(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1691(iParam1);
	}
}

float func_1324(int iParam0, int iParam1, bool bParam2)
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
	return func_1007(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_1325(int iParam0, bool bParam1)
{
	if (!func_251(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_1692(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_1326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_289(iParam0);
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

int func_1327(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1693(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_1328(int iParam0)
{
	int iVar0;

	if (!func_251(iParam0))
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

void func_1329(int iParam0, int iParam1)
{
	if (!func_251(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

bool func_1330()
{
	if (func_108() != -1)
	{
		return false;
	}
	return func_292(1) > 0;
}

void func_1331(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1332(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

int func_1333(int iParam0)
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

int func_1334(int iParam0)
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

void func_1335(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1336(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_1337(int iParam0, int iParam1)
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

void func_1338(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1694(bParam1);
	}
}

void func_1339(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1340(int iParam0)
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

int func_1341(var uParam0)
{
	vector3 vVar0;

	if (!func_980(23, &vVar0))
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

int func_1342(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_980(23, &Var0))
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

int func_1343(int iParam0)
{
	return iParam0;
}

int func_1344()
{
	int iVar0;

	iVar0 = func_800();
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

int func_1345(var uParam0)
{
	if (!func_346(*uParam0, 0))
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

int func_1346(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_458(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_838((375 + iVar29), 1);
		if (func_839(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_840(iParam0, &Var6, iVar5);
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

int func_1347(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_841(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_785(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1349(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1350(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_785(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1351(var uParam0)
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

float func_1352(int iParam0)
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
			return func_1695(iParam0);
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
			return func_1695(iParam0);
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
			return func_1695(iParam0);
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

int func_1353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_368(18);
		case 2:
			return func_368(20);
		case 1:
			return func_368(19);
		default:
			break;
	}
	return 1;
}

int func_1354(int iParam0)
{
	return func_1696(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1355(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_108() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_368(31))
	{
		return;
	}
	iVar0 = func_1354(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1354(iParam0);
	if (func_1697(iParam0) && func_1698(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1699(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1700(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_137(func_1701(iParam0), 0);
					}
					func_1702(iParam0, iVar2, iVar3);
					func_1703(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1356(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1357(int iParam0)
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

int func_1358()
{
	return func_1704(Global_40.f_12018);
}

int func_1359()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_821(iVar1);
		if (func_159(iVar2, 1, 0) || func_1365(func_1364(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1360()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1705(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1361()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1370(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1362()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1363(int iParam0)
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

int func_1364(int iParam0)
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

bool func_1365(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1366(int iParam0)
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

int func_1367(int iParam0)
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

int func_1368(int iParam0)
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

char* func_1369(int iParam0)
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

bool func_1370(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(uParam0) > 0;
}

char* func_1371(int iParam0)
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

char* func_1372(int iParam0)
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

int func_1373(int iParam0)
{
	if (func_1706(iParam0) && func_159(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1707(iParam0) && func_1708(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1374(int iParam0)
{
	if (!func_346(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_414(iParam0));
}

int func_1375(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1376(bool bParam0)
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

void func_1377(int iParam0)
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

void func_1378(bool bParam0)
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

void func_1379(bool bParam0)
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

void func_1380(bool bParam0)
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

void func_1381(bool bParam0)
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

void func_1382(bool bParam0)
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

void func_1383(bool bParam0)
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

int func_1384(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_446(iParam0, 1) /*3*/]);
}

void func_1385()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1709();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_373(joaat("weapon_revolver_cattleman_john"));
		func_420(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_373(joaat("weapon_melee_knife_john"));
		func_420(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1386(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;

	uVar0 = func_785(0);
	*uParam1 = { func_841(iParam0, func_948(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(uVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1387(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1388(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1389(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1390(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_366(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1391(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_446(func_1710(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_370(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1392(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_446(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_885(524288))
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

int func_1393(int iParam0)
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

int func_1394(var uParam0)
{
	return func_1711(uParam0, -1);
}

void func_1395(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1712((Global_40.f_4283.f_325 + iParam0));
}

void func_1396(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_969())
	{
		func_477(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_477(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1397(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

bool func_1398(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1399(int iParam0)
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

void func_1400(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1401(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

void func_1402()
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

void func_1403(int iParam0)
{
	func_1408(iParam0, 8, 6);
}

void func_1404(int iParam0)
{
	func_1713(&(Global_1946804->f_2589), iParam0);
}

void func_1405(int iParam0, int iParam1)
{
	func_1714(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1406(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1715(0);
	if (iParam2 != 0 && func_1716(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_939(iParam0, func_953(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1407(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	int iVar8;

	bVar6 = func_108() != -1;
	uVar7 = func_1715(0);
	if (func_885(32768))
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
			iVar5 = func_953(iVar0, 1);
			if (func_1463(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1463(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1392(&(uParam0->f_1[iVar0 /*3*/]), iVar5, uVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1717(uParam0);
				if (iVar3 > 0)
				{
					if (!func_885(524288))
					{
						func_945(524288);
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
							iVar5 = func_953(iVar0, 1);
							if (func_1463(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1463(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1392(&(uParam0->f_1[iVar0 /*3*/]), iVar5, uVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1405(iVar0, iParam2);
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
					func_1411(524288);
				}
			}
		}
	}

void func_1408(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1409(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1718(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_108() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1719(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1430(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1430(Global_40.f_7729);
				Global_1946804->f_1378 = func_1430(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1720(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_933(0, 1);
	}
}

void func_1410(var uParam0)
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

void func_1411(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1412(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1413(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1467(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1467(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1468(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_945(8);
}

int func_1414()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1415(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1416()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1721(13);
	iVar1 = func_1722(fVar0);
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

float func_1417()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1418()
{
	if (func_150())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1419()
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

float func_1420()
{
	return Global_1955565->f_3;
}

void func_1421(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1723(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1422(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1723(iParam0, 2, 0, 0);
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

float func_1423(float fParam0, float fParam1, float fParam2)
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

bool func_1424()
{
	return func_1721(12) <= -99f;
}

bool func_1425()
{
	return func_1721(12) >= 99f;
}

int func_1426()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_370(iVar1) == -999503751)
		{
			if (func_1724() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1427(int iParam0)
{
	if (!func_901(iParam0))
	{
		return 0;
	}
	if (func_1431(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1428(int iParam0)
{
	if (!func_901(iParam0))
	{
		return 0;
	}
	if (func_1431(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1429(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_901(iParam0))
	{
		return;
	}
	if (!func_1428(iParam0))
	{
		func_1433(iParam0, 2);
		if (bParam2)
		{
			if (!func_87(0, 0, 1))
			{
				func_179(1, 4);
			}
		}
		if ((!func_1432() && !bParam1) && !func_87(0, 0, 1))
		{
			func_486(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1725(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1430(int iParam0)
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

bool func_1431(int iParam0, int iParam1)
{
	if (!func_901(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1432()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1433(int iParam0, int iParam1)
{
	if (!func_901(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1434(int iParam0, bool bParam1)
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

void func_1435(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1726(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_369(50);
			}
			else
			{
				func_369(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_369(51);
			}
			else
			{
				func_369(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1727(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_401();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_401();
			}
			break;
		case 3:
			func_369(24);
			if (bParam1)
			{
				if (!func_1727(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_401();
				}
			}
			break;
	}
}

void func_1436(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1728(0))
			{
				iVar0++;
			}
			if (func_1728(2))
			{
				iVar0++;
			}
			if (func_1728(4))
			{
				iVar0++;
			}
			if (!func_1729(16))
			{
				if (iVar0 == 1)
				{
					func_1730();
					func_137(456, 1);
					func_1731(16);
				}
			}
			if (!func_1729(32))
			{
				if (iVar0 >= 3)
				{
					func_1730();
					func_137(456, 1);
					func_1731(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1728(1))
			{
				iVar0++;
			}
			if (func_1728(3))
			{
				iVar0++;
			}
			if (func_1728(7))
			{
				iVar0++;
			}
			if (!func_1729(1))
			{
				if (iVar0 == 1)
				{
					func_1732();
					func_137(457, 1);
					func_1731(1);
				}
			}
			if (!func_1729(2))
			{
				if (iVar0 >= 3)
				{
					func_1732();
					func_137(457, 1);
					func_1731(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1728(5))
			{
				iVar0++;
			}
			if (func_1728(6))
			{
				iVar0++;
			}
			if (func_1728(8))
			{
				iVar0++;
			}
			if (!func_1729(4))
			{
				if (iVar0 == 1)
				{
					func_1733();
					func_137(455, 1);
					func_1731(4);
				}
			}
			if (!func_1729(8))
			{
				if (iVar0 >= 3)
				{
					func_1733();
					func_137(455, 1);
					func_1731(8);
				}
			}
			break;
	}
}

void func_1437(var uParam0)
{
	func_907(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_907(uParam0, 617531372);
	}
	else
	{
		func_907(uParam0, 291123060);
	}
}

void func_1438(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1734(uParam0))
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

int func_1439(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(uParam0, &Var3))
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

int func_1440(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_346(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, uParam1, &Var0))
	{
		return 0;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_1441(int iParam0)
{
	int iVar0[15];
	int iVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_442(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1735(iParam0, &uVar18);
	func_1736(iParam0, &uVar18, &iVar34, 1);
	if (func_448() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1737(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_444(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_442(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_370(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1737(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1737(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1737(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1737(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1737(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_444(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_446(func_445(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1738(&(Global_1946804->f_1616));
	func_449(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_450(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_450(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_450(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_450(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_450(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_450(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_450(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_450(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_450(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_451(&(iVar0[iVar36]), iVar35))
			{
				func_444(func_1739(iVar35), 1, 1);
				func_1740(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1461(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_452(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			iVar16 = 1;
		}
		else
		{
			iVar36++;
		}
	}
	if ((iVar16 || bVar17) || Global_40.f_7729 == func_900(iParam0))
	{
		if (!func_1741(8))
		{
			if (func_448() == -2125499975)
			{
				if (bVar17)
				{
					func_449(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1742(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1743(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_900(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_449(&(Global_1946804->f_1616), -361635024, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1742(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1743(2, 0, 6);
					}
				}
				if (iVar16 || Global_40.f_7729 == func_900(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (iVar16 || Global_40.f_7729 == func_900(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1744(Global_40.f_7729, 4096);
					func_1433(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1745(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_449(&(Global_1946804->f_1616), 1661121390, &uVar39, 0, 1, 0, -2125499975);
	func_449(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

struct<4> func_1442()
{
	struct<4> Var0;

	Var0 = { func_947(0) };
	return func_841(856287005, Var0, -218846335, 0);
}

int func_1443(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_346(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1347(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1746(&uVar7);
					if (func_842(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1444(var uParam0)
{
	return uParam0->f_1;
}

void func_1445(var uParam0)
{
	func_1747(uParam0);
	func_1749(uParam0, func_1748(-1346384396));
	func_1750(uParam0, func_1748(-712836614));
	func_1751(uParam0, func_1748(-1629133289));
	func_1752(uParam0, func_1748(1302066700));
	func_1753(uParam0, func_1748(599669344));
	func_1754(uParam0, func_1748(-1555511632));
}

void func_1446(struct<6> Param0)
{
	if (!func_1755(Param0.f_4, 1))
	{
	}
	if (!func_1755(Param0, 1))
	{
	}
	if (!func_1755(Param0.f_2, 1))
	{
	}
	if (!func_1755(Param0.f_5, 1))
	{
	}
	if (!func_1755(Param0.f_3, 1))
	{
	}
	if (!func_1755(Param0.f_1, 1))
	{
	}
}

void func_1447(int iParam0, int iParam1)
{
	iParam0 = func_695(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1448(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1644(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_947(0) };
	if (func_1756(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1449(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1643(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_842(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1450(int iParam0)
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

int func_1451(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_346(iParam1, 0))
	{
		return 0;
	}
	if (!func_1757(iParam1))
	{
		return 0;
	}
	if (func_1448(iParam0))
	{
		return 0;
	}
	iVar0 = func_1644(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_947(0) };
	Var1.f_4 = iVar0;
	if (!func_898(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1452(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_346(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1347(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1746(&Var7);
					if (func_898(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1454(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1453(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_785(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_952(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1454(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_374(0))
	{
		return func_1758(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_952(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_785(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1455(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (func_1387(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_374(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_785(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1456(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = 0;
	if (func_108() == -1)
	{
		if (func_356(43))
		{
			if (func_366(iParam0, 412399755))
			{
				func_868(-1791518714);
				if (func_869() == 0)
				{
					func_179(0, 10);
					sVar0 = func_1759(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_871(iParam0) < func_872(iParam0))
						{
							func_362(43, iParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_356(44))
		{
			if (func_366(iParam0, 709057512))
			{
				func_868(-2087881550);
				if (func_869() == 1)
				{
					func_179(0, 10);
					sVar0 = func_1759(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_871(iParam0) < func_872(iParam0))
						{
							func_362(43, iParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (func_366(iParam0, -1478961327))
			{
				func_868(1908068621);
				if (func_869() == 2)
				{
					func_179(0, 10);
					sVar0 = func_1759(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_871(iParam0) < func_872(iParam0))
						{
							func_362(43, iParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (func_366(iParam0, -1238404098))
			{
				func_868(1611247019);
				if (func_869() == 3)
				{
					func_179(0, 10);
					sVar0 = func_1759(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_871(iParam0) < func_872(iParam0))
						{
							func_362(43, iParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (func_366(iParam0, 1160548794))
			{
				func_868(1319635688);
				if (func_869() == 4)
				{
					func_179(0, 10);
					sVar0 = func_1759(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_871(iParam0) < func_872(iParam0))
						{
							func_362(43, iParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1457(int iParam0, var uParam1)
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

void func_1458(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1760(iParam1);
	func_1761(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1762(&(uParam0->f_26), iVar1);
		if (func_1763(uParam0->f_26, &iVar0))
		{
			func_1764(iVar0, iVar1);
		}
	}
}

int func_1459(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_458(iParam0, 0, 0) };
	Var5 = { func_841(iParam0, Var0, Var0.f_4, 0) };
	if (func_1347(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_785(0), &Var5, iParam1);
	return 1;
}

void func_1460(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1461(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1462(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

bool func_1463(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

void func_1464(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_446(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_1465(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1466(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1405(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1405(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1405(iVar2, iVar0);
		}
	}
}

bool func_1467(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1468(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

struct<4> func_1469()
{
	struct<4> Var0;

	return Var0;
}

int func_1470(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_346(iParam0, 0))
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
		func_1765(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

char* func_1471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1472(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_139(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_1473(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1474(int iParam0)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

int func_1475(int iParam0)
{
	int iVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1897952)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	((*Global_1897952)[iParam0 /*2*/])->f_1 = iVar0;
	return iVar0;
}

int func_1476(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_802())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_1477(int iParam0, int iParam1)
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

int func_1478(int iParam0)
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
		case 133: