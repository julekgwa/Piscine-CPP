//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_SORCERER_HPP
#define PISCINE_CPP_SORCERER_HPP
#include <iostream>
#include "Victim.hpp"
class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);

    Sorcerer(Sorcerer const &);

    Sorcerer &operator=(Sorcerer const &);

    ~Sorcerer();
    std::string introduce(std::string);
    std::string getName(void);
    std::string getTitle(void);
    void polymorph(Victim const &) const;
private:
    std::string _title;
    std::string _name;
};

std::ostream &operator<<(std::ostream &output, Sorcerer &sorcerer);
#endif //PISCINE_CPP_SORCERER_HPP
