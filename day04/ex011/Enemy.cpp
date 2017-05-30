//
// Created by julekgwa on 2017/05/29.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {

}

int Enemy::getHP() const {
    return this->_hp;
}

void Enemy::takeDamage(int damage) {
    if (this->_hp && damage > 0)
        this->_hp -= damage;
}

std::string Enemy::getType() const {
    return this->_type;
}