//
// Created by julekgwa on 2017/05/29.
//

#include "Bureaucrat.hpp"

int main(void) {
    std::cout << "\n=============== Bureaucrat Tests ====================" << std::endl;
    try {
        std::cout << "\n---Test 1 --- Grade set to 0" << std::endl;
        Bureaucrat b(0, "Office");
    }catch (Bureaucrat::GradeTooLowException &e){
        std::cout << e.what() << std::endl;
    }catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n---Test 2 --- Grade set to 1" << std::endl;
        Bureaucrat b(1, "Office");
        std::cout << "No exception" << std::endl;
        std::cout << "\n---Test 3 --- Grade increased by 1" << std::endl;
        b.increaseGrade();
    }catch (Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }

    try {
        std::cout << "\n---Test 4 --- Grade set to 150" << std::endl;
        Bureaucrat b(150, "Office");
        std::cout << "No exception" << std::endl;
        std::cout << "\n---Test 5 --- Grade decreased by 1" << std::endl;
        b.decreaseGrade();
    }catch (Bureaucrat::GradeTooLowException &e){
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "Exception thrown: " << e.what() << std::endl;
    }

    Bureaucrat b(150, "Office");
    std::cout << "\n=============== overload << Test ====================" << std::endl;
    std::cout << "\n" << b;
    return 0;
}
