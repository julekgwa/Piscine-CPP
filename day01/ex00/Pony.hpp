/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goisetsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:59:26 by goisetsi          #+#    #+#             */
/*   Updated: 2017/05/24 09:59:58 by goisetsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

# include <iostream>

class Pony
{
private:
	std::string	tail;
	int			teeth;

public:
	Pony(std::string tail, int teeth);
	~Pony();
	
};


#endif