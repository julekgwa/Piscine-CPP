/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goisetsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:59:19 by goisetsi          #+#    #+#             */
/*   Updated: 2017/05/24 09:59:20 by goisetsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony(std::string tail, int teeth) : teeth(teeth), tail(tail){
	std::cout << "Pony was made!!! tail:" << tail << " teeth:" << teeth << std::endl;
	return;
}

Pony::~Pony(){
	std::cout << "Class destructer was called " << this->tail << " " <<this->teeth << std::endl;
	return;
}

