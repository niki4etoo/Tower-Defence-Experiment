#include "../../include/player/inventory.h"

void Inventory::setID(size_t id){
	this->id = id;
}

void Inventory::setElementsCount(size_t elementsCount){
	this->elementsCount = elementsCount;
}

size_t Inventory::getID(){
	return this->id;
}

size_t Inventory::getElementsCount(){
	return this->elementsCount;
}
