#ifndef WAVE_H_
#define WAVE_H_

#include <cstddef>
#include <iostream>

class Wave {
	size_t type;
	float speedFactor;
	float damageFactor;
	float shieldFactor;
	float countFactor;
	
	float waveMultiplier;
public:
	Wave();
	~Wave(){};
	
	//Setters
	void setType(size_t type);
	void setSpeedFactor(float speedFactor);
	void setDamageFactor(float damageFactor);
	void setShieldFactor(float shieldFactor);
	void setCountFactor(size_t countFactor);
	void setWaveMultiplier(float waveMultiplier);
	
	//Getters
	size_t getType();
	float getSpeedFactor();
	float getDamageFactor();
	float getShieldFactor();
	float getCountFactor();
	float getWaveMultiplier();
	
	//Additional methods
	float factorSum();
};

#endif
