#include <string>

using namespace std;

class Tower {
private:
  // Types of towers
  const string TYPE_SLOW = "Slow shooting Tower";
  const string TYPE_FAST = "Fast shooting Tower";
  const string TYPE_SUPERFAST = "Superfast shooting Tower";

  // Costs of the towers
  const short COST_SLOW = 10;
  const short COST_FAST = 20;
  const short COST_SUPERFAST = 45;

  // Damage of each type of the towers
  const short DAMAGE_SLOW = 15;
  const short DAMAGE_FAST = 10;
  const short DAMAGE_SUPERFAST = 5;

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

public:
  //Drawing part of the towers
  void drawTower(short type);

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

};
