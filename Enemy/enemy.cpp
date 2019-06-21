#include "Enemy/enemy.h"

Skyrim::Enemy::Enemy(string name, ushort level, ushort health, ushort damage)
: name(name), level(level == 0 ? 1 : level), health(health * level), damage(damage), MAX_HEALTH(health * level) {}

ushort Skyrim::Enemy::attack() {
    return FrancescoSorge::Basic::random(2, 6) * level;
}

string Skyrim::Enemy::getName() const {
    return name;
}

ushort Skyrim::Enemy::getHealth() const {
    return health;
}

ushort Skyrim::Enemy::getLevel() const {
    return level;
}

bool Skyrim::Enemy::getsAttacked(ushort damage) {
    ushort currentHealth = health;

    if (health - damage <= 0) {
        return true;
    } else {
        health -= damage;
        return false;
    }
}

ushort Skyrim::Enemy::getMaxHealth() const {
    return MAX_HEALTH;
}
