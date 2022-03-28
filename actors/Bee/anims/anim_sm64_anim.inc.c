static const s16 Bee_anim_sm64_anim_values[] = {
	0x0000, 0x0059, 0x0000, 0xFFFF, 0x3FFF, 0xFFFF, 0x05ED, 0xFC75, 0x3FFF, 
	0xF943, 0x0202, 0x0201, 0x0200, 0x01FE, 0x01FD, 0xFFB4, 0x0000, 0x0000, 
	0xC000, 0xF605, 0xF5F6, 0xF5D1, 0xF5A4, 0xF57F, 0xF56F, 0xFE06, 0xFCE5, 
	0xFA34, 0xF6FE, 0xF44D, 0xF32C, 0x4150, 0x417E, 0x41EA, 0x426B, 0x42D8, 
	0x4305, 0x0000, 0x0000, 0xC000, 0xF97F, 0xF96E, 0xF944, 0xF913, 0xF8EA, 
	0xF8D8, 0x0755, 0x0853, 0x0AAF, 0x0D80, 0x0FDC, 0x10D9, 0x3E20, 0x3DF6, 
	0x3D91, 0x3D18, 0x3CB3, 0x3C88, 
};

static const u16 Bee_anim_sm64_anim_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007, 0x0001, 0x0008, 
	0x0001, 0x0009, 0x0005, 0x000A, 0x0001, 0x000F, 0x0001, 0x0010, 0x0001, 
	0x0011, 0x0001, 0x0012, 0x0006, 0x0013, 0x0006, 0x0019, 0x0006, 0x001F, 
	0x0001, 0x0025, 0x0001, 0x0026, 0x0001, 0x0027, 0x0006, 0x0028, 0x0006, 
	0x002E, 0x0006, 0x0034, 
};

static const struct Animation Bee_anim_sm64_anim = {
	0,
	0,
	0,
	1,
	5,
	ANIMINDEX_NUMPARTS(Bee_anim_sm64_anim_indices),
	Bee_anim_sm64_anim_values,
	Bee_anim_sm64_anim_indices,
	0,
};

