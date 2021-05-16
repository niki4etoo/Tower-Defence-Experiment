#ifndef MAIN_MENU_H_
#define MAIN_MENU_H_

#include <cstddef>
#include <string>


//To do ( Button class )
class Button {
public:
	Button(){};
	~Button(){};
};

class MainMenu {
	//Buttons
	Button start;
	Button load;
	Button settings;
	Button quit;	
	
	//Labels
	std::string start_lbl = "New Game";
	std::string load_lbl = "Load Game";
	std::string settings_lbl = "Settings";
	std::string quit_lbl = "Quit";
	
	//Sizes and Positions
	size_t btn_width = 70;
	size_t btn_height = 25;
	size_t btn_padding = 5;
	
	//To do ( Positions of the buttons )
public:
	
	//Setters
	void setStartButton(Button start, size_t btn_width, size_t btn_height);
	void setLoadButton(Button load, size_t btn_width, size_t btn_height);
	void setSettingsButton(Button settings, size_t btn_width, size_t btn_height);
	void setQuitButton(Button quit, size_t btn_width, size_t btn_height);
	
	//Getters
	Button getStartButton();
	Button getLoadButton();
	Button getSettingsButton();
	Button getQuitButton();
};

#endif
