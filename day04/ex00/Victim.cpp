//
// Created by julekgwa on 2017/05/29.
//

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
    this->birth();
}

Victim::Victim(Victim const &obj) : _name(obj._name) {
}

Victim &Victim::operator=(Victim const &obj) {
    this->_name = obj._name;
    return *this;
}

Victim::~Victim() {
    this->death();
}

void Victim::birth() {
    std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

void Victim::death() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string Victim::introduce() {
    return "I'm " + this->_name + " and I like otters !";
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const {
    return this->_name;
}

void Victim::setName(std::string name) {
    this->_name = name;
}

std::ostream &operator<<(std::ostream &output, Victim &victim) {
    output << victim.introduce() << std::endl;
    return output;
}