//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_FORM_HPP
#define PISCINE_CPP_FORM_HPP

#include "Bureaucrat.hpp"

class Form {
public:
    void beSigned(Bureaucrat &);
private:
    const std::string _name;
    bool _isSigned;
    const int _grades;
    const int _gradeSign;
    const int _gradeExec;

};


#endif //PISCINE_CPP_FORM_HPP
