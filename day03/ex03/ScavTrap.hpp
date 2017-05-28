#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

class ScavTrap : public ClapTrap {

public:
    ScavTrap(void);

    ScavTrap(std::string);

    ScavTrap(ScavTrap const &);

    ScavTrap &operator=(ScavTrap const &);

    ~ScavTrap(void);

    void challengeNewcomer(std::string const &target);
};

#endif
