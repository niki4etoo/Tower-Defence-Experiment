#include <SFML/Graphics.hpp>
#include "../include/Map.hpp"

//Getters and Setters
//Outside towers
float Map::get_tower1_init_out_pos_x() {
  return this->tower1_init_out_pos_x;
}

float Map::get_tower2_init_out_pos_x() {
  return this->tower2_init_out_pos_x;
}

float Map::get_tower1_init_out_pos_y(){
  return this->tower1_init_out_pos_y;
}

float Map::get_tower2_init_out_pos_y(){
  return this->tower2_init_out_pos_y;
}

void Map::set_tower1_init_out_pos_x(float x){
  this->tower1_init_out_pos_x = x;
}

void Map::set_tower2_init_out_pos_x(float x){
  this->tower2_init_out_pos_x = x;
}

void Map::set_tower1_init_out_pos_y(float y){
  this->tower1_init_out_pos_y = y;
}

void Map::set_tower2_init_out_pos_y(float y){
  this->tower2_init_out_pos_y = y;
}

// Inside towers
float Map::get_tower1_init_in_pos_x() {
  return this->tower1_init_in_pos_x;
}

float Map::get_tower2_init_in_pos_x() {
  return this->tower2_init_in_pos_x;
}

float Map::get_tower1_init_in_pos_y(){
  return this->tower1_init_in_pos_y;
}

float Map::get_tower2_init_in_pos_y(){
  return this->tower2_init_in_pos_y;
}

void Map::set_tower1_init_in_pos_x(float x){
  this->tower1_init_in_pos_x = x;
}

void Map::set_tower2_init_in_pos_x(float x){
  this->tower2_init_in_pos_x = x;
}

void Map::set_tower1_init_in_pos_y(float y){
  this->tower1_init_in_pos_y = y;
}

void Map::set_tower2_init_in_pos_y(float y){
  this->tower2_init_in_pos_y = y;
}

// Getters for the two towers in the map
float Map::get_tower1_init_in_pos_x(){
  return this->tower1_init_in_pos_x;
}

float Map::get_tower2_init_in_pos_x(){
  return this->tower2_init_in_pos_x;
}

float Map::get_tower1_init_in_pos_y(){
  return this->tower1_init_in_pos_y;
}

float Map::get_tower2_init_in_pos_y(){
  return this->tower2_init_in_pos_y;
}

float Map::get_tower1_init_out_pos_x(){
  return this->tower1_init_out_pos_x;
}

float Map::get_tower2_init_out_pos_x(){
  return this->tower2_init_out_pos_x;
}

float Map::get_tower1_init_out_pos_y(){
  return this->tower1_init_out_pos_y;
}

float Map::get_tower2_init_out_pos_y(){
  return this->tower2_init_out_pos_y;
}


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
