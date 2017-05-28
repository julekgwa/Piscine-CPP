#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {

    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);

    std::cout
            << "FR4G-TP: "
            << "[XXX]"
            << " start bootup sequence." << std::endl;
    return;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);

    std::cout
            << "FR4G-TP: "
            << this->getName()
            << " start bootup sequence." << std::endl;
    return;

}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) {

    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(100);
    this->setMaxEnergyPoints(100);
    this->setLevel(1);
    this->setMeleeAttackDamage(30);
    this->setRangedAttackDamage(20);
    this->setArmorDamageReduction(5);

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
        this->setEnergyPoints(this->getEnergyPoints() - 25);

    } else {

        std::cout << "FR4G-TP: " << this->getName() << " is out of energy" << std::endl;

    }

}

