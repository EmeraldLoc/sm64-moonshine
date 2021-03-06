const GeoLayout unagi_geo[] = {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_SCALE(LAYER_FORCE, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, unagi_000_offset_001_mesh),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_000_offset_002_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 245, 0, 0, unagi_000_offset_002_mesh),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_000_offset_003_skinned),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 540, 0, 0, unagi_000_offset_003_mesh),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_000_offset_004_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 498, 0, 0, unagi_000_offset_004_mesh),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(2, geo_switch_anim_state),
								GEO_OPEN_NODE(),
								   GEO_NODE_START(),
								   GEO_NODE_START(),
								   GEO_OPEN_NODE(),
									  GEO_SCALE(0x00, 16384),
									  GEO_OPEN_NODE(),
										 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2000, 0, 0, 0, 0, 0, star_000_displaylist_mesh),
										 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 2000, 0, 0, 0, 0, 0, star_001_displaylist_mesh),
									  GEO_CLOSE_NODE(),
								   GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_000_offset_005_skinned),
					GEO_ANIMATED_PART(LAYER_OPAQUE, -254, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -60, 0, 0, unagi_000_offset_005_mesh),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_ALPHA, 467, 0, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 416, -7, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, NULL),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, unagi_001_offset_mesh),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(LAYER_ALPHA, 467, 0, 0, NULL),
							GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_003_offset_skinned),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 467, 0, 0, unagi_003_offset_mesh),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 467, 0, 0, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_DISPLAY_LIST(LAYER_OPAQUE, unagi_material_revert_render_settings),
	GEO_END(),
};
