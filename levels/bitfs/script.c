#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bitfs/header.h"

const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bitfs_geo_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, bitfs_geo_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, bitfs_geo_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, bitfs_geo_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, bitfs_geo_000510), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, bitfs_geo_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, bitfs_geo_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, bitfs_geo_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, bitfs_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, bitfs_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, bitfs_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, bitfs_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, bitfs_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, bitfs_geo_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, bitfs_geo_000600), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, bitfs_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, bitfs_geo_000630), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, bitfs_geo_000648), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, bitfs_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_PLATFORM_ON_TRACK, bitfs_geo_000758), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TILTING_SQUARE_PLATFORM, bitfs_geo_0006C0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_PLATFORMS, bitfs_geo_000770), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_BLUE_POLE, SSLogCreek_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_CAGE_PLATFORM, bitfs_geo_000690), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_ELEVATOR, ElevatorC_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_STRETCHING_PLATFORMS, Creeckflag_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SEESAW_PLATFORM, bitfs_geo_000788), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_MOVING_SQUARE_PLATFORM, Titlingp_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SLIDING_PLATFORM, bitfs_geo_000740), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM_PART, bitfs_geo_0006D8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM, bitfs_geo_0006F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, Creektree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, Creekpipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM, Creecksp_geo), 

	AREA(1, bitfs_area_1),
		WARP_NODE(0x0A, LEVEL_BITFS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x36, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x37, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BITFS, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BITFS, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_BITFS, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_BITFS, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BEE, 7684, 1838, 889, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 6707, 1993, -2597, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -4160, 989, -2933, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 3709, 989, -8088, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BITFS_TUMBLING_PLATFORM, -4115, 1541, -4091, 0, 0, 0, 0x00030000, bhvWfTumblingBridge),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -3042, 601, -1832, 0, -180, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 4074, 411, -6934, 0, -90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_YELLOW_COIN, 3097, 1042, 1022, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2486, 1042, -51, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2185, 1086, 3719, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2834, 636, 6317, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2834, 636, 6004, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4914, 636, 5516, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4240, 513, 7270, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_RED_COIN, -4045, 513, 6785, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2365, 2156, 889, 0, -90, 0, 0x029F0000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4666, 1210, 3686, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2924, 1573, -2384, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4115, 2035, -4091, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2916, 538, -953, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 134, 516, -6383, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5714, 331, 6554, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_FLAME, -5749, 717, 5885, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4329, 717, 5885, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, 2189, 1270, 1923, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -4644, 717, 427, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -5559, 2002, -4458, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_BITFS_STRETCHING_PLATFORMS, 7304, 634, -6915, 0, 90, 0, 0x004E0000, bhvPoleGrabbing),
		OBJECT(MODEL_FLYGUY, -5811, 608, 3622, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, -3964, 608, 2289, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_NONE, 3176, 1020, 2804, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_BITFS_BLUE_POLE, -5030, 114, 3418, 0, -90, 0, 0x00000000, bhvSSLog),
		OBJECT(MODEL_BITFS_BLUE_POLE, -4203, 114, -955, 0, -180, 0, 0x00000000, bhvSSLog),
		OBJECT(MODEL_BITFS_BLUE_POLE, 2486, 114, -6950, 0, -90, 0, 0x00000000, bhvSSLog),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 6934, 1751, 2411, 0, 0, 0, 0x000B0000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -5052, 413, 6892, 0, -180, 0, 0x000C0000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -5209, 1734, -4117, 0, 90, 0, 0x000D0000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -175, 422, -6935, 0, 90, 0, 0x000E0000, bhvWarpPipe),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 2485, 720, -49, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 3095, 720, 1017, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 4457, -80, -1070, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 5334, -80, -2019, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_ELEVATOR, 6005, 192, -1617, 0, -90, 0, 0x029F0000, bhvActivatedBackAndForthPlatform),
		OBJECT(MODEL_BITFS_ELEVATOR, -3040, 192, -3305, 0, -90, 0, 0x029F0000, bhvActivatedBackAndForthPlatform),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 5718, -80, 6574, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, -3847, -80, 885, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, -3040, -80, 885, 0, 0, 0, 0x00030000, bhvBitfsTiltingInvertedPyramid),
		OBJECT(MODEL_BITFS_ELEVATOR, -2366, 192, 892, 0, -90, 0, 0x029F0000, bhvActivatedBackAndForthPlatform),
		OBJECT(MODEL_STAR, 7304, 1692, -6915, 0, -90, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 1429, 601, -6393, 0, 0, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_THI_BUBBLY_TREE, 4667, 539, 3684, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 4857, 539, 6271, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 4857, 539, 6870, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 2953, 539, 6793, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 2924, 995, -2385, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 2326, 995, -2385, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 7169, 1749, 2825, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, -5921, 410, 7066, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_THI_BUBBLY_TREE, 1426, 420, -7450, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 3916, 902, 6603, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 3916, 902, 6603),
		TERRAIN(bitfs_area_1_collision),
		MACRO_OBJECTS(bitfs_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_STREAMED_CREEK),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 3916, 902, 6603),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
