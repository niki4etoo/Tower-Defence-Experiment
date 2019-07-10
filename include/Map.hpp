#pragma once

class Map {
private:
  // Position of every element on the map

  //Paths ( origin and size)
  //Beginning
  float path_begin_x;
  float path_begin_y;

  float path_begin_width;
  float path_begin_height;

  //Middle
  float path_middle_x;
  float path_middle_y;

  float path_middle_width;
  float path_middle_height;

  //End
  float path_end_x;
  float path_end_y;

  float path_end_width;
  float path_end_height;


  //Land
  float land_pos_x;
  float land_pos_y;

  //Menu
  float menu_pos_x;
  float menu_pos_y;

  //Scores
  float scores_pos_x;
  float scores_pos_y;

  //Grass
  float grass_pos_x;
  float grass_pos_y;

public:
  //Getters and Setters

  // Setters for the paths on the map
  void set_path_begin_pos_x(float x);
  void set_path_begin_pos_y(float y);
  void set_path_middle_pos_x(float x);
  void set_path_middle_pos_y(float y);
  void set_path_end_pos_x(float x);
  void set_path_end_pos_y(float y);

  // Getters for the path on the map
  float get_path_begin_pos_x();
  float get_path_begin_pos_y();
  float get_path_middle_pos_x();
  float get_path_middle_pos_y();
  float get_path_end_pos_x();
  float get_path_end_pos_y();

  //Drawing The Elements on the map
  // Drawing the main path
  void drawPath(float pos_x, float pos_y);
  // Drawing the initial position of the towers
  void drawTower(float pos_x, float pos_y);
  // Drawing the initial position of the land
  void drawLand(float pos_x, float pos_y);
  // Drawing the grass on the map
  void drawGrass(float pos_x, float pos_y);
  // Drawing the scores
  void drawScores(float pos_x, float pos_y);
  // Drawing the menu
  void drawMenu(float pos_x, float pos_y);
};
