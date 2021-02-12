/*
 * Towers.h
 *
 *  Created on: 6.07.2020 г.
 *      Author: dexter
 */

#ifndef TOWERS_H_
#define TOWERS_H_

#include <cstddef>

#define MAX_COUNT_TOWERS 20

class Towers {
	size_t number_of_towers;
	int towers_positions[2][MAX_COUNT_TOWERS]; // x, y coordination
public:
	Towers();
	~Towers();
	void setTowersCount(size_t number_of_towers);
	size_t getTowersCount();
	void setTowersPositions(int towers_positions[2][MAX_COUNT_TOWERS]);
};

#endif /* TOWERS_H_ */
