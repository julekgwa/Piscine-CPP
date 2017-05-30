//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_SUPERMUTANT_HPP
#define PISCINE_CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:

    SuperMutant(void);
    ~SuperMutant(void);
    SuperMutant(SuperMutant const & src);
    SuperMutant     &operator=(SuperMutant const & rhs);

    virtual void    takeDamage(int amount);
};

#endif
