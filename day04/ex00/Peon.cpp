//
// Created by julekgwa on 2017/05/29.
//

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    this->birth();
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

void Peon::birth() {
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}