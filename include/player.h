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
	std::string first_name;
	std::string last_name;
	
public:
	Player(size_t id, std::string first_name, std::string second_name);
	~Player();

};

#endif /* PLAYER_H_ */
