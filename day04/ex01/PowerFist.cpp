#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
    return;
}

PowerFist::~PowerFist() {
    return;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon("Power Fist", 8, 50) {
    *this = src;
}

void PowerFist::attack(void) const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
    return;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    AWeapon::operator=(rhs);
    return *this;
}
