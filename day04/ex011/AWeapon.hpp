//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_AWEAPON_HPP
#define PISCINE_CPP_AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
    std::string _name;
    int _apcost;
    int _damage;
    std::string _sound;
public:
    AWeapon(std::string const &name, int apcost, int damage);

    AWeapon(AWeapon const &);

    AWeapon &operator=(AWeapon const &);

    virtual ~AWeapon();

    std::string virtual getName() const;

    int getAPCost() const;

    int getDamage() const;

    std::string getSound(void) const;

    void setSound(std::string sound);

    virtual void attack() const = 0;
};

#endif //PISCINE_CPP_AWEAPON_HPP
