#ifndef INVENTORY_H_
#define INVENTORY_H_

class Inventory {
	size_t id;
	size_t elementsCount = 0;
public:
	Inventory(){};
	~Inventory(){};
	
	//Setters
	void setID(size_t id);
	void setElementsCount(size_t elementsCount);

	//Getters
	size_t getElementsCount();
	size_t getID();
};

#endif
