#include "../../include/level/wave.h"

Wave::Wave(){

	std::cout << "A wave has spawned!" << std::endl;

};
//Setters
void Wave::setType(size_t type){
	this->type = type;
}

void Wave::setSpeedFactor(float speedFactor){
	this->speedFactor = speedFactor;
}

void Wave::setDamageFactor(float damageFactor){
	this->damageFactor = damageFactor;
}

void Wave::setShieldFactor(float shieldFactor){
	this->shieldFactor = shieldFactor;
}

void Wave::setCountFactor(size_t countFactor){
	this->countFactor = countFactor;
}


//Getters
size_t Wave::getType(){
	return this->type;
}

float Wave::getSpeedFactor(){
	return this->speedFactor;
}

float Wave::getDamageFactor(){
	return this->damageFactor;
}

float Wave::getShieldFactor(){
	return this->shieldFactor;
}

float Wave::getCountFactor(){
	return this->countFactor;
}
