#include "../../include/enemy/enemy.h"

Enemy::Enemy(int id, char type, std::string name) : id(0), type(' '), name("")
{
	
}

Enemy::~Enemy()
{
	
}

void Enemy::set_id(int id)
{
	this->id = id;
}

void Enemy::set_type(char type)
{
	this->type = type;
}

void Enemy::set_name(std::string name)
{
	this->name = name;
}

void Enemy::set_health(unsigned short health)
{
	this->health = health;
}

void Enemy::set_damage(unsigned short damage)
{
	this->damage = damage;
}

void Enemy::set_speed(unsigned short speed)
{
	this->speed = speed;
}

void Enemy::set_experience(unsigned short experience)
{
	this->experience = experience;
}

int Enemy::get_id()
{
	return this->id;
}

char Enemy::get_type()
{
	return this->type;
}

std::string Enemy::get_name()
{
	return this->name;
}

unsigned short Enemy::get_health()
{
	return this->health;
}

unsigned short Enemy::get_damage()
{
	return this->damage;
}

unsigned short Enemy::get_speed()
{
	return this->speed;
}

unsigned short Enemy::get_experience()
{
	return this->experience;
}
