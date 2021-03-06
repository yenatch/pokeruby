Route121_EventObjects:: @ 8384504
	object_event 1, EVENT_OBJ_GFX_WOMAN_4, 0, 29, 14, 3, 10, 1, 1, 0, 0, Route121_EventScript_151B0A, 0
	object_event 2, EVENT_OBJ_GFX_BERRY_TREE, 0, 14, 2, 3, 12, 0, 0, 0, 47, S_BerryTree, 0
	object_event 3, EVENT_OBJ_GFX_BERRY_TREE, 0, 15, 2, 3, 12, 0, 0, 0, 48, S_BerryTree, 0
	object_event 4, EVENT_OBJ_GFX_BERRY_TREE, 0, 16, 2, 3, 12, 0, 0, 0, 49, S_BerryTree, 0
	object_event 5, EVENT_OBJ_GFX_BERRY_TREE, 0, 17, 2, 3, 12, 0, 0, 0, 50, S_BerryTree, 0
	object_event 6, EVENT_OBJ_GFX_BERRY_TREE, 0, 64, 14, 3, 12, 0, 0, 0, 51, S_BerryTree, 0
	object_event 7, EVENT_OBJ_GFX_BERRY_TREE, 0, 65, 14, 3, 12, 0, 0, 0, 52, S_BerryTree, 0
	object_event 8, EVENT_OBJ_GFX_BERRY_TREE, 0, 66, 14, 3, 12, 0, 0, 0, 53, S_BerryTree, 0
	object_event 9, EVENT_OBJ_GFX_BERRY_TREE, 0, 67, 14, 3, 12, 0, 0, 0, 54, S_BerryTree, 0
	object_event 10, EVENT_OBJ_GFX_LASS, 0, 39, 9, 3, 8, 0, 0, 1, 0, Route121_EventScript_151BDE, 0
	object_event 11, EVENT_OBJ_GFX_LASS, 0, 40, 9, 3, 8, 0, 0, 1, 0, Route121_EventScript_151BF9, 0
	object_event 12, EVENT_OBJ_GFX_VAR_1, 0, 30, 8, 3, 7, 0, 0, 0, 0, 0x0, FLAG_HIDE_GRUNTS_ROUTE121
	object_event 13, EVENT_OBJ_GFX_VAR_1, 0, 30, 7, 3, 10, 0, 0, 0, 0, 0x0, FLAG_HIDE_GRUNTS_ROUTE121
	object_event 14, EVENT_OBJ_GFX_VAR_1, 0, 31, 7, 3, 9, 0, 0, 0, 0, 0x0, FLAG_HIDE_GRUNTS_ROUTE121
	object_event 15, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 32, 5, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_11
	object_event 16, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 65, 4, 3, 1, 0, 0, 0, 0, S_CuttableTree, FLAG_TEMP_12
	object_event 17, EVENT_OBJ_GFX_WOMAN_2, 0, 63, 5, 3, 9, 0, 0, 1, 4, Route121_EventScript_151B72, 0
	object_event 18, EVENT_OBJ_GFX_GENTLEMAN, 0, 55, 8, 3, 17, 0, 0, 1, 3, Route121_EventScript_151B89, 0
	object_event 19, EVENT_OBJ_GFX_HEX_MANIAC, 0, 11, 10, 3, 15, 0, 0, 1, 4, Route121_EventScript_151BC7, 0
	object_event 20, EVENT_OBJ_GFX_BEAUTY, 0, 22, 5, 3, 17, 0, 0, 1, 4, Route121_EventScript_151C14, 0
	object_event 21, EVENT_OBJ_GFX_ITEM_BALL, 0, 55, 10, 3, 1, 1, 1, 0, 0, Route121_EventScript_1B164E, FLAG_ITEM_ROUTE121_1
	object_event 22, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 26, 12, 3, 1, 1, 1, 0, 0, S_CuttableTree, FLAG_TEMP_13

Route121_MapWarps:: @ 8384714
	warp_def 37, 5, 0, 2, MAP_ROUTE121_SAFARI_ZONE_ENTRANCE

Route121_MapCoordEvents:: @ 838471C
	coord_event 25, 5, 3, 0, VAR_ROUTE121_STATE, 0, 0, Route121_EventScript_151B25
	coord_event 25, 6, 3, 0, VAR_ROUTE121_STATE, 0, 0, Route121_EventScript_151B25
	coord_event 25, 7, 3, 0, VAR_ROUTE121_STATE, 0, 0, Route121_EventScript_151B25
	coord_event 25, 8, 3, 0, VAR_ROUTE121_STATE, 0, 0, Route121_EventScript_151B25

Route121_MapBGEvents:: @ 838475C
	bg_event 32, 14, 0, 0, 0, Route121_EventScript_151B13
	bg_secret_base_event 40, 11, 0, SECRET_BASE_RED_CAVE2_2
	bg_secret_base_event 18, 13, 0, SECRET_BASE_RED_CAVE3_2
	bg_secret_base_event 43, 7, 0, SECRET_BASE_TREE1_2
	bg_secret_base_event 42, 7, 0, SECRET_BASE_TREE2_2
	bg_event 39, 6, 0, 0, 0, Route121_EventScript_151B1C
	bg_hidden_item_event 23, 10, 3, ITEM_HP_UP, FLAG_HIDDEN_ITEM_27
	bg_hidden_item_event 58, 3, 3, ITEM_NUGGET, FLAG_HIDDEN_ITEM_28
	bg_hidden_item_event 72, 5, 3, ITEM_FULL_HEAL, FLAG_HIDDEN_ITEM_49

Route121_MapEvents:: @ 83847C8
	map_events Route121_EventObjects, Route121_MapWarps, Route121_MapCoordEvents, Route121_MapBGEvents
