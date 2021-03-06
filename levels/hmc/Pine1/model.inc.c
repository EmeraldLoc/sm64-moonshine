Lights1 Pine1_Tree_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 Pine1_Log_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx Pine1_Tree_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 Pine1_Tree_rgba32[] = {
	#include "levels/hmc/Tree.rgba32.inc.c"
};

Gfx Pine1_Log_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 Pine1_Log_rgba32[] = {
	#include "levels/hmc/Log.rgba32.inc.c"
};

Vtx Pine1_polygon0_mesh_vtx_0[145] = {
	{{{0, 43, 0},0, {763, 13622},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-45, 50, 63},0, {755, 13994},{0xEB, 0x86, 0x1E, 0xFF}}},
	{{{-74, 50, 25},0, {1342, 13808},{0xDD, 0x86, 0xB, 0xFF}}},
	{{{-1, 50, -78},0, {755, 13994},{0x0, 0x86, 0xDB, 0xFF}}},
	{{{45, 50, -63},0, {1342, 13808},{0x15, 0x86, 0xE2, 0xFF}}},
	{{{46, 50, 63},0, {755, 13994},{0x16, 0x86, 0x1D, 0xFF}}},
	{{{1, 50, 78},0, {1342, 13808},{0x0, 0x86, 0x24, 0xFF}}},
	{{{-74, 50, -24},0, {755, 13994},{0xDC, 0x87, 0xF5, 0xFF}}},
	{{{-46, 50, -63},0, {1342, 13808},{0xEA, 0x86, 0xE2, 0xFF}}},
	{{{74, 50, -25},0, {755, 13994},{0x23, 0x86, 0xF4, 0xFF}}},
	{{{74, 50, 24},0, {1342, 13808},{0x23, 0x86, 0xB, 0xFF}}},
	{{{45, 50, -63},0, {755, 13994},{0x15, 0x86, 0xE2, 0xFF}}},
	{{{74, 50, -25},0, {1342, 13808},{0x23, 0x86, 0xF4, 0xFF}}},
	{{{74, 50, 24},0, {755, 13994},{0x23, 0x86, 0xB, 0xFF}}},
	{{{46, 50, 63},0, {1342, 13808},{0x16, 0x86, 0x1D, 0xFF}}},
	{{{0, 43, 0},0, {763, 13622},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 50, 78},0, {755, 13994},{0x0, 0x86, 0x24, 0xFF}}},
	{{{-45, 50, 63},0, {1342, 13808},{0xEB, 0x86, 0x1E, 0xFF}}},
	{{{-74, 50, 25},0, {755, 13994},{0xDD, 0x86, 0xB, 0xFF}}},
	{{{-74, 50, -24},0, {1342, 13808},{0xDC, 0x87, 0xF5, 0xFF}}},
	{{{-46, 50, -63},0, {755, 13994},{0xEA, 0x86, 0xE2, 0xFF}}},
	{{{-1, 50, -78},0, {1342, 13808},{0x0, 0x86, 0xDB, 0xFF}}},
	{{{-74, 50, 25},0, {-1497, 13994},{0xDD, 0x86, 0xB, 0xFF}}},
	{{{-98, 62, -32},0, {-2064, 13622},{0x97, 0xC1, 0xDE, 0xFF}}},
	{{{-74, 50, -24},0, {-2064, 13994},{0xDC, 0x87, 0xF5, 0xFF}}},
	{{{-99, 62, 33},0, {-1509, 13622},{0x97, 0xC2, 0x23, 0xFF}}},
	{{{-60, 62, 85},0, {-954, 13622},{0xBF, 0xC2, 0x5A, 0xFF}}},
	{{{-45, 50, 63},0, {-930, 13994},{0xEB, 0x86, 0x1E, 0xFF}}},
	{{{1, 50, 78},0, {-376, 13994},{0x0, 0x86, 0x24, 0xFF}}},
	{{{1, 62, 104},0, {-390, 13622},{0x1, 0xC1, 0x6E, 0xFF}}},
	{{{62, 62, 84},0, {173, 13622},{0x43, 0xC3, 0x59, 0xFF}}},
	{{{1, 50, 78},0, {-376, 13994},{0x0, 0x86, 0x24, 0xFF}}},
	{{{46, 50, 63},0, {178, 13994},{0x16, 0x86, 0x1D, 0xFF}}},
	{{{62, 62, 84},0, {173, 13622},{0x43, 0xC3, 0x59, 0xFF}}},
	{{{74, 50, 24},0, {755, 13994},{0x23, 0x86, 0xB, 0xFF}}},
	{{{99, 62, 32},0, {763, 13622},{0x69, 0xC1, 0x22, 0xFF}}},
	{{{99, 62, -32},0, {1352, 13622},{0x6A, 0xC3, 0xDD, 0xFF}}},
	{{{74, 50, -25},0, {1331, 13994},{0x23, 0x86, 0xF4, 0xFF}}},
	{{{45, 50, -63},0, {1978, 13994},{0x15, 0x86, 0xE2, 0xFF}}},
	{{{61, 62, -84},0, {1994, 13622},{0x40, 0xC1, 0xA7, 0xFF}}},
	{{{0, 62, -103},0, {2636, 13622},{0xFF, 0xC1, 0x92, 0xFF}}},
	{{{-1, 50, -78},0, {2625, 13994},{0x0, 0x86, 0xDB, 0xFF}}},
	{{{-46, 50, -63},0, {3352, 13994},{0xEA, 0x86, 0xE2, 0xFF}}},
	{{{-62, 62, -84},0, {3358, 13622},{0xBE, 0xC0, 0xA8, 0xFF}}},
	{{{-98, 62, -32},0, {4080, 13622},{0x97, 0xC1, 0xDE, 0xFF}}},
	{{{-74, 50, -24},0, {4080, 13994},{0xDC, 0x87, 0xF5, 0xFF}}},
	{{{-98, 85, -31},0, {4080, 13048},{0x87, 0x6, 0xD9, 0xFF}}},
	{{{-62, 85, -84},0, {3356, 13048},{0xB5, 0x7, 0x9A, 0xFF}}},
	{{{-62, 62, -84},0, {3358, 13622},{0xBE, 0xC0, 0xA8, 0xFF}}},
	{{{-98, 85, -31},0, {4080, 13048},{0x87, 0x6, 0xD9, 0xFF}}},
	{{{-84, 244, -27},0, {4080, 8508},{0x89, 0x16, 0xDA, 0xFF}}},
	{{{0, 244, -88},0, {2628, 8508},{0xFF, 0x16, 0x83, 0xFF}}},
	{{{0, 402, -66},0, {2620, 4250},{0xFF, 0x13, 0x82, 0xFF}}},
	{{{-64, 402, -20},0, {4080, 4250},{0x89, 0x13, 0xD9, 0xFF}}},
	{{{0, 485, -52},0, {2614, 2092},{0x0, 0x1F, 0x85, 0xFF}}},
	{{{-50, 485, -16},0, {4080, 2092},{0x8B, 0x1F, 0xDA, 0xFF}}},
	{{{0, 521, -40},0, {2594, 1024},{0xFF, 0x44, 0x95, 0xFF}}},
	{{{-38, 521, -12},0, {4080, 1024},{0x9A, 0x44, 0xE0, 0xFF}}},
	{{{38, 521, -12},0, {1249, 1024},{0x65, 0x45, 0xDE, 0xFF}}},
	{{{50, 485, -16},0, {1280, 2092},{0x75, 0x1F, 0xD9, 0xFF}}},
	{{{24, 521, 32},0, {217, 1024},{0x3F, 0x44, 0x56, 0xFF}}},
	{{{31, 485, 42},0, {202, 2092},{0x49, 0x1F, 0x64, 0xFF}}},
	{{{-23, 521, 32},0, {-816, 1024},{0xC1, 0x45, 0x57, 0xFF}}},
	{{{-31, 485, 42},0, {-861, 2092},{0xB8, 0x1F, 0x64, 0xFF}}},
	{{{31, 485, 42},0, {202, 2092},{0x49, 0x1F, 0x64, 0xFF}}},
	{{{-23, 521, 32},0, {-816, 1024},{0xC1, 0x45, 0x57, 0xFF}}},
	{{{-38, 521, -12},0, {-2064, 1024},{0x9A, 0x44, 0xE0, 0xFF}}},
	{{{-50, 485, -16},0, {-2064, 2092},{0x8B, 0x1F, 0xDA, 0xFF}}},
	{{{-39, 402, 54},0, {-905, 4250},{0xB7, 0x13, 0x66, 0xFF}}},
	{{{-64, 402, -20},0, {-2064, 4250},{0x89, 0x13, 0xD9, 0xFF}}},
	{{{-51, 244, 72},0, {-940, 8508},{0xB7, 0x16, 0x65, 0xFF}}},
	{{{-84, 244, -27},0, {-2064, 8508},{0x89, 0x16, 0xDA, 0xFF}}},
	{{{-99, 85, 33},0, {-1511, 13048},{0x88, 0x8, 0x28, 0xFF}}},
	{{{-98, 85, -31},0, {-2064, 13048},{0x87, 0x6, 0xD9, 0xFF}}},
	{{{-99, 62, 33},0, {-1509, 13622},{0x97, 0xC2, 0x23, 0xFF}}},
	{{{-98, 62, -32},0, {-2064, 13622},{0x97, 0xC1, 0xDE, 0xFF}}},
	{{{-60, 85, 84},0, {-958, 13048},{0xB6, 0x8, 0x67, 0xFF}}},
	{{{0, 85, 104},0, {-395, 13048},{0x0, 0x8, 0x7F, 0xFF}}},
	{{{1, 62, 104},0, {-390, 13622},{0x1, 0xC1, 0x6E, 0xFF}}},
	{{{1, 62, 104},0, {-390, 13622},{0x1, 0xC1, 0x6E, 0xFF}}},
	{{{-60, 85, 84},0, {-958, 13048},{0xB6, 0x8, 0x67, 0xFF}}},
	{{{-60, 62, 85},0, {-954, 13622},{0xBF, 0xC2, 0x5A, 0xFF}}},
	{{{-99, 62, 33},0, {-1509, 13622},{0x97, 0xC2, 0x23, 0xFF}}},
	{{{61, 85, 83},0, {168, 13048},{0x4B, 0x9, 0x66, 0xFF}}},
	{{{0, 85, 104},0, {-395, 13048},{0x0, 0x8, 0x7F, 0xFF}}},
	{{{52, 244, 71},0, {175, 8508},{0x4A, 0x16, 0x65, 0xFF}}},
	{{{99, 85, 32},0, {760, 13048},{0x79, 0x7, 0x27, 0xFF}}},
	{{{99, 62, 32},0, {763, 13622},{0x69, 0xC1, 0x22, 0xFF}}},
	{{{62, 62, 84},0, {173, 13622},{0x43, 0xC3, 0x59, 0xFF}}},
	{{{98, 85, -32},0, {1352, 13048},{0x78, 0x8, 0xD8, 0xFF}}},
	{{{99, 62, -32},0, {1352, 13622},{0x6A, 0xC3, 0xDD, 0xFF}}},
	{{{61, 62, -84},0, {1994, 13622},{0x40, 0xC1, 0xA7, 0xFF}}},
	{{{61, 85, -84},0, {1992, 13048},{0x4A, 0x7, 0x99, 0xFF}}},
	{{{0, 85, -103},0, {2632, 13048},{0xFF, 0x6, 0x81, 0xFF}}},
	{{{0, 62, -103},0, {2636, 13622},{0xFF, 0xC1, 0x92, 0xFF}}},
	{{{-62, 62, -84},0, {3358, 13622},{0xBE, 0xC0, 0xA8, 0xFF}}},
	{{{0, 85, -103},0, {2632, 13048},{0xFF, 0x6, 0x81, 0xFF}}},
	{{{0, 62, -103},0, {2636, 13622},{0xFF, 0xC1, 0x92, 0xFF}}},
	{{{-62, 85, -84},0, {3356, 13048},{0xB5, 0x7, 0x9A, 0xFF}}},
	{{{0, 244, -88},0, {2628, 8508},{0xFF, 0x16, 0x83, 0xFF}}},
	{{{61, 85, -84},0, {1992, 13048},{0x4A, 0x7, 0x99, 0xFF}}},
	{{{84, 244, -28},0, {1338, 8508},{0x77, 0x16, 0xD8, 0xFF}}},
	{{{63, 402, -21},0, {1311, 4250},{0x77, 0x14, 0xD8, 0xFF}}},
	{{{0, 402, -66},0, {2620, 4250},{0xFF, 0x13, 0x82, 0xFF}}},
	{{{50, 485, -16},0, {1280, 2092},{0x75, 0x1F, 0xD9, 0xFF}}},
	{{{0, 485, -52},0, {2614, 2092},{0x0, 0x1F, 0x85, 0xFF}}},
	{{{31, 485, 42},0, {202, 2092},{0x49, 0x1F, 0x64, 0xFF}}},
	{{{39, 402, 54},0, {187, 4250},{0x4A, 0x13, 0x65, 0xFF}}},
	{{{-31, 485, 42},0, {-861, 2092},{0xB8, 0x1F, 0x64, 0xFF}}},
	{{{-39, 402, 54},0, {-905, 4250},{0xB7, 0x13, 0x66, 0xFF}}},
	{{{52, 244, 71},0, {175, 8508},{0x4A, 0x16, 0x65, 0xFF}}},
	{{{52, 244, 71},0, {175, 8508},{0x4A, 0x16, 0x65, 0xFF}}},
	{{{-39, 402, 54},0, {-905, 4250},{0xB7, 0x13, 0x66, 0xFF}}},
	{{{-51, 244, 72},0, {-940, 8508},{0xB7, 0x16, 0x65, 0xFF}}},
	{{{0, 85, 104},0, {-395, 13048},{0x0, 0x8, 0x7F, 0xFF}}},
	{{{84, 244, -28},0, {1338, 8508},{0x77, 0x16, 0xD8, 0xFF}}},
	{{{39, 402, 54},0, {187, 4250},{0x4A, 0x13, 0x65, 0xFF}}},
	{{{63, 402, -21},0, {1311, 4250},{0x77, 0x14, 0xD8, 0xFF}}},
	{{{99, 85, 32},0, {760, 13048},{0x79, 0x7, 0x27, 0xFF}}},
	{{{98, 85, -32},0, {1352, 13048},{0x78, 0x8, 0xD8, 0xFF}}},
	{{{61, 85, -84},0, {1992, 13048},{0x4A, 0x7, 0x99, 0xFF}}},
	{{{19, 536, -6},0, {5740, 6174},{0x3F, 0x6C, 0xEB, 0xFF}}},
	{{{0, 536, -20},0, {5431, 6174},{0x0, 0x6D, 0xBF, 0xFF}}},
	{{{0, 543, 0},0, {5577, 7160},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 521, -40},0, {5279, 7156},{0xFF, 0x44, 0x95, 0xFF}}},
	{{{38, 521, -12},0, {5886, 7156},{0x65, 0x45, 0xDE, 0xFF}}},
	{{{12, 536, 16},0, {5740, 6174},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{19, 536, -6},0, {5431, 6174},{0x3F, 0x6C, 0xEB, 0xFF}}},
	{{{0, 543, 0},0, {5577, 7160},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{38, 521, -12},0, {5279, 7156},{0x65, 0x45, 0xDE, 0xFF}}},
	{{{24, 521, 32},0, {5886, 7156},{0x3F, 0x44, 0x56, 0xFF}}},
	{{{-12, 536, 16},0, {5740, 6174},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{12, 536, 16},0, {5431, 6174},{0x27, 0x6C, 0x36, 0xFF}}},
	{{{24, 521, 32},0, {5279, 7156},{0x3F, 0x44, 0x56, 0xFF}}},
	{{{-23, 521, 32},0, {5886, 7156},{0xC1, 0x45, 0x57, 0xFF}}},
	{{{-19, 536, -6},0, {5740, 6174},{0xC1, 0x6D, 0xEC, 0xFF}}},
	{{{-12, 536, 16},0, {5431, 6174},{0xD9, 0x6C, 0x36, 0xFF}}},
	{{{-23, 521, 32},0, {5279, 7156},{0xC1, 0x45, 0x57, 0xFF}}},
	{{{-38, 521, -12},0, {5886, 7156},{0x9A, 0x44, 0xE0, 0xFF}}},
	{{{0, 536, -20},0, {5740, 6174},{0x0, 0x6D, 0xBF, 0xFF}}},
	{{{-19, 536, -6},0, {5431, 6174},{0xC1, 0x6D, 0xEC, 0xFF}}},
	{{{-38, 521, -12},0, {5279, 7156},{0x9A, 0x44, 0xE0, 0xFF}}},
	{{{0, 521, -40},0, {5886, 7156},{0xFF, 0x44, 0x95, 0xFF}}},
	{{{-38, 521, -12},0, {5279, 7156},{0x9A, 0x44, 0xE0, 0xFF}}},
	{{{0, 536, -20},0, {5740, 6174},{0x0, 0x6D, 0xBF, 0xFF}}},
};

Gfx Pine1_polygon0_mesh_tri_0[] = {
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 11, 12, 0),
	gsSP1Triangle(0, 13, 14, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 8, 7, 0),
	gsSP1Triangle(11, 10, 7, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 31, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(14, 13, 11, 0),
	gsSP1Triangle(15, 12, 13, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 47, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 7, 9, 0),
	gsSP1Triangle(12, 7, 11, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 63, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 9, 11, 0),
	gsSP1Triangle(7, 9, 13, 0),
	gsSP1Triangle(14, 7, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 79, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(4, 9, 8, 0),
	gsSP1Triangle(0, 9, 4, 0),
	gsSP1Triangle(7, 8, 10, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(15, 14, 12, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 95, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 11, 7, 0),
	gsSP1Triangle(7, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 111, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(4, 0, 7, 0),
	gsSP1Triangle(8, 4, 7, 0),
	gsSP1Triangle(9, 4, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 11, 10, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 126, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(9, 10, 2, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(13, 14, 2, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_0 + 142, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};Vtx Pine1_polygon0_mesh_vtx_1[137] = {
	{{{-1, 11, -21},0, {43874, 28713},{0x0, 0x26, 0x87, 0xFF}}},
	{{{-1, 86, -21},0, {43874, 1207},{0x0, 0x0, 0x81, 0xFF}}},
	{{{6, 86, -20},0, {41123, 1207},{0x28, 0x0, 0x87, 0xFF}}},
	{{{6, 11, -20},0, {41123, 28713},{0x26, 0x26, 0x8D, 0xFF}}},
	{{{12, 86, -17},0, {38372, 1207},{0x4A, 0x0, 0x99, 0xFF}}},
	{{{12, 11, -17},0, {38372, 28713},{0x47, 0x26, 0x9E, 0xFF}}},
	{{{16, 86, -12},0, {35622, 1207},{0x67, 0x0, 0xB6, 0xFF}}},
	{{{16, 11, -12},0, {35622, 28713},{0x62, 0x26, 0xB9, 0xFF}}},
	{{{19, 86, -7},0, {32871, 1207},{0x79, 0x0, 0xD8, 0xFF}}},
	{{{19, 11, -7},0, {32871, 28713},{0x73, 0x26, 0xDA, 0xFF}}},
	{{{20, 86, 0},0, {30121, 1207},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{20, 11, 0},0, {30121, 28713},{0x79, 0x26, 0x0, 0xFF}}},
	{{{19, 86, 6},0, {27370, 1207},{0x79, 0x0, 0x28, 0xFF}}},
	{{{19, 11, 6},0, {27370, 28713},{0x73, 0x26, 0x26, 0xFF}}},
	{{{16, 86, 12},0, {24620, 1207},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{16, 11, 12},0, {24620, 28713},{0x62, 0x26, 0x47, 0xFF}}},
	{{{16, 11, 12},0, {24620, 28713},{0x62, 0x26, 0x47, 0xFF}}},
	{{{16, 86, 12},0, {24620, 1207},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{12, 86, 17},0, {21869, 1207},{0x4A, 0x0, 0x67, 0xFF}}},
	{{{12, 11, 17},0, {21869, 28713},{0x47, 0x26, 0x62, 0xFF}}},
	{{{6, 86, 20},0, {19119, 1207},{0x28, 0x0, 0x79, 0xFF}}},
	{{{6, 11, 20},0, {19119, 28713},{0x26, 0x26, 0x73, 0xFF}}},
	{{{-1, 86, 21},0, {16368, 1207},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, 11, 21},0, {16368, 28713},{0x0, 0x26, 0x79, 0xFF}}},
	{{{-7, 86, 20},0, {13617, 1207},{0xD8, 0x0, 0x79, 0xFF}}},
	{{{-7, 11, 20},0, {13617, 28713},{0xDA, 0x26, 0x73, 0xFF}}},
	{{{-13, 86, 17},0, {10867, 1207},{0xB6, 0x0, 0x67, 0xFF}}},
	{{{-13, 11, 17},0, {10867, 28713},{0xB9, 0x26, 0x62, 0xFF}}},
	{{{-18, 86, 12},0, {8116, 1207},{0x99, 0x0, 0x4A, 0xFF}}},
	{{{-18, 11, 12},0, {8116, 28713},{0x9E, 0x26, 0x47, 0xFF}}},
	{{{-21, 86, 6},0, {5366, 1207},{0x87, 0x0, 0x28, 0xFF}}},
	{{{-21, 11, 6},0, {5366, 28713},{0x8D, 0x26, 0x26, 0xFF}}},
	{{{-21, 11, 6},0, {5366, 28713},{0x8D, 0x26, 0x26, 0xFF}}},
	{{{-21, 86, 6},0, {5366, 1207},{0x87, 0x0, 0x28, 0xFF}}},
	{{{-22, 86, 0},0, {2615, 1207},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-22, 11, 0},0, {2615, 28713},{0x87, 0x26, 0x0, 0xFF}}},
	{{{-21, 86, -7},0, {-135, 1207},{0x87, 0x0, 0xD8, 0xFF}}},
	{{{-21, 11, -7},0, {-135, 28713},{0x8D, 0x26, 0xDA, 0xFF}}},
	{{{-18, 86, -12},0, {-2886, 1207},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-18, 11, -12},0, {-2886, 28713},{0x9E, 0x26, 0xB9, 0xFF}}},
	{{{-13, 86, -17},0, {-5636, 1207},{0xB6, 0x0, 0x99, 0xFF}}},
	{{{-13, 11, -17},0, {-5636, 28713},{0xB9, 0x26, 0x9E, 0xFF}}},
	{{{-7, 86, -20},0, {-8387, 1207},{0xD8, 0x0, 0x87, 0xFF}}},
	{{{-7, 11, -20},0, {-8387, 28713},{0xDA, 0x26, 0x8D, 0xFF}}},
	{{{-1, 86, -21},0, {-11138, 1207},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, 11, -21},0, {-11138, 28713},{0x0, 0x26, 0x87, 0xFF}}},
	{{{-1, -16, -39},0, {-11138, 28713},{0x0, 0x24, 0x86, 0xFF}}},
	{{{-13, -16, -37},0, {-8387, 28713},{0xDA, 0x24, 0x8C, 0xFF}}},
	{{{-13, -16, -37},0, {-8387, 28713},{0xDA, 0x24, 0x8C, 0xFF}}},
	{{{-1, -16, -39},0, {-11138, 28713},{0x0, 0x24, 0x86, 0xFF}}},
	{{{-1, -77, -39},0, {-11138, 28713},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-13, -77, -37},0, {-8387, 28713},{0xD8, 0x0, 0x87, 0xFF}}},
	{{{-24, -16, -32},0, {-5636, 28713},{0xB8, 0x24, 0x9D, 0xFF}}},
	{{{-24, -77, -32},0, {-5636, 28713},{0xB6, 0x0, 0x99, 0xFF}}},
	{{{-32, -16, -23},0, {-2886, 28713},{0x9D, 0x24, 0xB8, 0xFF}}},
	{{{-32, -77, -23},0, {-2886, 28713},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-38, -16, -12},0, {-135, 28713},{0x8C, 0x24, 0xDA, 0xFF}}},
	{{{-38, -77, -12},0, {-135, 28713},{0x87, 0x0, 0xD8, 0xFF}}},
	{{{-40, -16, 0},0, {2615, 28713},{0x86, 0x24, 0x0, 0xFF}}},
	{{{-40, -77, 0},0, {2615, 28713},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-38, -16, 12},0, {5366, 28713},{0x8C, 0x24, 0x26, 0xFF}}},
	{{{-38, -77, 12},0, {5366, 28713},{0x87, 0x0, 0x28, 0xFF}}},
	{{{-32, -16, 23},0, {8116, 28713},{0x9D, 0x24, 0x48, 0xFF}}},
	{{{-32, -77, 23},0, {8116, 28713},{0x99, 0x0, 0x4A, 0xFF}}},
	{{{-24, -16, 32},0, {10867, 28713},{0xB8, 0x24, 0x63, 0xFF}}},
	{{{-32, -16, 23},0, {8116, 28713},{0x9D, 0x24, 0x48, 0xFF}}},
	{{{-32, -77, 23},0, {8116, 28713},{0x99, 0x0, 0x4A, 0xFF}}},
	{{{-24, -77, 32},0, {10867, 28713},{0xB6, 0x0, 0x67, 0xFF}}},
	{{{-13, -16, 37},0, {13617, 28713},{0xDA, 0x24, 0x74, 0xFF}}},
	{{{-13, -77, 37},0, {13617, 28713},{0xD8, 0x0, 0x79, 0xFF}}},
	{{{-1, -16, 39},0, {16368, 28713},{0x0, 0x24, 0x7A, 0xFF}}},
	{{{-1, -77, 39},0, {16368, 28713},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{11, -16, 37},0, {19119, 28713},{0x26, 0x24, 0x74, 0xFF}}},
	{{{11, -77, 37},0, {19119, 28713},{0x28, 0x0, 0x79, 0xFF}}},
	{{{22, -16, 32},0, {21869, 28713},{0x48, 0x24, 0x63, 0xFF}}},
	{{{22, -77, 32},0, {21869, 28713},{0x4A, 0x0, 0x67, 0xFF}}},
	{{{31, -16, 23},0, {24620, 28713},{0x63, 0x24, 0x48, 0xFF}}},
	{{{31, -77, 23},0, {24620, 28713},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{37, -16, 12},0, {27370, 28713},{0x74, 0x24, 0x26, 0xFF}}},
	{{{37, -77, 12},0, {27370, 28713},{0x79, 0x0, 0x28, 0xFF}}},
	{{{39, -16, 0},0, {30121, 28713},{0x7A, 0x24, 0x0, 0xFF}}},
	{{{37, -16, 12},0, {27370, 28713},{0x74, 0x24, 0x26, 0xFF}}},
	{{{37, -77, 12},0, {27370, 28713},{0x79, 0x0, 0x28, 0xFF}}},
	{{{39, -77, 0},0, {30121, 28713},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{37, -16, -12},0, {32871, 28713},{0x74, 0x24, 0xDA, 0xFF}}},
	{{{37, -77, -12},0, {32871, 28713},{0x79, 0x0, 0xD8, 0xFF}}},
	{{{31, -16, -23},0, {35622, 28713},{0x63, 0x24, 0xB8, 0xFF}}},
	{{{31, -77, -23},0, {35622, 28713},{0x67, 0x0, 0xB6, 0xFF}}},
	{{{22, -16, -32},0, {38372, 28713},{0x48, 0x24, 0x9D, 0xFF}}},
	{{{22, -77, -32},0, {38372, 28713},{0x4A, 0x0, 0x99, 0xFF}}},
	{{{11, -16, -37},0, {41123, 28713},{0x26, 0x24, 0x8C, 0xFF}}},
	{{{11, -77, -37},0, {41123, 28713},{0x28, 0x0, 0x87, 0xFF}}},
	{{{-1, -16, -39},0, {43874, 28713},{0x0, 0x24, 0x86, 0xFF}}},
	{{{-1, -77, -39},0, {43874, 28713},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, 11, -21},0, {43874, 28713},{0x0, 0x26, 0x87, 0xFF}}},
	{{{6, 11, -20},0, {41123, 28713},{0x26, 0x26, 0x8D, 0xFF}}},
	{{{6, 11, -20},0, {41123, 28713},{0x26, 0x26, 0x8D, 0xFF}}},
	{{{12, 11, -17},0, {38372, 28713},{0x47, 0x26, 0x9E, 0xFF}}},
	{{{22, -16, -32},0, {38372, 28713},{0x48, 0x24, 0x9D, 0xFF}}},
	{{{31, -16, -23},0, {35622, 28713},{0x63, 0x24, 0xB8, 0xFF}}},
	{{{16, 11, -12},0, {35622, 28713},{0x62, 0x26, 0xB9, 0xFF}}},
	{{{37, -16, -12},0, {32871, 28713},{0x74, 0x24, 0xDA, 0xFF}}},
	{{{19, 11, -7},0, {32871, 28713},{0x73, 0x26, 0xDA, 0xFF}}},
	{{{39, -16, 0},0, {30121, 28713},{0x7A, 0x24, 0x0, 0xFF}}},
	{{{20, 11, 0},0, {30121, 28713},{0x79, 0x26, 0x0, 0xFF}}},
	{{{37, -16, 12},0, {27370, 28713},{0x74, 0x24, 0x26, 0xFF}}},
	{{{19, 11, 6},0, {27370, 28713},{0x73, 0x26, 0x26, 0xFF}}},
	{{{31, -16, 23},0, {24620, 28713},{0x63, 0x24, 0x48, 0xFF}}},
	{{{16, 11, 12},0, {24620, 28713},{0x62, 0x26, 0x47, 0xFF}}},
	{{{22, -16, 32},0, {21869, 28713},{0x48, 0x24, 0x63, 0xFF}}},
	{{{12, 11, 17},0, {21869, 28713},{0x47, 0x26, 0x62, 0xFF}}},
	{{{11, -16, 37},0, {19119, 28713},{0x26, 0x24, 0x74, 0xFF}}},
	{{{12, 11, 17},0, {21869, 28713},{0x47, 0x26, 0x62, 0xFF}}},
	{{{6, 11, 20},0, {19119, 28713},{0x26, 0x26, 0x73, 0xFF}}},
	{{{11, -16, 37},0, {19119, 28713},{0x26, 0x24, 0x74, 0xFF}}},
	{{{-1, -16, 39},0, {16368, 28713},{0x0, 0x24, 0x7A, 0xFF}}},
	{{{-1, 11, 21},0, {16368, 28713},{0x0, 0x26, 0x79, 0xFF}}},
	{{{-13, -16, 37},0, {13617, 28713},{0xDA, 0x24, 0x74, 0xFF}}},
	{{{-7, 11, 20},0, {13617, 28713},{0xDA, 0x26, 0x73, 0xFF}}},
	{{{-24, -16, 32},0, {10867, 28713},{0xB8, 0x24, 0x63, 0xFF}}},
	{{{-13, 11, 17},0, {10867, 28713},{0xB9, 0x26, 0x62, 0xFF}}},
	{{{-32, -16, 23},0, {8116, 28713},{0x9D, 0x24, 0x48, 0xFF}}},
	{{{-18, 11, 12},0, {8116, 28713},{0x9E, 0x26, 0x47, 0xFF}}},
	{{{-38, -16, 12},0, {5366, 28713},{0x8C, 0x24, 0x26, 0xFF}}},
	{{{-21, 11, 6},0, {5366, 28713},{0x8D, 0x26, 0x26, 0xFF}}},
	{{{-40, -16, 0},0, {2615, 28713},{0x86, 0x24, 0x0, 0xFF}}},
	{{{-22, 11, 0},0, {2615, 28713},{0x87, 0x26, 0x0, 0xFF}}},
	{{{-38, -16, -12},0, {-135, 28713},{0x8C, 0x24, 0xDA, 0xFF}}},
	{{{-22, 11, 0},0, {2615, 28713},{0x87, 0x26, 0x0, 0xFF}}},
	{{{-21, 11, -7},0, {-135, 28713},{0x8D, 0x26, 0xDA, 0xFF}}},
	{{{-38, -16, -12},0, {-135, 28713},{0x8C, 0x24, 0xDA, 0xFF}}},
	{{{-32, -16, -23},0, {-2886, 28713},{0x9D, 0x24, 0xB8, 0xFF}}},
	{{{-18, 11, -12},0, {-2886, 28713},{0x9E, 0x26, 0xB9, 0xFF}}},
	{{{-24, -16, -32},0, {-5636, 28713},{0xB8, 0x24, 0x9D, 0xFF}}},
	{{{-13, 11, -17},0, {-5636, 28713},{0xB9, 0x26, 0x9E, 0xFF}}},
	{{{-13, -16, -37},0, {-8387, 28713},{0xDA, 0x24, 0x8C, 0xFF}}},
	{{{-7, 11, -20},0, {-8387, 28713},{0xDA, 0x26, 0x8D, 0xFF}}},
};

Gfx Pine1_polygon0_mesh_tri_1[] = {
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(11, 14, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 10, 12, 0),
	gsSP1Triangle(14, 15, 10, 0),
	gsSP1Triangle(15, 8, 10, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(Pine1_polygon0_mesh_vtx_1 + 128, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_Pine1_Tree[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 64, Pine1_Tree_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 2044),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 9, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 2044),
	gsSPSetLights1(Pine1_Tree_lights),
	gsSPEndDisplayList(),
};


Gfx mat_Pine1_Log[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 1024, Pine1_Log_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 256, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 4092, 4092),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 256, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0, G_TX_WRAP | G_TX_NOMIRROR, 10, 0),
	gsDPSetTileSize(0, 0, 0, 4092, 4092),
	gsSPSetLights1(Pine1_Log_lights),
	gsSPEndDisplayList(),
};


Gfx Pine1_polygon0_mesh[] = {
	gsSPDisplayList(mat_Pine1_Tree),
	gsSPDisplayList(Pine1_polygon0_mesh_tri_0),
	gsSPDisplayList(mat_Pine1_Log),
	gsSPDisplayList(Pine1_polygon0_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx Pine1_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
