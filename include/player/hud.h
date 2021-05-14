#ifndef HUD_H_
#define HUD_H_

#include <string>
#include <cstddef>

//Heads-up display for Player
class HUD {
	size_t id;
	std::string name;
	std::string mainStatusBar;
	
	//Wave status
	size_t waveCount;
	size_t waveID; //To Do (allocate memory for number of waves)
	std::string waveName;
	std::string waveType;
	
	//Player status
	size_t playerID;
	size_t healthBarPlayer;
	
	//Points status
	size_t points;
	
public:
	HUD(){};
	~HUD(){};
	
	//To Do
	//Setters
	void setID(size_t id);
	void setName(std::string name);
	void setMainStatusBar(std::string mainStatusBar);
	
	//Wave status
	void setWaveCount(size_t waveCount);
	void setWaveID(size_t waveID); //To Do (allocate memory for number of waves)
	void setWaveName(std::string waveName);
	void setWaveType(std::string waveType);
	
	//Player status
	void setPlayerID(size_t playerID);
	void setHealthBarPlayer(size_t healthBarPlayer);
	
	//Points status
	void setPoints(size_t points);
	
	//Getters
	size_t getID();
	std::string getName();
	std::string getMainStatusBar();
	
	//Wave status
	size_t getWaveCount();
	size_t getWaveID(); //To Do (allocate memory for number of waves)
	std::string getWaveName();
	std::string getWaveType();
	
	//Player status
	size_t getPlayerID();
	size_t getHealthBarPlayer();
	
	//Points status
	size_t getPoints();
};

#endif
