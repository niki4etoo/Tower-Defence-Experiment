#ifndef TERRAIN_H_
#define TERRAIN_H_

#include <cstddef>
#include <iostream>

class Terrain {
	size_t type;
	size_t tileWidth;
	size_t tileHeight;
	size_t tilePosX;
	size_t tilePosY;
	
	size_t borderType;
	size_t borderWidth;
	size_t borderHeight;
public:
	Terrain(size_t type);
	~Terrain(){};
	
	//Setters
	void setType(size_t type);
	void setTileSize(size_t width, size_t height);
	void setBorderType(size_t type);
	void setBorderSize(size_t width, size_t height);
	
	//Getters
	size_t getType();
	size_t getTileWidth();
	size_t getTileHeight();
	size_t getBorderType();
	size_t getBorderWidth();
	size_t getBorderHeight();
	
	//Types of terrains
	void grass();
	void rock();
	void dessert();
	void winter();
	void spring();
	void autumn();
	
};

#endif
