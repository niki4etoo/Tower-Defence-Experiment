#ifndef ENEMY_H
#define ENEMY_H

#include "Graphics.h"

class Graphics;

class Enemy {
public:
    Enemy();
    virtual ~Enemy();

    virtual void update();
    virtual void render(Graphics &graphics);

    void setPosition(float x, float y);
    float getX() const;
    float getY() const;

    void setSpeed(float speed);
    float getSpeed() const;

    void setHealth(float health);
    float getHealth() const;

    void takeDamage(float damage);

    float getDistanceTravelled() const;

protected:
    float m_x;
    float m_y;
    float m_speed;
    float m_health;
    float m_distanceTravelled;
};

#endif //ENEMY_H
