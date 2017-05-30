//
// Created by julekgwa on 2017/05/29.
//
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main() {
    PlasmaRifle t("* piouuu piouuu piouuu *","Plasma Rifle", 5, 21);
    PowerFist p("“* pschhh... SBAM! *","Power Fist", 8, 50);
    SuperMutant s(150, "Super");
    std::cout << t << p << std::endl;
    return 0;
}
