#include "../../include/ui/settings.h"

//Setters
void Settings::setBackButton(Button back){
	this->back = back;
}

void Settings::setOkButton(Button ok){
	this->ok = ok;
}

void Settings::setSliderMusicMinValue(size_t sliderMusicMinValue){
	this->sliderMusicMinValue = sliderMusicMinValue;
}

void Settings::setSliderMusicMaxValue(size_t sliderMusicMaxValue){
	this->sliderMusicMaxValue = sliderMusicMaxValue;
}

//Getters
Button Settings::getBackButton(){
	return this->back;
}

Button Settings::getOkButton(){
	return this->ok;
}

size_t Settings::getSliderMusicMinValue(){
	return this->sliderMusicMinValue;
}

size_t Settings::getSliderMusicMaxValue(){
	return this->sliderMusicMaxValue;
}
