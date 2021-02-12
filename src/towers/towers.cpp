/*
 * Towers.cpp
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#include "../../include/towers.h"

Towers::Towers() {

}

Towers::~Towers() {}

void Towers::setTowersCount(size_t number_of_towers){
	this->number_of_towers = number_of_towers;
}

size_t Towers::getTowersCount(){
	return this->number_of_towers;
}

void Towers::setTowersPositions(int towers_positions[2][MAX_COUNT_TOWERS]){
	//Fill with zeros
	for(int i = 0; i < MAX_COUNT_TOWERS; i++)
	{
		this->towers_positions[0][i] = 0;
		this->towers_positions[1][i] = 0;
	}	
}
