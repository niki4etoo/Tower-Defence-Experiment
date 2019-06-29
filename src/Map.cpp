#include <SFML/Graphics.hpp>
#include "../include/Map.hpp"

// Setters for the paths on the map
void Map::set_path_begin_pos_x(float x){
  this->path_begin_x = x;
}

void Map::set_path_begin_pos_y(float y){
  this->path_begin_y = y;
}

void Map::set_path_middle_pos_x(float x){
  this->path_middle_x = x;
}

void Map::set_path_middle_pos_y(float y){
  this->path_middle_y = y;
}

void Map::set_path_end_pos_x(float x){
  this->path_end_x = x;
}

void Map::set_path_end_pos_y(float y){
  this->path_end_y = y;
}

// Getters for the path on the map
float Map::get_path_begin_pos_x(){
  return this->path_begin_x;
}

float Map::get_path_begin_pos_y(){
  return this->path_begin_y;
}

float Map::get_path_middle_pos_x(){
  return this->path_middle_x;
}

float Map::get_path_middle_pos_y(){
  return this->path_middle_y;
}

float Map::get_path_end_pos_x(){
  return this->path_end_x;
}

float Map::get_path_end_pos_y(){
  return this->path_end_y;
}
