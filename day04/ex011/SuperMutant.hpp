//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_SUPERMUTANT_HPP
#define PISCINE_CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
    SuperMutant(int, std::string);

    SuperMutant(SuperMutant const &);

    SuperMutant &operator=(SuperMutant const &);

protected:
    SuperMutant(void);
};

std::ostream &operator<<(std::ostream &output, PlasmaRifle &plasmaRifle);

#endif //PISCINE_CPP_SUPERMUTANT_HPP
