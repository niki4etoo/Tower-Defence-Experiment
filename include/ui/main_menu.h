#ifndef MAIN_MENU_H_
#define MAIN_MENU_H_

#include "button.h"

#include <cstddef>
#include <string>

class MainMenu {
	//Buttons
	Button start;
	Button load;
	Button settings;
	Button quit;	
	
	//Labels
	std::string startLabel = "New Game";
	std::string loadLabel = "Load Game";
	std::string settingsLabel = "Settings";
	std::string quitLabel = "Quit";
	
	//Sizes and Positions
	size_t btnWidth = 70;
	size_t btnHeight = 25;
	size_t btnPadding = 5;
public:
	
	//Setters
	void setStartButton(Button start, size_t btnWidth, size_t btnHeight, size_t btnPadding);
	void setLoadButton(Button load, size_t btnWidth, size_t btnHeight, size_t btnPadding);
	void setSettingsButton(Button settings, size_t btnWidth, size_t btnHeight, size_t btnPadding);
	void setQuitButton(Button quit, size_t btnWidth, size_t btnHeight, size_t btnPadding);
	
	//Getters
	Button getStartButton();
	Button getLoadButton();
	Button getSettingsButton();
	Button getQuitButton();
};

#endif
