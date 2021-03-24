#include "../../include/map/map.h"

void Map::loadMap(){} //to do

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
