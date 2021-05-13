#ifndef HUD_H_
#define HUD_H_

#include <string>
#include <cstddef>

//Heads-up display for Player
class HUD {
	size_t id;
	std::string name;
	std::string mainStatusBar;
public:
	HUD(){};
	~HUD(){};
	
	//To Do
	//Setters
	void setID(size_t id);
	void setName(std::string name);
	void setMainStatusBar(std::string mainStatusBar);
	
	//Getters
	size_t getID();
	std::string getName();
	std::string getMainStatusBar();
};

#endif
