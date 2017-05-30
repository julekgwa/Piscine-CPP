/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:54:50 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:54:51 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include "ncurses.h"
#include <iostream>

class GameEntity
{
public:
	GameEntity();
	GameEntity(GameEntity  const & obj);
	GameEntity & operator=(GameEntity const & obj);
	~GameEntity();

	void collided();

	int get_xPos() const;

	void set_xPos(int _xPos);

	int get_yPos() const;

	void set_yPos(int _yPos);

	char *get_dCh() const;

	void set_dCh(char *_dCh);

	int get_rspeed() const;

	void set_rspeed(int _rspeed);

	bool is_collided() const;

	void set_collided(bool _collided);

	int get_respawnTime() const;

	void set_respawnTime(int _respawnTime);

protected:
	int         _xPos;
	int         _yPos;
	char        *_dCh;
	bool        _collided;
	int         _respawnTime;
	int         _rspeed;

};

#endif
