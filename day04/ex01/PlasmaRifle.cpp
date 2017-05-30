#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
  return;
}

PlasmaRifle::~PlasmaRifle(void)
{
  return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon("Plasma Rifle", 5, 21)
{
  *this = copy;
}

void PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    AWeapon::operator=(rhs);
    return *this;
}
