/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:55:55 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:55:58 by jswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.hpp"
#include "Screen.hpp"

Ship::Ship(void) {
	int     y, x;
	getmaxyx(stdscr, y, x);
	set_dCh((char *)"{=<");
	_rspeed = 500;
	_respawnTime = (rand() % _rspeed);
	set_xPos(x - 1);
	set_yPos(rand() % (y - 2) + 1);
	collided();
}

Ship::Ship(char *c) {
	int     y, x;
	getmaxyx(stdscr, y, x);
	set_dCh(c);
	set_yPos(y / 2);
	set_xPos(x - 2);
	set_dCh(c);
	_rspeed = 100;
	_respawnTime = (rand() % _rspeed);
	collided();
}

Ship::Ship(const Ship &obj) {
	this->operator=(obj);
}

Ship &Ship::operator=(Ship const &obj) {
	set_dCh(obj.get_dCh());
	set_xPos(obj.get_xPos());
	set_yPos(obj.get_yPos());
	return *this;
}

Ship::~Ship(void) {
}

void Ship::shoot(GameEntity bulletArr[]) {
	int     i;

	i = 0;
	while (i < 10)
	{
		if (bulletArr[i].is_collided())
		{
			bulletArr[i].set_xPos(get_xPos() + 3);
			bulletArr[i].set_yPos(get_yPos());
			bulletArr[i].set_collided(false);
			i = 10;
		}
		else
			i++;
	}
}

void Ship::initBullets(GameEntity bulletArr[]) {
	for (int i = 0; i < 10; i++){
		bulletArr[i].set_dCh((char *)"~->");
		bulletArr[i].set_collided(true);
	}
}
