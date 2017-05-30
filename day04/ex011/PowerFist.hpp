//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_POWERFIST_HPP
#define PISCINE_CPP_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
    PowerFist(std::string, std::string, int, int);

    PowerFist(PowerFist const &);

    PowerFist &operator=(PowerFist const &);

    virtual void attack() const;
    std::string virtual getName() const;

protected:
    PowerFist(void);
};

std::ostream &operator<<(std::ostream &output, PowerFist &powerFist);
#endif //PISCINE_CPP_POWERFIST_HPP
