#include "../../include/ui/inventory.h"

Inventory::Inventory(){
	//To do
}

//Setters
void Inventory::setID(size_t id){
	this->id = id;
}

void Inventory::setNumberOfItems(size_t numberOfItems){
	this->numberOfItems = numberOfItems;
}

//Getters
size_t Inventory::getID(){
	return this->id;
}

size_t Inventory::getNumberOfItems(){
	return this->numberOfItems;
}
