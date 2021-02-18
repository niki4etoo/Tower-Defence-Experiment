/*
 * Tower.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../include/Tower.h"

Tower::Tower() : id(0), damage(0), health(0), name("") {
	std::string tower = "A tower is established.";
	std::cout << tower << std::endl;
}

Tower::~Tower() {}

void Tower::setID(size_t id) { this->id = id; }

size_t Tower::getID() { return this->id; }

void Tower::setDamage(unsigned short damage) { this->damage = damage; }

unsigned short Tower::getDamage() { return this->damage; }

void Tower::setHealth(unsigned short health) { this->health = health; }

unsigned short Tower::getHealth() { return this->health; }

void Tower::setName(std::string name) { this->name = name; }

std::string Tower::getName() { return this->name; }
