#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <vector>
#include "Tower.h"
#include "Enemy.h"
#include "Color.h"

class Graphics {
public:
    // Define the colors used in the game
    static const Color RED;
    static const Color GREEN;
    static const Color BLUE;
    static const Color YELLOW;
    static const Color WHITE;
    static const Color BLACK;
    
    Graphics();
    ~Graphics();

    bool init();
    void cleanup();
    void render(const std::vector<Tower>& towers, const std::vector<Enemy>& enemies);

    void drawCircle(int x, int y, int radius, const Color& color);

private:
    // Graphics resources and state
};

#endif // GRAPHICS_H
