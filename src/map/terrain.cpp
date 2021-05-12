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
void Terrain::setType(size_t type){
	this->type = type;
}

void Terrain::setTileSize(size_t width, size_t height){
	this->tileWidth = width;
	this->tileHeight = height;
}

void Terrain::setBorderType(size_t type){
	this->borderType = type;
}

void Terrain::setBorderSize(size_t width, size_t height){
	this->borderWidth = width;
	this->borderHeight= height;
}

//Getters
size_t Terrain::getType(){
	return this->type;
}

size_t Terrain::getTileWidth(){
	return this->tileWidth;
}

size_t Terrain::getTileHeight(){
	return this->tileHeight;
}

size_t Terrain::getBorderType(){
	return this->borderType;
}

size_t Terrain::getBorderWidth(){
	return this->borderWidth;
}

size_t Terrain::getBorderHeight(){
	return this->borderHeight;
}
