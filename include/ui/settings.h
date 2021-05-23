#ifndef SETTINGS_H_
#define SETTINGS_H_

#include "button.h"

class Settings {
	Button back;
	Button ok;
	
	size_t sliderMusicMinValue;
	size_t sliderMusicMaxValue;
public:
	Settings(){};
	~Settings(){};
	
	//Setters
	void setBackButton(Button back);
	void setOkButton(Button ok);
	void setSliderMusicMinValue(size_t sliderMusicMinValue);
	void setSliderMusicMaxValue(size_t sliderMusicMaxValue);
	
	//Getters
	Button getBackButton();
	Button getOkButton();
	size_t getSliderMusicMinValue();
	size_t getSliderMusicMaxValue();
};

#endif
