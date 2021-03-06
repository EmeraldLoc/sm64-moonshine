void scroll_wf_dl_BackWater_mesh_vtx_0() {
	int i = 0;
	int count = 311;
	int width = 512 * 0x20;
	int height = 512 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_BackWater_mesh_vtx_0);

	deltaX = (int)(5.5 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;

}
void scroll_wf_dl_BackWater_2_mesh_vtx_0() {
	int i = 0;
	int count = 9;
	int width = 250 * 0x20;
	int height = 251 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_BackWater_2_mesh_vtx_0);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_wf() {
	scroll_wf_dl_BackWater_mesh_vtx_0();
	scroll_wf_dl_BackWater_2_mesh_vtx_0();

}
