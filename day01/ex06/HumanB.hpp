#ifndef __HUMANB_HPP_INCLUDED__
#define __HUMANB_HPP_INCLUDED__

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    Weapon *wep;
    std::string name;
public:
    HumanB(std::string name, Weapon &mainWeap);

    HumanB(std::string name);

    void setWeapon(Weapon &val);

    void attack();
};

#endif
