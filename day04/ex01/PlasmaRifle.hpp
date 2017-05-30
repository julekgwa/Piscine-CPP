//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_PLASMARIFLE_HPP
#define PISCINE_CPP_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:

    PlasmaRifle(void);
    PlasmaRifle(PlasmaRifle const & src);
    ~PlasmaRifle(void);
    PlasmaRifle & operator=(PlasmaRifle const & rhs);

    void attack(void) const;


private:

    std::string _name;
};

#endif
