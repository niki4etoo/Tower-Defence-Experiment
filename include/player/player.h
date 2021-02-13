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
	
	//Health properties
	std::string health_label = "Health";
	size_t health_points = 100;
	float health_factor = 5.0f;
	
public:
	Player(size_t id, std::string first_name, std::string second_name);
	~Player();
	
	//Player Main Setters and Getters
	void set_ID(size_t id);
	size_t get_ID();
	void set_first_name(std::string first_name);
	std::string get_first_name();
	void set_last_name(std::string last_name);
	std::string get_last_name();
	
	//Player health setters and getters
	void set_health_label(std::string health_label);
	std::string get_health_label();
	void set_health_points(size_t health_points);
	size_t get_health_points();
	void set_health_factor(float health_factor);
	float get_health_factor();

};

#endif /* PLAYER_H_ */
