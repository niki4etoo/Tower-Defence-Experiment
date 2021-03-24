#ifndef MAP_H_
#define MAP_H_

#include <cstddef>

#define ROWS 64
#define COLUMNS 64

class Map {
	size_t id;
	size_t rows;
	size_t columns;
public:
	Map(){};
	~Map(){};
	
	void loadMap();
	
	void setMapSize(size_t rows, size_t columns);
	size_t getMapSizeX();
	size_t getMapSizeY();
};

#endif
