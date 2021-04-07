#include "../../include/tower/turret.h"

Turret::Turret(size_t id, size_t ammo, float damageFactor, float shieldFactor){
	this->id = id;
	this->ammo = ammo;
	this->damageFactor = damageFactor;
	this->shieldFactor = shieldFactor;
}

//Setters
void Turret::setID(size_t id){
	this->id = id;
}

void Turret::setAmmo(size_t ammo){
	this->ammo = ammo;
}

void Turret::setDamageFactor(float damageFactor){
	this->damageFactor = damageFactor;
}

void Turret::setShieldFactor(float shieldFactor){
	this->shieldFactor = shieldFactor;
}

void Turret::setCountOfTurrets(size_t countOfTurrets){
	this->countOfTurrets = countOfTurrets;
}

void Turret::setWidth(size_t width){
	this->width = width;
}

void Turret::setHeight(size_t height){
	this->height = height;
}

//Getters
size_t Turret::getID(){
	return this->id;
}

size_t Turret::getAmmo(){
	return this->ammo;
}

float Turret::getDamageFactor(){
	return this->damageFactor;
}

float Turret::getShieldFactor(){
	return this->shieldFactor;
}

size_t Turret::getCountOfTurrets(){
	return this->countOfTurrets;
}

size_t Turret::getWidth(){
	return this->width;
}

size_t Turret::getHeight(){
	return this->height;
}
