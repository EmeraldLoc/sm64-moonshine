Lights1 Slidespace_Plataform_1_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx Slidespace_Plataform_1_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 Slidespace_Plataform_1_rgba32[] = {
	#include "levels/bits/Plataform_1.rgba32.inc.c"
};

Vtx Slidespace_skinned_mesh_vtx_0[133] = {
	{{{-398, 2, -167},0, {7203, 700},{0xF2, 0xA9, 0xA5, 0xFF}}},
	{{{-397, 28, -192},0, {7376, 515},{0xF2, 0xA9, 0xA5, 0xFF}}},
	{{{-368, 13, -182},0, {7302, 625},{0xF2, 0xA9, 0xA5, 0xFF}}},
	{{{-397, 28, -192},0, {7376, 515},{0xB4, 0xBB, 0xB6, 0xFF}}},
	{{{-398, 2, -167},0, {7203, 700},{0xB4, 0xBB, 0xB6, 0xFF}}},
	{{{-414, 53, -198},0, {7418, 339},{0xB4, 0xBB, 0xB6, 0xFF}}},
	{{{-414, -4, -143},0, {7036, 742},{0xAE, 0xBD, 0xBB, 0xFF}}},
	{{{-414, 53, -198},0, {7418, 339},{0xAE, 0xBD, 0xBB, 0xFF}}},
	{{{-398, 2, -167},0, {7203, 700},{0xAE, 0xBD, 0xBB, 0xFF}}},
	{{{-414, 53, 204},0, {4638, 339},{0xAE, 0xBD, 0x45, 0xFF}}},
	{{{-414, -4, 149},0, {5019, 742},{0xAE, 0xBD, 0x45, 0xFF}}},
	{{{-398, 2, 173},0, {4853, 700},{0xAE, 0xBD, 0x45, 0xFF}}},
	{{{-397, 28, 198},0, {4679, 515},{0xF2, 0xA9, 0x5B, 0xFF}}},
	{{{-398, 2, 173},0, {4853, 700},{0xF2, 0xA9, 0x5B, 0xFF}}},
	{{{-368, 13, 187},0, {4753, 625},{0xF2, 0xA9, 0x5B, 0xFF}}},
	{{{-398, 2, 173},0, {4853, 700},{0xB4, 0xBB, 0x4A, 0xFF}}},
	{{{-397, 28, 198},0, {4679, 515},{0xB4, 0xBB, 0x4A, 0xFF}}},
	{{{-414, 53, 204},0, {4638, 339},{0xB4, 0xBB, 0x4A, 0xFF}}},
	{{{-414, 205, 194},0, {15020, 4002},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-414, 195, 204},0, {15013, 4013},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-327, 205, 194},0, {15021, 3991},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-328, 195, 204},0, {15013, 4002},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-414, 205, -188},0, {2235, 4078},{0x2, 0x5B, 0xA8, 0xFF}}},
	{{{360, 205, -188},0, {2235, -16},{0x0, 0x5C, 0xA9, 0xFF}}},
	{{{360, 195, -198},0, {1463, -16},{0x0, 0x5C, 0xA9, 0xFF}}},
	{{{-299, 192, -198},0, {1340, 3284},{0x0, 0x4F, 0x9D, 0xFF}}},
	{{{-414, 195, -198},0, {1463, 4080},{0x2, 0x5D, 0xA9, 0xFF}}},
	{{{380, 195, 204},0, {15015, 3983},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-228, 205, 194},0, {15022, 3982},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-224, 195, 204},0, {15014, 3993},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{380, 205, 194},0, {15023, 3972},{0x0, 0x5C, 0x57, 0xFF}}},
	{{{-414, 179, 204},0, {6493, -4012},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-328, 195, 204},0, {7266, -4182},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-414, 195, 204},0, {6493, -4182},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-271, 179, 204},0, {7306, -4024},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-414, 53, 204},0, {6493, -2675},{0x0, 0xF4, 0x7E, 0xFF}}},
	{{{542, 53, 204},0, {8541, -2675},{0x0, 0xEB, 0x7D, 0xFF}}},
	{{{-397, 28, 198},0, {6493, -2416},{0x0, 0xD8, 0x79, 0xFF}}},
	{{{542, 28, 198},0, {8541, -2416},{0x0, 0xCC, 0x74, 0xFF}}},
	{{{-368, 13, 187},0, {6493, -2248},{0x0, 0xA8, 0x5B, 0xFF}}},
	{{{542, 13, 187},0, {8541, -2248},{0x0, 0xA8, 0x5B, 0xFF}}},
	{{{542, 2, 173},0, {8541, -2076},{0x0, 0x99, 0x4A, 0xFF}}},
	{{{-398, 2, 173},0, {6493, -2076},{0x0, 0x99, 0x4A, 0xFF}}},
	{{{391, 179, 204},0, {8032, -4035},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{380, 195, 204},0, {7997, -4182},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-224, 195, 204},0, {7324, -4182},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{542, -4, -143},0, {5548, 4954},{0x0, 0x82, 0xF0, 0xFF}}},
	{{{-398, 2, -167},0, {7596, 4755},{0x0, 0x85, 0xE1, 0xFF}}},
	{{{542, 2, -167},0, {5548, 4755},{0x0, 0x85, 0xE1, 0xFF}}},
	{{{-414, -4, -143},0, {7596, 4954},{0x0, 0x82, 0xF4, 0xFF}}},
	{{{542, -4, 3},0, {5548, 6126},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-414, -4, 3},0, {7596, 6126},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-299, 192, -198},0, {7876, -3458},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-414, 177, -198},0, {8572, -3267},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-414, 195, -198},0, {8572, -3458},{0x0, 0x0, 0x81, 0xFF}}},
	{{{376, 178, -198},0, {7331, -3276},{0x0, 0x0, 0x81, 0xFF}}},
	{{{360, 195, -198},0, {7384, -3458},{0x0, 0x0, 0x81, 0xFF}}},
	{{{542, 53, -198},0, {6524, -1951},{0x0, 0xEA, 0x83, 0xFF}}},
	{{{-414, 53, -198},0, {8572, -1951},{0x0, 0xF4, 0x82, 0xFF}}},
	{{{-397, 28, -192},0, {8572, -1616},{0x0, 0xD8, 0x87, 0xFF}}},
	{{{542, 28, -192},0, {6524, -1616},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{-368, 13, -182},0, {8572, -1910},{0x0, 0xA8, 0xA5, 0xFF}}},
	{{{542, 28, -192},0, {6524, -1616},{0x0, 0xCC, 0x8C, 0xFF}}},
	{{{542, 13, -182},0, {6524, -1910},{0x0, 0xA8, 0xA5, 0xFF}}},
	{{{-368, 13, -182},0, {8572, -1910},{0x0, 0xA8, 0xA5, 0xFF}}},
	{{{542, 2, -167},0, {6524, -2088},{0x0, 0x99, 0xB6, 0xFF}}},
	{{{-398, 2, -167},0, {8572, -2088},{0x0, 0x99, 0xB6, 0xFF}}},
	{{{-398, 2, 173},0, {8664, 7460},{0x0, 0x85, 0x1F, 0xFF}}},
	{{{542, -4, 149},0, {6620, 7311},{0x0, 0x82, 0x10, 0xFF}}},
	{{{542, 2, 173},0, {6620, 7495},{0x0, 0x85, 0x1F, 0xFF}}},
	{{{-414, -4, 149},0, {8668, 7311},{0x0, 0x82, 0xC, 0xFF}}},
	{{{542, -4, 3},0, {6620, 6126},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-414, -4, 3},0, {8668, 6126},{0x0, 0x81, 0x0, 0xFF}}},
	{{{409, 205, -188},0, {16478, -656},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{542, 205, -134},0, {15798, -339},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{542, 205, -188},0, {16478, -339},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{382, 205, -164},0, {16176, -1104},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{400, 205, -188},0, {16478, -1064},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{382, 205, -164},0, {16176, -1104},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{542, 205, 3},0, {14096, -339},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{542, 205, -134},0, {15798, -339},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{392, 205, 169},0, {12023, -827},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{380, 205, 194},0, {11715, -1022},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-289, 205, 177},0, {11926, -1546},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-414, 205, 3},0, {14321, -1488},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-414, 205, -188},0, {16478, -1437},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{360, 205, -188},0, {16478, -1148},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-327, 205, 194},0, {11715, -1563},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-414, 205, 194},0, {11715, -2313},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-228, 205, 194},0, {11715, -1508},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{536, 205, 75},0, {13189, -354},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{406, 205, 194},0, {11715, -793},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{542, 205, 194},0, {11715, -339},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-414, 53, -198},0, {7418, 339},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, -4, -143},0, {7036, 742},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 101, 3},0, {6028, 4},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, -4, 3},0, {6028, 742},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, -4, 149},0, {5019, 742},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 53, 204},0, {4638, 339},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 179, 204},0, {4638, -552},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 195, 204},0, {4638, -665},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 205, 194},0, {4708, -733},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 205, 3},0, {6028, -733},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 205, -188},0, {7348, -733},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 195, -198},0, {7418, -665},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-414, 177, -198},0, {7418, -538},{0x81, 0x0, 0x0, 0xFF}}},
	{{{435, 195, -198},0, {19511, 2413},{0xCC, 0x4D, 0xAA, 0xFF}}},
	{{{417, 178, -198},0, {19631, 2507},{0x5, 0x3A, 0x8F, 0xFF}}},
	{{{417, 191, -192},0, {19613, 2411},{0x13, 0x43, 0x96, 0xFF}}},
	{{{417, 191, -192},0, {19613, 2411},{0x13, 0x43, 0x96, 0xFF}}},
	{{{417, 178, -198},0, {19631, 2507},{0x5, 0x3A, 0x8F, 0xFF}}},
	{{{406, 195, -198},0, {19703, 2410},{0x40, 0x3F, 0xA7, 0xFF}}},
	{{{422, 201, -183},0, {19602, 2300},{0xFC, 0x71, 0xC6, 0xFF}}},
	{{{406, 205, -188},0, {19701, 2298},{0x2F, 0x62, 0xBE, 0xFF}}},
	{{{422, 205, -164},0, {19595, 2160},{0x0, 0x7C, 0xE6, 0xFF}}},
	{{{435, 205, -188},0, {19509, 2301},{0xCC, 0x61, 0xC1, 0xFF}}},
	{{{435, 195, -198},0, {19511, 2413},{0xCC, 0x4D, 0xAA, 0xFF}}},
	{{{429, 192, 200},0, {19614, 2022},{0x6, 0x42, 0x6C, 0xFF}}},
	{{{428, 179, 204},0, {19605, 2085},{0x4, 0x27, 0x79, 0xFF}}},
	{{{441, 195, 204},0, {19720, 2025},{0xCC, 0x48, 0x5B, 0xFF}}},
	{{{420, 195, 204},0, {19532, 2020},{0x3F, 0x40, 0x59, 0xFF}}},
	{{{420, 205, 194},0, {19544, 1953},{0x3B, 0x60, 0x3B, 0xFF}}},
	{{{430, 202, 190},0, {19630, 1956},{0x3, 0x74, 0x34, 0xFF}}},
	{{{441, 205, 194},0, {19730, 1958},{0xCD, 0x63, 0x3D, 0xFF}}},
	{{{429, 205, 169},0, {19650, 1887},{0x1, 0x7D, 0x14, 0xFF}}},
	{{{-272, 191, 201},0, {19625, 2824},{0xFE, 0x41, 0x6D, 0xFF}}},
	{{{-271, 179, 204},0, {19614, 2976},{0xFF, 0x23, 0x7A, 0xFF}}},
	{{{-224, 195, 204},0, {19697, 2832},{0xF1, 0x51, 0x60, 0xFF}}},
	{{{-328, 195, 204},0, {19527, 2813},{0xD, 0x56, 0x5C, 0xFF}}},
	{{{-327, 205, 194},0, {19548, 2636},{0xD, 0x64, 0x4D, 0xFF}}},
	{{{-278, 200, 190},0, {19634, 2646},{0xFF, 0x6C, 0x43, 0xFF}}},
	{{{-228, 205, 194},0, {19710, 2654},{0xF1, 0x5C, 0x56, 0xFF}}},
	{{{-289, 205, 177},0, {19616, 2499},{0x6, 0x79, 0x25, 0xFF}}},
};

Gfx Slidespace_skinned_mesh_tri_0[] = {
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(7, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 13, 12, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 31, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(5, 12, 3, 0),
	gsSP1Triangle(13, 3, 12, 0),
	gsSP1Triangle(3, 13, 14, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 6, 9, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(9, 11, 7, 0),
	gsSP1Triangle(11, 12, 7, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 13, 11, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 5, 8, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 11, 14, 0),
	gsSP1Triangle(15, 14, 11, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 78, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(0, 7, 6, 0),
	gsSP1Triangle(7, 0, 8, 0),
	gsSP1Triangle(5, 6, 9, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(4, 5, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 3, 0),
	gsSP1Triangle(1, 3, 12, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 93, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(2, 6, 7, 0),
	gsSP1Triangle(7, 8, 2, 0),
	gsSP1Triangle(9, 2, 8, 0),
	gsSP1Triangle(2, 9, 10, 0),
	gsSP1Triangle(10, 11, 2, 0),
	gsSP1Triangle(12, 2, 11, 0),
	gsSP1Triangle(2, 12, 0, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 109, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 3, 6, 0),
	gsSP1Triangle(0, 3, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(12, 8, 13, 0),
	gsSP1Triangle(13, 8, 14, 0),
	gsSP1Triangle(14, 8, 10, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(15, 12, 13, 0),
	gsSPVertex(Slidespace_skinned_mesh_vtx_0 + 125, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_Slidespace_Plataform_1[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b, 128, Slidespace_Plataform_1_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 508, 508),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 7, 0),
	gsDPSetTileSize(0, 0, 0, 508, 508),
	gsSPSetLights1(Slidespace_Plataform_1_lights),
	gsSPEndDisplayList(),
};


Gfx Slidespace_skinned_mesh[] = {
	gsSPDisplayList(mat_Slidespace_Plataform_1),
	gsSPDisplayList(Slidespace_skinned_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx Slidespace_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};