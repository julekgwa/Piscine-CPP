#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
                           _level(1), _melee_attack_damage(30), _ranged_attack_damage(20), _armor_damage_reduction(5) {

    std::cout
            << "FR4G-TP: "
            << "[XXX]"
            << " start bootup sequence." << std::endl;
    return;

}

FragTrap::FragTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100),
                                       _max_energy_points(100), _level(1), _melee_attack_damage(30),
                                       _ranged_attack_damage(20), _armor_damage_reduction(5) {

    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " start bootup sequence." << std::endl;
    return;

}

FragTrap::FragTrap(FragTrap const &obj) : _hit_points(100), _max_hit_points(100), _energy_points(100),
                                          _max_energy_points(100), _level(1), _melee_attack_damage(30),
                                          _ranged_attack_damage(20), _armor_damage_reduction(5) {

    *this = obj;
    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " start bootup sequence." << std::endl;
    return;
}

FragTrap::~FragTrap(void) {

    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " start shutdown sequence." << std::endl;
    return;
}


FragTrap &FragTrap::operator=(FragTrap const &obj) {

    this->_name = obj.getName();
    this->_hit_points = obj.getHitPoints();
    this->_max_hit_points = obj.getMaxHitPoints();
    this->_energy_points = obj.getEnergyPoints();
    this->_max_energy_points = obj.getMaxEnergyPoints();
    this->_level = obj.getLevel();
    this->_melee_attack_damage = obj.getMeleeAttackDamage();
    this->_ranged_attack_damage = obj.getRangedAttackDamage();
    this->_armor_damage_reduction = obj.getArmorDamageReduction();

    return *this;
}

int FragTrap::getHitPoints(void) const {

    return this->_hit_points;

}

int FragTrap::getMaxHitPoints(void) const {

    return this->_max_hit_points;

}

int FragTrap::getEnergyPoints(void) const {

    return this->_energy_points;

}

int FragTrap::getMaxEnergyPoints(void) const {

    return this->_max_energy_points;

}

int FragTrap::getLevel(void) const {

    return this->_level;

}

int FragTrap::getMeleeAttackDamage(void) const {

    return this->_melee_attack_damage;

}

int FragTrap::getRangedAttackDamage(void) const {

    return this->_ranged_attack_damage;

}

int FragTrap::getArmorDamageReduction(void) const {

    return this->_armor_damage_reduction;

}

std::string FragTrap::getName(void) const {

    return this->_name;

}

void FragTrap::setName(std::string name) {

    this->_name = name;

}

void FragTrap::rangedAttack(std::string const &target) {


    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " attacks "
            << target
            << " at range, causing "
            << this->getRangedAttackDamage()
            << " points of damage - Violence is never the answer, its the question!" << std::endl;

}

void FragTrap::meleeAttack(std::string const &target) {


    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " melee attacks "
            << target
            << " causing "
            << this->getMeleeAttackDamage()
            << " points of damage - Violence is key!" << std::endl;


}

void FragTrap::takeDamage(unsigned int amount) {

    if ((this->getHitPoints() - ((int) amount - this->getArmorDamageReduction())) < 0) {

        this->_hit_points = 0;

    } else {

        this->_hit_points -= ((int) amount - this->getArmorDamageReduction());

    }

    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " took "
            << (int) amount - this->getArmorDamageReduction()
            << " hit points damage - OUCH!"
            << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {

    if (amount > 0) {

        if ((int) amount + this->getHitPoints() > this->getMaxHitPoints()) {

            this->_hit_points = this->getMaxHitPoints();

        } else {

            this->_hit_points += (int) amount;

        }

    }

}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
    const std::string attacks[5] = {
            "starts drinking to fight like the drunken master... it works and poof",
            "uses a spoon on in a deadly motion",
            "does it how they did harambe",
            "farts a fuckload, creating a stun-grenade effect, blinds the target then kicks",
            "pulls out a pistol then pistol whips"
    };

    if ((this->getEnergyPoints() - 25) >= 0) {

        std::cout << "FR4G-TP: " << this->getName() << " " << attacks[rand() % 5] << " on " << target << std::endl;
        this->_energy_points -= 25;

    } else {

        std::cout << "FR4G-TP: " << this->getName() << " is out of energy" << std::endl;

    }
}

