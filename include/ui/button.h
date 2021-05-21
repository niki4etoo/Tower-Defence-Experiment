#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <cstddef>
#include <string>


class Button {
	size_t id;
	std::string type;
	
	size_t width, height;
	size_t posX, posY;
	size_t border;
	size_t padding;
	size_t textSize;
public:
	Button(){};
	~Button(){};
	
	//Setters
	void setID(size_t id);
	void setType(std::string type);
	void setWidth(size_t width);
	void setHeight(size_t height);
	void setPosX(size_t posX);
	void setPosY(size_t posY);
	void setBorder(size_t border);
	void setPadding(size_t padding);
	void setTextSize(size_t textSize);
	
	//Getters
	size_t getID();
	std::string getType();
	size_t getWidth();
	size_t getHeight();
	size_t getPosX();
	size_t getPosY();
	size_t getBorder();
	size_t getPadding();
	size_t getTextSize();
	
};

#endif
