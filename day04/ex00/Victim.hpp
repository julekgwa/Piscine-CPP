//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_VICTIM_HPP
#define PISCINE_CPP_VICTIM_HPP

#include <iostream>

class Victim {
public:
    Victim(std::string);
    Victim(Victim const &);
    Victim &operator=(Victim const &);
    virtual ~Victim(void);
    void birth(void);
    void death(void);
    std::string introduce(void);
    virtual void getPolymorphed() const;
    void setName(std::string name);
    std::string getName(void) const;
private:
    std::string _name;
};

std::ostream &operator<<(std::ostream &output, Victim &victim);
#endif //PISCINE_CPP_VICTIM_HPP
