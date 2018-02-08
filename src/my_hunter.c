/*
** EPITECH PROJECT, 2017
** Piscine display_a_pixel.c
** File description:
** display a pixel in a window
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

int duck_hunt()
{
	var_t var = ini_struct();
	sfIntRect rect = set_rect(rect);
	sfVector2f position = set_pos(position);
	sfClock *clock = sfClock_create();
	score_t score = ini_score();
	sfTime time;
	float seconds;

	while (sfRenderWindow_isOpen(var.window)) {
		time = sfClock_getElapsedTime(clock);
		seconds = time.microseconds / 100000.0;
		if (seconds > 1) {
			move_rect(&rect, 110, 440);
			sfClock_restart(clock);
		}
		score.i = set_position(&position, &rect, score.i);
		position = display(var, position, rect, &score);
	}
	return(0);
}
