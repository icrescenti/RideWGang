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
	struct<156> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1, 0, 20 } ;
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
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
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
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 17;
	var uLocal_291 = 5;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 5;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 5;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 5;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 5;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 5;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 5;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 5;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 5;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 5;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 5;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 5;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 5;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 5;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 5;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 5;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 20;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 17;
	var uLocal_600 = 5;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 5;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 5;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 5;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 5;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 5;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 5;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 5;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 5;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 5;
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
	var uLocal_710 = 5;
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
	var uLocal_721 = 5;
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
	var uLocal_732 = 5;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 5;
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
	var uLocal_754 = 5;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 5;
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
	var uLocal_776 = 5;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 16;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 16;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 16;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		}
		func_1();
	}
	PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		}
	}
	func_2(0);
	iVar0 = 2304;
	if (func_3() != -1)
	{
		iVar0 |= 512;
	}
	func_4();
	func_5(1);
	if (func_6())
	{
		TASK::_0xED27560703F37258(Global_35);
	}
	HUD::_0x4CC5F2FC1332577F(382897689);
	while (func_7(&Local_14))
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	HUD::_0x8BC7C1F929D07BF3(382897689);
	Global_1357517 = 0;
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(-605293197);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&(Local_14.f_155.f_618[iVar0]), 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(Local_14.f_155.f_635[iVar0]), 0);
		iVar0++;
	}
	func_8();
	func_9(&(Local_14.f_32));
	func_10();
	if (ANIMSCENE::_0x25557E324489393C(Local_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_2))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_2));
	}
	AUDIO::_0x9428447DED71FC7E("journal_scenes");
	func_5(0);
	func_11(&Local_14);
	Local_14.f_32.f_87 = -1;
	func_12(&Local_14);
	func_2(1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(bool bParam0)
{
	if (!bParam0)
	{
		func_13(0);
	}
	Global_1935689->f_2 = bParam0;
}

int func_3()
{
	return Global_1572887->f_12;
}

void func_4()
{
	Global_1357516 = 1;
}

void func_5(bool bParam0)
{
	int iVar0;

	if (func_14(Global_35))
	{
		iVar0 = func_15(7);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (bParam0)
			{
				PED::_0xCAC43D060099EA72(iVar0);
			}
			else
			{
				PED::_0xC9151483CC06A414(iVar0);
			}
		}
	}
}

int func_6()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar7;
	int iVar8;

	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	Global_1357517 = 1;
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	iVar0 = func_16(uParam0);
	if (uParam0->f_7 == 1 || iVar0 == 12)
	{
		func_17(uParam0);
	}
	switch (iVar0)
	{
		case 15:
		case 16:
			break;
		default:
			PAD::_0x2804658EB7D8A50B(4, 652262273);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				if (!PAD::IS_CONTROL_PRESSED(0, 1395223413))
				{
					_NAMESPACE30::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
					_NAMESPACE30::_SET_MOUSE_CURSOR_SPRITE(0);
					PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
					PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
				}
			}
			break;
	}
	if ((iVar0 < 15 && !func_18()) || !func_19(16))
	{
		if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != -372193721)
		{
			TASK::_0xB35370D5353995CB(Global_35, -372193721, 1048576000);
		}
		func_20(uParam0, 15);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_36, 10f, -1451757867, true, false, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 407174929))
	{
		OBJECT::_0xF40AB58D83C35027(uParam0->f_2);
	}
	switch (iVar0)
	{
		case 0:
			func_21(&(uParam0->f_32));
			func_20(uParam0, 1);
			uParam0->f_32.f_118 = func_22(&(uParam0->f_32.f_119), &(uParam0->f_32.f_120), &(uParam0->f_32.f_84), &(uParam0->f_32.f_85), &(uParam0->f_32.f_75), &(uParam0->f_32.f_90), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92), &(uParam0->f_32.f_110), &(uParam0->f_32.f_111), &Global_1357518);
			if (&Global_1357518 != 0)
			{
				HUD::_JOURNAL_GET_ENTRY_INFO(&Global_1357518, &Var1);
				if (Var1.f_1 == 0)
				{
					uParam0->f_7 = 1;
					uParam0->f_11 = &Global_1357518;
				}
			}
			Global_1357518 = 0;
			func_23(&(uParam0->f_32), uParam0->f_32.f_120, 0);
			func_24();
			AUDIO::_0x6339C1EA3979B5F7("journal_closeup", "journal_scenes");
			break;
		case 1:
			if (func_25(uParam0))
			{
				if (func_26(PLAYER::PLAYER_PED_ID(), 0, 1, 0) != joaat("weapon_unarmed") || func_26(PLAYER::PLAYER_PED_ID(), 1, 1, 0) != joaat("weapon_unarmed"))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
				}
				else
				{
					func_27(uParam0);
					func_20(uParam0, 2);
				}
			}
			break;
		case 2:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)) && func_29())
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_31(&(uParam0->f_32), &(uParam0->f_155), uParam0->f_11);
				func_20(uParam0, 3);
			}
			break;
		case 3:
			if (uParam0->f_7 == 1)
			{
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 336776976)
				{
					TASK::_0xB35370D5353995CB(Global_35, -975912680, 0f);
					uParam0->f_7 = 0;
					func_11(uParam0);
					func_32(&(uParam0->f_8));
					func_20(uParam0, 12);
					return 1;
				}
			}
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 336776976)
			{
				if (func_33(uParam0->f_6))
				{
					if (uParam0->f_32.f_91 == 1)
					{
						func_34(1, uParam0);
						if (func_35(uParam0->f_6, 1))
						{
							func_20(uParam0, 10);
							return 1;
						}
					}
				}
				else
				{
					func_36(uParam0);
					func_34(uParam0->f_32.f_91, uParam0);
				}
			}
			else
			{
				func_34(0, uParam0);
			}
			if (uParam0->f_32.f_89 < uParam0->f_32.f_90)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1543672280))
				{
					func_37(&(uParam0->f_32), 1);
					uParam0->f_32.f_87 = -1;
					func_38(0, uParam0);
					func_20(uParam0, 4);
					return 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 251766646))
				{
					func_39(0, &(uParam0->f_32));
					uParam0->f_32.f_87 = -1;
					func_38(0, uParam0);
					func_20(uParam0, 6);
					return 1;
				}
			}
			else
			{
				PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_PAGE_NEXT", 1, 1);
				PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_CHAPTER_NEXT", 1, 1);
			}
			if (uParam0->f_32.f_88 > 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1441911379))
				{
					uVar7 = uParam0->f_32.f_88;
					func_37(&(uParam0->f_32), -1);
					if (uParam0->f_32.f_88 == 0 && uParam0->f_32.f_86 != -1)
					{
						uParam0->f_32.f_87 = uVar7;
					}
					else
					{
						uParam0->f_32.f_87 = -1;
					}
					func_38(0, uParam0);
					func_20(uParam0, 5);
					return 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1308691423))
				{
					func_39(1, &(uParam0->f_32));
					func_38(0, uParam0);
					func_20(uParam0, 7);
					return 1;
				}
			}
			else
			{
				PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_PAGE_PREV", 1, 1);
				PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_CHAPTER_PREV", 1, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 220419707))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1, "breakout", true, false);
				func_20(uParam0, 15);
				return 1;
			}
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 336776976)
			{
				if (uParam0->f_32.f_86 != -1 && uParam0->f_7 == 0)
				{
					if (uParam0->f_32.f_87 != -1)
					{
						func_40(0, uParam0);
						if (func_33(uParam0->f_4))
						{
							if (func_35(uParam0->f_4, 1))
							{
								func_23(&(uParam0->f_32), uParam0->f_32.f_87, 1);
								uParam0->f_32.f_87 = -1;
								TASK::_0xB35370D5353995CB(Global_35, 606465748, 0f);
								func_38(0, uParam0);
								func_34(0, uParam0);
								func_20(uParam0, 14);
								return 1;
							}
						}
					}
					else if (uParam0->f_32.f_88 > 0)
					{
						func_40(1, uParam0);
						if (func_33(uParam0->f_4))
						{
							if (func_35(uParam0->f_4, 1))
							{
								uParam0->f_32.f_87 = uParam0->f_32.f_88;
								func_23(&(uParam0->f_32), 0, 1);
								func_38(0, uParam0);
								func_34(0, uParam0);
								TASK::_0xB35370D5353995CB(Global_35, 1941986386, 0f);
								func_20(uParam0, 13);
								return 1;
							}
						}
					}
				}
				else
				{
					func_11(uParam0);
				}
			}
			else
			{
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					func_41(uParam0);
				}
				func_38(0, uParam0);
			}
			break;
		case 12:
			iVar8 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
			if (!func_42(&(uParam0->f_8)))
			{
				func_32(&(uParam0->f_8));
			}
			else if (func_43(&(uParam0->f_8)) > 10f || iVar8 == 336776976)
			{
				if (iVar8 != 336776976)
				{
					TASK::_0xB35370D5353995CB(Global_35, 336776976, 1048576000);
				}
				*Global_1357519 = { 0f, 0f, 0f };
				func_44(&(uParam0->f_8));
				func_20(uParam0, 3);
			}
			else if (func_43(&(uParam0->f_8)) > 2f || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1300963384))
			{
				if (uParam0->f_11 != 0)
				{
					uParam0->f_11 = 0;
					func_45(&(uParam0->f_32), &(uParam0->f_155));
				}
			}
			break;
		case 13:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1308691423))
			{
				func_20(uParam0, 7);
			}
			break;
		case 14:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 251766646))
			{
				func_20(uParam0, 6);
			}
			break;
		case 4:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 8);
			}
			break;
		case 5:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 9);
			}
			break;
		case 6:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 8);
			}
			break;
		case 7:
			if (func_28(&(uParam0->f_32.f_25), &(uParam0->f_32.f_86), &(uParam0->f_32.f_92)))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 9);
			}
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -917343754))
			{
				func_30(&(uParam0->f_32), &(uParam0->f_155), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 3);
			}
			break;
		case 9:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -917343754))
			{
				OBJECT::_0xF40AB58D83C35027(uParam0->f_2);
				func_30(&(uParam0->f_32), &(uParam0->f_155.f_309), &(uParam0->f_155.f_618), &(uParam0->f_155.f_652), &(uParam0->f_155.f_635), 0);
				func_20(uParam0, 3);
			}
			break;
		case 10:
			func_17(uParam0);
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, -1339393873) == 0)
			{
				AUDIO::_0xAC84686C06184B0D("read_page", "journal_scenes");
				func_20(uParam0, 11);
			}
			break;
		case 11:
			func_17(uParam0);
			if (!UIAPPS::_IS_APP_RUNNING(-605293197))
			{
				AUDIO::_0xAC84686C06184B0D("journal_closeup", "journal_scenes");
				func_20(uParam0, 3);
			}
			break;
		case 15:
			if (func_46(Global_35, 0) || !TASK::_0xEC7E480FF8BD0BED(Global_35))
			{
				func_20(uParam0, 16);
			}
		case 16:
			return 0;
	}
	return 1;
}

void func_8()
{
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(func_47()))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(func_47());
	}
}

void func_9(var uParam0)
{
	if (uParam0->f_122 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_122));
	}
}

void func_10()
{
	TXD::_0x8232F37DF762ACB2(-1533916406);
	TXD::_0x8232F37DF762ACB2(410003791);
}

void func_11(var uParam0)
{
	if (func_33(uParam0->f_4))
	{
		func_48(&(uParam0->f_4), 1, 1);
	}
}

void func_12(var uParam0)
{
	if (func_33(uParam0->f_6))
	{
		func_48(&(uParam0->f_6), 1, 1);
	}
}

void func_13(bool bParam0)
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

bool func_14(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_15(int iParam0)
{
	iParam0 = func_49(iParam0);
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

var func_16(var uParam0)
{
	return *uParam0;
}

void func_17(var uParam0)
{
	func_12(uParam0);
	PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_PAGE_NEXT", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_PAGE_PREV", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_CHAPTER_NEXT", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "JOURNAL_BLOCK_CHAPTER_PREV", 1, 1);
	func_11(uParam0);
}

bool func_18()
{
	return &Global_1357516;
}

bool func_19(int iParam0)
{
	return func_50(iParam0);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_21(var uParam0)
{
	uParam0->f_122 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(func_51());
}

int func_22(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	int iVar9;
	int iVar10[4];
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	iVar1 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar17 = 0;
	while (iVar17 < 8)
	{
		(*uParam4)[iVar17] = -1;
		iVar17++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		(*uParam7)[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(*uParam9)[iVar0] = 0;
		iVar0++;
	}
	*uParam1 = -1;
	*uParam8 = -1;
	*uParam6 = -1;
	*uParam0 = HUD::_JOURNAL_GET_ENTRY_COUNT();
	if (iParam10 != 0)
	{
		HUD::_JOURNAL_GET_ENTRY_INFO(iParam10, &Var3);
		if (func_52(Var3.f_2))
		{
			iVar22 = 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (HUD::_JOURNAL_GET_ENTRY_COUNT() - 1))
	{
		iVar2 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iVar0);
		HUD::_JOURNAL_GET_ENTRY_INFO(iVar2, &Var3);
		iVar9 = func_53(Var3.f_5);
		if (func_54(Var3.f_2))
		{
			*uParam6 = iVar0;
			if (Var3.f_2 == 1918320105)
			{
				(*uParam7)[iVar20] = iVar2;
				iVar20++;
			}
		}
		else if (func_52(Var3.f_2))
		{
			if (iVar21 == 0)
			{
				*uParam8 = iVar0;
			}
			(*uParam9)[iVar21] = iVar2;
			iVar21++;
			if (iVar21 > 1)
			{
			}
			else
			{
				iVar16 = func_55(&Var3, &iVar10);
				if (iVar16 == 4)
				{
					func_56(&iVar1, &iVar16, &iVar10);
					iVar19 = *uParam5;
					*uParam5 = iVar0;
					if (!func_57(Var3.f_2) && Var3.f_5 != 0)
					{
						iVar16 = 2;
					}
				}
				iVar15 = iVar16;
				while (iVar15 <= ((iVar16 + iVar9) - 1))
				{
					iVar10[iVar15] = 1;
					iVar15++;
				}
				if (iVar18 < 8)
				{
					if (func_58(iVar18) == Var3)
					{
						(*uParam4)[iVar18] = iVar0;
						*uParam3 = iVar18;
						iVar18++;
					}
				}
				if (*uParam1 == -1)
				{
					if (iVar22 == 1)
					{
						if (func_52(Var3.f_2))
						{
							*uParam1 = *uParam5;
							*uParam2 = iVar18;
						}
					}
					else if (iParam10 != 0)
					{
						if (iParam10 == iVar2)
						{
							*uParam1 = *uParam5;
							*uParam2 = iVar18;
						}
					}
					else if (Var3.f_1 == 0)
					{
						if (iVar0 == *uParam5)
						{
							*uParam1 = iVar19;
						}
						else
						{
							*uParam1 = *uParam5;
						}
						*uParam2 = iVar18;
					}
				}
			}
			iVar0++;
			if (*uParam1 == -1)
			{
				*uParam1 = *uParam5;
				*uParam2 = *uParam3;
			}
			return iVar1;
		}
	}

void func_23(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar7;
	int iVar8;

	iVar0 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iParam1);
	HUD::_JOURNAL_GET_ENTRY_INFO(iVar0, &vVar1);
	if (func_54(vVar1.z))
	{
		iParam1 = 0;
	}
	else if (func_52(vVar1.z))
	{
		iParam1 = uParam0->f_110;
	}
	if (iParam2 == 1)
	{
		iVar7 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (iParam1 > iVar7)
		{
			iVar8 = iVar7;
			while (iVar8 <= (iParam1 - 1))
			{
				iVar0 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iVar8);
				HUD::_JORUNAL_MARK_READ(iVar0);
				iVar8++;
			}
		}
	}
	func_60(uParam0);
	func_60(&(uParam0->f_25));
	func_60(&(uParam0->f_50));
	if (iParam1 != 0 && uParam0->f_88 < 2)
	{
		func_61(&(uParam0->f_92));
	}
	uParam0->f_88 = iParam1;
	func_62(uParam0->f_88, uParam0, &(uParam0->f_25), &(uParam0->f_50), &(uParam0->f_75), uParam0->f_110);
	uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
	func_63(&(uParam0->f_25), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	if (uParam0->f_88 > 0)
	{
		func_63(uParam0, uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	}
	else
	{
		func_64(uParam0);
	}
	if (uParam0->f_89 < uParam0->f_90)
	{
		func_63(&(uParam0->f_50), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
	}
	else
	{
		func_64(&(uParam0->f_50));
	}
}

void func_24()
{
	TXD::_0xDB1BD07FB464584D(-1533916406, 0);
	TXD::_0xDB1BD07FB464584D(410003791, 0);
}

int func_25(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_65(&(uParam0->f_32)))
	{
		iVar0 = 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		iVar0 = 0;
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_27(var uParam0)
{
	func_66(&(uParam0->f_32));
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Journal");
	func_67(&(uParam0->f_155), uParam0->f_3);
}

int func_28(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_68(&(((*uParam0)[iVar0 /*6*/])->f_1[iVar1])))
			{
				if (!TXD::_0xBE72591D1509FFE4(&(((*uParam0)[iVar0 /*6*/])->f_1[iVar1])))
				{
					return 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_69((*uParam0)[0 /*6*/], uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_70(uParam2[iVar0], 0, &iVar2);
			if (func_68(iVar2))
			{
				if (!TXD::_0xBE72591D1509FFE4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!TXD::_0xBE72591D1509FFE4(1720796751))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-1953758320))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-1812032167))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(736028119))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(1362538918))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(2081646875))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-132554147))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-2121993846))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(1345982557))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-2030332649))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-318990232))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(1269508139))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-156010984))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-1398971313))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(1391840685))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-981019355))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(28200354))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-1499250231))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(1088177688))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(-643999989))
		{
			return 0;
		}
		if (!TXD::_0xBE72591D1509FFE4(func_71()))
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (TXD::_0xBE72591D1509FFE4(-1533916406) && TXD::_0xBE72591D1509FFE4(410003791))
	{
		return 1;
	}
	return 0;
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;

	iVar0 = 0;
	if (&uParam0->f_25[0 /*6*/] == -1)
	{
		return;
	}
	uParam0->f_84 = func_72(&(uParam0->f_25[0 /*6*/]), &(uParam0->f_75));
	iVar0 = 0;
	while (iVar0 < 16)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2[iVar0], 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam4[iVar0], 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam2[0], func_73(func_72(&(uParam0->f_25[0 /*6*/]), &(uParam0->f_75))));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam3[0], 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam4[0], 1);
	if (func_69(uParam0->f_25[0 /*6*/], &(uParam0->f_86)))
	{
		func_74(uParam1, &(uParam0->f_25), 1, uParam2, uParam3, uParam4, &(uParam0->f_91), &(uParam0->f_92), &(uParam0->f_111), iParam5);
	}
	else
	{
		func_74(uParam1, &(uParam0->f_25), 0, uParam2, uParam3, uParam4, &(uParam0->f_91), &(uParam0->f_92), &(uParam0->f_111), iParam5);
	}
}

void func_31(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_121 == 1)
	{
		func_30(uParam0, uParam1, &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), iParam2);
	}
	else
	{
		func_30(uParam0, &(uParam1->f_309), &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), iParam2);
	}
	uParam0->f_121 = !uParam0->f_121;
}

void func_32(var uParam0)
{
	func_75(uParam0, 0f);
}

bool func_33(int iParam0)
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

void func_34(bool bParam0, var uParam1)
{
	if (func_33(uParam1->f_6))
	{
		func_76(uParam1->f_6, bParam0, 0);
	}
}

bool func_35(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_36(var uParam0)
{
	if (!func_33(uParam0->f_6))
	{
		uParam0->f_6 = func_78("VI_READ", -69749786, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_79(uParam0->f_6, 1310260484, 0, 1);
	}
}

void func_37(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_60(uParam0);
		func_80(uParam0, &(uParam0->f_25));
		func_80(&(uParam0->f_25), &(uParam0->f_50));
		if (uParam0->f_88 > 2)
		{
			func_61(&(uParam0->f_92));
		}
		uParam0->f_88 = &uParam0->f_25[0 /*6*/];
		uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (uParam0->f_89 < uParam0->f_90)
		{
			func_81(&(uParam0->f_25), &(uParam0->f_50), uParam0->f_110);
			func_63(&(uParam0->f_50), uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
		}
		else
		{
			func_64(&(uParam0->f_50));
		}
	}
	else if (iParam1 == -1)
	{
		func_60(&(uParam0->f_50));
		func_80(&(uParam0->f_50), &(uParam0->f_25));
		func_80(&(uParam0->f_25), uParam0);
		uParam0->f_88 = &uParam0->f_25[0 /*6*/];
		uParam0->f_89 = func_59(&(uParam0->f_25), uParam0->f_110);
		if (uParam0->f_88 > 0)
		{
			func_82(&(uParam0->f_25), uParam0, &(uParam0->f_75), uParam0->f_110);
			func_63(uParam0, uParam0->f_90, uParam0->f_86, &(uParam0->f_92), uParam0->f_110, &(uParam0->f_111));
		}
		else
		{
			func_64(uParam0);
		}
	}
}

void func_38(bool bParam0, var uParam1)
{
	if (func_33(uParam1->f_4))
	{
		func_76(uParam1->f_4, bParam0, 0);
	}
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == 1)
	{
		if (uParam1->f_88 == 0)
		{
			return;
		}
		if (uParam1->f_88 == &uParam1->f_75[uParam1->f_84])
		{
			uParam1->f_84 = (uParam1->f_84 - 1);
		}
		iVar0 = &uParam1->f_75[uParam1->f_84];
	}
	else
	{
		if (uParam1->f_88 == uParam1->f_90)
		{
			return;
		}
		if (uParam1->f_84 >= uParam1->f_85)
		{
			iVar0 = uParam1->f_90;
		}
		else
		{
			uParam1->f_84++;
			iVar0 = &uParam1->f_75[uParam1->f_84];
		}
	}
	if (iVar0 == 0 && uParam1->f_86 != -1)
	{
		uParam1->f_87 = uParam1->f_88;
	}
	else
	{
		uParam1->f_87 = -1;
	}
	func_23(uParam1, iVar0, 1);
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;

	if (func_83(uParam1->f_32.f_86))
	{
		if (iParam0 == 1)
		{
			iVar0 = 3;
		}
		else
		{
			iVar0 = 4;
		}
	}
	else if (iParam0 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam1->f_5 == iVar0 && func_33(uParam1->f_4))
	{
		func_38(1, uParam1);
	}
	else
	{
		func_11(uParam1);
		func_84(iVar0, uParam1);
	}
}

void func_41(var uParam0)
{
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(uParam0->f_1, Global_35, -1);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

bool func_42(var uParam0)
{
	return func_85(*uParam0, 1);
}

float func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return 0f;
	}
	if (func_86(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_87() - uParam0->f_1);
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(var uParam0, var uParam1)
{
	if (uParam0->f_121 == 1)
	{
		func_30(uParam0, &(uParam1->f_309), &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), 0);
	}
	else
	{
		func_30(uParam0, uParam1, &(uParam1->f_618), &(uParam1->f_652), &(uParam1->f_635), 0);
	}
}

int func_46(int iParam0, bool bParam1)
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

int func_47()
{
	return -1913092956;
}

void func_48(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_77(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_88(iVar0);
	*uParam0 = 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_50(var uParam0)
{
	return func_89(Global_1935496->f_27, uParam0);
}

int func_51()
{
	return -869274923;
}

int func_52(int iParam0)
{
	if (iParam0 == -731660569)
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	return -1;
}

int func_54(int iParam0)
{
	if (iParam0 == 1918320105 || iParam0 == 230952115)
	{
		return 1;
	}
	return 0;
}

int func_55(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_5 == 2)
	{
		if (func_57(uParam0->f_2))
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iParam1[iVar0] == 0)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1[2] == 0)
		{
			return 2;
		}
		else if (iParam1[3] == 0)
		{
			return 3;
		}
	}
	else if (uParam0->f_5 == 1)
	{
		if (func_57(uParam0->f_2))
		{
			if (iParam1[0] == 0 && iParam1[1] == 0)
			{
				return 0;
			}
			else if (iParam1[2] == 0 && iParam1[3] == 0)
			{
				return 2;
			}
		}
		else if (iParam1[2] == 0 && iParam1[3] == 0)
		{
			return 2;
		}
	}
	else if (uParam0->f_5 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iParam1[iVar0] == 1)
			{
				return 4;
			}
			iVar0++;
		}
		return 0;
	}
	return 4;
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	*iParam0++;
	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = 0;
		iVar0++;
	}
}

int func_57(int iParam0)
{
	if ((((iParam0 == 1302417915 || iParam0 == 982411871) || iParam0 == 1610827497) || func_52(iParam0)) || func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1405489977;
	}
	else if (iParam0 == 1)
	{
		return -2134669864;
	}
	else if (iParam0 == 2)
	{
		return 115823701;
	}
	else if (iParam0 == 3)
	{
		return -1774490051;
	}
	else if (iParam0 == 4)
	{
		return 701612593;
	}
	else if (iParam0 == 5)
	{
		return -739133286;
	}
	else if (iParam0 == 6)
	{
		return -514392105;
	}
	else if (iParam0 == 7)
	{
		return 1396404308;
	}
	return 1405489977;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0[iVar0 /*6*/] != -1)
		{
			iVar2 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(uParam0[iVar0 /*6*/]);
			HUD::_JOURNAL_GET_ENTRY_INFO(iVar2, &vVar3);
			if (!func_54(vVar3.z))
			{
				if (!func_52(vVar3.z) || uParam0[iVar0 /*6*/] == iParam1)
				{
					if (uParam0[iVar0 /*6*/] > iVar1)
					{
						iVar1 = uParam0[iVar0 /*6*/];
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_60(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_90(&(((*uParam0)[iVar0 /*6*/])->f_1));
		iVar0++;
	}
}

void func_61(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		func_70(uParam0[iVar0], 0, &iVar1);
		if (func_91(iVar1))
		{
			TXD::_0x8232F37DF762ACB2(iVar1);
		}
		iVar0++;
	}
	TXD::_0x8232F37DF762ACB2(1720796751);
	TXD::_0x8232F37DF762ACB2(-1953758320);
	TXD::_0x8232F37DF762ACB2(-1812032167);
	TXD::_0x8232F37DF762ACB2(736028119);
	TXD::_0x8232F37DF762ACB2(1362538918);
	TXD::_0x8232F37DF762ACB2(2081646875);
	TXD::_0x8232F37DF762ACB2(-132554147);
	TXD::_0x8232F37DF762ACB2(-2121993846);
	TXD::_0x8232F37DF762ACB2(1345982557);
	TXD::_0x8232F37DF762ACB2(-2030332649);
	TXD::_0x8232F37DF762ACB2(-318990232);
	TXD::_0x8232F37DF762ACB2(1269508139);
	TXD::_0x8232F37DF762ACB2(-156010984);
	TXD::_0x8232F37DF762ACB2(-1398971313);
	TXD::_0x8232F37DF762ACB2(1391840685);
	TXD::_0x8232F37DF762ACB2(-981019355);
	TXD::_0x8232F37DF762ACB2(28200354);
	TXD::_0x8232F37DF762ACB2(-1499250231);
	TXD::_0x8232F37DF762ACB2(1088177688);
	TXD::_0x8232F37DF762ACB2(-643999989);
	TXD::_0x8232F37DF762ACB2(func_71());
}

void func_62(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	func_92(iParam0, uParam2, iParam5);
	func_81(uParam2, uParam3, iParam5);
	func_82(uParam2, uParam1, uParam4, iParam5);
}

void func_63(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	var uVar10;
	int iVar17[4];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;

	iVar2 = 0;
	iVar25 = 0;
	iVar26 = 0;
	iVar27 = -1;
	iVar28 = -1;
	iVar29 = 0;
	func_64(uParam0);
	if (uParam0[0 /*6*/] == -1)
	{
		return;
	}
	if (uParam0[0 /*6*/] == 0)
	{
		if (iParam2 != -1)
		{
			if (func_83(iParam2))
			{
				(*uParam0)[1 /*6*/] = iParam2;
			}
			else
			{
				func_93(uParam3);
				iVar17[0] = 1;
				iVar17[1] = 1;
			}
		}
	}
	iVar24 = 0;
	while (iVar24 <= 3)
	{
		if (uParam0[iVar24 /*6*/] >= 0)
		{
			iVar3 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(uParam0[iVar24 /*6*/]);
			HUD::_JOURNAL_GET_ENTRY_INFO(iVar3, &Var4);
			iVar1 = func_53(Var4.f_5);
			iVar23 = func_55(&Var4, &iVar17);
			if (iVar1 == 1)
			{
				if (iVar23 == 2 || iVar23 == 3)
				{
					iVar26++;
					if (!func_57(Var4.f_2) && Var4.f_2 != 711933872)
					{
						iVar29 = 1;
					}
				}
			}
			if (func_52(Var4.f_2))
			{
				iVar25 = 1;
			}
			iVar22 = iVar23;
			while (iVar22 <= ((iVar23 + iVar1) - 1))
			{
				iVar17[iVar22] = 1;
				iVar22++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_52(Var4.f_2))
				{
					if (uParam5[iVar0] != 0)
					{
						HUD::_JOURNAL_GET_ENTRY_INFO(uParam5[iVar0], &Var4);
						func_70(Var4, 0, &uVar10);
						((*uParam0)[iVar2 /*6*/])->f_1[iVar0] = uVar10;
					}
					else
					{
						((*uParam0)[iVar2 /*6*/])->f_1[iVar0] = 0;
					}
				}
				else
				{
					func_70(Var4, iVar0, &uVar10);
					((*uParam0)[iVar2 /*6*/])->f_1[iVar0] = uVar10;
				}
				if (!func_68(&(((*uParam0)[iVar2 /*6*/])->f_1[iVar0])))
				{
					if (iVar27 == -1)
					{
						iVar27 = iVar2;
						iVar28 = iVar0;
					}
				}
				iVar0++;
			}
			iVar2++;
		}
		else if (iVar25 == 1 && iVar24 == 3)
		{
			if (uParam5[4] != 0)
			{
				HUD::_JOURNAL_GET_ENTRY_INFO(uParam5[4], &Var4);
				func_70(Var4, 0, &uVar10);
				((*uParam0)[iVar2 /*6*/])->f_1[0] = uVar10;
			}
			else
			{
				((*uParam0)[iVar2 /*6*/])->f_1[0] = 0;
			}
			if (uParam5[5] != 0)
			{
				HUD::_JOURNAL_GET_ENTRY_INFO(uParam5[5], &Var4);
				func_70(Var4, 0, &uVar10);
				((*uParam0)[iVar2 /*6*/])->f_1[1] = uVar10;
			}
			else
			{
				((*uParam0)[iVar2 /*6*/])->f_1[1] = 0;
			}
		}
		iVar24++;
	}
	iVar30 = 0;
	if ((iVar2 < 4 && iParam1 > func_59(uParam0, iParam4)) && iVar25 == 0)
	{
		iVar31 = 0;
		while (iVar31 < 4)
		{
			if (&iVar17[iVar31] == 0)
			{
				iVar30 = 1;
			}
			iVar31++;
		}
		if (iVar30 == 1)
		{
			if (func_94(uParam0[0 /*6*/]))
			{
				func_95(uParam0[0 /*6*/], &uVar10, &iVar17, ((*uParam0)[iVar2 /*6*/])->f_1[0]);
			}
		}
	}
	iVar24 = 0;
	while (iVar24 <= 3)
	{
		func_96(&(((*uParam0)[iVar24 /*6*/])->f_1));
		iVar24++;
	}
	if ((iVar26 == 2 && iVar29 == 1) && iVar27 != -1)
	{
		func_97(uParam0[0 /*6*/], &uVar10, ((*uParam0)[iVar27 /*6*/])->f_1[iVar28]);
	}
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			((*uParam0)[iVar0 /*6*/])->f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_65(var uParam0)
{
	return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_122);
}

void func_66(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_122))
	{
		return;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_122, 0);
	UISTATEMACHINE::_UISTATEMACHINE_CREATE(func_47(), uParam0->f_122);
}

void func_67(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	char cVar3[64];
	var uVar11;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, "RtPagesTop");
	func_98(uParam0, uVar0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, "RtPagesBottom");
	func_98(&(uParam0->f_309), uVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		StringCopy(&cVar3, "textField", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		uVar11 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cVar3);
		uParam0->f_618[iVar2] = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar11, "text", 0);
		uParam0->f_652[iVar2] = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar11, "style", 0);
		StringCopy(&cVar3, "divider", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		uVar11 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cVar3);
		uParam0->f_635[iVar2] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar11, "isVisible", 0);
		iVar2++;
	}
}

int func_68(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -916968937)
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, var uParam1)
{
	if ((*uParam0 == 0 && *uParam1 != -1) && !func_83(*uParam1))
	{
		return 1;
	}
	return 0;
}

void func_70(int iParam0, int iParam1, var uParam2)
{
	func_99(uParam2);
	HUD::_JORUNAL_GET_TEXTURE_WITH_LAYOUT(iParam0, iParam1, uParam2);
}

int func_71()
{
	if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
	{
		return 1559365164;
	}
	return -211603243;
}

int func_72(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (uParam1[iVar0] != -1)
		{
			if (iParam0 >= uParam1[iVar0])
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	if (iParam0 == 0)
	{
		return 359637012;
	}
	else if (iParam0 == 1)
	{
		return 410002873;
	}
	else if (iParam0 == 2)
	{
		return 160827397;
	}
	else if (iParam0 == 3)
	{
		return 1003809922;
	}
	else if (iParam0 == 4)
	{
		return -518834432;
	}
	else if (iParam0 == 5)
	{
		return 1636415471;
	}
	else if (iParam0 == 6)
	{
		if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1232453926))
		{
			return 0;
		}
		else
		{
			return 1385929235;
		}
	}
	else if (iParam0 == 7)
	{
		return -2065924460;
	}
	return 359637012;
}

void func_74(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;
	int iVar10[4];
	struct<6> Var15;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	struct<4> Var30;
	var uVar34;
	char[] cVar35[8];
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	iVar25 = 1;
	iVar36 = -1;
	iVar37 = 0;
	iVar38 = 0;
	iVar39 = 0;
	if (iParam2 == 1)
	{
		iVar10[0] = 1;
		iVar10[1] = 1;
	}
	*uParam6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar24 = 0;
		iVar9 = 0;
		if (uParam1[iVar0 /*6*/] > -1)
		{
			iVar9 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(uParam1[iVar0 /*6*/]);
		}
		if (iVar9 != 0)
		{
			HUD::_JOURNAL_GET_ENTRY_INFO(iVar9, &Var15);
			HUD::_JORUNAL_MARK_READ(iVar9);
			iVar23 = func_53(Var15.f_5);
			iVar22 = func_55(&Var15, &iVar10);
			iVar21 = iVar22;
			while (iVar21 <= ((iVar22 + iVar23) - 1))
			{
				iVar10[iVar21] = 1;
				iVar21++;
			}
			if (func_52(Var15.f_2))
			{
				iVar36 = iVar0;
				iVar39 = iVar22;
			}
			else if (iParam9 == iVar9)
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					func_70(iVar9, iVar1, &Var2);
					func_100(iVar22, &Var2);
					if (func_68(Var2))
					{
						func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
					}
					else if (func_102(&(((*uParam1)[iVar0 /*6*/])->f_1[iVar1])))
					{
						func_97(uParam1[0 /*6*/], &Var2, ((*uParam1)[iVar0 /*6*/])->f_1[iVar1]);
						func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
					}
					if (Var2.f_2 != 188052454 && Var2.f_2 != 0)
					{
						*uParam6 = 1;
						iVar24 = 1;
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam3[iVar25], Var2.f_2);
						if (func_103(Var2.f_2))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4[iVar25], 3);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4[iVar25], 2);
						}
						iVar25++;
					}
					iVar1++;
				}
				Jump @459; //curOff = 398
				if (func_104(&(((*uParam1)[iVar0 /*6*/])->f_1[0])))
				{
					func_95(uParam1[0 /*6*/], &Var2, &iVar10, ((*uParam1)[iVar0 /*6*/])->f_1[0]);
					func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
				}
				if (iVar24 == 1)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam5[(iVar25 - 1)], 1);
				}
			}
			iVar0++;
			if (iVar36 != -1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (uParam8[iVar0] != 0)
					{
						if (iParam9 == uParam8[iVar0])
						{
						}
						else
						{
							func_70(uParam8[iVar0], 0, &Var2);
							func_100(iVar39, &Var2);
							iVar37 = (iVar37 + func_105(iVar0));
							Var2.f_3 = iVar37;
							func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
							iVar37 = (iVar37 + Var2.f_6);
							iVar0++;
						}
						if (iParam2 == 1)
						{
							Var2 = func_71();
							Var2.f_1 = func_71();
							Var2.f_2 = 0;
							Var2.f_3 = 11;
							Var2.f_4 = 386;
							Var2.f_5 = 81;
							Var2.f_6 = 46;
							func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
							iVar26 = 0;
							while (iVar26 < 17)
							{
								func_106(uParam0->f_121[iVar26 /*11*/]);
								if (uParam7[iVar26] != 0)
								{
									HUD::_JOURNAL_GET_ENTRY_INFO(uParam7[iVar26], &Var15);
									func_70(uParam7[iVar26], 0, &Var2);
									Var2.f_3 = (71 + iVar26 * 52);
									Var2.f_4 = 42;
									Var2.f_5 = 684;
									Var2.f_6 = 52;
									func_101((*uParam0)[iVar38 /*6*/], Var2, &iVar38);
									iVar27 = (iVar27 + func_107(uParam7[iVar26]));
									if (iVar27 > 0)
									{
										MISC::_INT_TO_STRING(iVar27, "%u", &Var30);
										iVar28 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Var30);
										iVar29 = 0;
										while (iVar29 < iVar28)
										{
											MemCopy(&uVar34, {Var30}, 1);
											StringCopy(&cVar35, HUD::_0x806862E5D266CF38(&uVar34, iVar29, iVar29 + 1), 8);
											if (iVar28 > 3)
											{
												DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_121[iVar26 /*11*/][iVar29 /*2*/], 1);
												DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(((*uParam0->f_121[iVar26 /*11*/])[iVar29 /*2*/])->f_1, func_108(cVar35, iVar29 == (iVar28 - 4)));
											}
											else
											{
												DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_121[iVar26 /*11*/][iVar29 /*2*/], 1);
												DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(((*uParam0->f_121[iVar26 /*11*/])[iVar29 /*2*/])->f_1, func_108(cVar35, 0));
											}
											iVar29++;
										}
									}
								}
								iVar26++;
							}
						}
						else
						{
							iVar26 = 0;
							while (iVar26 < 17)
							{
								func_106(uParam0->f_121[iVar26 /*11*/]);
								iVar26++;
							}
						}
						iVar40 = iVar38;
						while (iVar40 <= 19)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0[iVar40 /*6*/], 0);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(((*uParam0)[iVar40 /*6*/])->f_1, 0);
							DATABINDING::_DATABINDING_WRITE_DATA_INT(((*uParam0)[iVar40 /*6*/])->f_2, 0);
							DATABINDING::_DATABINDING_WRITE_DATA_INT(((*uParam0)[iVar40 /*6*/])->f_3, 0);
							DATABINDING::_DATABINDING_WRITE_DATA_INT(((*uParam0)[iVar40 /*6*/])->f_5, 1);
							DATABINDING::_DATABINDING_WRITE_DATA_INT(((*uParam0)[iVar40 /*6*/])->f_4, 1);
							iVar40++;
						}
					}
				}
			}
		}
	}

void func_75(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_87() - fParam1);
	func_109(uParam0, 1);
	func_110(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_76(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (bParam1)
	{
		func_111(iParam0, 4);
		func_112(iVar0, 1);
		func_113(iVar0, 1);
	}
	else
	{
		func_114(iParam0, 4);
		func_113(iVar0, 0);
	}
}

int func_77(int iParam0)
{
	return iParam0;
}

int func_78(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_115(iVar0, 2))
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
				func_116(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_80(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar0 /*6*/], (*uParam1)[iVar0 /*6*/], 6);
		iVar0++;
	}
}

void func_81(var uParam0, var uParam1, int iParam2)
{
	var uVar0[4];
	int iVar5;
	int iVar6;

	iVar5 = func_59(uParam0, iParam2);
	func_117(iVar5 + 1, &uVar0, iParam2);
	iVar6 = 0;
	while (iVar6 < 4)
	{
		(*uParam1)[iVar6 /*6*/] = &uVar0[iVar6];
		iVar6++;
	}
}

void func_82(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0[4];
	int iVar5;

	func_118((uParam0[0 /*6*/] - 1), &uVar0, uParam2, iParam3);
	iVar5 = 0;
	while (iVar5 < 4)
	{
		(*uParam1)[iVar5 /*6*/] = &uVar0[iVar5];
		iVar5++;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar7;

	iVar7 = HUD::_JOURNAL_GET_ENTRY_COUNT();
	if (iParam0 < iVar7)
	{
		iVar0 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iParam0);
		HUD::_JOURNAL_GET_ENTRY_INFO(iVar0, &vVar1);
		if (vVar1.z == 230952115)
		{
			return 1;
		}
	}
	return 0;
}

void func_84(int iParam0, var uParam1)
{
	char* sVar0;

	if (!func_33(uParam1->f_4))
	{
		if (iParam0 == 1)
		{
			sVar0 = "JOURNAL_SHOW_GANG_TAKES";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "JOURNAL_HIDE_GANG_TAKES";
		}
		else if (iParam0 == 3)
		{
			sVar0 = "JOURNAL_SHOW_DEBT";
		}
		else if (iParam0 == 4)
		{
			sVar0 = "JOURNAL_HIDE_DEBT";
		}
		uParam1->f_5 = iParam0;
		uParam1->f_4 = func_78(sVar0, -711536720, Global_35, 2, 0, 0, 1, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_79(uParam1->f_4, 1310260484, 0, 1);
	}
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_86(var uParam0)
{
	return func_85(*uParam0, 2);
}

float func_87()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_88(int iParam0)
{
	if (!func_119(iParam0))
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

bool func_89(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_90(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_91(uParam0[iVar0]))
		{
			TXD::_0x8232F37DF762ACB2(uParam0[iVar0]);
		}
		iVar0++;
	}
}

int func_91(int iParam0)
{
	if (func_68(iParam0) && !func_102(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, var uParam1, int iParam2)
{
	var uVar0[4];
	int iVar5;

	func_117(iParam0, &uVar0, iParam2);
	iVar5 = 0;
	while (iVar5 < 4)
	{
		(*uParam1)[iVar5 /*6*/] = &uVar0[iVar5];
		iVar5++;
	}
}

void func_93(var uParam0)
{
	int iVar0;
	int iVar7;

	iVar7 = 0;
	while (iVar7 < 17)
	{
		func_70(uParam0[iVar7], 0, &iVar0);
		if (func_68(iVar0))
		{
			TXD::_0xDB1BD07FB464584D(iVar0, 0);
		}
		iVar7++;
	}
	TXD::_0xDB1BD07FB464584D(1720796751, 0);
	TXD::_0xDB1BD07FB464584D(-1953758320, 0);
	TXD::_0xDB1BD07FB464584D(-1812032167, 0);
	TXD::_0xDB1BD07FB464584D(736028119, 0);
	TXD::_0xDB1BD07FB464584D(1362538918, 0);
	TXD::_0xDB1BD07FB464584D(2081646875, 0);
	TXD::_0xDB1BD07FB464584D(-132554147, 0);
	TXD::_0xDB1BD07FB464584D(-2121993846, 0);
	TXD::_0xDB1BD07FB464584D(1345982557, 0);
	TXD::_0xDB1BD07FB464584D(-2030332649, 0);
	TXD::_0xDB1BD07FB464584D(-318990232, 0);
	TXD::_0xDB1BD07FB464584D(1269508139, 0);
	TXD::_0xDB1BD07FB464584D(-156010984, 0);
	TXD::_0xDB1BD07FB464584D(-1398971313, 0);
	TXD::_0xDB1BD07FB464584D(1391840685, 0);
	TXD::_0xDB1BD07FB464584D(-981019355, 0);
	TXD::_0xDB1BD07FB464584D(28200354, 0);
	TXD::_0xDB1BD07FB464584D(-1499250231, 0);
	TXD::_0xDB1BD07FB464584D(1088177688, 0);
	TXD::_0xDB1BD07FB464584D(-643999989, 0);
	TXD::_0xDB1BD07FB464584D(func_71(), 0);
}

int func_94(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if ((((((iParam0 == 0 || iParam0 == 20) || iParam0 == 7) || iParam0 == 13) || iParam0 == 22) || iParam0 == 5) || iParam0 == 25)
	{
		return 0;
	}
	return 1;
}

void func_95(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_120(iParam0, iParam2);
	if (iVar0 != 4)
	{
		func_121(iParam0, uParam1, uParam3);
		func_100(iVar0, uParam1);
		(*iParam2)[iVar0] = 1;
	}
}

void func_96(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(uParam0[iVar0]))
		{
			TXD::_0xDB1BD07FB464584D(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_97(int iParam0, var uParam1, var uParam2)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((((((((((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 9) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14) || iParam0 == 17) || iParam0 == 20) || iParam0 == 21) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25)
	{
		*uParam1 = -1533916406;
		uParam1->f_3 = 450;
		uParam1->f_4 = 775;
		uParam1->f_5 = 700;
		uParam1->f_6 = 116;
	}
	else
	{
		*uParam1 = 410003791;
		uParam1->f_3 = 450;
		uParam1->f_4 = 775;
		uParam1->f_5 = 700;
		uParam1->f_6 = 143;
	}
	uParam1->f_2 = 188052454;
	*uParam2 = *uParam1;
}

void func_98(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;

	iVar6 = 0;
	while (iVar6 < 20)
	{
		StringCopy(&cVar0, "Image", 24);
		StringIntConCat(&cVar0, iVar6, 24);
		uVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cVar0);
		func_122((*uParam0)[iVar6 /*6*/], uVar8);
		iVar6++;
	}
	iVar7 = 0;
	while (iVar7 < 17)
	{
		StringCopy(&cVar3, "GangTakeTotal", 24);
		StringIntConCat(&cVar3, iVar7, 24);
		uVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cVar3);
		func_123(uParam0->f_121[iVar7 /*11*/], uVar9, iVar7);
		iVar7++;
	}
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_100(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			uParam1->f_4 = (uParam1->f_4 + BUILTIN::ROUND((1500f / 2f)));
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 3:
			uParam1->f_3 = (uParam1->f_3 + BUILTIN::ROUND((1000f / 2f)));
			break;
	}
}

void func_101(var uParam0, struct<7> Param1, int iParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam0, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_1, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, Param1.f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, Param1.f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, Param1.f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, Param1.f_5);
	*iParam8++;
}

int func_102(int iParam0)
{
	if (iParam0 == -1533916406 || iParam0 == 410003791)
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	if ((((((((((((((iParam0 == -1646668568 || iParam0 == 493253075) || iParam0 == -67508433) || iParam0 == 915009346) || iParam0 == 360731400) || iParam0 == -1905612529) || iParam0 == -1199852283) || iParam0 == -1621015660) || iParam0 == 1111957406) || iParam0 == 463361192) || iParam0 == -1248235451) || iParam0 == -112764323) || iParam0 == 1882918686) || iParam0 == 507577252) || iParam0 == -447557219)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if ((((((iParam0 == -772642191 || iParam0 == -1601370201) || iParam0 == -1371626742) || iParam0 == 184245378) || iParam0 == 427424127) || iParam0 == 1385032614) || iParam0 == -187944924)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return 25;
	}
	else if (iParam0 == 1)
	{
		return 14;
	}
	else if (iParam0 == 2)
	{
		return 20;
	}
	else if (iParam0 == 3)
	{
		return 12;
	}
	else if (iParam0 == 4)
	{
		return 24;
	}
	else if (iParam0 == 5)
	{
		return 16;
	}
	return 20;
}

void func_106(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(((*uParam0)[iVar0 /*2*/])->f_1, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0[iVar0 /*2*/], 0);
		iVar0++;
	}
}

int func_107(int iParam0)
{
	if (iParam0 == -1478534115 || iParam0 == -1286192062)
	{
		return 0;
	}
	else if (iParam0 == 721468880)
	{
		return 150;
	}
	else if (iParam0 == -800449045)
	{
		return 300;
	}
	else if (iParam0 == 1056132658)
	{
		return 750;
	}
	else if (iParam0 == -181334543)
	{
		return 600;
	}
	else if (iParam0 == -338306437)
	{
		return 1000;
	}
	else if (iParam0 == 437270255)
	{
		return 425;
	}
	else if (iParam0 == 1357221321)
	{
		return 350;
	}
	else if (iParam0 == 1343889751)
	{
		return 5000;
	}
	else if (iParam0 == -948326001)
	{
		return 7500;
	}
	else if (iParam0 == -1374849484)
	{
		return 10000;
	}
	else if (iParam0 == -870030001)
	{
		return 375;
	}
	else if (iParam0 == 1095274522)
	{
		return 450;
	}
	else if (iParam0 == -1485078322)
	{
		return 225;
	}
	else if (iParam0 == 1193561641)
	{
		return 3000;
	}
	else if (iParam0 == -1725307861)
	{
		return 0;
	}
	else if (iParam0 == 1520478365)
	{
		return 0;
	}
	else if (iParam0 == -1661934591)
	{
		return 6000;
	}
	else if (iParam0 == 710102686)
	{
		return 19000;
	}
	return 0;
}

int func_108(char[4] cParam0, bool bParam1)
{
	if (bParam1 == 0)
	{
		if (MISC::ARE_STRINGS_EQUAL(&cParam0, "0"))
		{
			return 1720796751;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "1"))
		{
			return -1953758320;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "2"))
		{
			return -1812032167;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "3"))
		{
			return 736028119;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "4"))
		{
			return 1362538918;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "5"))
		{
			return 2081646875;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "6"))
		{
			return -132554147;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "7"))
		{
			return -2121993846;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "8"))
		{
			return 1345982557;
		}
		else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "9"))
		{
			return -2030332649;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "0"))
	{
		return -318990232;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "1"))
	{
		return 1269508139;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "2"))
	{
		return -156010984;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "3"))
	{
		return -1398971313;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "4"))
	{
		return 1391840685;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "5"))
	{
		return -981019355;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "6"))
	{
		return 28200354;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "7"))
	{
		return -1499250231;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "8"))
	{
		return 1088177688;
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cParam0, "9"))
	{
		return -643999989;
	}
	return 0;
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_111(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_112(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_115(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_113(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_115(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_112(iParam0, 1);
	func_113(iParam0, 1);
	func_114(iParam0, 128);
}

void func_117(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar8;
	int iVar9[4];
	int iVar14;
	int iVar15;
	int iVar16;

	iVar16 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = -1;
		iVar0++;
	}
	if (iParam0 < 0 || iParam0 >= HUD::_JOURNAL_GET_ENTRY_COUNT())
	{
		return;
	}
	iVar0 = iParam0;
	while (iVar0 <= (HUD::_JOURNAL_GET_ENTRY_COUNT() - 1))
	{
		iVar1 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iVar0);
		HUD::_JOURNAL_GET_ENTRY_INFO(iVar1, &Var2);
		iVar8 = func_53(Var2.f_5);
		if (func_54(Var2.f_2))
		{
		}
		else if (func_52(Var2.f_2) && iVar0 != iParam2)
		{
		}
		else
		{
			iVar15 = func_55(&Var2, &iVar9);
			if (iVar15 == 4)
			{
				return;
			}
			(*uParam1)[iVar16] = iVar0;
			iVar16++;
			if (iVar16 == 4)
			{
				return;
			}
			iVar14 = iVar15;
			while (iVar14 <= ((iVar15 + iVar8) - 1))
			{
				iVar9[iVar14] = 1;
				iVar14++;
			}
		}
		iVar0++;
	}
}

void func_118(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<6> Var5;
	int iVar11;
	int iVar12[4];
	int iVar17;
	int iVar18;
	int iVar19;

	iVar19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam1)[iVar0] = -1;
		iVar0++;
	}
	if (iParam0 < 0 || iParam0 >= HUD::_JOURNAL_GET_ENTRY_COUNT())
	{
		return;
	}
	iVar1 = func_72(iParam0, uParam2);
	iVar0 = uParam2[iVar1];
	while (iVar0 <= iParam0)
	{
		iVar4 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iVar0);
		HUD::_JOURNAL_GET_ENTRY_INFO(iVar4, &Var5);
		iVar11 = func_53(Var5.f_5);
		if (func_54(Var5.f_2))
		{
		}
		else if (func_52(Var5.f_2) && iVar0 != iParam3)
		{
		}
		else
		{
			iVar18 = func_55(&Var5, &iVar12);
			if (iVar18 == 4)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					(*uParam1)[iVar2] = -1;
					iVar2++;
				}
				func_56(&iVar3, &iVar18, &iVar12);
				iVar19 = 0;
				if (!func_57(Var5.f_2) && Var5.f_5 != 0)
				{
					iVar18 = 2;
				}
			}
			(*uParam1)[iVar19] = iVar0;
			iVar19++;
			iVar17 = iVar18;
			while (iVar17 <= ((iVar18 + iVar11) - 1))
			{
				iVar12[iVar17] = 1;
				iVar17++;
			}
		}
		iVar0++;
	}
}

bool func_119(int iParam0)
{
	return func_115(iParam0, 2);
}

int func_120(int iParam0, var uParam1)
{
	if (uParam1[0] == 0 && uParam1[1] == 0)
	{
		if (func_124(iParam0))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (uParam1[2] == 0 && uParam1[3] == 0)
	{
		if (func_124(iParam0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	else if (uParam1[1] == 0 && uParam1[3] == 0)
	{
		if (func_124(iParam0))
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (uParam1[1] == 0)
	{
		return 1;
	}
	else if (uParam1[3] == 0)
	{
		return 3;
	}
	return 4;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	int iVar7;

	iVar0 = func_125(iParam0);
	iVar7 = HUD::_JOURNAL_GET_GRIME_AT_INDEX(iVar0);
	HUD::_JOURNAL_GET_ENTRY_INFO(iVar7, &uVar1);
	*uParam1 = func_126(iVar0);
	uParam1->f_2 = 0;
	*uParam2 = *uParam1;
	func_127(iVar0, &(uParam1->f_5), &(uParam1->f_6));
	func_128(iParam0, uParam1->f_5, uParam1->f_6, &(uParam1->f_3), &(uParam1->f_4));
}

void func_122(var uParam0, var uParam1)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1, "Visible", 0);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1, "Txd", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Top", 0);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Left", 0);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Width", 1);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Height", 1);
}

void func_123(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1[24];
	var uVar4;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "Image", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cVar1);
		func_129((*uParam0)[iVar0 /*2*/], uVar4, iParam2, iVar0);
		iVar0++;
	}
}

int func_124(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((((((((((((iParam0 == 0 || iParam0 == 2) || iParam0 == 3) || iParam0 == 5) || iParam0 == 8) || iParam0 == 12) || iParam0 == 14) || iParam0 == 15) || iParam0 == 17) || iParam0 == 20) || iParam0 == 21) || iParam0 == 23) || iParam0 == 25) || iParam0 == 26)
	{
		return 1;
	}
	else if (((((((((((((iParam0 == 1 || iParam0 == 4) || iParam0 == 6) || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11) || iParam0 == 13) || iParam0 == 16) || iParam0 == 18) || iParam0 == 19) || iParam0 == 22) || iParam0 == 24) || iParam0 == 27)
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0)
{
	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	if (((iParam0 == 0 || iParam0 == 9) || iParam0 == 16) || iParam0 == 24)
	{
		return 0;
	}
	else if (((iParam0 == 1 || iParam0 == 11) || iParam0 == 20) || iParam0 == 26)
	{
		return 1;
	}
	else if (((iParam0 == 2 || iParam0 == 7) || iParam0 == 15) || iParam0 == 21)
	{
		return 2;
	}
	else if (((iParam0 == 3 || iParam0 == 13) || iParam0 == 19) || iParam0 == 23)
	{
		return 3;
	}
	else if (((iParam0 == 4 || iParam0 == 8) || iParam0 == 14) || iParam0 == 22)
	{
		return 4;
	}
	else if (((iParam0 == 5 || iParam0 == 12) || iParam0 == 18) || iParam0 == 27)
	{
		return 5;
	}
	else if (((iParam0 == 6 || iParam0 == 10) || iParam0 == 17) || iParam0 == 25)
	{
		return 6;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (iParam0 == 0)
	{
		return -772642191;
	}
	else if (iParam0 == 1)
	{
		return -1601370201;
	}
	else if (iParam0 == 2)
	{
		return -1371626742;
	}
	else if (iParam0 == 3)
	{
		return 184245378;
	}
	else if (iParam0 == 4)
	{
		return 427424127;
	}
	else if (iParam0 == 5)
	{
		return 1385032614;
	}
	else if (iParam0 == 6)
	{
		return -187944924;
	}
	return -772642191;
}

void func_127(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		*uParam1 = 130;
		*uParam2 = 188;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = 93;
		*uParam2 = 118;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = 132;
		*uParam2 = 115;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = 174;
		*uParam2 = 160;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = 150;
		*uParam2 = 157;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = 151;
		*uParam2 = 116;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = 224;
		*uParam2 = 166;
	}
}

void func_128(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	while (iParam0 > 27)
	{
		iParam0 = (iParam0 - 28);
	}
	fVar0 = ((1000f / 2f) - IntToFloat(iParam2));
	fVar1 = ((1500f / 2f) - IntToFloat(iParam1));
	if (iParam0 == 0)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.9f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.6f));
	}
	else if (iParam0 == 1)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.5f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.2f));
	}
	else if (iParam0 == 2)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.1f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.4f));
	}
	else if (iParam0 == 3)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.8f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.3f));
	}
	else if (iParam0 == 4)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.2f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.9f));
	}
	else if (iParam0 == 5)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.6f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.1f));
	}
	else if (iParam0 == 6)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.4f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.7f));
	}
	else if (iParam0 == 7)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.3f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.8f));
	}
	else if (iParam0 == 8)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.7f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.5f));
	}
	else if (iParam0 == 9)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.1f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.2f));
	}
	else if (iParam0 == 10)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.3f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.9f));
	}
	else if (iParam0 == 11)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.8f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.5f));
	}
	else if (iParam0 == 12)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.9f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.7f));
	}
	else if (iParam0 == 13)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.4f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.6f));
	}
	else if (iParam0 == 14)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.6f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.3f));
	}
	else if (iParam0 == 15)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.2f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.1f));
	}
	else if (iParam0 == 16)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.5f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.4f));
	}
	else if (iParam0 == 17)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.7f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.8f));
	}
	else if (iParam0 == 18)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.5f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.1f));
	}
	else if (iParam0 == 19)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.2f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.4f));
	}
	else if (iParam0 == 20)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.4f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.7f));
	}
	else if (iParam0 == 21)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.9f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.2f));
	}
	else if (iParam0 == 22)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.1f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.5f));
	}
	else if (iParam0 == 23)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.8f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.6f));
	}
	else if (iParam0 == 24)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.3f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.3f));
	}
	else if (iParam0 == 25)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.7f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.9f));
	}
	else if (iParam0 == 26)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.6f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.7f));
	}
	else if (iParam0 == 27)
	{
		*uParam3 = BUILTIN::ROUND((fVar0 * 0.2f));
		*uParam4 = BUILTIN::ROUND((fVar1 * 0.6f));
	}
}

void func_129(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1, "Visible", 0);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1, "Txd", 0);
	if (iParam2 == 1)
	{
		iVar0 = -1;
		iVar1 = 11;
		fVar2 = 1.2f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 13;
		}
	}
	else if (iParam2 == 2)
	{
		iVar0 = 2;
		iVar1 = 7;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 0)
		{
			iVar1 = 9;
		}
	}
	else if (iParam2 == 3)
	{
		iVar0 = 5;
		iVar1 = 8;
		fVar2 = 1f;
		fVar3 = 1f;
		if (iParam3 > 1)
		{
			iVar1 = 7;
		}
	}
	else if (iParam2 == 4)
	{
		iVar0 = 0;
		iVar1 = 2;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 2)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 5)
	{
		iVar0 = 2;
		iVar1 = 4;
		fVar2 = 1f;
		fVar3 = 0.9f;
		if (iParam3 > 1)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 6)
	{
		iVar0 = -5;
		iVar1 = 0;
		fVar2 = 1.1f;
		fVar3 = 1f;
		if (iParam3 > 3)
		{
			iVar1 = 1;
		}
	}
	else if (iParam2 == 7)
	{
		iVar0 = -3;
		iVar1 = 1;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 0;
		}
	}
	else if (iParam2 == 8)
	{
		iVar0 = 1;
		iVar1 = -5;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 3)
		{
			iVar1 = -3;
		}
	}
	else if (iParam2 == 9)
	{
		iVar0 = -2;
		iVar1 = 7;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 2)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 10)
	{
		iVar0 = 7;
		iVar1 = 9;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 2)
		{
			iVar1 = 10;
		}
	}
	else if (iParam2 == 11)
	{
		iVar0 = 4;
		iVar1 = -2;
		fVar2 = 0.9f;
		fVar3 = 0.9f;
		if (iParam3 > 3)
		{
			iVar1 = 1;
		}
	}
	else if (iParam2 == 12)
	{
		iVar0 = 0;
		iVar1 = 4;
		fVar2 = 1f;
		fVar3 = 0.9f;
		if (iParam3 > 1)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 13)
	{
		iVar0 = 2;
		iVar1 = 6;
		fVar2 = 1f;
		fVar3 = 1.1f;
		if (iParam3 > 4)
		{
			iVar1 = 5;
		}
	}
	else if (iParam2 == 14)
	{
		iVar0 = -2;
		iVar1 = -2;
		fVar2 = 1.1f;
		fVar3 = 1.1f;
		if (iParam3 > 1)
		{
			iVar1 = 0;
		}
	}
	else if (iParam2 == 15)
	{
		iVar0 = 0;
		iVar1 = 4;
		fVar2 = 0.9f;
		fVar3 = 1f;
		if (iParam3 > 3)
		{
			iVar1 = 3;
		}
	}
	else
	{
		iVar0 = -1;
		iVar1 = -2;
		fVar2 = 1f;
		fVar3 = 1f;
		if (iParam3 > 4)
		{
			iVar1 = 0;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Top", ((75 + iParam2 * 52) + iVar0));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Left", ((572 + iParam3 * 16) + iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Width", BUILTIN::ROUND((17f * fVar2)));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1, "Height", BUILTIN::ROUND((30f * fVar3)));
}

