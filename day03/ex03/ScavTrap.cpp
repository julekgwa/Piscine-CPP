#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj) {

    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
    *this = obj;
    std::cout << "SC4V-TP: Halt, "
              << this->getName()
              << "! I have been chosen to stand out here -- far, far away from everyone, to guard the main gate --"
              << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap() {
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
    std::cout << "SC4V-TP: Halt, "
              << "[Stranger]"
              << "! I have been chosen to stand out here -- far, far away from everyone, to guard the main gate"
              << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setLevel(1);
    this->setMeleeAttackDamage(20);
    this->setRangedAttackDamage(15);
    this->setArmorDamageReduction(3);
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

    this->setName(obj.getName());
    this->setHitPoints(obj.getHitPoints());
    this->setMaxHitPoints(obj.getMaxHitPoints());
    this->setEnergyPoints(obj.getEnergyPoints());
    this->setMaxEnergyPoints(obj.getMaxEnergyPoints());
    this->setLevel(obj.getLevel());
    this->setMeleeAttackDamage(obj.getMeleeAttackDamage());
    this->setRangedAttackDamage(obj.getRangedAttackDamage());
    this->setArmorDamageReduction(obj.getArmorDamageReduction());

    return *this;
}

void ScavTrap::challengeNewcomer(std::string const &target) {
    const std::string challeges[5] = {
            "Kill all enemies",
            "climb the wall without using a ladder",
            "do the flips",
            "smash SC4V-TP head",
            "try not to laugh"};

    if ((this->getEnergyPoints() - 25) >= 0) {

        std::cout << "SC4V-TP: Hey " << target << " " << challeges[rand() % 5] << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 25);
    } else {

        std::cout << "SC4V-TP: " << this->getName() << " is out of energy" << std::endl;
    }
}