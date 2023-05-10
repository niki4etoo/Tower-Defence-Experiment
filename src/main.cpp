#include <iostream>
#include "Game.h"

int main() {
    // Create game object
    Game game;

    // Initialize the game
    if (!game.init()) {
        std::cout << "Error initializing game!" << std::endl;
        return 1;
    }

    // Start the game loop
    game.loop();

    // Clean up resources
    game.cleanup();

    return 0;
}
