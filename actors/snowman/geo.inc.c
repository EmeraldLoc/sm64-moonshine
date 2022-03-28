// 0x0C00021C
const GeoLayout mr_blizzard_hidden_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_FORCE, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_000_displaylist_mesh),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 356, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_000_displaylist_001_mesh),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 356, 0, 0, NULL),
					GEO_ANIMATED_PART(LAYER_ALPHA, 356, 0, 0, NULL),
					GEO_SWITCH_CASE(2, geo_switch_anim_state),
					GEO_OPEN_NODE(),
						GEO_NODE_START(),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 89, 0, -229, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, snowman_000_offset_002_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 68, 0, 0, snowman_000_offset_003_mesh),
							GEO_ASM(0, geo_update_projectile_pos_from_parent),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 356, 0, 0, NULL),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, snowman_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, snowman_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x0C000348
const GeoLayout mr_blizzard_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0xB4, 160),
   GEO_OPEN_NODE(),
      GEO_BRANCH_AND_LINK(mr_blizzard_hidden_geo),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
