/*
 * Player.h
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

// Headers needed for the player object
#include "Inventory.h"
#include "Coins.h"
#include "Towers.h"
#include "Heroes.h"

class Player {
public:
	Player();
	virtual ~Player();

protected:
	unsigned int id;
	std::string name;
	Inventory inventory;
	Coins coins;
	Towers towers;
	Heroes heroes;
};

#endif /* PLAYER_H_ */
