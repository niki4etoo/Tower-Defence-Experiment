#include "../../include/level/level.h"

void Level::setCurrent(unsigned int current) { this->current = current; }

void Level::setType(unsigned int type) { this->type = type; }

void Level::setDifficulty(unsigned int difficulty) {
	this->difficulty = difficulty;
}

void Level::setName(std::string name) { this->name = name; }

unsigned int Level::getCurrent() { return this->current; }

unsigned int Level::getType() { return this->type; }

unsigned int Level::getDifficulty() { return this->difficulty; }

std::string Level::getName() { return this->name; }
