#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

    FragTrap player1("AMARQUEZ");

    srand((unsigned int) time(NULL));

    {

        FragTrap player2("ktshikot");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2(player1);

        player2.setName("cheke");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        player1.takeDamage(player1.getRangedAttackDamage());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2 = player1;
        player2.setName("genious");

        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points" << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        player2.vaulthunter_dot_exe(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " has " << player1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " has " << player2.getEnergyPoints() << " energy points"
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        FragTrap player2;

        player2.setName("seedat");
        std::cout << "FR4G-TP: " << player1.getName() << " starts off with " << player1.getEnergyPoints()
                  << " energy points, " << " hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " starts off with " << player2.getEnergyPoints()
                  << " energy points, " << " hit points " << player2.getHitPoints() << std::endl;

        player1.vaulthunter_dot_exe(player2.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        player1.meleeAttack(player2.getName());

        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());
        player2.takeDamage(player2.getMeleeAttackDamage());

        player2.rangedAttack(player1.getName());

        std::cout << "FR4G-TP: " << player1.getName() << " current hit points " << player1.getHitPoints() << std::endl;
        std::cout << "FR4G-TP: " << player2.getName() << " current hit points " << player2.getHitPoints() << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    ScavTrap splayer1("Junius");

    {
        ScavTrap splayer2("Andre");
        std::cout << "SC4V-TP: " << splayer1.getName() << " start off with " << splayer1.getEnergyPoints()
                  << " energy points, " << " hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points, " << " hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        splayer1.takeDamage(splayer1.getRangedAttackDamage());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;
    }

    {

        ScavTrap splayer2(splayer1);

        splayer2.setName("cheke");

        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        splayer1.takeDamage(splayer1.getRangedAttackDamage());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "----------------------------------------------------------------" << std::endl;

    }


    {

        ScavTrap splayer2 = splayer1;
        splayer2.setName("genious");

        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points" << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points" << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        splayer2.challengeNewcomer(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " has " << splayer1.getEnergyPoints() << " energy points"
                  << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " has " << splayer2.getEnergyPoints() << " energy points"
                  << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }

    {

        ScavTrap splayer2;

        splayer2.setName("seedat");
        std::cout << "SC4V-TP: " << splayer1.getName() << " starts off with " << splayer1.getEnergyPoints()
                  << " energy points, " << " hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " starts off with " << splayer2.getEnergyPoints()
                  << " energy points, " << " hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.challengeNewcomer(splayer2.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints() << std::endl;

        splayer1.meleeAttack(splayer2.getName());

        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());
        splayer2.takeDamage(splayer2.getMeleeAttackDamage());

        splayer2.rangedAttack(splayer1.getName());

        std::cout << "SC4V-TP: " << splayer1.getName() << " current hit points " << splayer1.getHitPoints() << std::endl;
        std::cout << "SC4V-TP: " << splayer2.getName() << " current hit points " << splayer2.getHitPoints() << std::endl;

        std::cout << "----------------------------------------------------------------" << std::endl;

    }


    return (0);

}
