/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Actions.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:53:28 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 18:14:18 by jswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Actions.hpp"

Action::Action() {

}

Action::Action(Action const &obj) {
	this->operator=(obj);
}

Action &Action::operator=(Action const &obj) {
	set_action(obj.get_action());
	return *this;
}

Action::~Action() {

}


void Action::setAction(int ch) {
	if (ch == KEY_LEFT || ch == KEY_RIGHT || ch == KEY_UP || ch == KEY_DOWN || ch == ' '
	    || ch == 'q')
		set_action(ch);
	else
		set_action('p');
}

void Action::checkCollision(Player *p1, Ship s1[], GameEntity playerBullets[]) {
	int y, x;
	for (int i = 0; i < 20; i++) {
		if (!s1[i].is_collided()) {
			if (p1->get_yPos() == s1[i].get_yPos() &&
			    (p1->get_xPos() == s1[i].get_xPos() - 1 || p1->get_xPos() == s1[i].get_xPos() || p1->get_xPos() == s1[i].get_xPos()- 2)) {
				p1->collided();
				s1[i].collided();
			}
		}
	}
	getmaxyx(stdscr, y, x);
	if (p1->get_yPos() == 0 || p1->get_yPos() == y - 1)
		p1->collided();
	for (int i = 0; i < 20; i++)
		if (!s1[i].is_collided())
			if (s1[i].get_xPos() < -1)
				s1[i].collided();
	for (int i = 0; i < 10; i++) {
		if (!playerBullets[i].is_collided()) {
			for (int j = 0; j < 20; j++) {
				if (!s1[j].is_collided()) {
					if (playerBullets[i].get_yPos() == s1[j].get_yPos()) {
						if (playerBullets[i].get_xPos() == s1[j].get_xPos()
						    || playerBullets[i].get_xPos() == s1[j].get_xPos() - 1
						    || playerBullets[i].get_xPos() == s1[j].get_xPos() - 2) {
							playerBullets[i].set_collided(true);
							s1[j].collided();
							p1->set_score(p1->get_score() + 10);
						}
					}
				}
			}
			if (playerBullets[i].get_xPos() > x - 1)
				playerBullets[i].set_collided(true);
		}
	}
}

bool Action::applyAction(Player *p, Ship s[], GameEntity stars[], GameEntity playerBullets[],
                         GameEntity explode[]) {
	int row, col;
	static int starcount = 0;
	getmaxyx(stdscr, row, col);
	switch (_action) {
		case KEY_LEFT:
			if (p->get_xPos() > 1)
				p->set_xPos(p->get_xPos() - 1);
			break;
		case KEY_RIGHT:
			if (p->get_xPos() < col - 2)
				p->set_xPos(p->get_xPos() + 1);
			break;
		case KEY_UP:
			p->set_yPos(p->get_yPos() - 1);
			break;
		case KEY_DOWN:
			p->set_yPos(p->get_yPos() + 1);
			break;
		case ' ':
			p->shoot(playerBullets);
			break;
		case 'q':
			return (false);
		default:
			break;
	}

	if (p->get_lostlife()) {
		explode[0].set_dCh((char *)"*.*");
		explode[1].set_dCh((char *)"*.*.*.*");
		explode[2].set_dCh((char *)"*.*.*.*");
		explode[3].set_dCh((char *)"*.*");
		explode[0].set_xPos(p->get_xPos() + 3);
		explode[1].set_xPos(p->get_xPos() + 1);
		explode[2].set_xPos(p->get_xPos() + 1);
		explode[3].set_xPos(p->get_xPos() + 3);
		explode[0].set_yPos(p->get_yPos() + 1);
		explode[1].set_yPos(p->get_yPos());
		explode[2].set_yPos(p->get_yPos() - 1);
		explode[3].set_yPos(p->get_yPos() - 2);
		p->set_lostlife(false);
	}

	for (int i = 0; i < 4; i++){
		explode[i].set_xPos(explode[i].get_xPos() - 1);
	}

	if (starcount % 2 == 0) {
		for (int i = 0; i < 30; i++) {
			stars[i].set_xPos(stars[i].get_xPos() - 1);
			if (stars[i].get_xPos() == 0) {
				stars[i].set_xPos(col - 1);
				stars[i].set_yPos((rand() % (row - 2)) + 1);
			}
		}
		if (starcount % 4 == 0) {
			for (int i = 31; i < 60; i++) {
				stars[i].set_xPos(stars[i].get_xPos() - 1);
				if (stars[i].get_xPos() == 0) {
					stars[i].set_xPos(col - 1);
					stars[i].set_yPos((rand() % (row - 2)) + 1);
				}
			}
			if (starcount % 8 == 0) {
				for (int i = 61; i < 90; i++) {
					stars[i].set_xPos(stars[i].get_xPos() - 1);
					if (stars[i].get_xPos() == 0) {
						stars[i].set_xPos(col - 1);
						stars[i].set_yPos((rand() % (row - 2)) + 1);
					}
				}
				if (starcount % 16 == 0) {
					for (int i = 91; i < 120; i++) {
						stars[i].set_xPos(stars[i].get_xPos() - 1);
						if (stars[i].get_xPos() == 0) {
							stars[i].set_xPos(col - 1);
							stars[i].set_yPos((rand() % (row - 2)) + 1);
						}
					}
				}
			}
		}
	}
	starcount++;
	for (int i = 0; i < 20; i++) {
		if (!s[i].is_collided())
			s[i].set_xPos(s[i].get_xPos() - 1);
		else if (s[i].get_respawnTime() > 0)
			s[i].set_respawnTime(s[i].get_respawnTime() - 1);
		else if (s[i].get_respawnTime() == 0)
			s[i].set_collided(false);
	}
	for (int i = 0; i < 10; i++) {
		if (!playerBullets[i].is_collided()) {
			playerBullets[i].set_xPos(playerBullets[i].get_xPos() + 3);
		}
	}
	checkCollision(p, s, playerBullets);
	return (true);
}

//_________________________GETTERS AND SETTERS __________________________v

int Action::get_action() const {
	return _action;
}

void Action::set_action(int _action) {
	Action::_action = _action;
}



