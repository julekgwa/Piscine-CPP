/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:56:01 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:56:03 by jswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.hpp"

class Ship : public GameEntity
{
public:
	Ship(void);
	Ship(char *c);
	Ship(Ship const & obj);
	Ship & operator=(Ship const & src);
	~Ship(void);
	void initBullets(GameEntity bulletArr[]);
	void shoot(GameEntity bulletArr[]);
};

#endif
