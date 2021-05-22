#include "../../include/ui/main_menu.h"

//Setters
void MainMenu::setStartButton(Button start, size_t btnWidth, size_t btnHeight, size_t btnPadding, size_t posX, size_t posY){
	this->start = start;
	this->start.setWidth(btnWidth);
	this->start.setHeight(btnHeight);
	this->start.setPadding(btnPadding);
	this->start.setPosX(posX);
	this->start.setPosY(posY);
}

void MainMenu::setLoadButton(Button load, size_t btnWidth, size_t btnHeight, size_t btnPadding, size_t posX, size_t posY){
	this->load = load;
	this->load.setWidth(btnWidth);
	this->load.setHeight(btnHeight);
	this->load.setPadding(btnPadding);
	this->load.setPosX(posX);
	this->load.setPosY(posY);
}

void MainMenu::setSettingsButton(Button settings, size_t btnWidth, size_t btnHeight, size_t btnPadding, size_t posX, size_t posY){
	this->settings = settings;
	this->settings.setWidth(btnWidth);
	this->settings.setHeight(btnHeight);
	this->settings.setPadding(btnPadding);
	this->settings.setPosX(posX);
	this->settings.setPosY(posY);
}

void MainMenu::setQuitButton(Button quit, size_t btnWidth, size_t btnHeight, size_t btnPadding, size_t posX, size_t posY){
	this->quit = quit;
	this->quit.setWidth(btnWidth);
	this->quit.setHeight(btnHeight);
	this->quit.setPadding(btnPadding);
	this->quit.setPosX(posX);
	this->quit.setPosY(posY);
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
