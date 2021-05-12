#include "../../include/map/map.h"

void Map::loadMap(Terrain *terrain){
	std::cout << "Terrain: " << std::endl;
	terrain->setType(1);
	std::cout << terrain->getType() << std::endl;
}

void Map::setMapSize(size_t rows, size_t columns){
	this->rows = rows;
	this->columns = columns;
}

size_t Map::getMapSizeX(){
	return this->rows;
}

size_t Map::getMapSizeY(){
	return this->rows;
}
