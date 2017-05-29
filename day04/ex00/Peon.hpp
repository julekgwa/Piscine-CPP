//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_PEON_HPP
#define PISCINE_CPP_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
    Peon(std::string);
    Peon(Peon const &);
    Peon &operator=(Peon const &);
    ~Peon();
    void birth(void);
    virtual void getPolymorphed() const;
};


#endif //PISCINE_CPP_PEON_HPP
