MeteorFalls_1F_1R_EventObjects:: @ 838BACC
	object_event 1, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 4, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_1B17FB, FLAG_ITEM_METEOR_FALLS_1F_1R_1
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 14, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_1B1815, FLAG_ITEM_METEOR_FALLS_1F_1R_3
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 27, 5, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_1B1808, FLAG_ITEM_METEOR_FALLS_1F_1R_2
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 26, 32, 3, 1, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_1B1822, FLAG_ITEM_METEOR_FALLS_1F_1R_4
	object_event 5, EVENT_OBJ_GFX_VAR_1, 0, 12, 20, 3, 8, 0, 0, 0, 0, 0x0, FLAG_HIDE_GRUNTS_METEOR_FALLS_1F
	object_event 6, EVENT_OBJ_GFX_VAR_1, 0, 14, 21, 3, 9, 0, 0, 0, 0, 0x0, FLAG_HIDE_GRUNTS_METEOR_FALLS_1F
	object_event 7, EVENT_OBJ_GFX_VAR_7, 0, 6, 20, 3, 10, 0, 0, 0, 0, 0x0, FLAG_HIDE_OTHER_TEAM_METEOR_FALLS_1F
	object_event 8, EVENT_OBJ_GFX_VAR_4, 0, 6, 20, 3, 10, 0, 0, 0, 0, 0x0, FLAG_HIDE_OTHER_TEAM_METEOR_FALLS_1F
	object_event 9, EVENT_OBJ_GFX_VAR_4, 0, 6, 21, 3, 1, 0, 0, 0, 0, 0x0, FLAG_HIDE_OTHER_TEAM_METEOR_FALLS_1F
	object_event 10, EVENT_OBJ_GFX_SCIENTIST_1, 0, 13, 23, 3, 21, 0, 0, 0, 0, MeteorFalls_1F_1R_EventScript_15C656, FLAG_HIDE_PROF_COSMO_METEOR_FALLS

MeteorFalls_1F_1R_MapWarps:: @ 838BBBC
	warp_def 27, 18, 4, 0, MAP_ROUTE114
	warp_def 6, 39, 3, 0, MAP_ROUTE115
	warp_def 10, 3, 3, 0, MAP_METEOR_FALLS_1F_2R
	warp_def 5, 4, 3, 4, MAP_METEOR_FALLS_B1F_1R
	warp_def 26, 28, 3, 5, MAP_METEOR_FALLS_B1F_1R

MeteorFalls_1F_1R_MapCoordEvents:: @ 838BBE4
	coord_event 14, 18, 4, 0, VAR_METEOR_FALLS_STATE, 0, 0, MeteorFalls_1F_1R_EventScript_15C49C

MeteorFalls_1F_1R_MapBGEvents:: @ 838BBF4
	bg_event 38, 9, 0, 1, 0, MeteorFalls_1F_1R_EventScript_14E842
	bg_event 9, 58, 0, 0, 0, 0x0

MeteorFalls_1F_1R_MapEvents:: @ 838BC0C
	map_events MeteorFalls_1F_1R_EventObjects, MeteorFalls_1F_1R_MapWarps, MeteorFalls_1F_1R_MapCoordEvents, MeteorFalls_1F_1R_MapBGEvents
