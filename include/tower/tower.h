/*
 * Tower.h
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#ifndef TOWER_H_
#define TOWER_H_
#include <iostream>
#include <cstddef>
#include <string>

class Tower {
	size_t id;
	unsigned short damage;
	unsigned short health;
	std::string name;
	
	bool isMovable = false;
	bool isStatic = false;
	bool isDynamic = false;
	
	size_t posX, posY;
	size_t width, height;
public:
	Tower();
	~Tower();
	
	//Setters
	void setMovable(bool isMovable);
	void setStatic(bool isStatic);
	void setDynamic(bool isDynamic);
	
	void setID(size_t id);
	void setHealth(unsigned short health);
	void setName(std::string name);
	void setDamage(unsigned short damage);
	void setPosition(size_t posX, size_t posY);
	void setSize(size_t width, size_t height);
	
	//Getters
	
	size_t getID();
	unsigned short getDamage();
	unsigned short getHealth();
	std::string getName();
	size_t getPosX();
	size_t getPosY();
	size_t getWidth();
	size_t getHeight();
	
};

#endif /* TOWER_H_ */
