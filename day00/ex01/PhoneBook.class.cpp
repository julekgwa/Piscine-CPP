/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 17:45:19 by julekgwa          #+#    #+#             */
/*   Updated: 2017/05/23 17:45:28 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::setFirstName(std::string name) {
    this->_firstname = name;
}

void PhoneBook::display(PhoneBook *contacts, int pos) {
    int i = 0;
    int desired;
    std::string str_desired;

    std::cout << std::setfill(' ') << std::setw(10) << "index" << "|"
              << std::setfill(' ') << std::setw(10) << "first name" << "|"
              << std::setfill(' ') << std::setw(10) << "last name" << "|"
              << std::setfill(' ') << std::setw(10) << "nick name" << "|" << std::endl;

    while (i < pos) {
        std::cout << std::setfill(' ') << std::setw(10) << i + 1 << "|"
                  << std::setfill(' ') << std::setw(10) << contacts[i].truncate(contacts[i].getFirstName()) << "|"
                  << std::setfill(' ') << std::setw(10) << contacts[i].truncate(contacts[i].getLastName()) << "|"
                  << std::setfill(' ') << std::setw(10) << contacts[i].truncate(contacts[i].getNickname()) << "|"
                  << std::endl;
        i++;
    }

    if (pos > 0) {
        std::cout << "Enter desired index: ";
        std::getline(std::cin, str_desired);
        try {
            desired = std::stoi(str_desired);
            if (desired > 0 && desired <= pos) {
                desired--;
                std::cout << "first name:" << contacts[desired].getFirstName() << std::endl;
                std::cout << "last name:" << contacts[desired].getLastName() << std::endl;
                std::cout << "nick name:" << contacts[desired].getNickname() << std::endl;
                std::cout << "login:" << contacts[desired].getLogin() << std::endl;
                std::cout << "postal address:" << contacts[desired].getPostalAddress() << std::endl;
                std::cout << "email address:" << contacts[desired].getEmailAddress() << std::endl;
                std::cout << "phone number:" << contacts[desired].getPhone() << std::endl;
                std::cout << "birthday date:" << contacts[desired].getDob() << std::endl;
                std::cout << "favorite meal:" << contacts[desired].getFavouriteMeal() << std::endl;
                std::cout << "underwear color:" << contacts[desired].getUnderwearColor() << std::endl;
                std::cout << "darkest secret:" << contacts[desired].getDarkestSecret() << std::endl;
            } else
                std::cout << "Incorrect Index!!!!" << std::endl;
        } catch (const std::invalid_argument &ia) {
            std::cout << "You must enter an integer" << std::endl;
        }
    }
}

std::string PhoneBook::truncate(std::string str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + '.';
    } else
        return str;
}

void PhoneBook::setLastName(std::string lastname) {
    this->_lastname = lastname;
}

void PhoneBook::setNickname(std::string nickname) {
    this->_nickname = nickname;
}

void PhoneBook::setLogin(std::string login) {
    this->_login = login;
}

void PhoneBook::setPostalAddress(std::string addr) {
    this->_postal_addr = addr;
}

void PhoneBook::setEmailAddress(std::string email) {
    this->_email_addr = email;
}

void PhoneBook::setPhone(std::string phone) {
    this->_phone = phone;
}

void PhoneBook::setDob(std::string dob) {
    this->_dob = dob;
}

void PhoneBook::setFavouriteMeal(std::string fav_meal) {
    this->_favourite_meal = fav_meal;
}

void PhoneBook::setUnderwearColor(std::string color) {
    this->_underwear_color = color;
}

void PhoneBook::setDarkestSecret(std::string secret) {
    this->_darkest_secret = secret;
}

std::string PhoneBook::getFirstName() {
    return this->_firstname;
}

std::string PhoneBook::getLastName() {
    return this->_lastname;
}

std::string PhoneBook::getNickname() {
    return this->_nickname;
}

std::string PhoneBook::getLogin() {
    return this->_login;
}

std::string PhoneBook::getPostalAddress() {
    return this->_postal_addr;
}

std::string PhoneBook::getEmailAddress() {
    return this->_email_addr;
}

std::string PhoneBook::getPhone() {
    return this->_phone;
}

std::string PhoneBook::getDob() {
    return this->_dob;
}

std::string PhoneBook::getFavouriteMeal() {
    return this->_favourite_meal;
}

std::string PhoneBook::getUnderwearColor() {
    return this->_underwear_color;
}

std::string PhoneBook::getDarkestSecret() {
    return this->_darkest_secret;
}

void PhoneBook::DisposeObject() {
    delete this;
}

PhoneBook::PhoneBook() {
    total++;
}

PhoneBook::~PhoneBook() {

}

void PhoneBook::add(PhoneBook *contacts, int pos) {
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string login;
    std::string postal_addr;
    std::string email_addr;
    std::string phone;
    std::string dob;
    std::string favourite_meal;
    std::string underwear_color;
    std::string darkest_secret;
    std::cout << "Please enter first name: ";
    std::getline(std::cin, firstname);
    std::cout << "Please enter last name: ";
    std::getline(std::cin, lastname);
    std::cout << "Please enter Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Please enter Login: ";
    std::getline(std::cin, login);
    std::cout << "Please enter Postal Address: ";
    std::getline(std::cin, postal_addr);
    std::cout << "Please enter Email: ";
    std::getline(std::cin, email_addr);
    std::cout << "Please enter Phone: ";
    std::getline(std::cin, phone);
    std::cout << "Please enter Date of birth: ";
    std::getline(std::cin, dob);
    std::cout << "Please enter Favourite meal: ";
    std::getline(std::cin, favourite_meal);
    std::cout << "Please enter Underwear color: ";
    std::getline(std::cin, underwear_color);
    std::cout << "Please enter Darkest secret: ";
    std::getline(std::cin, darkest_secret);

    contacts[pos].setFirstName(firstname);
    contacts[pos].setLastName(lastname);
    contacts[pos].setNickname(nickname);
    contacts[pos].setLogin(login);
    contacts[pos].setPostalAddress(postal_addr);
    contacts[pos].setEmailAddress(email_addr);
    contacts[pos].setPhone(phone);
    contacts[pos].setDob(dob);
    contacts[pos].setFavouriteMeal(favourite_meal);
    contacts[pos].setUnderwearColor(underwear_color);
    contacts[pos].setDarkestSecret(darkest_secret);
}

int PhoneBook::total = 0;
