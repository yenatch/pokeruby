LittlerootTown_ProfessorBirchsLab_EventObjects:: @ 8385B2C
	object_event 1, EVENT_OBJ_GFX_SCIENTIST_1, 0, 9, 8, 3, 2, 1, 1, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152D63, 0
	object_event 2, EVENT_OBJ_GFX_PROF_BIRCH, 0, 6, 4, 3, 8, 0, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152D9A, FLAG_HIDE_BIRCH_IN_LAB
	object_event 3, EVENT_OBJ_GFX_VAR_0, 0, 7, 4, 3, 8, 0, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152EA3, FLAG_HIDE_RIVAL_BIRCH_LAB

LittlerootTown_ProfessorBirchsLab_MapWarps:: @ 8385B74
	warp_def 6, 12, 0, 2, MAP_LITTLEROOT_TOWN
	warp_def 7, 12, 0, 2, MAP_LITTLEROOT_TOWN

LittlerootTown_ProfessorBirchsLab_MapBGEvents:: @ 8385B84
	bg_event 10, 7, 0, 1, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152E9A
	bg_event 11, 7, 0, 1, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152E9A
	bg_event 7, 1, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152EE2
	bg_event 8, 1, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152EE2
	bg_event 1, 1, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED9
	bg_event 0, 7, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED9
	bg_event 1, 7, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED9
	bg_event 2, 7, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED9
	bg_event 3, 7, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED9
	bg_event 4, 1, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0
	bg_event 3, 1, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0
	bg_event 1, 10, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0
	bg_event 1, 9, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0
	bg_event 11, 10, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0
	bg_event 11, 9, 0, 0, 0, LittlerootTown_ProfessorBirchsLab_EventScript_152ED0

LittlerootTown_ProfessorBirchsLab_MapEvents:: @ 8385C38
	map_events LittlerootTown_ProfessorBirchsLab_EventObjects, LittlerootTown_ProfessorBirchsLab_MapWarps, 0x0, LittlerootTown_ProfessorBirchsLab_MapBGEvents
