//
// Created by Junius LEKGWARA on 2017/05/30.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) throw(Form::GradeTooLowException, Form::GradeTooHighException) : _target(name),
                                                                       Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : _target(obj._target),
                                                                                 Form(obj.getName(), obj.getGradeSign(),
                                                                                      obj.getGradeExec()) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
    (void)obj;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() throw() {

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    std::string tree = "  X                                                                                                                                                                                                                            \n"
            "   XXX                                                                                                                                                                                                                           \n"
            "  XXXXX                                                                                                                                                                                                                          \n"
            " XXXXXXX                                                                                                                                                                                                                         \n"
            "    X ";
    if (executor.getGrade() < this->getGradeSign() && this->isSigned())
        writeToFile(this->_filename, tree);
}

void ShrubberyCreationForm::writeToFile(std::string filename, std::string content) const {
    std::ofstream out(filename);
    if (out) {
        out << content;
    } else {
        std::cout << "unable to write to file: " + filename;
    }
    out.close();
}