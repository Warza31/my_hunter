/*
** EPITECH PROJECT, 2017
** Piscine score.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include "../include/struct.h"
#include "../include/my.h"

score_t ini_score(void)
{
	score_t score;

	score.score = 0;
	score.life = 3;
	score.i = 4;
	return (score);
}

void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
sfRenderWindow *window, score_t *score)
{
	int nbgen = rand() % 400 + 10;

	if (event.x >= position->x && event.x <= position->x + 110 &&
	event.y >= position->y && event.y <= position->y + 110)
	{
		position->x = -199;
		position->y = nbgen;
		score->score = score->score + 100;
		my_printf("HIT! Score = %d\n", score->score);
		score->i += 1;
	} else if (score->life > 0) {
		score->life = score->life - 1;
		my_printf("FAIL! Number of life: %d\n", score->life);
	}
	if (score->life == 0) {
		my_printf("-----------------\nFinal Score: %d\n", score->score);
		sfRenderWindow_close(window);
	}
}
