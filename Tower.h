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

}
