#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hit_points(0), _max_hit_points(0), _energy_points(0), _max_energy_points(0), _level(0),
                           _melee_attack_damage(0), _ranged_attack_damage(0), _armor_damage_reduction(0) {

    std::cout
            << "ClapTrap created" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(0), _max_hit_points(0), _energy_points(0),
                                       _max_energy_points(0), _level(0), _melee_attack_damage(0),
                                       _ranged_attack_damage(0), _armor_damage_reduction(0) {

    std::cout
            << "ClapTrap: "
            << this->getName()
            << " start bootup sequence." << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &obj) : _hit_points(0), _max_hit_points(0), _energy_points(0), _max_energy_points(0),
                                          _level(0), _melee_attack_damage(0), _ranged_attack_damage(0),
                                          _armor_damage_reduction(0) {

    *this = obj;
    std::cout
            << "ClapTrap: "
            << this->getName()
            << " start bootup sequence." << std::endl;
    return;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "ClapTrap destroyed" << std::endl;
    return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {

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

int ClapTrap::getHitPoints(void) const {

    return this->_hit_points;
}

int ClapTrap::getMaxHitPoints(void) const {

    return this->_max_hit_points;
}

int ClapTrap::getEnergyPoints(void) const {

    return this->_energy_points;
}

int ClapTrap::getMaxEnergyPoints(void) const {

    return this->_max_energy_points;
}

int ClapTrap::getLevel(void) const {

    return this->_level;
}

int ClapTrap::getMeleeAttackDamage(void) const {

    return this->_melee_attack_damage;
}

int ClapTrap::getRangedAttackDamage(void) const {

    return this->_ranged_attack_damage;
}

int ClapTrap::getArmorDamageReduction(void) const {

    return this->_armor_damage_reduction;
}

std::string ClapTrap::getName(void) const {

    return this->_name;
}

void ClapTrap::setName(std::string name) {

    this->_name = name;
}

void ClapTrap::setHitPoints(int value) {

    this->_hit_points = value;
}

void ClapTrap::setMaxHitPoints(int value) {

    this->_max_hit_points = value;
}

void ClapTrap::setEnergyPoints(int value) {

    this->_energy_points = value;
}

void ClapTrap::setMaxEnergyPoints(int value) {

    this->_max_energy_points = value;
}

void ClapTrap::setLevel(int value) {

    this->_level = value;
}

void ClapTrap::setMeleeAttackDamage(int value) {

    this->_melee_attack_damage = value;
}

void ClapTrap::setRangedAttackDamage(int value) {

    this->_ranged_attack_damage = value;
}

void ClapTrap::setArmorDamageReduction(int value) {

    this->_armor_damage_reduction = value;
}

void ClapTrap::rangedAttack(std::string const &target) {

    std::cout << "\033[1;31m";
    std::cout
            << "ClapTrap: "
            << this->getName()
            << " attacks "
            << target
            << " at range, causing "
            << this->getRangedAttackDamage()
            << " points of damage - Violence is never the answer, its the question!" << std::endl;
    std::cout << "\033[0m";
}

void ClapTrap::meleeAttack(std::string const &target) {

    std::cout << "\033[1;31m";
    std::cout
            << "ClapTrap: "
            << this->getName()
            << " melee attacks "
            << target
            << " causing "
            << this->getMeleeAttackDamage()
            << " points of damage - Violence is key!" << std::endl;
    std::cout << "\033[0m";
}

void ClapTrap::takeDamage(unsigned int amount) {

    if ((this->getHitPoints() - ((int) amount - this->getArmorDamageReduction())) < 0) {

        this->_hit_points = 0;
    } else {

        this->_hit_points -= ((int) amount - this->getArmorDamageReduction());
    }

    std::cout << "\033[1;31m";
    std::cout
            << "ClapTrap: "
            << this->getName()
            << " took "
            << (int) amount - this->getArmorDamageReduction()
            << " hit points damage"
            << " CURRENT HIT POINTS  "
            << this->getHitPoints()
            << " - OUCH!"
            << std::endl;
    std::cout << "\033[0m";
}

void ClapTrap::beRepaired(unsigned int amount) {

    if ((int) amount + this->getHitPoints() > this->getMaxHitPoints()) {

        this->_hit_points = this->getMaxHitPoints();
    } else {

        this->_hit_points += (int) amount;
    }

    std::cout << "\033[1;32m";
    std::cout
            << "ClapTrap: "
            << this->getName()
            << " got repaired, CURRENT HIT POINTS  "
            << this->getHitPoints()
            << " YASS!"
            << std::endl;
    std::cout << "\033[0m";
}
