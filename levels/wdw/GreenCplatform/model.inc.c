Lights1 GreenCplatform_Grasde_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 GreenCplatform_Wallyd_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx GreenCplatform_GrassC_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 GreenCplatform_GrassC_rgba32[] = {
	#include "levels/wdw/GrassC.rgba32.inc.c"
};

Gfx GreenCplatform_WallC_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 GreenCplatform_WallC_rgba32[] = {
	#include "levels/wdw/WallC.rgba32.inc.c"
};

Vtx GreenCplatform_skinned_mesh_vtx_0[48] = {
	{{{0, 103, -254},0, {3215, -2613},{0x0, 0x96, 0xB9, 0xFF}}},
	{{{204, 103, -117},0, {9971, 153},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 103, -235},0, {3193, -3209},{0x0, 0x81, 0x0, 0xFF}}},
	{{{221, 103, -127},0, {9396, 509},{0x3D, 0x96, 0xDC, 0xFF}}},
	{{{0, 112, -261},0, {3231, -2257},{0x0, 0xDC, 0x86, 0xFF}}},
	{{{-226, 112, -130},0, {-2059, 1067},{0x96, 0xDC, 0xC3, 0xFF}}},
	{{{-220, 103, -127},0, {-2352, 907},{0xC2, 0x97, 0xDD, 0xFF}}},
	{{{-203, 103, -117},0, {-2817, 653},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-220, 103, 128},0, {-2268, 7368},{0xC2, 0x97, 0x23, 0xFF}}},
	{{{-203, 103, 118},0, {-2766, 7661},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 103, 255},0, {3439, 10772},{0x0, 0x96, 0x47, 0xFF}}},
	{{{0, 103, 236},0, {3436, 11369},{0x0, 0x81, 0x0, 0xFF}}},
	{{{221, 103, 128},0, {9436, 7466},{0x3D, 0x96, 0x24, 0xFF}}},
	{{{204, 103, 118},0, {9971, 7777},{0x0, 0x81, 0x0, 0xFF}}},
	{{{227, 112, -130},0, {9068, 711},{0x69, 0xDB, 0xC3, 0xFF}}},
	{{{227, 112, 131},0, {9118, 7278},{0x69, 0xDB, 0x3D, 0xFF}}},
	{{{227, 120, -130},0, {8840, 845},{0x67, 0x2D, 0xC5, 0xFF}}},
	{{{227, 112, 131},0, {9118, 7278},{0x69, 0xDB, 0x3D, 0xFF}}},
	{{{227, 112, -130},0, {9068, 711},{0x69, 0xDB, 0xC3, 0xFF}}},
	{{{0, 120, -261},0, {3235, -2004},{0x0, 0x2D, 0x89, 0xFF}}},
	{{{0, 112, -261},0, {3231, -2257},{0x0, 0xDC, 0x86, 0xFF}}},
	{{{221, 103, -127},0, {9396, 509},{0x3D, 0x96, 0xDC, 0xFF}}},
	{{{-226, 120, -130},0, {-1847, 1189},{0x99, 0x2D, 0xC5, 0xFF}}},
	{{{-221, 126, -127},0, {-1669, 1282},{0xCC, 0x70, 0xE2, 0xFF}}},
	{{{-221, 126, 128},0, {-1588, 6977},{0xCC, 0x70, 0x1E, 0xFF}}},
	{{{-226, 120, 131},0, {-1754, 7074},{0x99, 0x2D, 0x3B, 0xFF}}},
	{{{-226, 112, -130},0, {-2059, 1067},{0x96, 0xDC, 0xC3, 0xFF}}},
	{{{-226, 112, 131},0, {-1968, 7195},{0x96, 0xDC, 0x3D, 0xFF}}},
	{{{-220, 103, -127},0, {-2352, 907},{0xC2, 0x97, 0xDD, 0xFF}}},
	{{{-220, 103, 128},0, {-2268, 7368},{0xC2, 0x97, 0x23, 0xFF}}},
	{{{0, 112, 262},0, {3445, 10415},{0x0, 0xDC, 0x7A, 0xFF}}},
	{{{0, 103, 255},0, {3439, 10772},{0x0, 0x96, 0x47, 0xFF}}},
	{{{227, 112, 131},0, {9118, 7278},{0x69, 0xDB, 0x3D, 0xFF}}},
	{{{0, 103, 255},0, {3439, 10772},{0x0, 0x96, 0x47, 0xFF}}},
	{{{221, 103, 128},0, {9436, 7466},{0x3D, 0x96, 0x24, 0xFF}}},
	{{{227, 120, 131},0, {8894, 7144},{0x67, 0x2D, 0x3B, 0xFF}}},
	{{{0, 112, 262},0, {3445, 10415},{0x0, 0xDC, 0x7A, 0xFF}}},
	{{{0, 120, 262},0, {3452, 10161},{0x0, 0x2D, 0x77, 0xFF}}},
	{{{222, 126, 128},0, {8700, 7031},{0x33, 0x71, 0x1E, 0xFF}}},
	{{{222, 126, -127},0, {8657, 963},{0x33, 0x71, 0xE2, 0xFF}}},
	{{{227, 120, -130},0, {8840, 845},{0x67, 0x2D, 0xC5, 0xFF}}},
	{{{0, 126, -255},0, {3247, -1796},{0x0, 0x70, 0xC4, 0xFF}}},
	{{{0, 126, 256},0, {3458, 9953},{0x0, 0x70, 0x3C, 0xFF}}},
	{{{-221, 126, 128},0, {-1588, 6977},{0xCC, 0x70, 0x1E, 0xFF}}},
	{{{-221, 126, -127},0, {-1669, 1282},{0xCC, 0x70, 0xE2, 0xFF}}},
	{{{0, 120, -261},0, {3235, -2004},{0x0, 0x2D, 0x89, 0xFF}}},
	{{{-226, 120, 131},0, {-1754, 7074},{0x99, 0x2D, 0x3B, 0xFF}}},
	{{{-226, 112, 131},0, {-1968, 7195},{0x96, 0xDC, 0x3D, 0xFF}}},
};

Gfx GreenCplatform_skinned_mesh_tri_0[] = {
	gsSPVertex(GreenCplatform_skinned_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(3, 12, 13, 0),
	gsSP1Triangle(3, 13, 1, 0),
	gsSP1Triangle(14, 12, 3, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(GreenCplatform_skinned_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(6, 3, 4, 0),
	gsSP1Triangle(7, 3, 6, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(9, 6, 10, 0),
	gsSP1Triangle(6, 4, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSP1Triangle(1, 14, 15, 0),
	gsSPVertex(GreenCplatform_skinned_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(7, 3, 8, 0),
	gsSP1Triangle(8, 3, 0, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 6, 7, 0),
	gsSP1Triangle(9, 10, 6, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 9, 13, 0),
	gsSP1Triangle(9, 8, 13, 0),
	gsSP1Triangle(10, 11, 14, 0),
	gsSP1Triangle(10, 14, 5, 0),
	gsSP1Triangle(5, 14, 15, 0),
	gsSP1Triangle(5, 15, 4, 0),
	gsSP1Triangle(6, 10, 5, 0),
	gsSPEndDisplayList(),
};Vtx GreenCplatform_skinned_mesh_vtx_1[24] = {
	{{{176, -16, -100},0, {7210, 7639},{0x0, 0x81, 0x0, 0xFF}}},
	{{{176, -16, 101},0, {7225, 7631},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, -16, 202},0, {7224, 7614},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-175, -16, -100},0, {7196, 7614},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-175, -16, 101},0, {7210, 7606},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, -16, -201},0, {7196, 7631},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-203, 103, -117},0, {-9014, 7032},{0x96, 0xDE, 0xC3, 0xFF}}},
	{{{0, -16, -201},0, {7218, 16533},{0x0, 0xDE, 0x86, 0xFF}}},
	{{{-175, -16, -100},0, {-6711, 16533},{0x96, 0xDE, 0xC3, 0xFF}}},
	{{{0, 103, -235},0, {7214, 7032},{0x0, 0xDE, 0x86, 0xFF}}},
	{{{176, -16, -100},0, {21209, 16533},{0x6A, 0xDD, 0xC3, 0xFF}}},
	{{{204, 103, -117},0, {23516, 7032},{0x6A, 0xDD, 0xC3, 0xFF}}},
	{{{-203, 103, 118},0, {-9014, 7032},{0x96, 0xDE, 0x3D, 0xFF}}},
	{{{-203, 103, -117},0, {7647, 7032},{0x96, 0xDE, 0xC3, 0xFF}}},
	{{{-175, -16, -100},0, {9951, 16533},{0x96, 0xDE, 0xC3, 0xFF}}},
	{{{-175, -16, 101},0, {-6711, 16533},{0x96, 0xDE, 0x3D, 0xFF}}},
	{{{0, 103, 236},0, {7214, 7032},{0x0, 0xDE, 0x7A, 0xFF}}},
	{{{-203, 103, 118},0, {-9014, 7032},{0x96, 0xDE, 0x3D, 0xFF}}},
	{{{-175, -16, 101},0, {-6711, 16533},{0x96, 0xDE, 0x3D, 0xFF}}},
	{{{0, -16, 202},0, {7218, 16533},{0x0, 0xDE, 0x7A, 0xFF}}},
	{{{204, 103, 118},0, {23516, 7032},{0x6A, 0xDD, 0x3D, 0xFF}}},
	{{{176, -16, 101},0, {21209, 16533},{0x6A, 0xDD, 0x3D, 0xFF}}},
	{{{204, 103, -117},0, {7871, 7032},{0x6A, 0xDD, 0xC3, 0xFF}}},
	{{{176, -16, -100},0, {5564, 16533},{0x6A, 0xDD, 0xC3, 0xFF}}},
};

Gfx GreenCplatform_skinned_mesh_tri_1[] = {
	gsSPVertex(GreenCplatform_skinned_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(GreenCplatform_skinned_mesh_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_GreenCplatform_Grasde[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 256, GreenCplatform_GrassC_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 64, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 1020, 1020),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 64, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0, G_TX_WRAP | G_TX_NOMIRROR, 8, 0),
	gsDPSetTileSize(0, 0, 0, 1020, 1020),
	gsSPSetLights1(GreenCplatform_Grasde_lights),
	gsSPEndDisplayList(),
};


Gfx mat_GreenCplatform_Wallyd[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 512, GreenCplatform_WallC_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 128, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 2044, 2044),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 128, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0),
	gsDPSetTileSize(0, 0, 0, 2044, 2044),
	gsSPSetLights1(GreenCplatform_Wallyd_lights),
	gsSPEndDisplayList(),
};


Gfx GreenCplatform_skinned_mesh[] = {
	gsSPDisplayList(mat_GreenCplatform_Grasde),
	gsSPDisplayList(GreenCplatform_skinned_mesh_tri_0),
	gsSPDisplayList(mat_GreenCplatform_Wallyd),
	gsSPDisplayList(GreenCplatform_skinned_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx GreenCplatform_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};