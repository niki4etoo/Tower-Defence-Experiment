#pragma once

#include <vector>
#include "Enemy.h"

class Enemy;

class Tower {
public:
    Tower();
    ~Tower();

    void update();
    void render();

    bool canAttack();
    void attack(Enemy* enemy);

    // Setters and getters
    void setPosition(float x, float y);
    float getX() const;
    float getY() const;
    void setRange(float range);
    float getRange() const;
    void setDamage(float damage);
    float getDamage() const;

private:
    float m_x, m_y;         // Position
    float m_range;          // Attack range
    float m_damage;         // Attack damage
    float m_attackCooldown; // Time until next attack
    bool m_attacking;       // Whether the tower is currently attacking an enemy
    Enemy* m_target;        // Enemy currently being attacked
    std::vector<Enemy*> m_enemiesInRange; // Enemies within attack range
};
