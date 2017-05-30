//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_ENEMY_HPP
#define PISCINE_CPP_ENEMY_HPP

#include <iostream>

class Enemy {
public:

    Enemy(void);

    Enemy(int hp, std::string const &type);

    virtual ~Enemy() = 0;

    Enemy(Enemy const &src);

    Enemy &operator=(Enemy const &rhs);

    virtual void takeDamage(int amount);

    int getHP(void) const;

    std::string const &getType(void) const;


protected:
    int _hp;
    std::string _type;
};

#endif
