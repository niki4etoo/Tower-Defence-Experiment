#include "../../include/enemy/enemy.h"

Enemy::Enemy(int id, char type, std::string name)
    : id(0), type(' '), name("") {}

Enemy::~Enemy() {}

void Enemy::setID(int id) { this->id = id; }

void Enemy::setType(char type) { this->type = type; }

void Enemy::setName(std::string name) { this->name = name; }

void Enemy::setHealth(unsigned short health) { this->health = health; }

void Enemy::setDamage(unsigned short damage) { this->damage = damage; }

void Enemy::setSpeed(unsigned short speed) { this->speed = speed; }

void Enemy::setExperience(unsigned short experience) {
	this->experience = experience;
}

int Enemy::getID() { return this->id; }

char Enemy::getType() { return this->type; }

std::string Enemy::getName() { return this->name; }

unsigned short Enemy::getHealth() { return this->health; }

unsigned short Enemy::getDamage() { return this->damage; }

unsigned short Enemy::getSpeed() { return this->speed; }

unsigned short Enemy::getExperience() { return this->experience; }
