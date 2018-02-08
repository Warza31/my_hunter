/*
** EPITECH PROJECT, 2017
** Piscine position.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

int set_position(sfVector2f *position, sfIntRect *rect, int i)
{
	position->x += i;
	if (position->x >= 1800) {
		rect->top = 110;
		i = -i;
	}
	if (position->x <= -200) {
		rect->top = 0;
		i = -i;
	}
	return (i);
}

sfVector2f set_pos(sfVector2f position)
{
	int nbgen = rand() % 400 + 10;
	position.x = -200;
	position.y = nbgen;
	return (position);
}
