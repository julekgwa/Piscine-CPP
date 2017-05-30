/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:54:43 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 18:12:53 by jswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameEntity.hpp"

GameEntity::GameEntity() {
	int     y, x;
	getmaxyx(stdscr, y, x);
	_dCh = (char *)".";
	set_yPos(rand() % (y - 2) + 1);
	set_xPos(rand() % (x - 2) + 1);
	_collided = false;
}

GameEntity::GameEntity(GameEntity const &obj) {
	this->operator=(obj);
}

GameEntity &GameEntity::operator=(GameEntity const &obj) {
	set_dCh(obj.get_dCh());
	set_xPos(obj.get_xPos());
	set_yPos(obj.get_yPos());
	return *this;
}

GameEntity::~GameEntity() {

}

void GameEntity::collided() {
	int     y, x;

	getmaxyx(stdscr, y, x);
	_respawnTime = (rand() % _rspeed + 50);
	_collided = true;
	set_xPos(x - 1);
	set_yPos(rand() % (y - 2) + 1);
}

//____________________GETTERS AND SETTERS______________________________

int GameEntity::get_xPos() const {
	return _xPos;
}

void GameEntity::set_xPos(int _xPos) {
	GameEntity::_xPos = _xPos;
}

int GameEntity::get_rspeed() const {
	return _rspeed;
}

void GameEntity::set_rspeed(int _rspeed) {
	GameEntity::_rspeed = _rspeed;
}

int GameEntity::get_yPos() const {
	return _yPos;
}

void GameEntity::set_yPos(int _yPos) {
	GameEntity::_yPos = _yPos;
}

char *GameEntity::get_dCh() const {
	return _dCh;
}

void GameEntity::set_dCh(char *_dCh) {
	GameEntity::_dCh = _dCh;
}

bool GameEntity::is_collided() const {
	return _collided;
}

void GameEntity::set_collided(bool _collided) {
	GameEntity::_collided = _collided;
}

void GameEntity::set_respawnTime(int _respawnTime) {
	GameEntity::_respawnTime = _respawnTime;
}

int GameEntity::get_respawnTime() const {
	return _respawnTime;
}
