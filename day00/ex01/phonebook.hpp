/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 17:46:10 by julekgwa          #+#    #+#             */
/*   Updated: 2017/05/23 17:46:13 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
#define PHONE_BOOK

#include <iostream>
#include <iomanip>

class PhoneBook {
public:
    PhoneBook();

    ~PhoneBook();

    static int total;

    void DisposeObject();

    void setFirstName(std::string name);

    void setLastName(std::string lastname);

    void setNickname(std::string nickname);

    void setLogin(std::string login);

    void setPostalAddress(std::string addr);

    void setEmailAddress(std::string email);

    void setPhone(std::string phone);

    void setDob(std::string dob);

    void setFavouriteMeal(std::string fav_meal);

    void setUnderwearColor(std::string color);

    void setDarkestSecret(std::string secret);

    void add(PhoneBook contacts[], int pos);
    void display(PhoneBook contacts[], int pos);

    std::string getFirstName(void);

    std::string truncate(std::string str);

    std::string getLastName(void);

    std::string getNickname(void);

    std::string getLogin(void);

    std::string getPostalAddress(void);

    std::string getEmailAddress(void);

    std::string getPhone(void);

    std::string getDob(void);

    std::string getFavouriteMeal(void);

    std::string getUnderwearColor(void);

    std::string getDarkestSecret(void);

private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _login;
    std::string _postal_addr;
    std::string _email_addr;
    std::string _phone;
    std::string _dob;
    std::string _favourite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;

};

#endif
