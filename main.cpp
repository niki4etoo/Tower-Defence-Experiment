#include "glfw_app.hpp"

#include "include/Tower.h"

using namespace std;
using namespace glfw_app;


int main(int argc, char **argv)
{
	MyApp app;
  app.start();

	Tower tower;
	return 0;
}
