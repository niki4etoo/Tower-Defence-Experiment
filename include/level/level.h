#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <string>
#include "wave.h"

class Level {
	std::string name;
	unsigned int current;
	unsigned int type;
	unsigned int difficulty;
	
	Wave wave;
public:
	Level(std::string name, unsigned int current, unsigned int type, unsigned int difficulty) : name("Level0"), current(1), type(1), difficulty(1) {
		this->wave = Wave();
	};
	~Level(){};
	void setCurrent(unsigned int current);
	void setType(unsigned int type);
	void setDifficulty(unsigned int difficulty);
	void setName(std::string name);
	unsigned int getCurrent();
	unsigned int getType();
	unsigned int getDifficulty();
	std::string getName();
};

#endif
