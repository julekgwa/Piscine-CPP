#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
    return;
}

Zombie::Zombie() {
    return;
}

Zombie::~Zombie() {
    return;
}

void Zombie::announce() const {
    std::cout << "<" << this->name << "(" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
    return;
}

void Zombie::set_type(std::string type) {
    this->type = type;
    return;
}

void Zombie::set_name(std::string name) {
    this->name = name;
    return;
}