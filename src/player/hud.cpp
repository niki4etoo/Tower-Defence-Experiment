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

//Wave status
void HUD::setWaveCount(size_t waveCount){
	this->waveCount = waveCount;
}

void HUD::setWaveID(size_t waveID){ //To Do (allocate memory for number of waves)
	this->waveID = waveID;
}

void HUD::setWaveName(std::string waveName){
	this->waveName = waveName;
}

void HUD::setWaveType(std::string waveType){
	this->waveType = waveType;
}

//Player status
void HUD::setPlayerID(size_t playerID){
	this->playerID = playerID;
}

void HUD::setHealthBarPlayer(size_t healthBarPlayer){
	this->healthBarPlayer = healthBarPlayer;
}

//Points status
void HUD::setPoints(size_t points){
	this->points = points;
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

//Wave status
size_t HUD::getWaveCount(){
	return this->waveCount;
}

size_t HUD::getWaveID(){ //To Do (allocate memory for number of waves)
	return this->waveID;
}

std::string HUD::getWaveName(){
	return this->waveName;
}

std::string HUD::getWaveType(){
	return this->waveType;
}


//Player status
size_t HUD::getPlayerID(){
	return this->playerID;
}

size_t HUD::getHealthBarPlayer(){
	return this->healthBarPlayer;
}


//Points status
size_t HUD::getPoints(){
	return this->points;
}
