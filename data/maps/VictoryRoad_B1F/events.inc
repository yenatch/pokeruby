VictoryRoad_B1F_EventObjects:: @ 838DA04
	object_event 1, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 20, 5, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_13
	object_event 2, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 21, 4, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_14
	object_event 3, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 4, 7, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_11
	object_event 4, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 9, 10, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_12
	object_event 5, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 20, 26, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_17
	object_event 6, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 21, 25, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_16
	object_event 7, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 35, 6, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_1E
	object_event 8, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 19, 5, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_19
	object_event 9, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 20, 4, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_1A
	object_event 10, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 18, 12, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_1B
	object_event 11, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 20, 25, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_1C
	object_event 12, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 21, 26, 3, 1, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_1D
	object_event 13, EVENT_OBJ_GFX_PUSHABLE_BOULDER, 0, 34, 4, 3, 1, 0, 0, 0, 0, S_PushableBoulder, FLAG_TEMP_1F
	object_event 14, EVENT_OBJ_GFX_MAN_4, 0, 37, 12, 3, 9, 0, 0, 1, 3, VictoryRoad_B1F_EventScript_15DFB5, 0
	object_event 15, EVENT_OBJ_GFX_WOMAN_7, 0, 26, 16, 3, 7, 0, 0, 1, 4, VictoryRoad_B1F_EventScript_15DFCC, 0
	object_event 16, EVENT_OBJ_GFX_WOMAN_7, 0, 5, 21, 3, 9, 0, 0, 1, 2, VictoryRoad_B1F_EventScript_15DFE3, 0
	object_event 17, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 34, 3, 3, 1, 1, 1, 0, 0, S_BreakableRock, FLAG_VICTORY_ROAD_ROCK
	object_event 18, EVENT_OBJ_GFX_ITEM_BALL, 0, 42, 8, 4, 1, 1, 1, 0, 0, VictoryRoad_B1F_EventScript_1B1AE0, FLAG_ITEM_VICTORY_ROAD_B1F_1
	object_event 19, EVENT_OBJ_GFX_ITEM_BALL, 0, 32, 3, 3, 1, 1, 1, 0, 0, VictoryRoad_B1F_EventScript_1B1AED, FLAG_ITEM_VICTORY_ROAD_B1F_2

VictoryRoad_B1F_MapWarps:: @ 838DBCC
	warp_def 30, 25, 3, 0, MAP_VICTORY_ROAD_B2F
	warp_def 17, 16, 3, 2, MAP_VICTORY_ROAD_B2F
	warp_def 42, 25, 3, 3, MAP_VICTORY_ROAD_1F
	warp_def 42, 2, 4, 1, MAP_VICTORY_ROAD_B2F
	warp_def 8, 3, 3, 4, MAP_VICTORY_ROAD_1F
	warp_def 20, 21, 3, 2, MAP_VICTORY_ROAD_1F
	warp_def 5, 26, 3, 3, MAP_VICTORY_ROAD_B2F

VictoryRoad_B1F_MapEvents:: @ 838DC04
	map_events VictoryRoad_B1F_EventObjects, VictoryRoad_B1F_MapWarps, 0x0, 0x0
