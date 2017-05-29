//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_AWEAPON_HPP
#define PISCINE_CPP_AWEAPON_HPP


class AWeapon {
private:
    std::string _name;
    int _apcost;
    int _damage;
public:
    AWeapon(std::string const &name, int apcost, int damage);
    AWeapon(AWeapon const &);
    AWeapon &operator=(AWeapon const &);
    virtual ~AWeapon();

    std::string virtual getName() const;

    int getAPCost() const;

    int getDamage() const;

    virtual void attack() const = 0;
};


#endif //PISCINE_CPP_AWEAPON_HPP
