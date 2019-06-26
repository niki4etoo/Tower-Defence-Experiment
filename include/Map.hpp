#pragma once

class Map {
private:
  // Position of every element on the map

  // Position of the towers
  float tower1_init_out_pos_x;
  float tower1_init_out_pos_y;
  float tower2_init_out_pos_x;
  float tower2_init_out_pos_y;

  float tower1_init_in_pos_x;
  float tower1_init_in_pos_y;
  float tower2_init_in_pos_x;
  float tower2_init_in_pos_y;

  // Sizes of the towers
  float tower1_init_in_width;
  float tower1_init_in_height;
  float tower1_init_out_width;
  float tower1_init_out_height;

  float tower2_init_in_width;
  float tower2_init_in_height;
  float tower2_init_out_width;
  float tower2_init_out_height;


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

  // Setters for the two towers in the map
  void set_tower1_init_in_pos_x(float x);
  void set_tower2_init_in_pos_x(float x);
  void set_tower1_init_in_pos_y(float y);
  void set_tower2_init_in_pos_y(float y);

  void set_tower1_init_out_pos_x(float x);
  void set_tower2_init_out_pos_x(float x);
  void set_tower1_init_out_pos_y(float y);
  void set_tower2_init_out_pos_y(float y);

  // Getters for the two towers in the map
  float get_tower1_init_in_pos_x();
  float get_tower2_init_in_pos_x();
  float get_tower1_init_in_pos_y();
  float get_tower2_init_in_pos_y();

  float get_tower1_init_out_pos_x();
  float get_tower2_init_out_pos_x();
  float get_tower1_init_out_pos_y();
  float get_tower2_init_out_pos_y();

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
