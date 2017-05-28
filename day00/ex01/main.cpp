/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 17:45:53 by julekgwa          #+#    #+#             */
/*   Updated: 2017/05/23 17:45:56 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main() {
    PhoneBook contacts[8];
    int i = 0;
    while (42) {
        std::string cmd;
        std::getline(std::cin, cmd);
        if (cmd.compare("EXIT") == 0) {
            break;
        } else if (cmd.compare("ADD") == 0) {
            if (i < PhoneBook::total) {
                contacts->add(contacts, i++);
            }
        } else if (cmd.compare("SEARCH") == 0) {
            contacts->display(contacts, i);
        }
    }
    return 0;
}
