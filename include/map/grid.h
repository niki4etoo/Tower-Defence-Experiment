#ifndef _GRID_H_
#define _GRID_H_

#define GRID_WIDTH 64
#define GRID_HEIGHT 64

#include <cstdlib>
#include <iostream>
#include <fstream>

class Grid {
	short grid[GRID_WIDTH][GRID_HEIGHT];
public:
  Grid();
  ~Grid();
};

#endif //_GRID_H_
