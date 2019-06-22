#pragma once

class Map {
private:
  // Position of every element on the map
  float tower_pos_x;
  float tower_pos_y;

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
