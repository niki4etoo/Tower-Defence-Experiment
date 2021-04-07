#ifndef TURRET_H
#define TURRET_H

#include <cstddef>

class Turret {
	size_t id;
	size_t ammo;
	float damageFactor;
	float shieldFactor;
	
	size_t countOfTurrets;
	
	size_t width;
	size_t height;
public:
	Turret(size_t id, size_t ammo, float damageFactor, float shieldFactor);
	~Turret();
	
	//Setters
	void setID(size_t id);
	void setAmmo(size_t ammo);
	void setDamageFactor(float damageFactor);
	void setShieldFactor(float shieldFactor);
	
	void setCountOfTurrets(size_t countOfTurrets);
	
	void setWidth(size_t width);
	void setHeight(size_t height);
	//Getters
	size_t getID();
	size_t getAmmo();
	float getDamageFactor();
	float getShieldFactor();
	
	size_t getCountOfTurrets();
	
	size_t getWidth();
	size_t getHeight();
	
};

#endif
