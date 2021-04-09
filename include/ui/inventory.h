#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <cstddef>

class Inventory {
	size_t id;
	size_t numberOfItems;
	// to do
public:
	Inventory();
	~Inventory(){};
	
	//Setters
	void setID(size_t id);
	void setNumberOfItems(size_t numberOfItems);
	
	//Getters
	size_t getID();
	size_t getNumberOfItems();
	
};

#endif
