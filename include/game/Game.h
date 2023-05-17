#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Graphics.h"
#include "Input.h"
#include "Tower.h"
#include "Enemy.h"
#include "Level.h"

class Game {
public:
    Game();
    ~Game();

    bool init();
    void loop();
    void cleanup();

private:
    Graphics graphics_;
    Input input_;
    std::vector<Tower> towers_;
    std::vector<Enemy> enemies_;
    Level level_;
};

#endif // GAME_H
