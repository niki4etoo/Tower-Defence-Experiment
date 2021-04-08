#include "../../include/map/terrain.h"

Terrain::Terrain(size_t type){
	//to do
}

//Setters
void Terrain::setTerrainType(size_t type){
	this->terrainType = type;
}

void Terrain::setTerrainTileSize(size_t width, size_t height){
	this->terrainTileWidth = width;
	this->terrainTileHeight = height;
}

void Terrain::setBordersType(size_t type){
	this->borderType = type;
}

void Terrain::setBordersTileSize(size_t width, size_t height){
	this->borderTileWidth = width;
	this->borderTileHeight= height;
}

//Getters
size_t Terrain::getTerrainType(){
	return this->terrainType;
}

size_t Terrain::getTerrainTileSizeWidth(){
	return this->terrainTileWidth;
}

size_t Terrain::getTerrainTileSizeHeight(){
	return this->terrainTileHeight;
}

size_t Terrain::getBordersType(){
	return this->borderType;
}

size_t Terrain::getBordersTileSizeWidth(){
	return this->borderTileWidth;
}

size_t Terrain::getBordersTileSizeHeight(){
	return this->borderTileHeight;
}
