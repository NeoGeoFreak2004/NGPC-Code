// Exported by NeoTile By Steve Robb
// Graphics by Darek Davis


// current tile set
const unsigned short TileSet[5][8] =
{
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // Tile_0 - blank used for background
	{0x003f, 0x00d5, 0x0355, 0x0355, 0x0365, 0x0369, 0x037e, 0x0fee}, // first frame of sprite animation
	{0xfc00, 0x5700, 0x55c0, 0x5740, 0x55c0, 0x9540, 0xfdc0, 0xb9f0}, 
	{0x35fa, 0x0f5f, 0x3a57, 0x3ad5, 0x0fea, 0x00d5, 0x00d5, 0x0035}, 
	{0xaf5c, 0xf6b0, 0xd6b0, 0x5fc0, 0x6bc0, 0xd7c0, 0xff00, 0xffc0}, 
};

// sprite animation animations
const unsigned short Sprite_Tiles[32][8] = 
{
	{0x003f, 0x00d5, 0x0355, 0x0355, 0x0365, 0x0369, 0x037e, 0x0fee},
	{0xfc00, 0x5700, 0x55c0, 0x5740, 0x55c0, 0x9540, 0xfdc0, 0xb9f0},
	{0x35fa, 0x0f5f, 0x3a57, 0x3ad5, 0x0fea, 0x00d5, 0x00d5, 0x0035},
	{0xaf5c, 0xf6b0, 0xd6b0, 0x5fc0, 0x6bc0, 0xd7c0, 0xff00, 0xffc0},
	{0x003f, 0x00d5, 0x0355, 0x0355, 0x0365, 0x0369, 0x037e, 0x0fee},
	{0xfc00, 0x5700, 0x55c0, 0x5740, 0x55c0, 0x9540, 0xfdc0, 0xb9f0},
	{0x35fa, 0x0e9f, 0x0e97, 0x03f5, 0x03e9, 0x03d7, 0x00ff, 0x03ff},
	{0xaf5c, 0xf5f0, 0xd5ac, 0x57ac, 0xabf0, 0x5700, 0x5700, 0x5c00},
	{0x003f, 0x00d5, 0x0355, 0x0355, 0x03d5, 0x0355, 0x0375, 0x0fd5},
	{0xfc00, 0x5700, 0x55c0, 0x5770, 0x55f0, 0x5570, 0x55c0, 0x55f0},
	{0x3575, 0x0edf, 0x0ed5, 0x03f5, 0x03eb, 0x03d7, 0x00ff, 0x03ff},
	{0x7d5c, 0xd5b0, 0x56ac, 0x57ac, 0xabf0, 0x5700, 0x5700, 0x5f00},
	{0x003f, 0x00d5, 0x0355, 0x0355, 0x03d5, 0x0355, 0x0375, 0x0fd5},
	{0xfc00, 0x5700, 0x55c0, 0x5770, 0x55f0, 0x5570, 0x55c0, 0x55f0},
	{0x357d, 0x0e57, 0x3a95, 0x3ad5, 0x0fea, 0x00d5, 0x00d5, 0x00f5},
	{0x5d5c, 0xf7b0, 0x57b0, 0x5fc0, 0xebc0, 0xd7c0, 0xff00, 0xffc0},
	{0x003f, 0x03d5, 0x0d55, 0x0d55, 0x0d95, 0x03a5, 0x03fe, 0x03ba},
	{0xfc00, 0x5f00, 0x55c0, 0x5570, 0x55c0, 0x5570, 0x55c0, 0x5f00},
	{0x03a9, 0x00f7, 0x00d5, 0x00d7, 0x00d5, 0x003e, 0x000d, 0x0035},
	{0x75c0, 0xdfc0, 0xf5c0, 0xa5c0, 0xa7c0, 0xff00, 0x5c00, 0x5c00},
	{0x0000, 0x003f, 0x03d5, 0x0d55, 0x0d55, 0x0d95, 0x03a5, 0x03fe},
	{0x0000, 0xfc00, 0x5f00, 0x55c0, 0x5570, 0x55c0, 0x5570, 0x55c0},
	{0x03ba, 0x03a9, 0x00ff, 0x00f5, 0x00d7, 0x03e9, 0x0d56, 0x0f5f},
	{0x5f00, 0x75c0, 0xd570, 0x7df0, 0xf6b0, 0x5eb0, 0x6570, 0xf5fc},
	{0x003f, 0x00f5, 0x0355, 0x0d55, 0x0355, 0x0d55, 0x0355, 0x00f5},
	{0xfc00, 0x57c0, 0x5570, 0x5570, 0x5670, 0x5ac0, 0xbfc0, 0xaec0},
	{0x035d, 0x03f7, 0x035f, 0x035a, 0x03da, 0x00ff, 0x0035, 0x0035},
	{0x6ac0, 0xdf00, 0x5700, 0xd700, 0x5700, 0xbc00, 0x7000, 0x5c00},
	{0x0000, 0x003f, 0x00f5, 0x0355, 0x0d55, 0x0355, 0x0d55, 0x0355},
	{0x0000, 0xfc00, 0x57c0, 0x5570, 0x5570, 0x5670, 0x5ac0, 0xbfc0},
	{0x00f5, 0x035d, 0x0d57, 0x0f7d, 0x0e9f, 0x0eb5, 0x0d59, 0x3f5f},
	{0xaec0, 0x6ac0, 0xff00, 0x5f00, 0xd700, 0x6bc0, 0x9570, 0xf5f0}
};
