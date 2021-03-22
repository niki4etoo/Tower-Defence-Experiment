/*
 * Player.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../../include/player/player.h"

Player::Player(size_t id, std::string firstName, std::string lastName)
    : id(0), firstName(""), lastName("") {}

Player::~Player() {}

// Player Main Setters and Getters
void Player::setID(size_t id) { this->id = id; }

void Player::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Player::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

size_t Player::getID() { return this->id; }

std::string Player::getFirstName() { return this->firstName; }

std::string Player::getLastName() { return this->lastName; }

// Player health setters and getters
void Player::setHealthLabel(std::string healthLabel) {
	this->healthLabel = healthLabel;
}

void Player::setHealthPoints(size_t healthPoints) {
	this->healthPoints = healthPoints;
}

void Player::setHealthFactor(float healthFactor) {
	this->healthFactor = healthFactor;
}

std::string Player::getHealthLabel() { return this->healthLabel; }

size_t Player::getHealthPoints() { return this->healthPoints; }

float Player::getHealthFactor() { return this->healthFactor; }
