/*
 * Tower.h
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#ifndef TOWER_H_
#define TOWER_H_
#include <iostream>
#include <string>

class Tower {
private:
	int id;
	short damage;
	short health;
	std::string name;
public:
	Tower();
	~Tower();
};

#endif /* TOWER_H_ */
