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
#include "levels/bbh/header.h"

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 
                     LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, Tree_geo),
                      LOAD_MODEL_FROM_GEO(MODEL_CAP_SWITCH, switch_geo), 


	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_COURTYARD, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BBH, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BBH, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_BBH, 0x01, 0x0E, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0E, LEVEL_BBH, 0x01, 0x0D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0F, LEVEL_BBH, 0x01, 0x15, WARP_NO_CHECKPOINT),
		WARP_NODE(0x15, LEVEL_BBH, 0x01, 0x0F, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1165, -988, 6457, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, -5213, -988, 4625, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 6457, -505, 3615, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 7581, -505, -4162, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT_WITH_ACTS(MODEL_BOO, 6365, -492, -3225, 0, 0, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 7246, -582, 3490, 0, 0, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 5513, -582, 3490, 0, 0, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 3788, -3255, 6191, 0, 0, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 3788, -3255, 5785, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 3788, -3216, 5181, 0, 0, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 1517, -2344, 6983, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -288, -2250, 6983, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -1133, -1996, 5663, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 761, -834, 5650, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -2313, -834, 5964, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 1371, -922, 1027, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, 188, -922, -2396, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -2186, -922, -121, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -3682, 1184, -1583, 0, 90, 0, 0x00000000, bhvBoo, ACT_1),
		OBJECT(MODEL_CAP_SWITCH, 6278, -3903, 4319, 0, 0, 0, 0x00020000, bhvCapSwitch),
		OBJECT(MODEL_YELLOW_COIN, 5734, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5908, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6057, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6197, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5119, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5293, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5443, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5582, -459, -4860, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6979, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7153, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7302, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7442, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6364, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6538, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6687, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6827, -463, 1683, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5666, -655, -1829, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5968, -3461, 7086, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4919, -3268, 7086, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -2993, 7086, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -2835, 4090, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2317, -2492, 4090, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 4653, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 4863, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 5086, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 5297, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 5546, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 5838, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 6089, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 6384, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 6711, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2256, -2145, 7118, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1502, -2495, 7007, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -305, -2390, 7007, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1241, -2226, 5599, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -3172, 6615, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -3316, 6218, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2769, -1117, -4589, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -3278, 5207, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3784, -3171, 4900, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4039, -1117, -4135, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6295, -3699, 4950, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -615, -1136, -134, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3640, 1066, -1199, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3640, 1066, -1443, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3640, 1217, -1726, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4324, 1283, -734, 0, 44, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4493, 1283, -910, 0, 44, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4752, 1402, -1178, 0, 44, 0, 0x00000000, bhvYellowCoin),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -5353, -1123, 2021, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_YELLOW_COIN, 663, 243, -7190, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1127, 733, -7190, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 674, 1112, -7190, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -734, 12, -7302, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 124, 12, -7408, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -3940, -971, 6863, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_YELLOW_COIN, -1438, -961, 6193, 0, 0, 0, 0x00000000, bhvYellowCoin, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_YELLOW_COIN, -6503, -642, -5454, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5887, -248, -5724, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_RED_COIN, 6797, -648, -467, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3784, -3307, 5724, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3640, 1349, -2025, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4140, -1004, 1094, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3395, -4101, -4285, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3424, 15, -7067, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2521, -971, 3997, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1012, -235, -4432, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -1914, -1302, -2223, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT(MODEL_NONE, -5917, -1302, 814, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT(MODEL_NONE, -3750, -2852, 2695, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT(MODEL_NONE, -3750, -2852, -5016, 0, 0, 0, 0x00000000, bhvFish2),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 5487, -335, 5362, 0, -180, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 6892, -335, 4529, 0, 90, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 7543, -335, 1043, 0, -180, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 5503, -568, 585, 0, -180, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 3835, -3083, 5362, 0, 90, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 3835, -3083, 6209, 0, 90, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 18, -2225, 6757, 0, 0, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, -1191, -2046, 5663, 0, 0, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, 3835, -2646, 4251, 0, 90, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, -4093, 1310, -1712, 0, 0, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_FLYGUY, -4838, 1310, -666, 0, 0, 0, 0x00000000, bhvFlyGuy, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 420, -1037, 6024, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -194, -1037, 5225, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -5753, -1037, 5141, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -7606, -1037, 1396, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 185, -1037, 2176, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 185, -1037, -3817, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -6578, -1037, -4013, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -6578, 312, -7343, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, -21, 75, -7343, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BOBOMB_BUDDY, 6963, -459, -4860, 0, -180, 0, DIALOG_001 << 16, bhvBobombBuddy, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOO, -4869, 1746, 35, 0, -13, 0, 0x00000000, bhvBalconyBigBoo, ACT_1),
		OBJECT(MODEL_STAR, -3480, -3367, 451, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT_WITH_ACTS(MODEL_STAR, 904, 1444, -7190, 0, 0, 0, 0x02000000, bhvStar, ACT_2 | ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_NONE, 776, -834, -2973, 0, 0, 0, 0x03000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_NONE, 7445, -811, -6588, 0, 0, 0, 0x00000000, bhvHiddenStar),
		OBJECT_WITH_ACTS(MODEL_STAR, -5173, 1787, 5192, 0, 0, 0, 0x04000000, bhvStar, ACT_5 | ACT_6),
		OBJECT(MODEL_STAR, 326, -615, -6822, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -258, -1017, 2921, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -6603, 18, -7481, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -7078, -1017, 2432, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1051, -1017, 1963, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1309, -1017, -1554, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -6992, -1017, -2539, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -826, -1017, -3637, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1013, -1017, -4431, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -7423, 18, -6874, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -5732, 18, -7384, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 6075, 1751, -6774, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 6075, 1751, -6774),
		OBJECT(MODEL_NONE, -3196, -988, -121, 0, 90, 0, 0x000B0000, bhvWarp),
		OBJECT(MODEL_NONE, 6519, -3506, 5578, 0, -90, 0, 0x000C0000, bhvWarp),
		OBJECT(MODEL_NONE, -251, -2151, 3935, 0, 0, 0, 0x000D0000, bhvWarp),
		OBJECT(MODEL_NONE, -3639, 1061, -920, 0, -178, 0, 0x000E0000, bhvWarp),
		OBJECT(MODEL_NONE, -6985, -1009, 7337, 0, -55, 0, 0x000F0000, bhvWarp),
		OBJECT(MODEL_NONE, -277, -929, -7065, 0, 88, 0, 0x00150000, bhvWarp),
		OBJECT(MODEL_NONE, -3683, -1057, -5986, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -3119, -1057, -5986, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_MIST, -4506, -1141, -6119, 0, 0, 180, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3975, -1141, -6119, 0, 0, 180, 0x00010000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3325, -1141, -6119, 0, 0, 180, 0x00020000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -2820, -1141, -6119, 0, 0, 180, 0x00030000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -2358, -1141, -6119, 0, 0, 180, 0x00040000, bhvWaterMist2),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 6075, 1751, -6774),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};