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
	void setID(int id);
	void setType(char type);
	void setName(std::string name);
	void setHealth(unsigned short health);
	void setDamage(unsigned short damage);
	void setSpeed(unsigned short speed);
	void setExperience(unsigned short experience);
	int getID();
	char getType();
	std::string getName();
	unsigned short getHealth();
	unsigned short getDamage();
	unsigned short getSpeed();
	unsigned short getExperience();
};

#endif
