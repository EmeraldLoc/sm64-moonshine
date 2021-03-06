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
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _snow_mio0SegmentRomStart, _snow_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group7_mio0SegmentRomStart, _group7_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, ClearPine_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, SnowPine_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_METAL_BOX, Iceplatform1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, SSLog_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM, Platform_2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BREAKABLE_BOX_SMALL, Stone2_geo), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x27, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CCM, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CCM, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_CCM, 0x02, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CCM, 0x02, 0x0F, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 4018, 303, 4259, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 5407, 303, 4259, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, 2622, 303, 4259, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, 2622, -118, 4259, 0, 0, 0, 0x00000000, bhvPushableMetalBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, 5399, -118, 4259, 0, 0, 0, 0x00000000, bhvPushableMetalBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_METAL_BOX, 4017, -118, 4259, 0, 0, 0, 0x00000000, bhvPushableMetalBox, ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_NONE, -458, -5, 3626, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_PENGUIN, 426, 116, 2894, 0, 0, 0, 0x00000000, bhvTuxiesMother),
		OBJECT(MODEL_PENGUIN, -4559, 1540, 630, 0, 0, 0, 0x00010000, bhvSmallPenguin),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 7123, 181, 4288, 0, -90, 0, 0x000B0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, 6891, 379, 4288, 0, -90, 0, 0x00010000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 5766, 2858, -4315, 0, -90, 0, 0x000C0000, bhvWarpPipe),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 7062, 5527, -4352, 0, -90, 0, 0x000D0000, bhvWarpPipe),
		OBJECT(MODEL_PENGUIN, -4845, 2911, -3099, 0, 0, 0, 0x00000000, bhvSmallPenguin),
		OBJECT(MODEL_NONE, 568, 2572, 236, 0, 0, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_STAR, 6523, 5819, -4352, 0, 0, 0, 0x02000000, bhvStar),
		OBJECT(MODEL_CCM_SNOWMAN_HEAD, -1169, 2234, -430, 0, 0, 0, 0x00000000, bhvSSLog),
		OBJECT(MODEL_CCM_SNOW_TREE, -1144, 469, 5154, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -546, 469, 5154, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -1951, -12, 4250, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 600, 716, 604, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 3082, 2462, -1408, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 1667, 2232, -24, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 823, 361, -2115, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 1386, 55, -2035, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3824, 1590, 1258, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3715, 1519, -1324, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -4106, 1519, -1324, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -831, 469, 5154, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3570, 2974, -2536, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -3907, 2974, -2318, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -5355, 2977, -3894, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 1004, 716, 604, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 7297, 5527, -4871, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, 6908, 5527, -4871, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_CCM_SNOW_TREE, -2162, 1175, 5154, 0, 0, 0, 0x00010000, bhvTree),
		OBJECT(MODEL_NONE, -1825, 1898, 4915, 0, 91, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 91, -1825, 1898, 4915),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0000, /*seq*/ SEQ_STREAMED_SNOWBALL),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0E, LEVEL_CCM, 0x02, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x27, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0F, LEVEL_CCM, 0x01, 0x01, WARP_NO_CHECKPOINT),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 6402, -3587, 1925, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 5654, -3456, 820, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 7318, -3607, -2839, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, 124, -3668, 226, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BLACK_BOBOMB, -624, -3537, -880, 0, 0, 0, 0x00000000, bhvBobomb, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 6173, -3827, 3769, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 5997, -3827, 4586, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 7253, -3587, -6668, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 6845, -3587, -7215, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 4121, -3538, -6790, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 3686, -3538, -5966, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 552, -3812, -5966, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 293, -3812, -7254, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, 7022, -3827, 3995, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -584, -3776, -3624, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -1123, -3776, -1639, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -477, -3691, 904, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -1807, -2817, -985, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -1610, -1355, -1854, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_GOOMBONE, -1863, -372, -789, 0, 0, 0, 0x00000000, bhvgoombone, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_RED_COIN, 7084, -2969, -764, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7192, -3347, -5018, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 81, -3537, -1158, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5347, -2969, -764, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2201, -3149, -7364, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_YELLOW_COIN, 7521, -2821, 3464, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 926, -2774, -7804, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 341, -2250, -8009, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6646, -4089, -3420, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1455, -3993, 5, -11, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -689, -3646, -3011, -11, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, -1591, -2414, 4194, 0, -180, 0, 0x000F0000, bhvWarpPipe),
		OBJECT(MODEL_NONE, -1271, -2037, 4193, 0, 90, 0, 0x000E0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 7206, -3588, -4262, 0, 0, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 7206, -3588, -5809, 0, 0, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 5648, -3588, -6679, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -1580, -2292, -2773, 0, 0, 0, 0x00000000, bhvCheckerboardElevatorGroup),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 577, -3825, -3377, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 2401, -3825, -3377, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 4506, -3825, -3377, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -1774, -210, -1928, 0, -180, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 2488, -3825, 868, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 4294, -3825, 868, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, 7147, -3876, 4752, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, -1431, -2386, 4536, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, 6001, -3876, 5211, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, 7530, -3624, -7449, 0, 0, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_CCM_SNOWMAN_HEAD, 6428, -3530, -758, 0, -180, 0, 0x00000000, bhvSSLog),
		OBJECT(MODEL_YELLOW_COIN, 7262, -3227, 1454, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_STAR, -1576, 177, -3049, 0, -180, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, 3322, -3743, -917, 0, 0, 0, 0x04000000, bhvHiddenRedCoinStar),
		OBJECT_WITH_ACTS(MODEL_NONE, 480, -3341, -688, 0, 0, 0, 0x05000000, bhvHiddenStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_STREAMED_SNOW_LAVA),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 91, -1825, 1898, 4915),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
