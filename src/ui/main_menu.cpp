#include "../../include/ui/main_menu.h"

//Setters
void MainMenu::setStartButton(Button start, size_t btn_width, size_t btn_height){
	this->start = start;
	this->btn_width = btn_width;
	this->btn_height = btn_height;
}

void MainMenu::setLoadButton(Button load, size_t btn_width, size_t btn_height){
	this->load = load;
	this->btn_width = btn_width;
	this->btn_height = btn_height;
}

void MainMenu::setSettingsButton(Button settings, size_t btn_width, size_t btn_height){
	this->settings = settings;
	this->btn_width = btn_width;
	this->btn_height = btn_height;
}

void MainMenu::setQuitButton(Button quit, size_t btn_width, size_t btn_height){
	this->quit = quit;
	this->btn_width = btn_width;
	this->btn_height = btn_height;
}

//Getters
Button MainMenu::getStartButton(){
	return this->start;
}

Button MainMenu::getLoadButton(){
	return this->load;
}

Button MainMenu::getSettingsButton(){
	return this->settings;
}

Button MainMenu::getQuitButton(){
	return this->quit;
}
