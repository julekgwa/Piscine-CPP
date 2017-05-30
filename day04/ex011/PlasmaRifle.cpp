//
// Created by julekgwa on 2017/05/29.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string sound, std::string name, int apcost, int damage) : AWeapon(name, apcost, damage) {
//    AWeapon(name, apcost, damage);
    this->setSound(sound);
}

void PlasmaRifle::attack() const {
    std::cout << this->getSound() << std::endl;
}

std::string PlasmaRifle::getName() const {
    return "Name";
}

std::ostream &operator<<(std::ostream &output, PlasmaRifle &plasmaRifle) {
    output << "{name: " << plasmaRifle.getName() << ", apcost: " << plasmaRifle.getAPCost() << ", damage: " << plasmaRifle.getDamage() << ", sound: " << plasmaRifle.getSound() << "}" << std::endl;
    return output;
}