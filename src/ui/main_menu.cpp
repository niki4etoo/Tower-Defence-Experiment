#include "../../include/ui/main_menu.h"

//To do ( position x&y of buttons)

//Setters
void MainMenu::setStartButton(Button start, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->start = start;
	this->start.setWidth(btnWidth);
	this->start.setHeight(btnHeight);
	this->start.setPadding(btnPadding);
}

void MainMenu::setLoadButton(Button load, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->load = load;
	this->load.setWidth(btnWidth);
	this->load.setHeight(btnHeight);
	this->load.setPadding(btnPadding);
}

void MainMenu::setSettingsButton(Button settings, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->settings = settings;
	this->settings.setWidth(btnWidth);
	this->settings.setHeight(btnHeight);
	this->settings.setPadding(btnPadding);
}

void MainMenu::setQuitButton(Button quit, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->quit = quit;
	this->quit.setWidth(btnWidth);
	this->quit.setHeight(btnHeight);
	this->quit.setPadding(btnPadding);
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
