#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
  return;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
  return;
}

AWeapon::~AWeapon()
{
  return;
}

AWeapon::AWeapon(AWeapon const & src)
{
  *this = src;
}

std::string const & AWeapon::getName(void) const
{
  return this->_name;
}

int AWeapon::getAPCost(void) const
{
  return this->_apcost;
}

int AWeapon::getDamage() const
{
  return this->_damage;
}

AWeapon & AWeapon::operator=(AWeapon const &copy)
{
    this->_name = copy._name;
    this->_apcost = copy._apcost;
    this->_damage = copy._damage;

    return (*this);
}
