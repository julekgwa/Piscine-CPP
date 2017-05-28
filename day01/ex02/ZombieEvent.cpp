#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    return;
}

ZombieEvent::~ZombieEvent() {
    return;
}

void ZombieEvent::setZombieType(std::string type) {
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie(name, this->type);

    return zombie;
}

void ZombieEvent::randomChump() {
    std::string random[8] = {"first", "second", "third", "fourth", "fifth", "Bob", "Junius", "Kuthadzo"};

    Zombie *zombie = this->newZombie(random[rand() % 8]);
    zombie->announce();

    delete zombie;
}