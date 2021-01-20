/*
 * Tower.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../include/Tower.h"

Tower::Tower() : id(0), damage(0), health(0), name("") {
	std::string tower = "A tower is established.";
	std::cout << tower << std::endl;
}

Tower::~Tower() {

}

