	.macro map map_id
	.byte \map_id >> 8    @ map group
	.byte \map_id & 0xFF  @ map num
	.endm

	.macro map_script type, address
	.byte \type
	.4byte \address
	.endm

	.macro map_script_2 word1, word2, address
	.2byte \word1
	.2byte \word2
	.4byte \address
	.endm

	.macro object_event index, gfx, replacement, x, y, elevation, movement_type, x_radius, y_radius, trainer_type, sight_radius_tree_etc, script, event_flag
	.byte \index, \gfx, \replacement, 0
	.2byte \x
	.2byte \y
	.byte \elevation, \movement_type, ((\y_radius << 4) | \x_radius), 0
    .2byte \trainer_type, \sight_radius_tree_etc
	.4byte \script
	.2byte \event_flag
	.2byte 0
	inc _num_npcs
	.endm

	.macro warp_def x, y, elevation, warp, map_id
	.2byte \x, \y
	.byte \elevation, \warp
	.byte \map_id & 0xFF  @ map num
	.byte \map_id >> 8    @ map group
	inc _num_warps
	.endm

	.macro coord_event x, y, byte1, byte2, word1, word2, word3, script
	.2byte \x, \y
	.byte \byte1, \byte2
	.2byte \word1, \word2, \word3
	.4byte \script
	inc _num_traps
	.endm

	.macro coord_weather_event x, y, height, weather
	coord_event \x, \y, \height, 0, \weather, 0, 0, 0x0
	.endm

	.macro bg_event x, y, byte, kind, word, arg6, arg7, arg8
	.2byte \x, \y
	.byte \byte, \kind
	.2byte \word
	.if \kind < 5
	.4byte \arg6
	.else
	.2byte \arg6
	.byte \arg7, \arg8
	.endif
	inc _num_signs
	.endm

	.macro bg_hidden_item_event x, y, height, item, flag
	bg_event \x, \y, \height, 7, 0, \item, ((\flag) - FLAG_HIDDEN_ITEMS_START), 0
	.endm

	.macro bg_secret_base_event x, y, height, secret_base_id
	bg_event \x, \y, \height, 8, 0, \secret_base_id, 0, 0
	.endm	

	.macro map_events npcs, warps, traps, signs
	.byte _num_npcs, _num_warps, _num_traps, _num_signs
	.4byte \npcs, \warps, \traps, \signs
	reset_map_events
	.endm

	.macro reset_map_events
	.set _num_npcs, 0
	.set _num_warps, 0
	.set _num_traps, 0
	.set _num_signs, 0
	.endm

	reset_map_events


	.equiv connection_down, 1
	.equiv connection_up, 2
	.equiv connection_left, 3
	.equiv connection_right, 4
	.equiv connection_dive, 5
	.equiv connection_emerge, 6

	.macro connection direction, offset, map, filler
	.4byte connection_\direction
	.4byte \offset
	map \map
	.space 2
	.endm
