#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& mainWeap){
    this->name = name;
    wep = &mainWeap;
}
HumanA::HumanA(std::string name){
    this->name = name;
}
void    HumanA::setWeapon(Weapon& val){
    wep = &val;
}
void    HumanA::attack(){
    std::cout << this->name << " attacks with his " << wep->getType() << std::endl;
}
