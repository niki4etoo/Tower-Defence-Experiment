#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <string>

class Level {
	std::string name;
	unsigned int current;
	unsigned int type;
	unsigned int difficulty;
public:
	Level(std::string name, unsigned int current, unsigned int type, unsigned int difficulty) : name("Level0"), current(1), type(1), difficulty(1) {};
	~Level(){};
	void set_current(unsigned int current);
	void set_type(unsigned int type);
	void set_difficulty(unsigned int difficulty);
	void set_name(std::string name);
	unsigned int get_current();
	unsigned int get_type();
	unsigned int get_difficulty();
	std::string get_name();
};

#endif
