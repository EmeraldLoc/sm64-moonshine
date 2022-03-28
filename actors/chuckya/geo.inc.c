#include "src/game/envfx_snow.h"

const GeoLayout chuckya_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 281, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chuckya_000_offset_003_mesh),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 113, -152, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 74, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 96, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_000_displaylist_mesh),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chuckya_002_offset_mesh),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 209, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_000_displaylist_002_mesh),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 95, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_000_displaylist_003_mesh),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 209, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_000_displaylist_004_mesh),
											GEO_CLOSE_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 95, 0, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_000_displaylist_005_mesh),
														GEO_CLOSE_NODE(),
														GEO_ASM(0, geo_update_held_mario_pos),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, chuckya_002_offset_003_mesh),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, chuckya_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, chuckya_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
