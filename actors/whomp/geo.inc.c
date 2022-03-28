#include "src/game/envfx_snow.h"

const GeoLayout whomp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_CULLING_RADIUS(2000),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE(LAYER_FORCE, 0, 0, -50),
			GEO_OPEN_NODE(),
				GEO_SHADOW(50, 180, 0),
				GEO_OPEN_NODE(),
					GEO_SCALE(LAYER_FORCE, 16384),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_000_offset_001_mesh),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -12, 490, -5, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_000_offset_003_mesh),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, -18, -479, -5, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_000_offset_004_mesh),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1075, 570, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_000_offset_005_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 400, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
											GEO_OPEN_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1068, -574, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, whomp_000_offset_007_mesh),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_ALPHA, 400, 0, 0, NULL),
										GEO_OPEN_NODE(),
											GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
											GEO_OPEN_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, whomp_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};