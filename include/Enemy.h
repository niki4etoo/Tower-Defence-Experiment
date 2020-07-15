#include <iostream>


class Enemy {
private:
	int _id;
	char _type;
	std::string _name;
	unsigned short _health;
	unsigned short _damage;
	unsigned short _speed;
	unsigned short _experience;

public:
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
