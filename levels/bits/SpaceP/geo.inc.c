#include "src/game/envfx_snow.h"

const GeoLayout SpaceP_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, SpaceP_Lift__Lift4x4MMat00_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, SpaceP_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
