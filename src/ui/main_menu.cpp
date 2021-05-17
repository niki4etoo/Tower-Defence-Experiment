#include "../../include/ui/main_menu.h"

//Setters
void MainMenu::setStartButton(Button start, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->start = start;
	this->btnWidth = btnWidth;
	this->btnHeight = btnHeight;
	this->btnPadding = btnPadding;
}

void MainMenu::setLoadButton(Button load, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->load = load;
	this->btnWidth = btnWidth;
	this->btnHeight = btnHeight;
	this->btnPadding = btnPadding;
}

void MainMenu::setSettingsButton(Button settings, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->settings = settings;
	this->btnWidth = btnWidth;
	this->btnHeight = btnHeight;
	this->btnPadding = btnPadding;
}

void MainMenu::setQuitButton(Button quit, size_t btnWidth, size_t btnHeight, size_t btnPadding){
	this->quit = quit;
	this->btnWidth = btnWidth;
	this->btnHeight = btnHeight;
	this->btnPadding = btnPadding;
}

void MainMenu::setButtonPosition(size_t btnPosX, size_t btnPosY){
	this->btnPosX = btnPosX;
	this->btnPosY = btnPosY;
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

size_t MainMenu::getButtonPosX(){
	return this->btnPosX;
}

size_t MainMenu::getButtonPosY(){
	return this->btnPosY;
}
