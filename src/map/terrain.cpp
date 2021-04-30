#include "../../include/map/terrain.h"

Terrain::Terrain(size_t type){
	switch(type){
		case 0:
			std::cout << "grass" << std::endl;
			break;
		case 1:
			std::cout << "rock" << std::endl;
			break;
		case 2:
			std::cout << "dessert" << std::endl;
			break;
		case 3:
			std::cout << "winter" << std::endl;
			break;
		case 4:
			std::cout << "spring" << std::endl;
			break;
		case 5:
			std::cout << "autumn" << std::endl;
			break;
		default:
			std::cout << "unknown type" << std::endl;
	}		
}

//Types of terrains
void Terrain::grass(){
	//Load grass textures
	
	//Info status
	
	//Deallocate properly
}

void Terrain::rock(){
	//Load rock textures
	
	//Info status
	
	//Deallocate properly
}

void Terrain::dessert(){
	//Load dessert textures
	
	//Info status
	
	//Deallocate properly
}

void Terrain::winter(){
	//Load winter textures
	
	//Info status
	
	//Deallocate properly
}

void Terrain::spring(){
	//Load spring textures
	
	//Info status
	
	//Deallocate properly
}

void Terrain::autumn(){
	//Load autumn textures
	
	//Info status
	
	//Deallocate properly
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
