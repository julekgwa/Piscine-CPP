//
// Created by julekgwa on 2017/05/29.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string type) : Enemy(hp, type) {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &obj){

}

SuperMutant &SuperMutant::operator=(SuperMutant const &obj) {

    return *this;
}

AWeapon::~AWeapon() {
    std::cout << "Aaargh ..." << std::endl;
}