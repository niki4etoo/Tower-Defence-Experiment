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

void Inventory::setNumberOfTowers(size_t numberOfTowers){
	this->numberOfTowers = numberOfTowers;
}
	
void Inventory::setTowerType(size_t towerType){
	this->towerType = towerType;
}

void Inventory::setTowerName(std::string towerName){
	this->towerName = towerName;
}

void Inventory::setTowerDamage(size_t towerDamage){
	this->towerDamage = towerDamage;
}

void Inventory::setTowerRange(size_t towerRange){
	this->towerRange = towerRange;
}

void Inventory::setTowerShield(size_t towerShield){
	this->towerShield = towerShield;
}

//Getters
size_t Inventory::getID(){
	return this->id;
}

size_t Inventory::getNumberOfItems(){
	return this->numberOfItems;
}

size_t Inventory::getNumberOfTowers(){
	return this->numberOfTowers;
}

size_t Inventory::getTowerType(){
	return this->towerType;
}

std::string Inventory::getTowerName(){
	return this->towerName;
}

size_t Inventory::getTowerDamage(){
	return this->towerDamage;
}

size_t Inventory::getTowerRange(){
	return this->towerRange;
}

size_t Inventory::getTowerShield(){
	return this->towerShield;
}
