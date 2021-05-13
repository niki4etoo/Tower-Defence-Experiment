#include "../../include/player/hud.h"

//Setters
void HUD::setID(size_t id){
	this->id = id;
}

void HUD::setName(std::string name){
	this->name = name;
}

void HUD::setMainStatusBar(std::string mainStatusBar){
	this->mainStatusBar = mainStatusBar;
}


//Getters
size_t HUD::getID(){
	return this->id;
}

std::string HUD::getName(){
	return this->name;
}

std::string HUD::getMainStatusBar(){
	return this->mainStatusBar;
}
