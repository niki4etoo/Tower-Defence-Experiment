#include "glfw_app.hpp"

#include "include/Tower.h"
#include "include/Grid.h"


using namespace glfw_game_app;

struct TDE_Game : Game {

  TDE_Game() : Game(800, 600, "Tower Defence Experiment") {}

    virtual void onDraw(){
    }

    virtual void onMouseMove(int x, int y){
      std::cout << x << " " << y << std::endl;
    }
    virtual void onMouseDown(int button, int action){
        
    }
    virtual void onKeyDown(int key, int action){
      std::cout << (unsigned char)key << std::endl;
    }
};

int main(int argc, char **argv)
{
  Tower tower;
  Grid grid;
  TDE_Game game;
  game.start();

  return 0;
}
