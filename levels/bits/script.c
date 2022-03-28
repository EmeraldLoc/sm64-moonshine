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
#include "levels/bits/header.h"

const LevelScript level_bits_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _clouds_skybox_mio0SegmentRomStart, _clouds_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _sky_mio0SegmentRomStart, _sky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bits_geo_000430), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, bits_geo_000448), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, bits_geo_000460), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, bits_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, bits_geo_000490), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, bits_geo_0004A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, bits_geo_0004C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, bits_geo_0004D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, bits_geo_0004F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, bits_geo_000508), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, bits_geo_000520), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, bits_geo_000538), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, bits_geo_000550), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, bits_geo_000568), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, bits_geo_000580), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, bits_geo_000598), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, bits_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, bits_geo_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM, bits_geo_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, Slidespace_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM, OctagonalP_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM, bits_geo_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE, bits_geo_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM, bits_geo_000658), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM, bits_geo_000670), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM, bits_geo_000688), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE, SSLogSpace_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1, bits_geo_0006B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2, bits_geo_0006D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3, bits_geo_0006E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4, bits_geo_000700), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHECKERBOARD_PLATFORM, SpaceP_geo), 

	AREA(1, bits_area_1),
		WARP_NODE(0x0A, LEVEL_BITS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x71, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x72, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BEE, 6031, -503, 2888, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 7334, -503, 548, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 6921, -1011, -2918, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 1995, 212, -5745, 0, 90, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -866, 2401, 4291, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -1653, 2689, 2573, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -2598, 2580, 5129, 0, 131, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 6056, -1259, -3836, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 7351, -1259, -5672, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, -1653, 2930, 744, 0, 0, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BEE, 3075, 431, 2572, 0, 170, 0, 0x00000000, bhvBee),
		OBJECT(MODEL_BLACK_BOBOMB, 6127, -1430, -2085, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_CHAIN_CHOMP, 2702, 196, -1504, 0, 90, 0, 0x00000000, bhvChainChomp),
		OBJECT(MODEL_FLYGUY, 4577, -503, -6139, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_FLYGUY, 6144, -1063, -6366, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_GOOMBONE, 678, 2364, 5519, 0, 0, 0, 0x00000000, bhvgoombone),
		OBJECT(MODEL_BLACK_BOBOMB, 7176, -1430, -2085, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 6241, -1953, 3964, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_GOOMBONE, 1501, 193, 5243, 0, 0, 0, 0x00000000, bhvgoombone),
		OBJECT(MODEL_GOOMBONE, 2080, 193, 5519, 0, 0, 0, 0x00000000, bhvgoombone),
		OBJECT(MODEL_PIRANHA_PLANT, 6169, -2046, 5898, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 7238, -2046, 5898, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 6702, -2046, 5898, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 6127, -951, 3431, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 7264, -951, 3431, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 2034, 184, 4854, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 2611, 184, 5341, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 2610, 184, 4854, 0, 0, 0, 0x00000000, bhvFirePiranhaPlant),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 6375, -1527, -2986, 0, 0, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 6830, -1527, -4883, 0, 0, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_YELLOW_COIN, 1591, 964, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1785, 964, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1591, 1653, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1785, 1653, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1425, 964, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1425, 1653, 5356, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -634, 2413, 5687, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1970, 2413, 5045, 0, -180, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_BITS_FERRIS_WHEEL_AXLE, 6965, -1403, -6871, 0, 0, 0, 0x00000000, bhvFerrisWheelAxle),
		OBJECT(MODEL_BITS_FERRIS_WHEEL_AXLE, 5634, -1064, -6871, 0, 0, 0, 0x00000000, bhvFerrisWheelAxle),
		OBJECT(MODEL_BITS_FERRIS_WHEEL_AXLE, 4317, -636, -6871, 0, 0, 0, 0x00000000, bhvFerrisWheelAxle),
		OBJECT(MODEL_STAR, -1502, 2759, -620, 0, -180, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -954, 2662, -47, 0, -180, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_BITS_OCTAGONAL_PLATFORM, 6716, -1165, 1599, 0, 0, 0, 0x02000000, bhvOctagonalPlatformRotating),
		OBJECT(MODEL_BITS_OCTAGONAL_PLATFORM, 3426, -148, 931, 0, 0, 0, 0x02000000, bhvOctagonalPlatformRotating),
		OBJECT(MODEL_BITS_OCTAGONAL_PLATFORM, 1944, -148, 3014, 0, 0, 0, 0x02000000, bhvOctagonalPlatformRotating),
		OBJECT(MODEL_BITS_OCTAGONAL_PLATFORM, 6720, -1165, -280, 0, 0, 0, 0x00000000, bhvOctagonalPlatformRotating),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, 1485, 455, 5915, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, 1485, 1004, 4815, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, 1485, 1918, 5913, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, -2336, 2470, 2075, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, -2336, 2295, 4279, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, -2336, 2295, 3049, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_BITS_TWIN_SLIDING_PLATFORMS, -2336, 2470, 845, 0, -180, 0, 0x00CF0000, bhvSlidingPlatform2),
		OBJECT(MODEL_RED_COIN, 7247, -1935, 6995, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6107, -1404, 4926, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6375, -1132, -2987, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7481, -735, -6748, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2706, 679, -1499, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2194, 1171, 5353, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2913, 2683, 5176, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2240, 3443, 1455, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_BITS_SEESAW_PLATFORM, 2723, -330, -3654, 0, -180, 0, 0x00010000, bhvSeesawPlatform),
		OBJECT(MODEL_BITS_SEESAW_PLATFORM, 6681, -2294, 4938, 0, -90, 0, 0x00010000, bhvSeesawPlatform),
		OBJECT(MODEL_NONE, 6707, -457, 6921, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(bits_area_1_collision),
		MACRO_OBJECTS(bits_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_GUSTY),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};