#include "Enemy.hpp"

Enemy::Enemy(void) {
    return;
}

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type) {
    return;
}

Enemy::~Enemy(void) {
    return;
}

Enemy::Enemy(Enemy const &src) {
    *this = src;
}

int Enemy::getHP(void) const {
    return this->_hp;
}

std::string const &Enemy::getType(void) const {
    return this->_type;
}

void Enemy::takeDamage(int damage) {
    if (damage > 0) {
        this->_hp = this->_hp - damage;
    }

    return;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
    _type = rhs._type;
    _hp = rhs._hp;
    return *this;
}
