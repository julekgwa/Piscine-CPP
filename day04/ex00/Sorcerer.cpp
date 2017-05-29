//
// Created by julekgwa on 2017/05/29.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->introduce("is born !") << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj) : _name(obj._name), _title(obj._title){
}

Sorcerer &Sorcerer::operator=(Sorcerer const &obj) {
    this->_name = obj._name;
    this->_title = obj._title;
    return *this;
}

Sorcerer::~Sorcerer() {
    std::cout << this->introduce("is dead. Consequences will never be the same !") << std::endl;
}

std::string Sorcerer::introduce(std::string msg) {
    return this->_name + ", " + this->_title + ", " + msg;
}

void Sorcerer::polymorph(Victim const &v) const {
    v.getPolymorphed();
}

std::ostream &operator<<(std::ostream &output, Sorcerer &sorcerer) {
    output << "I am " + sorcerer.introduce("and I like ponies !") << std::endl;
    return output;
}