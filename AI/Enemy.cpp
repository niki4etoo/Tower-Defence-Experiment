#include "../include/Enemy.h"

void Enemy::set_id(int id) {
	this->_id = id;
}

void Enemy::set_type(char type){
	this->_type = type;
}

void Enemy::set_name(std::string name){
	this->_name = name;
}

void Enemy::set_health(unsigned short health){
	this->_health = health;
}

void Enemy::set_damage(unsigned short damage){
	this->_damage = damage;
}

void Enemy::set_speed(unsigned short speed){
	this->_speed = speed;
}

void Enemy::set_experience(unsigned short experience){
	this->_experience = experience;
}

int Enemy::get_id(){
	return this->_id;
}

char Enemy::get_type(){
	return this->_type;
}

std::string Enemy::get_name(){
	return this->_name;
}

unsigned short Enemy::get_health(){
	return this->_health;
}

unsigned short Enemy::get_damage(){
	return this->_damage;
}

unsigned short Enemy::get_speed(){
	return this->_speed;
}

unsigned short Enemy::get_experience(){
	return this->_experience;
}
