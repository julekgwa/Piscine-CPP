//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_RADSCORPION_HPP
#define PISCINE_CPP_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion :public Enemy
{
public:
    RadScorpion(void);
    ~RadScorpion(void);
    RadScorpion(RadScorpion const & src);
    RadScorpion &operator=(RadScorpion const & rhs);
};

#endif
