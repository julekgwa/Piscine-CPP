//
// Created by julekgwa on 2017/05/29.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const &obj) : _name(obj._name), _apcost(obj._apcost), _damage(obj._damage),
                                       _sound(obj._sound) {

}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon &AWeapon::operator=(AWeapon const &obj) {
    this->_name = obj._name;
    this->_apcost = obj._apcost;
    this->_damage = obj._damage;
    this->_sound = obj._sound;
    return *this;
}

AWeapon::~AWeapon() {

}

int AWeapon::getAPCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}

std::string AWeapon::getSound() const {
    return this->_sound;
}

void AWeapon::setSound(std::string sound) {
    this->_sound = sound;
}

std::string AWeapon::getName() const {
    return this->_name;
}