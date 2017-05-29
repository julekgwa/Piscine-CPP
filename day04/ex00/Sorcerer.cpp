//
// Created by julekgwa on 2017/05/29.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &obj) {
    *this = obj;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &obj) {
    this->_name = obj._name;
    this->_title = obj._title;
    return *this;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName() {
    return this->_name;
}

std::string Sorcerer::getTitle() {
    return this->_title;
}