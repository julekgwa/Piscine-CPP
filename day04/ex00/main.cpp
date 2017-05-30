//
// Created by julekgwa on 2017/05/29.
//
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << "===================================================" << std::endl;
    std::cout << "--- My Tests ---" << std::endl;
    {
        Victim *tst = new Peon("Junius");
        Victim &ref = *(tst);
        robert.polymorph(ref);
        delete tst;
    }
    return 0;
}