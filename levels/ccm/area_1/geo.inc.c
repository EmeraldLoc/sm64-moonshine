#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 2622, -1547, 3678),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -780, 461, 4872),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 28, -439, -37),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 466, 1958, 7188, ccm_dl_Back_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -392, 169, 3825, ccm_dl_Back2_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2220, 2595, 343, ccm_dl_Crystals_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 4288, 1114, 13425, ccm_dl_Flowers_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3532, 3206, -4252, ccm_dl_Part3_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5915, 7186, -4364, ccm_dl_Playzone1_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3532, 3206, -4252, ccm_dl_Playzone2_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -4373, 3376, -2920, ccm_dl_Trasnparent_mesh),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -900, 213, 193, ccm_dl_Water_mesh),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -900, 213, 193),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 28, -439, -37),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 45000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_SNOW_NORMAL, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};