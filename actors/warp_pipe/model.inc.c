Lights1 warp_pipe_Base_Pipe_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx warp_pipe_Pipe_Base_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_Pipe_Base_rgba16[] = {
	#include "actors/warp_pipe/Pipe_Base.rgba16.inc.c"
};

Vtx warp_pipe_000_displaylist_mesh_vtx_0[292] = {
	{{{-131, 124, 0},0, {834, 86},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-150, 124, 0},0, {879, 86},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-128, 124, -26},0, {828, 149},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-147, 124, -29},0, {872, 158},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-121, 124, -51},0, {809, 210},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-138, 124, -58},0, {851, 228},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-109, 124, -74},0, {779, 266},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-124, 124, -84},0, {817, 292},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-92, 124, -94},0, {739, 316},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-105, 124, -107},0, {771, 348},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-72, 124, -110},0, {690, 356},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-82, 124, -126},0, {715, 394},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-49, 124, -122},0, {633, 386},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-56, 124, -139},0, {651, 428},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-24, 124, -130},0, {573, 404},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 124, -148},0, {581, 449},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-24, 124, -130},0, {573, 404},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 124, -148},0, {581, 449},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, -132},0, {509, 411},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, -151},0, {509, 456},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-131, -57, 0},0, {46, 988},{0x82, 0x0, 0xF3, 0xFF}}},
	{{{-131, 124, 0},0, {46, 664},{0x82, 0x0, 0xF3, 0xFF}}},
	{{{-128, 124, -26},0, {89, 664},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{-129, -57, -26},0, {89, 988},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{-121, 124, -51},0, {133, 664},{0x8B, 0x0, 0xCF, 0xFF}}},
	{{{-121, -57, -51},0, {133, 988},{0x8B, 0x0, 0xCF, 0xFF}}},
	{{{-109, 124, -74},0, {176, 664},{0x96, 0x0, 0xB9, 0xFF}}},
	{{{-109, -57, -74},0, {176, 988},{0x96, 0x0, 0xB9, 0xFF}}},
	{{{-92, 124, -94},0, {219, 664},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-92, -57, -94},0, {219, 988},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-72, 124, -110},0, {262, 664},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-72, -57, -110},0, {262, 988},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-72, -57, -110},0, {262, 988},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-72, 124, -110},0, {262, 664},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-49, 124, -122},0, {305, 664},{0xCF, 0x0, 0x8B, 0xFF}}},
	{{{-49, -57, -122},0, {305, 988},{0xCF, 0x0, 0x8B, 0xFF}}},
	{{{-24, 124, -130},0, {348, 664},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{-24, -57, -130},0, {348, 988},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{1, 124, -132},0, {391, 664},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1, -57, -132},0, {391, 988},{0x0, 0x0, 0x81, 0xFF}}},
	{{{27, 124, -130},0, {435, 664},{0x19, 0x0, 0x83, 0xFF}}},
	{{{27, -57, -130},0, {435, 988},{0x19, 0x0, 0x83, 0xFF}}},
	{{{52, 124, -122},0, {478, 664},{0x31, 0x0, 0x8B, 0xFF}}},
	{{{52, -57, -122},0, {478, 988},{0x31, 0x0, 0x8B, 0xFF}}},
	{{{75, 124, -110},0, {521, 664},{0x47, 0x0, 0x96, 0xFF}}},
	{{{75, -57, -110},0, {521, 988},{0x47, 0x0, 0x96, 0xFF}}},
	{{{95, -57, -94},0, {564, 988},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{95, 124, -94},0, {564, 664},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{95, -57, -94},0, {564, 988},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{95, 124, -94},0, {564, 664},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{112, 124, -74},0, {607, 664},{0x6A, 0x0, 0xB9, 0xFF}}},
	{{{112, -57, -74},0, {607, 988},{0x6A, 0x0, 0xB9, 0xFF}}},
	{{{124, 124, -51},0, {650, 664},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{124, -57, -51},0, {650, 988},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{131, 124, -26},0, {693, 664},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{131, -57, -26},0, {693, 988},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{134, 124, 0},0, {736, 664},{0x7E, 0x0, 0xF3, 0xFF}}},
	{{{134, -57, 0},0, {736, 988},{0x7E, 0x0, 0xF3, 0xFF}}},
	{{{102, 206, 0},0, {835, 999},{0x82, 0x0, 0xEF, 0xFF}}},
	{{{103, 130, 0},0, {998, 999},{0x82, 0x0, 0xEF, 0xFF}}},
	{{{99, 206, 26},0, {835, 943},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{99, 130, 26},0, {998, 943},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{89, 206, 51},0, {835, 886},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{89, 130, 51},0, {998, 886},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{89, 206, 51},0, {835, 886},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{89, 130, 51},0, {998, 886},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{73, 206, 71},0, {835, 829},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{73, 130, 72},0, {998, 829},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{52, 206, 88},0, {835, 773},{0xC1, 0x0, 0x92, 0xFF}}},
	{{{52, 130, 88},0, {998, 773},{0xC1, 0x0, 0x92, 0xFF}}},
	{{{28, 206, 98},0, {835, 716},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{28, 130, 98},0, {998, 716},{0xDF, 0x0, 0x85, 0xFF}}},
	{{{1, 130, 101},0, {998, 660},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1, 206, 101},0, {835, 660},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-25, 130, 98},0, {998, 603},{0x21, 0x0, 0x85, 0xFF}}},
	{{{-25, 206, 98},0, {835, 603},{0x21, 0x0, 0x85, 0xFF}}},
	{{{-49, 130, 88},0, {998, 547},{0x3F, 0x0, 0x92, 0xFF}}},
	{{{-49, 206, 88},0, {835, 547},{0x3F, 0x0, 0x92, 0xFF}}},
	{{{-70, 130, 72},0, {998, 490},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-70, 206, 71},0, {835, 490},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-70, 130, 72},0, {998, 490},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-86, 130, 51},0, {998, 433},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{-70, 206, 71},0, {835, 490},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-86, 206, 51},0, {835, 433},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{-96, 130, 26},0, {998, 377},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{-96, 206, 26},0, {835, 376},{0x7B, 0x0, 0xDF, 0xFF}}},
	{{{-100, 130, 0},0, {998, 320},{0x7E, 0x0, 0xEF, 0xFF}}},
	{{{-100, 206, 0},0, {835, 320},{0x7E, 0x0, 0xEF, 0xFF}}},
	{{{1, 124, 132},0, {509, 411},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, 151},0, {509, 456},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-28, 124, 148},0, {581, 449},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-24, 124, 130},0, {573, 404},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-56, 124, 139},0, {651, 428},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-49, 124, 122},0, {633, 386},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-82, 124, 126},0, {715, 394},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-72, 124, 110},0, {690, 356},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-72, 124, 110},0, {690, 356},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-82, 124, 126},0, {715, 394},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-105, 124, 107},0, {771, 348},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-92, 124, 94},0, {739, 316},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-124, 124, 84},0, {817, 292},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-109, 124, 74},0, {779, 266},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-138, 124, 58},0, {851, 228},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-121, 124, 51},0, {809, 210},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-147, 124, 29},0, {872, 158},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-128, 124, 26},0, {828, 149},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-150, 124, 0},0, {879, 86},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-131, 124, 0},0, {834, 86},{0x0, 0x81, 0x0, 0xFF}}},
	{{{102, 206, 0},0, {835, 999},{0x82, 0x0, 0x11, 0xFF}}},
	{{{99, 206, -26},0, {835, 943},{0x85, 0x0, 0x21, 0xFF}}},
	{{{103, 130, 0},0, {998, 999},{0x82, 0x0, 0x11, 0xFF}}},
	{{{99, 130, -26},0, {998, 943},{0x85, 0x0, 0x21, 0xFF}}},
	{{{99, 206, -26},0, {835, 943},{0x85, 0x0, 0x21, 0xFF}}},
	{{{89, 206, -51},0, {835, 886},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{99, 130, -26},0, {998, 943},{0x85, 0x0, 0x21, 0xFF}}},
	{{{89, 130, -51},0, {998, 886},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{73, 206, -71},0, {835, 829},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{73, 130, -71},0, {998, 829},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{52, 206, -87},0, {835, 773},{0xC1, 0x0, 0x6E, 0xFF}}},
	{{{52, 130, -88},0, {998, 773},{0xC1, 0x0, 0x6E, 0xFF}}},
	{{{28, 206, -98},0, {835, 716},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{28, 130, -98},0, {998, 716},{0xDF, 0x0, 0x7B, 0xFF}}},
	{{{1, 130, -101},0, {998, 660},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1, 206, -101},0, {835, 660},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-25, 130, -98},0, {998, 603},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{-25, 206, -98},0, {835, 603},{0x21, 0x0, 0x7B, 0xFF}}},
	{{{-49, 130, -88},0, {998, 547},{0x3F, 0x0, 0x6E, 0xFF}}},
	{{{-49, 206, -87},0, {835, 547},{0x3F, 0x0, 0x6E, 0xFF}}},
	{{{-49, 206, -87},0, {835, 547},{0x3F, 0x0, 0x6E, 0xFF}}},
	{{{-70, 130, -71},0, {998, 490},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-49, 130, -88},0, {998, 547},{0x3F, 0x0, 0x6E, 0xFF}}},
	{{{-70, 206, -71},0, {835, 490},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-86, 130, -51},0, {998, 433},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-86, 206, -51},0, {835, 433},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-96, 130, -26},0, {998, 377},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{-96, 206, -26},0, {835, 376},{0x7B, 0x0, 0x21, 0xFF}}},
	{{{-100, 130, 0},0, {998, 320},{0x7E, 0x0, 0x11, 0xFF}}},
	{{{-100, 206, 0},0, {835, 320},{0x7E, 0x0, 0x11, 0xFF}}},
	{{{150, 206, -29},0, {47, 625},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{152, 206, 0},0, {-4, 625},{0x7E, 0x0, 0xF3, 0xFF}}},
	{{{152, 124, 0},0, {-4, 486},{0x7E, 0x0, 0xF3, 0xFF}}},
	{{{150, 124, -29},0, {47, 486},{0x7D, 0x0, 0xE7, 0xFF}}},
	{{{141, 206, -58},0, {97, 625},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{141, 124, -58},0, {97, 486},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{127, 206, -84},0, {147, 625},{0x6A, 0x0, 0xB9, 0xFF}}},
	{{{141, 206, -58},0, {97, 625},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{141, 124, -58},0, {97, 486},{0x75, 0x0, 0xCF, 0xFF}}},
	{{{127, 124, -84},0, {147, 486},{0x6A, 0x0, 0xB9, 0xFF}}},
	{{{108, 206, -107},0, {197, 625},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{108, 124, -107},0, {197, 486},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{85, 206, -126},0, {247, 625},{0x47, 0x0, 0x96, 0xFF}}},
	{{{85, 124, -126},0, {247, 486},{0x47, 0x0, 0x96, 0xFF}}},
	{{{59, 206, -139},0, {298, 625},{0x31, 0x0, 0x8B, 0xFF}}},
	{{{59, 124, -139},0, {298, 486},{0x31, 0x0, 0x8B, 0xFF}}},
	{{{31, 206, -148},0, {348, 625},{0x19, 0x0, 0x83, 0xFF}}},
	{{{31, 124, -148},0, {348, 486},{0x19, 0x0, 0x83, 0xFF}}},
	{{{1, 206, -151},0, {398, 625},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1, 124, -151},0, {398, 486},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-28, 206, -148},0, {448, 625},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{-28, 124, -148},0, {448, 486},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{-28, 206, -148},0, {448, 625},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{-28, 124, -148},0, {448, 486},{0xE7, 0x0, 0x83, 0xFF}}},
	{{{-56, 206, -139},0, {498, 625},{0xCF, 0x0, 0x8B, 0xFF}}},
	{{{-56, 124, -139},0, {498, 486},{0xCF, 0x0, 0x8B, 0xFF}}},
	{{{-82, 206, -126},0, {548, 625},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-82, 124, -126},0, {548, 486},{0xB9, 0x0, 0x96, 0xFF}}},
	{{{-105, 206, -107},0, {599, 625},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-105, 124, -107},0, {599, 486},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-124, 206, -84},0, {649, 625},{0x96, 0x0, 0xB9, 0xFF}}},
	{{{-124, 124, -84},0, {649, 486},{0x96, 0x0, 0xB9, 0xFF}}},
	{{{-138, 206, -58},0, {699, 625},{0x8B, 0x0, 0xCF, 0xFF}}},
	{{{-138, 124, -58},0, {699, 486},{0x8B, 0x0, 0xCF, 0xFF}}},
	{{{-147, 206, -29},0, {749, 625},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{-147, 124, -29},0, {749, 486},{0x83, 0x0, 0xE7, 0xFF}}},
	{{{-150, 206, 0},0, {799, 625},{0x82, 0x0, 0xF3, 0xFF}}},
	{{{-150, 124, 0},0, {799, 486},{0x82, 0x0, 0xF3, 0xFF}}},
	{{{27, 124, -130},0, {307, 406},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, -132},0, {371, 412},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, -151},0, {371, 458},{0x0, 0x81, 0x0, 0xFF}}},
	{{{31, 124, -148},0, {298, 450},{0x0, 0x81, 0x0, 0xFF}}},
	{{{52, 124, -122},0, {246, 388},{0x0, 0x81, 0x0, 0xFF}}},
	{{{59, 124, -139},0, {229, 429},{0x0, 0x81, 0x0, 0xFF}}},
	{{{75, 124, -110},0, {190, 358},{0x0, 0x81, 0x0, 0xFF}}},
	{{{85, 124, -126},0, {165, 395},{0x0, 0x81, 0x0, 0xFF}}},
	{{{95, 124, -94},0, {141, 317},{0x0, 0x81, 0x0, 0xFF}}},
	{{{108, 124, -107},0, {109, 349},{0x0, 0x81, 0x0, 0xFF}}},
	{{{112, 124, -74},0, {101, 268},{0x0, 0x81, 0x0, 0xFF}}},
	{{{127, 124, -84},0, {63, 293},{0x0, 0x81, 0x0, 0xFF}}},
	{{{124, 124, -51},0, {71, 212},{0x0, 0x81, 0x0, 0xFF}}},
	{{{141, 124, -58},0, {29, 229},{0x0, 0x81, 0x0, 0xFF}}},
	{{{131, 124, -26},0, {52, 151},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, 124, -29},0, {8, 160},{0x0, 0x81, 0x0, 0xFF}}},
	{{{131, 124, -26},0, {52, 151},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, 124, -29},0, {8, 160},{0x0, 0x81, 0x0, 0xFF}}},
	{{{134, 124, 0},0, {46, 88},{0x0, 0x81, 0x0, 0xFF}}},
	{{{152, 124, 0},0, {1, 88},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, 206, 29},0, {47, 625},{0x7D, 0x0, 0x19, 0xFF}}},
	{{{152, 124, 0},0, {-4, 486},{0x7E, 0x0, 0xD, 0xFF}}},
	{{{152, 206, 0},0, {-4, 625},{0x7E, 0x0, 0xD, 0xFF}}},
	{{{150, 124, 29},0, {47, 486},{0x7D, 0x0, 0x19, 0xFF}}},
	{{{141, 206, 58},0, {97, 625},{0x75, 0x0, 0x31, 0xFF}}},
	{{{141, 124, 58},0, {97, 486},{0x75, 0x0, 0x31, 0xFF}}},
	{{{127, 206, 84},0, {147, 625},{0x6A, 0x0, 0x47, 0xFF}}},
	{{{127, 124, 84},0, {147, 486},{0x6A, 0x0, 0x47, 0xFF}}},
	{{{108, 206, 107},0, {197, 625},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{108, 124, 107},0, {197, 486},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{85, 206, 126},0, {247, 625},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{85, 124, 126},0, {247, 486},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{59, 206, 139},0, {298, 625},{0x31, 0x0, 0x75, 0xFF}}},
	{{{85, 124, 126},0, {247, 486},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{85, 206, 126},0, {247, 625},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{59, 124, 139},0, {298, 486},{0x31, 0x0, 0x75, 0xFF}}},
	{{{31, 206, 148},0, {348, 625},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{31, 124, 148},0, {348, 486},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{1, 206, 151},0, {398, 625},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1, 124, 151},0, {398, 486},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-28, 206, 148},0, {448, 625},{0xE7, 0x0, 0x7D, 0xFF}}},
	{{{-28, 124, 148},0, {448, 486},{0xE7, 0x0, 0x7D, 0xFF}}},
	{{{-56, 206, 139},0, {498, 625},{0xCF, 0x0, 0x75, 0xFF}}},
	{{{-56, 124, 139},0, {498, 486},{0xCF, 0x0, 0x75, 0xFF}}},
	{{{-82, 206, 126},0, {548, 625},{0xB9, 0x0, 0x6A, 0xFF}}},
	{{{-82, 124, 126},0, {548, 486},{0xB9, 0x0, 0x6A, 0xFF}}},
	{{{-105, 206, 107},0, {599, 625},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-105, 124, 107},0, {599, 486},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-105, 206, 107},0, {599, 625},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-124, 206, 84},0, {649, 625},{0x96, 0x0, 0x47, 0xFF}}},
	{{{-105, 124, 107},0, {599, 486},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-124, 124, 84},0, {649, 486},{0x96, 0x0, 0x47, 0xFF}}},
	{{{-138, 206, 58},0, {699, 625},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-138, 124, 58},0, {699, 486},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-147, 206, 29},0, {749, 625},{0x83, 0x0, 0x19, 0xFF}}},
	{{{-147, 124, 29},0, {749, 486},{0x83, 0x0, 0x19, 0xFF}}},
	{{{-150, 206, 0},0, {799, 625},{0x82, 0x0, 0xD, 0xFF}}},
	{{{-150, 124, 0},0, {799, 486},{0x82, 0x0, 0xD, 0xFF}}},
	{{{27, 124, 130},0, {307, 406},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, 151},0, {371, 458},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1, 124, 132},0, {371, 412},{0x0, 0x81, 0x0, 0xFF}}},
	{{{31, 124, 148},0, {298, 450},{0x0, 0x81, 0x0, 0xFF}}},
	{{{52, 124, 122},0, {246, 388},{0x0, 0x81, 0x0, 0xFF}}},
	{{{59, 124, 139},0, {229, 429},{0x0, 0x81, 0x0, 0xFF}}},
	{{{52, 124, 122},0, {246, 388},{0x0, 0x81, 0x0, 0xFF}}},
	{{{75, 124, 110},0, {190, 358},{0x0, 0x81, 0x0, 0xFF}}},
	{{{59, 124, 139},0, {229, 429},{0x0, 0x81, 0x0, 0xFF}}},
	{{{85, 124, 126},0, {165, 395},{0x0, 0x81, 0x0, 0xFF}}},
	{{{95, 124, 94},0, {141, 317},{0x0, 0x81, 0x0, 0xFF}}},
	{{{108, 124, 107},0, {109, 349},{0x0, 0x81, 0x0, 0xFF}}},
	{{{112, 124, 74},0, {101, 268},{0x0, 0x81, 0x0, 0xFF}}},
	{{{127, 124, 84},0, {63, 293},{0x0, 0x81, 0x0, 0xFF}}},
	{{{124, 124, 51},0, {71, 212},{0x0, 0x81, 0x0, 0xFF}}},
	{{{141, 124, 58},0, {29, 229},{0x0, 0x81, 0x0, 0xFF}}},
	{{{131, 124, 26},0, {52, 151},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, 124, 29},0, {8, 160},{0x0, 0x81, 0x0, 0xFF}}},
	{{{134, 124, 0},0, {46, 88},{0x0, 0x81, 0x0, 0xFF}}},
	{{{152, 124, 0},0, {1, 88},{0x0, 0x81, 0x0, 0xFF}}},
	{{{131, -57, 26},0, {693, 988},{0x7D, 0x0, 0x19, 0xFF}}},
	{{{134, -57, 0},0, {736, 988},{0x7E, 0x0, 0xD, 0xFF}}},
	{{{134, 124, 0},0, {736, 664},{0x7E, 0x0, 0xD, 0xFF}}},
	{{{131, 124, 26},0, {693, 664},{0x7D, 0x0, 0x19, 0xFF}}},
	{{{124, -57, 51},0, {650, 988},{0x75, 0x0, 0x31, 0xFF}}},
	{{{124, 124, 51},0, {650, 664},{0x75, 0x0, 0x31, 0xFF}}},
	{{{112, -57, 74},0, {607, 988},{0x6A, 0x0, 0x47, 0xFF}}},
	{{{112, 124, 74},0, {607, 664},{0x6A, 0x0, 0x47, 0xFF}}},
	{{{95, -57, 94},0, {564, 988},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{95, 124, 94},0, {564, 664},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{75, 124, 110},0, {521, 664},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{75, -57, 110},0, {521, 988},{0x47, 0x0, 0x6A, 0xFF}}},
	{{{52, -57, 122},0, {478, 988},{0x31, 0x0, 0x75, 0xFF}}},
	{{{52, 124, 122},0, {478, 664},{0x31, 0x0, 0x75, 0xFF}}},
	{{{27, -57, 130},0, {435, 988},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{27, 124, 130},0, {435, 664},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{27, -57, 130},0, {435, 988},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{27, 124, 130},0, {435, 664},{0x19, 0x0, 0x7D, 0xFF}}},
	{{{1, -57, 132},0, {391, 988},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1, 124, 132},0, {391, 664},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-24, -57, 130},0, {348, 988},{0xE7, 0x0, 0x7D, 0xFF}}},
	{{{-24, 124, 130},0, {348, 664},{0xE7, 0x0, 0x7D, 0xFF}}},
	{{{-49, -57, 122},0, {305, 988},{0xCF, 0x0, 0x75, 0xFF}}},
	{{{-49, 124, 122},0, {305, 664},{0xCF, 0x0, 0x75, 0xFF}}},
	{{{-72, -57, 110},0, {262, 988},{0xB9, 0x0, 0x6A, 0xFF}}},
	{{{-72, 124, 110},0, {262, 664},{0xB9, 0x0, 0x6A, 0xFF}}},
	{{{-92, -57, 94},0, {219, 988},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-92, 124, 94},0, {219, 664},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-109, -57, 74},0, {176, 988},{0x96, 0x0, 0x47, 0xFF}}},
	{{{-109, 124, 74},0, {176, 664},{0x96, 0x0, 0x47, 0xFF}}},
	{{{-121, -57, 51},0, {133, 988},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-121, 124, 51},0, {133, 664},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-121, -57, 51},0, {133, 988},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-121, 124, 51},0, {133, 664},{0x8B, 0x0, 0x31, 0xFF}}},
	{{{-129, -57, 26},0, {89, 988},{0x83, 0x0, 0x19, 0xFF}}},
	{{{-128, 124, 26},0, {89, 664},{0x83, 0x0, 0x19, 0xFF}}},
	{{{-131, -57, 0},0, {46, 988},{0x82, 0x0, 0xD, 0xFF}}},
	{{{-131, 124, 0},0, {46, 664},{0x82, 0x0, 0xD, 0xFF}}},
};

Gfx warp_pipe_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 128, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(14, 10, 13, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 144, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 160, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 176, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 192, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 5, 4, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 208, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 224, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 11, 10, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 240, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 254, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 270, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_000_displaylist_mesh_vtx_0 + 286, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pipe_001_displaylist_mesh_vtx_0[92] = {
	{{{152, 206, 0},0, {813, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{150, 206, -29},0, {806, 92},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{102, 206, 0},0, {691, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 206, -26},0, {682, 84},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{141, 206, -58},0, {785, 161},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{89, 206, -51},0, {658, 143},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{127, 206, -84},0, {751, 225},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, -71},0, {618, 194},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, 206, -107},0, {705, 281},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{85, 206, -126},0, {649, 327},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{52, 206, -87},0, {567, 234},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{59, 206, -139},0, {585, 361},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, 206, -98},0, {507, 259},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{31, 206, -148},0, {515, 382},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, -101},0, {443, 267},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, -151},0, {443, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, -101},0, {443, 267},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, -151},0, {443, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-28, 206, -148},0, {371, 382},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-25, 206, -98},0, {379, 259},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-56, 206, -139},0, {302, 361},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-49, 206, -87},0, {320, 234},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-82, 206, -126},0, {238, 327},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 206, -71},0, {268, 194},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-105, 206, -107},0, {182, 281},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-124, 206, -84},0, {136, 225},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-86, 206, -51},0, {229, 143},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-138, 206, -58},0, {102, 161},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 206, -26},0, {204, 84},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-147, 206, -29},0, {81, 92},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 206, 0},0, {196, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-150, 206, 0},0, {74, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{102, 206, 0},0, {691, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{150, 206, 29},0, {806, 92},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{152, 206, 0},0, {813, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 206, 26},0, {682, 84},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{141, 206, 58},0, {785, 161},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{89, 206, 51},0, {658, 143},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{127, 206, 84},0, {751, 225},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 206, 71},0, {618, 194},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{108, 206, 107},0, {705, 281},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{85, 206, 126},0, {649, 327},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{52, 206, 88},0, {567, 234},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{59, 206, 139},0, {585, 361},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, 206, 98},0, {507, 259},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{31, 206, 148},0, {515, 382},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, 101},0, {443, 267},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, 151},0, {443, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, 101},0, {443, 267},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-28, 206, 148},0, {371, 382},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 206, 151},0, {443, 389},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-25, 206, 98},0, {379, 259},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-56, 206, 139},0, {302, 361},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-49, 206, 88},0, {320, 234},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-82, 206, 126},0, {238, 327},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 206, 71},0, {268, 194},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-105, 206, 107},0, {182, 281},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-124, 206, 84},0, {136, 225},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-86, 206, 51},0, {229, 143},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-138, 206, 58},0, {102, 161},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 206, 26},0, {204, 84},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-147, 206, 29},0, {81, 92},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 206, 0},0, {196, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-150, 206, 0},0, {74, 20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 130, 0},0, {440, 11},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 130, 0},0, {223, 11},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 130, 26},0, {231, 67},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-86, 130, 51},0, {252, 120},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 130, 72},0, {287, 165},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-49, 130, 88},0, {332, 199},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-25, 130, 98},0, {384, 220},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 130, 101},0, {441, 228},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, 130, 98},0, {496, 220},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{52, 130, 88},0, {548, 198},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 130, 72},0, {593, 164},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{89, 130, 51},0, {627, 119},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 130, 26},0, {648, 67},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{103, 130, 0},0, {655, 11},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{99, 130, -26},0, {648, 67},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{89, 130, -51},0, {627, 119},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{89, 130, -51},0, {627, 119},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{73, 130, -71},0, {593, 164},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 130, 0},0, {440, 11},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{52, 130, -88},0, {548, 198},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{28, 130, -98},0, {496, 220},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1, 130, -101},0, {441, 228},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-25, 130, -98},0, {384, 220},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-49, 130, -88},0, {332, 199},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-70, 130, -71},0, {287, 165},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-86, 130, -51},0, {252, 120},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 130, -26},0, {231, 67},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-100, 130, 0},0, {223, 11},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_001_displaylist_mesh_tri_0[] = {
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(0, 8, 9, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 10, 11, 0),
	gsSP1Triangle(0, 11, 12, 0),
	gsSP1Triangle(0, 12, 13, 0),
	gsSP1Triangle(13, 14, 0, 0),
	gsSP1Triangle(14, 15, 0, 0),
	gsSPVertex(warp_pipe_001_displaylist_mesh_vtx_0 + 80, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(2, 8, 9, 0),
	gsSP1Triangle(2, 9, 10, 0),
	gsSP1Triangle(2, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_Base_Pipe[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, warp_pipe_Pipe_Base_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_Base_Pipe_lights),
	gsSPEndDisplayList(),
};


Gfx warp_pipe_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_Base_Pipe),
	gsSPDisplayList(warp_pipe_000_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_001_displaylist_mesh[] = {
	gsSPDisplayList(mat_warp_pipe_Base_Pipe),
	gsSPDisplayList(warp_pipe_001_displaylist_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx warp_pipe_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
