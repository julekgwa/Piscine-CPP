#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &mainWeap) {
    this->name = name;
    wep = &mainWeap;
}

HumanB::HumanB(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &val) {
    wep = &val;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
