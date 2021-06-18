/*
 * Tower.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../../include/tower/tower.h"

Tower::Tower() : id(0), damage(0), health(0), name("") {
	std::string tower = "A tower is established.";
	std::cout << tower << std::endl;
}

Tower::~Tower() {}

void Tower::setMovable(bool isMovable){ this->isMovable = isMovable; }
void Tower::setStatic(bool isStatic){ this->isStatic = isStatic; }
void Tower::setDynamic(bool isDynamic){ this->isDynamic = isDynamic; }

void Tower::setHealth(unsigned short health) { this->health = health; }
void Tower::setName(std::string name) { this->name = name; }
void Tower::setDamage(unsigned short damage) { this->damage = damage; }
void Tower::setID(size_t id) { this->id = id; }

void Tower::setPosition(size_t posX, size_t posY){
		this->posX = posX;
		this->posY = posY;
}

void Tower::setSize(size_t width, size_t height){
	this->width = width;
	this->height = height;
}

size_t Tower::getID() { return this->id; }
unsigned short Tower::getDamage() { return this->damage; }
unsigned short Tower::getHealth() { return this->health; }
std::string Tower::getName() { return this->name; }
size_t Tower::getPosX() { return this->posX; }
size_t Tower::getPosY() { return this->posY; }
size_t Tower::getWidth() { return this->width; }
size_t Tower::getHeight() { return this->height; }

