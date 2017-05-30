//
// Created by julekgwa on 2017/05/29.
//

#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign,
           const int gradeToExec) throw(GradeTooHighException, GradeTooLowException) : _name(name),
                                                                                       _isSigned(
                                                                                               false),
                                                                                       _gradeToSign(
                                                                                               gradeToSign),
                                                                                       _gradeToExec(
                                                                                               gradeToExec) {
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();

}

Form &Form::operator=(Form const &obj) {
    (void) obj;
    return *this;
}

Form::Form(Form const &obj) : _name(obj._name), _isSigned(obj._isSigned), _gradeToSign(obj._gradeToSign),
                              _gradeToExec(obj._gradeToExec) {

}

Form::~Form() throw() {

}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() < this->_gradeToSign)
        this->_isSigned = true;
}

const std::string Form::getName() {
    return this->_name;
}

int Form::getGradeExec() {
    return this->_gradeToExec;
}

int Form::getGradeSign() {
    return this->_gradeToExec;
}

bool Form::isSigned() {
    return this->_isSigned;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj) {
    *this = obj;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &obj) {
    (void) obj;
    return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw() {
    return "Fatal error: Grade too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj) {
    *this = obj;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &obj) {
    (void) obj;
    return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
    return "Fatal error: Grade too low";
}

std::ostream &operator<<(std::ostream &output, Form &form) {
    output << "{form name: " << form.getName() << ", is signed: " << form.isSigned() << ", grade to sign: "
           << form.getGradeSign() << ", grade to exec: " << form.getGradeExec() << "}" << std::endl;
    return output;
}
