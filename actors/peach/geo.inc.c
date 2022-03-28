#include "src/game/envfx_snow.h"

const GeoLayout peach_ArmatureObj_002[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_switch_000_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout peach_ArmatureObj_001[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_switch_000_displaylist_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout peach_001_switch_opt0_000_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_displaylist_mesh_mat_override_Eye_close_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout peach_001_switch_opt0_000_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_displaylist_mesh_mat_override_Eye_close_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout peach_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_NODE_START(),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, peach_000_offset_001_mesh),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_offset_002_skinned),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 78, 0, 0, peach_000_offset_002_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 132, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_SWITCH_CASE(8, geo_switch_peach_eyes),
											GEO_OPEN_NODE(),
												GEO_NODE_START(),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_displaylist_mesh),
												GEO_CLOSE_NODE(),
												GEO_BRANCH(1, peach_ArmatureObj_002),
												GEO_BRANCH(1, peach_ArmatureObj_001),
												GEO_BRANCH(1, peach_001_switch_opt0_000_switch_opt3),
												GEO_BRANCH(1, peach_001_switch_opt0_000_switch_opt4),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 38, -78, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 132, 0, 0, NULL),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 132, 0, 0, NULL),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, 84, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, peach_000_offset_005_mesh),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_offset_006_skinned),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 104, 0, 0, peach_000_offset_006_mesh),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_offset_007_skinned),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, peach_000_offset_007_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 63, 0, -84, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, peach_000_offset_008_mesh),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_offset_009_skinned),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 104, 0, 0, peach_000_offset_009_mesh),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_000_offset_010_skinned),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 0, 0, peach_000_offset_010_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 78, 0, 0, peach_002_offset_004_mesh),
									GEO_ANIMATED_PART(LAYER_OPAQUE, -23, -1, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, peach_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
