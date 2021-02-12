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
	size_t id;
	unsigned short damage;
	unsigned short health;
	std::string name;
public:
	Tower();
	~Tower();
	void setID(size_t id);
	size_t getID();
	void setDamage(unsigned short damage);
	unsigned short getDamage();
	void setHealth(unsigned short health);
	unsigned short getHealth();
	void setName(std::string name);
	std::string getName();
};

#endif /* TOWER_H_ */
