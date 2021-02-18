#include "../include/Grid.h"

/**
 * All components of the grid
 * GRID_WIDTH * GRID_HEIGHT = 4096
 * **/

Grid::Grid() {
	// Generate random numbers between 0 and 4 and fill the grid
	for (int i = 0; i < GRID_WIDTH; i++) {
		for (int j = 0; j < GRID_HEIGHT; j++) {
			grid[i][j] = rand() % 4;
		}
	}

	std::ofstream grid_file;
	grid_file.open("grid.dat", std::ofstream::out);

	if (grid_file.is_open()) {
		for (int i = 0; i < GRID_WIDTH; i++) {
			for (int j = 0; j < GRID_HEIGHT; j++) {
				grid_file << grid[i][j] << " ";
			}
			grid_file << std::endl;
		}
	}

	grid_file.close();
}
