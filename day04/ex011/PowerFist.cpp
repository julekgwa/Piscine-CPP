//
// Created by julekgwa on 2017/05/29.
//

#include "PowerFist.hpp"
PowerFist::PowerFist(std::string sound, std::string name, int apcost, int damage) : AWeapon(name, apcost, damage) {
//    AWeapon(name, apcost, damage);
    this->setSound(sound);
}

void PowerFist::attack() const {
    std::cout << this->getSound() << std::endl;
}

std::string PowerFist::getName() const {
    return "Name";
}

std::ostream &operator<<(std::ostream &output, PowerFist &powerFist) {
    output << "{name: " << powerFist.getName() << ", apcost: " << powerFist.getAPCost() << ", damage: " << powerFist.getDamage() << ", sound: " << powerFist.getSound() << "}" << std::endl;
    return output;
}
