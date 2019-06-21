#pragma once
#include <string>

using namespace std;

class Enemy {
private:
  // Types of enemies
  const string TYPE_SLOW_HEAVY = "Slow, but Heavy";
  const string TYPE_FAST_LIGHTWEIGHT = "Fast, but lightweight";

  // Hitpoints of the enemies
  const short HITPOINTS_START_SLOW_HEAVY = 25;
  const short HITPOINTS_START_FAST_LIGHTWEIGHT = 10;

  // Health of the enemies
  const short HEALTH_START_SLOW_HEAVY = 50;
  const short HEALTH_START_FAST_LIGHTWEIGHT = 25;
}
