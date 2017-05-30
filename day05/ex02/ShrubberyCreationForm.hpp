//
// Created by Junius LEKGWARA on 2017/05/30.
//

#ifndef JULEKGWA_SHRUBBERYCREATIONFORM_HPP
#define JULEKGWA_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(const std::string) throw(GradeTooLowException, GradeTooHighException);

    ShrubberyCreationForm(ShrubberyCreationForm const &);

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

    virtual ~ShrubberyCreationForm() throw();

    virtual void execute(Bureaucrat const &executor) const;

    void writeToFile(std::string filename, std::string content) const;

private:
    std::string _target;
    std::string _filename;
};


#endif //JULEKGWA_SHRUBBERYCREATIONFORM_HPP
