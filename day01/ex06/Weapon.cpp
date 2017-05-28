#include "Weapon.hpp"

Weapon::Weapon(std::string val) {
    type = val;
}

void Weapon::setType(std::string val) {
    type = val;
}

std::string const Weapon::getType(void) {
    return (type);
}
