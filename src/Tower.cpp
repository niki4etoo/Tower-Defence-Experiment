#include "../include/Tower.hpp"

//Getters and Setters
//Outside towers
float Tower::get_tower1_init_out_pos_x() {
  return this->tower1_init_out_pos_x;
}

float Tower::get_tower2_init_out_pos_x() {
  return this->tower2_init_out_pos_x;
}

float Tower::get_tower1_init_out_pos_y(){
  return this->tower1_init_out_pos_y;
}

float Tower::get_tower2_init_out_pos_y(){
  return this->tower2_init_out_pos_y;
}

void Tower::set_tower1_init_out_pos_x(float x){
  this->tower1_init_out_pos_x = x;
}

void Tower::set_tower2_init_out_pos_x(float x){
  this->tower2_init_out_pos_x = x;
}

void Tower::set_tower1_init_out_pos_y(float y){
  this->tower1_init_out_pos_y = y;
}

void Tower::set_tower2_init_out_pos_y(float y){
  this->tower2_init_out_pos_y = y;
}

// Inside towers
float Tower::get_tower1_init_in_pos_x() {
  return this->tower1_init_in_pos_x;
}

float Tower::get_tower2_init_in_pos_x() {
  return this->tower2_init_in_pos_x;
}

float Tower::get_tower1_init_in_pos_y(){
  return this->tower1_init_in_pos_y;
}

float Tower::get_tower2_init_in_pos_y(){
  return this->tower2_init_in_pos_y;
}

void Tower::set_tower1_init_in_pos_x(float x){
  this->tower1_init_in_pos_x = x;
}

void Tower::set_tower2_init_in_pos_x(float x){
  this->tower2_init_in_pos_x = x;
}

void Tower::set_tower1_init_in_pos_y(float y){
  this->tower1_init_in_pos_y = y;
}

void Tower::set_tower2_init_in_pos_y(float y){
  this->tower2_init_in_pos_y = y;
}
