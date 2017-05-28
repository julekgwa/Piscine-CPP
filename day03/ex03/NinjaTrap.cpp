#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {

    this->setHitPoints(60);
    this->setMaxHitPoints(60);
    this->setEnergyPoints(120);
    this->setMaxEnergyPoints(120);
    this->setLevel(1);
    this->setMeleeAttackDamage(60);
    this->setRangedAttackDamage(5);
    this->setArmorDamageReduction(0);

    std::cout
            << "FR4G-TP: "
            << "[XXX]"
            << " start bootup sequence." << std::endl;
    return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {

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
            << " : 起動する (Booting up)" << std::endl;
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &obj) : ClapTrap(obj) {

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
            << "[NinjA-T] "
            << this->getName()
            << " : 起動する (Booting up)" << std::endl;
    return;
}

NinjaTrap::~NinjaTrap(void) {

    std::cout
            << "[NinjA-T] "
            << this->getName()
            << " : ゲームオーバー (Game over)" << std::endl;
    return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &obj) {

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

void NinjaTrap::ninjaShoebox(std::string const &target) {

    const std::string attacks[5] = {
            "Pulls out his dark katana............'Ka-Chink'...",
            "Drives the Blade into is opponent...",
            "He drives his katan in a few times making sure for a quick death...",
            "Cleans his blade in preperation for the killer blow...",
            "Chops his opponent in two and feeds the bottom part to his pet dragon whilst the top part watches."};

    if ((this->getEnergyPoints() - 25) >= 0) {

        std::cout << "[NinjA-T] " << this->getName() << " " << attacks[rand() % 5] << " on " << target << std::endl;
        this->setEnergyPoints(this->getEnergyPoints() - 25);
    } else {

        std::cout << "[NinjA-T] " << this->getName() << " is out of energy" << std::endl;
    }
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target) {
    std::cout << "[NinjA-T] ご挨拶 " << target.getName() << ", I am your son" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target) {
    std::cout << "[NinjA-T] Yow " << target.getName() << ", Good Job, You Failed" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target) {
    std::cout << "[NinjA-T] Man the gate " << target.getName() << ", I am no stranger, I am the end of you."
              << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
    std::cout << "[NinjA-T] Hello " << target.getName() << ", I'm you from elsewhere." << std::endl;
}
