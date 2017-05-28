#ifndef __WEAPON_HPP_INCLUDED__
#define __WEAPON_HPP_INCLUDED__

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string val);

    void setType(std::string val);

    std::string const getType(void);
};

#endif
