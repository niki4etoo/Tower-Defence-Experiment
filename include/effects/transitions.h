#ifndef TRANSITIONS_H_
#define TRANSITIONS_H_

#include <cstddef>
#include <string>

class Transitions {
	size_t id;
	std::string type;
	std::string effectiveness;
public:
	Transitions(){};
	~Transitions(){};
	
	void slide(); //To do (Slide effects for game transitions of states)

	//Setters
	void setID(size_t id);
	void setType(std::string type);
	void setEffectiveness(std::string effectiveness);
	
	//Getters
	size_t getID();
	std::string getType();
	std::string getEffectiveness();

};

#endif
