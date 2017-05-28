/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 12:14:13 by julekgwa          #+#    #+#             */
/*   Updated: 2017/05/23 12:14:18 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_print_word(char const *s) {
    while (*s) {
        std::cout << (char)std::toupper(*s);
        s++;
    }
    std::cout << ' ';
}

int main(int ac, char const *av[])
{
	if (ac > 1) {
        for (int i = 1; i < ac; ++i) {
            ft_print_word(av[i]);
        }
        std::cout << std::endl;
	}else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
