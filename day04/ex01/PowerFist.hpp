//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_POWERFIST_HPP
#define PISCINE_CPP_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
    PowerFist(void);

    ~PowerFist(void);

    PowerFist(PowerFist const &src);

    PowerFist &operator=(PowerFist const &rhs);

    void attack() const;

private:
    std::string _name;
};

#endif
