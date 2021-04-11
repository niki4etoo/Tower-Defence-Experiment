#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <cstddef>
#include <string>

class Inventory {
	//Inventory parameters
	size_t id;
	size_t numberOfItems;
	
	//Towers
	size_t numberOfTowers;
	
	size_t towerType;
	std::string towerName;
	size_t towerDamage;
	size_t towerRange;
	size_t towerShield;
	// to do
public:
	Inventory();
	~Inventory(){};
	
	//Setters
	void setID(size_t id);
	void setNumberOfItems(size_t numberOfItems);
	
	void setNumberOfTowers(size_t numberOfTowers);
	
	void setTowerType(size_t towerType);
	void setTowerName(std::string towerName);
	void setTowerDamage(size_t towerDamage);
	void setTowerRange(size_t towerRange);
	void setTowerShield(size_t towerShield);
	
	//Getters
	size_t getID();
	size_t getNumberOfItems();
	
	size_t getNumberOfTowers();
	
	size_t getTowerType();
	std::string getTowerName();
	size_t getTowerDamage();
	size_t getTowerRange();
	size_t getTowerShield();
	
};

#endif
