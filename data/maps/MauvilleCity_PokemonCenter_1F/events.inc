MauvilleCity_PokemonCenter_1F_EventObjects:: @ 8388660
	object_event 1, EVENT_OBJ_GFX_NURSE, 0, 7, 2, 3, 8, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_157369, 0
	object_event 2, EVENT_OBJ_GFX_VAR_0, 0, 2, 3, 3, 9, 1, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_1AE744, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_1, 0, 8, 6, 3, 1, 0, 0, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_157377, 0
	object_event 4, EVENT_OBJ_GFX_WOMAN_7, 0, 11, 4, 3, 3, 0, 1, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_157380, 0
	object_event 5, EVENT_OBJ_GFX_YOUNGSTER, 0, 2, 8, 3, 1, 1, 1, 0, 0, MauvilleCity_PokemonCenter_1F_EventScript_157389, 0

MauvilleCity_PokemonCenter_1F_MapWarps:: @ 83886D8
	warp_def 7, 8, 3, 1, MAP_MAUVILLE_CITY
	warp_def 6, 8, 3, 1, MAP_MAUVILLE_CITY
	warp_def 1, 6, 4, 0, MAP_MAUVILLE_CITY_POKEMON_CENTER_2F

MauvilleCity_PokemonCenter_1F_MapEvents:: @ 83886F0
	map_events MauvilleCity_PokemonCenter_1F_EventObjects, MauvilleCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
