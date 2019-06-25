#pragma once

class Map {
private:

  // Position of every element on the map
  float tower1_init_out_pos_x;
  float tower1_init_out_pos_y;
  float tower2_init_out_pos_x;
  float tower2_init_out_pos_y;

  float tower1_init_in_pos_x;
  float tower1_init_in_pos_y;
  float tower2_init_in_pos_x;
  float tower2_init_in_pos_y;

  //Path
  float path_pos_x;
  float path_pos_y;

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
  float get_tower1_init_in_pos_x();
  float get_tower2_init_in_pos_x();
  float get_tower1_init_in_pos_y();
  float get_tower2_init_in_pos_y();

  void set_tower1_init_in_pos_x(float x);
  void set_tower2_init_in_pos_x(float x);
  void set_tower1_init_in_pos_y(float y);
  void set_tower2_init_in_pos_y(float y);

  float get_tower1_init_out_pos_x();
  float get_tower2_init_out_pos_x();
  float get_tower1_init_out_pos_y();
  float get_tower2_init_out_pos_y();

  void set_tower1_init_out_pos_x(float x);
  void set_tower2_init_out_pos_x(float x);
  void set_tower1_init_out_pos_y(float y);
  void set_tower2_init_out_pos_y(float y);

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
