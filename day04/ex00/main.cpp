//
// Created by julekgwa on 2017/05/29.
//
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
//    Peon joe("Joe");
    std::cout << robert << jim ; //<< joe;
    robert.polymorph(jim);
//    robert.polymorph(joe);
    return 0;
}