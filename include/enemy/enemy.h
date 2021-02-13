#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <string>

class Enemy {
	int id;
	char type;
	std::string name;
	unsigned short health;
	unsigned short damage;
	unsigned short speed;
	unsigned short experience;
public:
	Enemy(int id, char type, std::string name);
	~Enemy();
	void set_id(int id);
	void set_type(char type);
	void set_name(std::string name);
	void set_health(unsigned short health);
	void set_damage(unsigned short damage);
	void set_speed(unsigned short speed);
	void set_experience(unsigned short experience);
	int get_id();
	char get_type();
	std::string get_name();
	unsigned short get_health();
	unsigned short get_damage();
	unsigned short get_speed();
	unsigned short get_experience();
};

#endif
