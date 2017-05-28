#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cstdlib>

class ClapTrap {

private:
    std::string _name;
    int _hit_points;
    int _max_hit_points;
    int _energy_points;
    int _max_energy_points;
    int _level;
    int _melee_attack_damage;
    int _ranged_attack_damage;
    int _armor_damage_reduction;

public:
    ClapTrap(void);

    ClapTrap(std::string);

    ClapTrap(ClapTrap const &);

    ClapTrap &operator=(ClapTrap const &);

    ~ClapTrap(void);

    std::string getName(void) const;

    int getHitPoints(void) const;

    int getMaxHitPoints(void) const;

    int getEnergyPoints(void) const;

    int getMaxEnergyPoints(void) const;

    int getLevel(void) const;

    int getMeleeAttackDamage(void) const;

    int getRangedAttackDamage(void) const;

    int getArmorDamageReduction(void) const;

    void setName(std::string);

    void setHitPoints(int);

    void setMaxHitPoints(int);

    void setEnergyPoints(int);

    void setMaxEnergyPoints(int);

    void setLevel(int);

    void setMeleeAttackDamage(int);

    void setRangedAttackDamage(int);

    void setArmorDamageReduction(int);

    void rangedAttack(std::string const &target);

    void meleeAttack(std::string const &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);
};

#endif
