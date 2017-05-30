/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:56:10 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:56:12 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Actions.hpp"
#include "Player.hpp"
#include "Ship.hpp"
#include "Screen.hpp"
#include <ctime>

void sleep(unsigned long int n) {
	clock_t startTime = clock();
	while (clock() - startTime < n) {
	}
}

int gameLoop() {
	Action act;
	Player *p1 = new Player;
	Ship e1[20];
	GameEntity stars[150];
	GameEntity playerBullets[10];
	GameEntity explode[4];

	Screen screen;
	bool stillPlaying = true;
	int ch, score;

	timeout(0);
	p1->initBullets(playerBullets);
	for (int i = 0; i < 50; i++){

	}
	while (stillPlaying) {
		ch = getch();
		act.setAction(ch);
		stillPlaying = act.applyAction(p1, e1, stars, playerBullets, explode);
		screen.screenUpdate(p1, e1, stars, playerBullets, explode);
		if (p1->is_collided())
			stillPlaying = false;
		sleep(40000);
	}
	score = p1->get_score();
	delete p1;
	return (score);
}

int main(void) {
	srand(time(0));
	bool stillPlaying = 1;
	int score;
	Screen *screen = new Screen;
	screen->loadScreen();
//
//	start_color();
//	init_pair(1, COLOR_RED, COLOR_BLACK);
//	bkgd(COLOR_PAIR(1));
//	refresh();


	while (stillPlaying == 1) {
		stillPlaying = screen->printMenu();
		if (stillPlaying) {
			score = gameLoop();
			stillPlaying = screen->gameOver();
		}
	}
	screen->loadScreen();
	endwin();
	delete screen;
	return (0);
}
