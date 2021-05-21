#include "../../include/ui/button.h"

//Setters
void Button::setID(size_t id){
	this->id = id;
}

void Button::setType(std::string type){
	this->type = type;
}

void Button::setWidth(size_t width){
	this->width = width;
}

void Button::setHeight(size_t height){
	this->height = height;
}

void Button::setPosX(size_t posX){
	this->posX = posX;
}

void Button::setPosY(size_t posY){
	this->posY = posY;
}

void Button::setBorder(size_t border){
	this->border = border;
}

void Button::setPadding(size_t padding){
	this->padding = padding;
}

void Button::setTextSize(size_t textSize){
	this->textSize = textSize;
}


//Getters
size_t Button::getID(){
	return this->id;
}

std::string Button::getType(){
	return this->type;
}

size_t Button::getWidth(){
	return this->width;
}

size_t Button::getHeight(){
	return this->height;
}

size_t Button::getPosX(){
	return this->posX;
}

size_t Button::getPosY(){
	return this->posY;
}

size_t Button::getBorder(){
	return this->border;
}

size_t Button::getPadding(){
	return this->padding;
}

size_t Button::getTextSize(){
	return this->textSize;
}
