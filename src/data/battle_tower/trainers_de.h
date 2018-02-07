const struct BattleTowerTrainer gBattleTowerTrainers[] = 
{
	{
		.trainerClass = FACILITY_CLASS_YOUNGSTER,
		.name = _("ALWIN"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_READY,
				EC_WORD_QUES,
				EC_WORD_HERE_I_COME,
				EC_WORD_EXCL,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BIRD_KEEPER,
		.name = _("DIRK"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_OH_KAY,
				EC_WORD_I_AM,
				EC_WORD_READY,
				EC_WORD_EXCL,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_LADY,
		.name = _("SIBILLE"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_THAT,
				EC_WORD_BECOMES,
				EC_WORD_A,
				EC_WORD_CHILD_S_PLAY,
				EC_WORD_GO,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BLACK_BELT,
		.name = _("OLAF"),
		.teamFlags = 0x05,
		.greeting = {
			.easyChat = {
				EC_WORD_MY,
				EC_WORD_GHOST,
				EC_WORD_IS,
				EC_WORD_FULL,
				EC_WORD_TOUGHNESS,
				EC_WORD_SNORT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_NINJA_BOY,
		.name = _("JOST"),
		.teamFlags = 0x05,
		.greeting = {
			.easyChat = {
				EC_WORD_GO,
				EC_WORD_WHO_WAS,
				EC_WORD_POKEMON,
				EC_WORD_FIGHT,
				EC_WORD_FIGHT,
				EC_WORD_FIGHT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SCHOOL_KID_F,
		.name = _("TINA"),
		.teamFlags = 0x0A,
		.greeting = {
			.easyChat = {
				EC_WORD_STUDY,
				EC_WORD_IS,
				EC_WORD_BORING,
				EC_WORD_LET_S,
				EC_WORD_BETTER,
				EC_WORD_FIGHT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BUG_MANIAC,
		.name = _("HAJO"),
		.teamFlags = 0x41,
		.greeting = {
			.easyChat = {
				EC_WORD_TOUGHNESS,
				EC_WORD_AND,
				EC_MOVE2(TRANSFORM),
				EC_WORD_WILL,
				EC_WORD_BABE,
				EC_WORD_FAINT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_FISHERMAN,
		.name = _("GEORG"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_IT,
				EC_WORD_GOES,
				EC_WORD_NOTHING,
				EC_WORD_OVER,
				EC_WORD_FISHING,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_TUBER_F,
		.name = _("ANNE"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_POKEMON,
				EC_WORD_MUST_BE,
				EC_WORD_MAN,
				EC_WORD_SIMPLE,
				EC_WORD_ADORE,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEFAN_F,
		.name = _("JULIA"),
		.teamFlags = 0x42,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_CUTE,
				EC_WORD_I_AM,
				EC_WORD_QUITE,
				EC_WORD_AN,
				EC_WORD_LADY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GENTLEMAN,
		.name = _("JOHANN"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_THE,
				EC_WORD_DAY,
				EC_WORD_IS,
				EC_WORD_PERFECT,
				EC_WORD_FOR,
				EC_WORD_BATTLE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CAMPER,
		.name = _("KARL"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_NOW,
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_MY,
				EC_WORD_FRIEND,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
		.name = _("KENDRA"),
		.teamFlags = 0x0A,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_SMART,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_AND,
				EC_WORD_YOU,
				EC_WORD_QUES,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_HIKER,
		.name = _("DAVID"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_WAHAHAHA,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_TODAY,
				EC_WORD_IS,
				EC_MOVE2(PAY_DAY),
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BATTLE_GIRL,
		.name = _("KEA"),
		.teamFlags = 0x0A,
		.greeting = {
			.easyChat = {
				EC_WORD_YOU_RE,
				EC_WORD_TOUGH,
				EC_WORD_OR,
				EC_WORD_QUES,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PSYCHIC_M,
		.name = _("JULIAN"),
		.teamFlags = 0x05,
		.greeting = {
			.easyChat = {
				EC_WORD_FUFUFU,
				EC_WORD_YOU,
				EC_WORD_CAN_T,
				EC_WORD_DON_T,
				EC_WORD_WINS,
				EC_WORD_KID,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_LASS,
		.name = _("JOSI"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_BE,
				EC_WORD_KIND,
				EC_WORD_TO,
				EC_WORD_GIRL,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GUITARIST,
		.name = _("LEIF"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_GREAT,
				EC_WORD_YOU_RE,
				EC_WORD_RATHER,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_OKAY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RICH_BOY,
		.name = _("INGO"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_I,
				EC_WORD_HAVE,
				EC_WORD_ROUGH_SKIN,
				EC_WORD_NATURAL_CURE,
				EC_WORD_IS,
				EC_WORD_ALL_RIGHT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BUG_CATCHER,
		.name = _("LUDWIG"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_IF_I_WIN,
				EC_WORD_IS,
				EC_WORD_THAT,
				EC_WORD_EXCITING,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PICNICKER,
		.name = _("RAJA"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_WITH,
				EC_WORD_POKEMON,
				EC_WORD_TO,
				EC_WORD_WALKING,
				EC_WORD_IS,
				EC_WORD_GREAT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COLLECTOR,
		.name = _("HARALD"),
		.teamFlags = 0x09,
		.greeting = {
			.easyChat = {
				EC_WORD_HERE_GOES,
				EC_WORD_MY,
				EC_WORD_HUGE_POWER,
				0xFFFF,
				EC_WORD_POKEMON,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_TUBER_M,
		.name = _("KIM"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_A,
				EC_WORD_GENIUS,
				EC_WORD_WE,
				EC_WORD_WILL,
				EC_WORD_WINS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_KINDLER,
		.name = _("ERWIN"),
		.teamFlags = 0x05,
		.greeting = {
			.easyChat = {
				EC_WORD_MY,
				EC_WORD_FIRE,
				EC_WORD_IS,
				EC_WORD_VERY,
				EC_WORD_HOT,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PSYCHIC_F,
		.name = _("EIKA"),
		.teamFlags = 0x0A,
		.greeting = {
			.easyChat = {
				EC_WORD_FIGHTING,
				EC_MOVE(ASTONISH),
				EC_WORD_AND,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMER_F,
		.name = _("ANNINA"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_SORRY,
				EC_WORD_YOURS,
				EC_WORD_POKEMON,
				EC_WORD_WILL,
				EC_WORD_DON_T,
				EC_WORD_WINS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
		.name = _("RUTH"),
		.teamFlags = 0x06,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_TOUGH,
				EC_WORD_WHO_WAS,
				EC_WORD_POKEMON,
				EC_WORD_TOO,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMANIAC,
		.name = _("JENS"),
		.teamFlags = 0x40,
		.greeting = {
			.easyChat = {
				EC_WORD_WHO_WAS,
				EC_WORD_POKEMON,
				EC_WORD_THOSE,
				EC_WORD_COOL,
				EC_WORD_YOURS,
				EC_WORD_LOSE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SAILOR,
		.name = _("TITUS"),
		.teamFlags = 0x09,
		.greeting = {
			.easyChat = {
				EC_WORD_MY,
				EC_WORD_FOE,
				EC_WORD_IS,
				EC_WORD_FINALLY,
				EC_WORD_HERE,
				EC_WORD_EXCELLENT,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_BREEDER_F,
		.name = _("NICOLA"),
		.teamFlags = 0x06,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_VORACIOUS,
				EC_MOVE2(POUND),
				EC_WORD_AND,
				EC_MOVE2(BELLY_DRUM),
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_HEX_MANIAC,
		.name = _("PAULA"),
		.teamFlags = 0x42,
		.greeting = {
			.easyChat = {
				EC_WORD_IS_IT_QUES,
				EC_WORD_THOSE_ARE,
				EC_WORD_UGLY,
				EC_MOVE(SPITE),
				EC_WORD_TO,
				EC_WORD_TAKE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUIN_MANIAC,
		.name = _("SÖREN"),
		.teamFlags = 0x41,
		.greeting = {
			.easyChat = {
				EC_WORD_ADVENTURE,
				EC_WORD_AND,
				EC_WORD_BATTLE,
				EC_WORD_THOSE,
				EC_WORD_WHO_WAS,
				EC_WORD_LIKES,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
		.name = _("RAINER"),
		.teamFlags = 0x09,
		.greeting = {
			.easyChat = {
				EC_WORD_WE,
				EC_WORD_CAN,
				EC_WORD_VERSUS,
				EC_WORD_CHILDREN,
				EC_WORD_DON_T,
				EC_WORD_LOSE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SCHOOL_KID_M,
		.name = _("FABIAN"),
		.teamFlags = 0x08,
		.greeting = {
			.easyChat = {
				EC_WORD_DAILY,
				EC_WORD_POKEMON,
				EC_WORD_IN,
				EC_WORD_THE,
				EC_WORD_SCHOOL,
				EC_WORD_AWESOME,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_RANGER_F,
		.name = _("ELLEN"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_ALL_RIGHT,
				EC_WORD_TO,
				EC_WORD_POKEMON,
				EC_WORD_QUES,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMER_M,
		.name = _("ARNIE"),
		.teamFlags = 0x09,
		.greeting = {
			.easyChat = {
				EC_WORD_MY,
				EC_WORD_FIGHTING,
				EC_WORD_IS,
				EC_WORD_PERFECTION,
				EC_WORD_YOUR,
				EC_WORD_USELESS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
		.name = _("HARDI"),
		.teamFlags = 0x09,
		.greeting = {
			.easyChat = {
				EC_WORD_BOY,
				EC_WORD_I_AM,
				EC_WORD_MAYBE,
				EC_WORD_TIRED,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BEAUTY,
		.name = _("LINA"),
		.teamFlags = 0x06,
		.greeting = {
			.easyChat = {
				EC_WORD_A,
				EC_WORD_TRAINER,
				EC_WORD_HOW_DO,
				EC_WORD_YOU,
				EC_WORD_IS,
				EC_WORD_EXCITING,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_AROMA_LADY,
		.name = _("SELINA"),
		.teamFlags = 0x06,
		.greeting = {
			.easyChat = {
				EC_WORD_YOU_VE,
				EC_WORD_STENCH,
				EC_WORD_OR,
				EC_MOVE(SWEET_SCENT),
				EC_WORD_QUES,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COLLECTOR,
		.name = _("DANTE"),
		.teamFlags = 0x81,
		.greeting = {
			.easyChat = {
				EC_WORD_YOURS,
				EC_WORD_POKEMON,
				EC_WORD_I,
				EC_WORD_WANTS,
				EC_WORD_SHE,
				EC_WORD_EXCL_EXCL,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
		.name = _("KATJA"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_TODAY,
				EC_WORD_WANTS,
				EC_WORD_I,
				EC_WORD_MY,
				EC_WORD_BEST,
				EC_WORD_GIVE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_RANGER_M,
		.name = _("HORST"),
		.teamFlags = 0x0C,
		.greeting = {
			.easyChat = {
				EC_WORD_WAAAH,
				EC_WORD_WAAAH,
				EC_WORD_WAAAH,
				EC_WORD_WAAAH,
				EC_WORD_EHEHE,
				EC_MOVE(FAKE_TEARS),
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEFAN_M,
		.name = _("GERRIT"),
		.teamFlags = 0x80,
		.greeting = {
			.easyChat = {
				EC_WORD_MY,
				EC_WORD_ANIME,
				EC_WORD_SONG,
				EC_WORD_IS,
				EC_WORD_DON_T,
				EC_WORD_LOUSY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
		.name = _("NIKO"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_BATTLE,
				EC_WORD_DON_T,
				EC_WORD_JUST,
				EC_WORD_DO,
				EC_WORD_SOMETHING,
				EC_WORD_ELSE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_BREEDER_M,
		.name = _("BALDO"),
		.teamFlags = 0x41,
		.greeting = {
			.easyChat = {
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_BUSY,
				EC_WORD_HAS,
				EC_WORD_THAT,
				EC_WORD_TIME,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PARASOL_LADY,
		.name = _("ALMA"),
		.teamFlags = 0x08,
		.greeting = {
			.easyChat = {
				EC_WORD_THAT,
				EC_MOVE(MORNING_SUN),
				EC_WORD_HAS,
				EC_WORD_SO,
				EC_WORD_A_LOT,
				EC_MOVE(COSMIC_POWER),
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CAMPER,
		.name = _("ADAM"),
		.teamFlags = 0x0C,
		.greeting = {
			.easyChat = {
				EC_WORD_EXCITING,
				EC_WORD_BATTLE,
				EC_WORD_THOSE,
				EC_WORD_GREAT,
				EC_WORD_YEEHAW_EXCL,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SCHOOL_KID_F,
		.name = _("GRETE"),
		.teamFlags = 0x42,
		.greeting = {
			.easyChat = {
				EC_WORD_I,
				EC_WORD_WANTS,
				EC_WORD_SOMETHING,
				EC_MOVE(GROWTH),
				EC_WORD_WORKS,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BEAUTY,
		.name = _("NAOMI"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_IT,
				EC_WORD_WAS,
				EC_WORD_GREAT,
				EC_WORD_YOUNG,
				EC_WORD_TO,
				EC_WORD_HIS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_NINJA_BOY,
		.name = _("KENO"),
		.teamFlags = 0x0C,
		.greeting = {
			.easyChat = {
				EC_WORD_PLEASE,
				EC_WORD_BE,
				EC_WORD_DON_T,
				EC_WORD_SO,
				EC_WORD_MEAN,
				EC_WORD_TO_ME,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
		.name = _("REMUS"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_WAKES_UP,
				EC_MOVE2(HIDDEN_POWER),
				EC_WORD_AND,
				EC_MOVE(ASTONISH),
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_RANGER_F,
		.name = _("EDITH"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_THE,
				EC_WORD_BATTLE_TOWER,
				EC_WORD_IS,
				EC_WORD_SO,
				EC_WORD_ENTERTAINING,
				EC_WORD_AWESOME,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUIN_MANIAC,
		.name = _("ANTON"),
		.teamFlags = 0x41,
		.greeting = {
			.easyChat = {
				EC_WORD_THICK_FAT,
				EC_WORD_AND,
				EC_WORD_CHLOROPHYLL,
				EC_WORD_BLEND,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_TASTY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMER_M,
		.name = _("MALTE"),
		.teamFlags = 0x81,
		.greeting = {
			.easyChat = {
				EC_WORD_AN,
				EC_MOVE(SCARY_FACE),
				EC_WORD_IS,
				EC_WORD_DON_T,
				EC_WORD_QUITE,
				EC_WORD_TERRIBLE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_HEX_MANIAC,
		.name = _("RAOUL"),
		.teamFlags = 0x42,
		.greeting = {
			.easyChat = {
				EC_WORD_RUN_AWAY,
				EC_WORD_GIVE_ME,
				EC_WORD_SON,
				EC_WORD_BEST,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
		.name = _("RICK"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_WATER,
				EC_WORD_IS,
				EC_WORD_TASTY,
				EC_WORD_HIP_AND,
				EC_WORD_REFRESHING,
				EC_WORD_YES_SIR_EXCL,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEFAN_M,
		.name = _("DENNIS"),
		.teamFlags = 0x80,
		.greeting = {
			.easyChat = {
				EC_WORD_GO,
				EC_WORD_WHO_WAS,
				EC_WORD_POKEMON,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PSYCHIC_F,
		.name = _("GLORIA"),
		.teamFlags = 0x82,
		.greeting = {
			.easyChat = {
				EC_WORD_THE,
				EC_WORD_FIGHTING,
				EC_WORD_MUST_BE,
				EC_WORD_HOT,
				EC_WORD_HIS,
				EC_WORD_FIERY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GUITARIST,
		.name = _("NINO"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_MUSIC,
				EC_WORD_IS,
				EC_WORD_MY,
				EC_WORD_EVERY,
				EC_WORD_MY,
				EC_WORD_DESTINY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_KINDLER,
		.name = _("FIETE"),
		.teamFlags = 0x41,
		.greeting = {
			.easyChat = {
				EC_WORD_IT_S,
				EC_WORD_ALL_RIGHT,
				EC_WORD_VERY,
				EC_WORD_ALL_RIGHT,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_AROMA_LADY,
		.name = _("AMANDA"),
		.teamFlags = 0x82,
		.greeting = {
			.easyChat = {
				EC_WORD_WHAT,
				EC_WORD_FOR,
				EC_WORD_A,
				EC_WORD_TRAINER,
				EC_WORD_ARE,
				EC_WORD_YOU,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
		.name = _("MAREK"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_WE_VE,
				EC_WORD_UNTIL,
				EC_WORD_NOW,
				EC_WORD_TOTALLY,
				EC_WORD_NEVER,
				EC_WORD_LOST,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_DRAGON_TAMER,
		.name = _("NATHAN"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_DRAGON,
				0xFFFF,
				EC_WORD_POKEMON,
				EC_WORD_THOSE,
				EC_WORD_FANTASTIC,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_LASS,
		.name = _("MIRIAM"),
		.teamFlags = 0x82,
		.greeting = {
			.easyChat = {
				EC_WORD_YOU_RE,
				EC_WORD_QUITE,
				EC_WORD_TOO_STRONG,
				EC_WORD_AM,
				EC_WORD_BAD,
				EC_WORD_NEWS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMANIAC,
		.name = _("THEO"),
		.teamFlags = 0x40,
		.greeting = {
			.easyChat = {
				EC_WORD_PLUSH_DOLL,
				EC_WORD_MUST_BE,
				EC_WORD_MAN,
				EC_WORD_SIMPLE,
				EC_WORD_ADORE,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
		.name = _("PIA"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_HERE_I_COME,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_CUTE,
				EC_WORD_A,
				EC_WORD_CHANNEL,
				EC_WORD_IDOL,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEFAN_F,
		.name = _("ALISSA"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_YOURS,
				EC_WORD_POKEMON,
				EC_WORD_THOSE,
				EC_WORD_PREPOSTEROUS,
				EC_WORD_I_AM,
				EC_WORD_SHOCKED,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GENTLEMAN,
		.name = _("ARTUR"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_PLEASE,
				EC_WORD_ALL,
				EC_WORD_BATTLE,
				EC_WORD_WEREN_T,
				EC_WORD_GREAT,
				EC_WORD_HIS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMER_F,
		.name = _("MAJA"),
		.teamFlags = 0x82,
		.greeting = {
			.easyChat = {
				EC_WORD_I_AM,
				EC_WORD_PRETTY,
				EC_WORD_YOU,
				EC_WORD_CAN_T,
				EC_WORD_DON_T,
				EC_WORD_WINS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COOL_TRAINER_M,
		.name = _("MARIUS"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_I,
				EC_WORD_BATTLE,
				EC_WORD_DAILY,
				EC_WORD_I,
				EC_WORD_WON_T,
				EC_WORD_LOSE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BIRD_KEEPER,
		.name = _("OLIVER"),
		.teamFlags = 0x11,
		.greeting = {
			.easyChat = {
				EC_WORD_GIGGLE,
				EC_WORD_GIGGLE,
				EC_WORD_SNORT,
				EC_WORD_HAPPILY,
				EC_WORD_GIGGLE,
				EC_WORD_MUFUFU,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
		.name = _("MOLLY"),
		.teamFlags = 0x12,
		.greeting = {
			.easyChat = {
				EC_WORD_IS,
				EC_WORD_TODAY,
				EC_WORD_MONDAY,
				EC_WORD_QUES,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BUG_MANIAC,
		.name = _("JÖRG"),
		.teamFlags = 0x40,
		.greeting = {
			.easyChat = {
				EC_WORD_WATER,
				0xFFFF,
				EC_WORD_AND,
				EC_WORD_BUG,
				0xFFFF,
				EC_WORD_POKEMON,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BATTLE_GIRL,
		.name = _("ANKE"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_WHAT,
				EC_WORD_IS,
				EC_WORD_PRESSURE,
				EC_WORD_STATIC,
				EC_WORD_IS,
				EC_WORD_SUPER,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_FISHERMAN,
		.name = _("HANS"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_KID,
				EC_WORD_YOU,
				EC_WORD_CAN_T,
				EC_WORD_DON_T,
				EC_WORD_WINS,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SAILOR,
		.name = _("PETER"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_IT_S,
				EC_WORD_QUITE,
				EC_WORD_TERRIBLE,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_MODE,
				EC_WORD_I,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_EXPERT_F,
		.name = _("MARA"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_YOU_RE,
				EC_WORD_VERY,
				EC_WORD_ALL_RIGHT,
				EC_WORD_TRAINS,
				EC_WORD_OR,
				EC_WORD_QUES,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BUG_MANIAC,
		.name = _("DARIUS"),
		.teamFlags = 0x11,
		.greeting = {
			.easyChat = {
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_TOUGH,
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_SCARY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_BREEDER_F,
		.name = _("REGINA"),
		.teamFlags = 0x12,
		.greeting = {
			.easyChat = {
				EC_WORD_TODAY,
				EC_WORD_WIN,
				EC_WORD_I,
				EC_WORD_MAYBE,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PARASOL_LADY,
		.name = _("MAIKE"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_SO,
				EC_WORD_AN,
				EC_MOVE(SCARY_FACE),
				EC_WORD_IS,
				EC_WORD_NOT_VERY,
				EC_WORD_KIND,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
		.name = _("SANDRA"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_SPORTS,
				EC_WORD_IS,
				EC_WORD_HEALTHY,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_SPIRALING,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_RANGER_M,
		.name = _("ARNOLD"),
		.teamFlags = 0x08,
		.greeting = {
			.easyChat = {
				EC_WORD_AWESOME,
				EC_WORD_WHO_WAS,
				EC_WORD_POKEMON,
				EC_WORD_THOSE,
				EC_WORD_ROCK_SOLID,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BLACK_BELT,
		.name = _("XENO"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_HOO_HAH,
				EC_WORD_ARE,
				EC_WORD_YOU,
				EC_WORD_READY,
				EC_WORD_FOR,
				EC_WORD_SHADY,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COOL_TRAINER_F,
		.name = _("KARLA"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_YOU,
				EC_WORD_CAN_T,
				EC_WORD_ME,
				EC_WORD_NEVER,
				EC_WORD_SMITE,
				EC_WORD_KID,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COLLECTOR,
		.name = _("VOLKER"),
		.teamFlags = 0x80,
		.greeting = {
			.easyChat = {
				EC_WORD_FROM,
				EC_WORD_PLACE,
				EC_WORD_TO,
				EC_WORD_PLACE,
				EC_WORD_POKEMON,
				EC_WORD_WOWEE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
		.name = _("TOBIAS"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_THAT,
				EC_WORD_ISN_T,
				EC_WORD_SPORTS,
				EC_WORD_IT_S,
				EC_WORD_A,
				EC_WORD_FIGHTING,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GENTLEMAN,
		.name = _("NORBERT"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_I,
				EC_WORD_MUST_BE,
				EC_WORD_WINS,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_PLEASE,
				EC_WORD_PLEASE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BATTLE_GIRL,
		.name = _("ZITA"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_THAT,
				EC_WORD_IS,
				EC_WORD_SCARY,
				EC_WORD_PLEASE,
				EC_WORD_BE,
				EC_WORD_NICE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_BEAUTY,
		.name = _("ELKE"),
		.teamFlags = 0x20,
		.greeting = {
			.easyChat = {
				EC_WORD_WITHOUT,
				EC_MOVE(FLAIL),
				EC_WORD_NONE,
				EC_MOVE(WITHDRAW),
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_HIKER,
		.name = _("VITUS"),
		.teamFlags = 0x04,
		.greeting = {
			.easyChat = {
				EC_WORD_YAHOO,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
				EC_WORD_LISTENS,
				EC_WORD_HER,
				EC_WORD_TO,
				EC_WORD_QUES,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_EXPERT_M,
		.name = _("MALTE"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_LEARN,
				EC_WORD_CORRECT,
				EC_WORD_TO,
				EC_WORD_FIGHT,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_POKEMON_BREEDER_M,
		.name = _("TIM"),
		.teamFlags = 0x40,
		.greeting = {
			.easyChat = {
				EC_WORD_IT_S,
				EC_WORD_A,
				EC_WORD_FIGHTING,
				EC_WORD_NONE,
				EC_WORD_CHILD_S_PLAY,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_GUITARIST,
		.name = _("GAVIN"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_SHADY,
				EC_WORD_BABY,
				EC_WORD_BABY,
				EC_WORD_BABY,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_PSYCHIC_M,
		.name = _("RALF"),
		.teamFlags = 0x08,
		.greeting = {
			.easyChat = {
				EC_WORD_STICKY_HOLD,
				EC_WORD_THOSE,
				EC_WORD_IMPORTANT,
				EC_WORD_ISN_T_IT_QUES,
				0xFFFF,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COOL_TRAINER_F,
		.name = _("JENNY"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_I,
				EC_WORD_SEARCH,
				EC_WORD_TRAINER,
				EC_WORD_ABSOLUTELY,
				EC_WORD_TOUGH,
				EC_WORD_THOSE,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_EXPERT_M,
		.name = _("JOEL"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_BELIEVE,
				EC_WORD_ON,
				EC_WORD_YOURS,
				EC_WORD_POKEMON,
				EC_WORD_AND,
				EC_WORD_WIN,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_DRAGON_TAMER,
		.name = _("KOLJA"),
		.teamFlags = 0x0C,
		.greeting = {
			.easyChat = {
				EC_WORD_GIRL,
				EC_WORD_WITH,
				EC_MOVE2(FORESIGHT),
				EC_WORD_THOSE,
				EC_WORD_NICE,
				0xFFFF,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_COOL_TRAINER_M,
		.name = _("BILL"),
		.teamFlags = 0x01,
		.greeting = {
			.easyChat = {
				EC_WORD_WHO_WAS,
				EC_WORD_POWER,
				EC_WORD_IS,
				EC_WORD_OVERWHELMING,
				EC_WORD_DISAPPEAR,
				EC_WORD_BETTER,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_EXPERT_F,
		.name = _("CALLA"),
		.teamFlags = 0x10,
		.greeting = {
			.easyChat = {
				EC_WORD_TRAINER,
				EC_WORD_YOU,
				EC_WORD_ARE,
				EC_WORD_SEEMS,
				EC_WORD_CAPABLE,
				EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS,
			},
		},
	},
	{
		.trainerClass = FACILITY_CLASS_LADY,
		.name = _("GESA"),
		.teamFlags = 0x02,
		.greeting = {
			.easyChat = {
				EC_WORD_COME_ON,
				EC_WORD_ABSOLUTELY,
				EC_WORD_TIME,
				EC_WORD_BECOMES,
				EC_WORD_EXCELLENT,
				0xFFFF,
			},
		},
	},
};
