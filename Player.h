#pragma once
#include <string>

using namespace std;

class Player {
private:
  string name;

  // Health points (Remaining lives)
  const short HEALTH = 10;

  // Resources for buying the towers
  const short RESOURCES = 60;
}
