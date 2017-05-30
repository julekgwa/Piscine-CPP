//
// Created by julekgwa on 2017/05/29.
//

#ifndef PISCINE_CPP_FORM_HPP
#define PISCINE_CPP_FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form(const std::string name, const int gradeToSign,
         const int gradeToExec) throw(GradeTooLowException, GradeTooHighException);

    Form(Form const &);
    Form &operator=(Form const &);

    virtual ~Form() throw();

    void beSigned(Bureaucrat &);

    const std::string getName();

    int getGradeSign();

    int getGradeExec();

    bool isSigned();

//    Exception classes
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException(void);

        GradeTooHighException(GradeTooHighException const &);

        GradeTooHighException &operator=(GradeTooHighException const &);

        virtual ~GradeTooHighException(void) throw();

        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException(void);

        GradeTooLowException(GradeTooLowException const &);

        GradeTooLowException &operator=(GradeTooLowException const &);

        virtual ~GradeTooLowException(void) throw();

        virtual const char *what() const throw();
    };

private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExec;

};

std::ostream &operator<<(std::ostream &output, Form &form);
#endif //PISCINE_CPP_FORM_HPP
