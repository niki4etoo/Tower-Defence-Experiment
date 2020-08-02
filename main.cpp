#include "glfw_app.hpp"

#include "include/Tower.h"
#include "include/Grid.h"

using namespace std;
using namespace glfw_app;

struct MyApp : App {

  MyApp() : App(800, 600, "Tower Defence Experiment") {}

    virtual void onDraw(){
    }

    virtual void onMouseMove(int x, int y){
        cout << x << " " << y << endl;
    }
    virtual void onMouseDown(int button, int action){
        if (action==GLFW_PRESS) cout << "mouse pressed" <<endl;
        if (action==GLFW_RELEASE) cout << "mouse released" <<endl;
    }
    virtual void onKeyDown(int key, int action){
        cout << (unsigned char)key << endl;
    }
};

int main(int argc, char **argv)
{
	Tower tower;

  Grid grid;

	MyApp app;
  app.start();

	return 0;
}
