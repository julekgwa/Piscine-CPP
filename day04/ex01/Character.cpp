#include "Character.hpp"

Character::Character(void) {
    return;
}

Character::Character(const std::string &name) : _name(name), _ap(40), _weapon(NULL) {
    return;
}

Character::~Character(void) {
    return;
}

Character::Character(Character const &src) : _name(src._name) {
    *this = src;
}

int Character::getAP(void) const {
    return this->_ap;
}

std::string const &Character::getName(void) const {
    return this->_name;
}

AWeapon const *Character::getWeapon(void) const {
    return this->_weapon;
}

void Character::attack(Enemy *target) {
    if (this->_weapon) {
        if (_weapon->getAPCost() < this->_ap) {
            std::cout << _name << " attacks " << target->getType() << " with a " << this->_weapon->getName()
                      << std::endl;
            this->_weapon->attack();
            target->takeDamage(this->_weapon->getDamage());
            if (target->getHP() <= 0) {
                delete target;
            }
            this->_ap = this->_ap - this->_weapon->getAPCost();
        }
    }
}

void Character::arsenal(AWeapon *weapon) {
    this->_weapon = weapon;
    return;
}

void Character::recoverAP() {
    if (this->_ap <= 30) {
        this->_ap = this->_ap + 10;
    } else if (this->_ap > 30 && this->_ap < 40) {
        this->_ap = 40;
    }

    return;
}

Character &Character::operator=(Character const &rhs) {
    if (this != &rhs) {
        *this = rhs;
    }

    return *this;
}

std::ostream &operator<<(std::ostream &os, Character const &rhs) {
    os << rhs.getName() << " has " << rhs.getAP() << " AP and ";
    if (rhs.getWeapon())
        os << "wields a " << rhs.getWeapon()->getName() << std::endl;
    else
        os << "is unarmed" << std::endl;

    return (os);
}
