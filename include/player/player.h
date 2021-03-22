/*
 * Player.h
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player {
	//Main Properties
	size_t id;
	std::string firstName;
	std::string lastName;
	
	//Health properties
	std::string healthLabel = "Health";
	size_t healthPoints = 100;
	float healthFactor = 5.0f;
	
public:
	Player(size_t id, std::string firstName, std::string secondName);
	~Player();
	
	//Setters
	void setID(size_t id);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);

	void setHealthLabel(std::string healthLabel);
	void setHealthPoints(size_t healthPoints);
	void setHealthFactor(float healthFactor);
	

	size_t getID();
	std::string getFirstName();
	std::string getLastName();
	std::string getHealthLabel();
	size_t getHealthPoints();
	float getHealthFactor();
};

#endif /* PLAYER_H_ */
