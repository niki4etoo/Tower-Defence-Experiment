#include "../../include/level/level.h"

void Level::set_current(unsigned int current) { this->current = current; }

void Level::set_type(unsigned int type) { this->type = type; }

void Level::set_difficulty(unsigned int difficulty) {
	this->difficulty = difficulty;
}

void Level::set_name(std::string name) { this->name = name; }

unsigned int Level::get_current() { return this->current; }

unsigned int Level::get_type() { return this->type; }

unsigned int Level::get_difficulty() { return this->difficulty; }

std::string Level::get_name() { return this->name; }
