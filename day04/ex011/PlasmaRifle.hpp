//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_PLASMARIFLE_HPP
#define PISCINE_CPP_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle(std::string, std::string, int, int);

    PlasmaRifle(PlasmaRifle const &);

    PlasmaRifle &operator=(PlasmaRifle const &);

    virtual void attack() const;
    std::string virtual getName() const;

protected:
    PlasmaRifle(void);
};

std::ostream &operator<<(std::ostream &output, PlasmaRifle &plasmaRifle);
#endif //PISCINE_CPP_PLASMARIFLE_HPP