#ifndef TERRAIN_H_
#define TERRAIN_H_

#include <cstddef>

class Terrain {
	size_t terrainType;
	size_t terrainTileWidth;
	size_t terrainTileHeight;
	
	size_t borderType;
	size_t borderTileWidth;
	size_t borderTileHeight;
public:
	Terrain(size_t type);
	~Terrain(){};
	
	//Setters
	void setTerrainType(size_t type);
	void setTerrainTileSize(size_t width, size_t height);
	void setBordersType(size_t type);
	void setBordersTileSize(size_t width, size_t height);
	
	//Getters
	size_t getTerrainType();
	size_t getTerrainTileSizeWidth();
	size_t getTerrainTileSizeHeight();
	size_t getBordersType();
	size_t getBordersTileSizeWidth();
	size_t getBordersTileSizeHeight();
};

#endif
