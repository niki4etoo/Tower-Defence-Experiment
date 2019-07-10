#pragma once
#include <string>

using namespace std;

class Menu {
private:
  // Waves - number of waves and remaining Waves
  short waves_number;
  short waves_remaining;

  // Lives Remaining in the game
  short lives_remaining;

  // Strings
  // Start, Pause and Exit labels for the option buttons
  const string start = "Start";
  const string pause = "Pause";
  const string exit = "Exit";

  // Resources in the game
  short resources;

public:
  void loadResources();
  void loadScores();
  void loadRemainingLives();
  void loadWaves();

  //Setters and Getters
  void set_menu_pos(float x, float y);
  void set_menu_size(float width, float height);

  float get_menu_pos_x();
  float get_menu_pos_y();
  float get_menu_width();
  float get_menu_height();
};
