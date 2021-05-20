#include "../../include/effects/transitions.h"

void Transitions::slide(){

	//To do

}

//Setters
void Transitions::setID(size_t id){
	this->id = id;
}

void Transitions::setType(std::string type){
	this->type = type;
}

void Transitions::setEffectiveness(std::string effectiveness){
	this->effectiveness = effectiveness;
}

//Getters
size_t Transitions::getID(){
	return this->id;
}

std::string Transitions::getType(){
	return this->type;
}

std::string Transitions::getEffectiveness(){
	return this->effectiveness;
}
