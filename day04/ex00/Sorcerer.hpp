//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_SORCERER_HPP
#define PISCINE_CPP_SORCERER_HPP
#include <iostream>

class Sorcerer {
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const &);
    Sorcerer &operator=(Sorcerer const &);
    ~Sorcerer();
    void introduce();
private:
    std::string _title;
    std::string _name;
};


#endif //PISCINE_CPP_SORCERER_HPP
