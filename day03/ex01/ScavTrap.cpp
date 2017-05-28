#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const &obj) : _hit_points(100), _max_hit_points(100), _energy_points(100),
                                          _max_energy_points(100), _level(1), _melee_attack_damage(20),
                                          _ranged_attack_damage(15), _armor_attack_reduction(3) {
    *this = obj;
    std::cout << "SC4V-TP: Halt, "
              << this->getName()
              << "! I have been chosen to stand out here -- far, far away from everyone, to guard the main gate --"
              << std::endl;
}

ScavTrap::ScavTrap(void) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
                           _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_attack_reduction(3) {
    std::cout << "SC4V-TP: Halt, "
              << "[Stranger]"
              << "! I have been chosen to stand out here -- far, far away from everyone, to guard the main gate"
              << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _max_hit_points(100), _energy_points(100),
                                       _max_energy_points(100), _level(1), _melee_attack_damage(20),
                                       _ranged_attack_damage(15), _armor_attack_reduction(3) {
    std::cout << "SC4V-TP: Halt, "
              << this->getName()
              << "! I have been chosen to stand out here -- far, far away from everyone, to guard the main gate"
              << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP: Goodbye "
              << this->getName()
              << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj) {

    this->_name = obj.getName();
    this->_hit_points = obj.getHitPoints();
    this->_max_hit_points = obj.getMaxHitPoints();
    this->_energy_points = obj.getEnergyPoints();
    this->_max_energy_points = obj.getMaxEnergyPoints();
    this->_level = obj.getLevel();
    this->_melee_attack_damage = obj.getMeleeAttackDamage();
    this->_ranged_attack_damage = obj.getRangedAttackDamage();
    this->_armor_attack_reduction = obj.getArmorAttackReduction();

    return *this;
}


int ScavTrap::getHitPoints(void) const {

    return this->_hit_points;

}

int ScavTrap::getMaxHitPoints(void) const {

    return this->_max_hit_points;

}

int ScavTrap::getEnergyPoints(void) const {

    return this->_energy_points;

}

int ScavTrap::getMaxEnergyPoints(void) const {

    return this->_max_energy_points;

}

int ScavTrap::getLevel(void) const {

    return this->_level;

}

int ScavTrap::getMeleeAttackDamage(void) const {

    return this->_melee_attack_damage;

}

int ScavTrap::getRangedAttackDamage(void) const {

    return this->_ranged_attack_damage;

}

int ScavTrap::getArmorAttackReduction() const {

    return this->_armor_attack_reduction;

}

std::string ScavTrap::getName(void) const {

    return this->_name;

}

void ScavTrap::setName(std::string name) {

    this->_name = name;

}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "SC4V-TP: "
              << this->getName()
              << " take this "
              << target
              << ", this is gonna hurt. this has caused a damage of "
              << this->getRangedAttackDamage() << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "SC4V-TP: "
              << this->getName()
              << " stabs "
              << target
              << " there's blood all the floor "
              << " this has caused a damage of " << this->getMeleeAttackDamage() << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

    if ((this->getHitPoints() - ((int) amount - this->getArmorAttackReduction())) < 0) {

        this->_hit_points = 0;

    } else {

        this->_hit_points -= ((int) amount - this->getArmorAttackReduction());

    }

    std::cout
            << "SC4V-TP: "
            << this->getName()
            << " was damaged by "
            << (int) amount - this->getArmorAttackReduction()
            << " points - OUCH!"
            << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {

    if (amount > 0) {

        if ((int) amount + this->getHitPoints() > this->getMaxHitPoints()) {

            this->_hit_points = this->getMaxHitPoints();

        } else {

            this->_hit_points += (int) amount;

        }

    }

}

void ScavTrap::challengeNewcomer(std::string const &target) {
    const std::string challeges[5] = {
            "Kill all enemies",
            "climb the wall without using a ladder",
            "do the flips",
            "smash SC4V-TP head",
            "try not to laugh"
    };

    if ((this->getEnergyPoints() - 25) >= 0) {

        std::cout << "SC4V-TP: Hey " << target << " " << challeges[rand() % 5] << std::endl;
        this->_energy_points -= 25;

    } else {

        std::cout << "SC4V-TP: " << this->getName() << " is out of energy" << std::endl;

    }
}
