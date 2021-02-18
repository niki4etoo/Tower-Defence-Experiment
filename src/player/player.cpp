/*
 * Player.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../../include/player/player.h"

Player::Player(size_t id, std::string first_name, std::string last_name)
    : id(0), first_name(""), last_name("") {}

Player::~Player() {}

// Player Main Setters and Getters
void Player::set_ID(size_t id) { this->id = id; }

void Player::set_last_name(std::string last_name) {
	this->last_name = last_name;
}

void Player::set_first_name(std::string first_name) {
	this->first_name = first_name;
}

size_t Player::get_ID() { return this->id; }

std::string Player::get_first_name() { return this->first_name; }

std::string Player::get_last_name() { return this->last_name; }

// Player health setters and getters
void Player::set_health_label(std::string health_label) {
	this->health_label = health_label;
}

void Player::set_health_points(size_t health_points) {
	this->health_points = health_points;
}

void Player::set_health_factor(float health_factor) {
	this->health_factor = health_factor;
}

std::string Player::get_health_label() { return this->health_label; }

size_t Player::get_health_points() { return this->health_points; }

float Player::get_health_factor() { return this->health_factor; }
