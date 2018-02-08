/*
** EPITECH PROJECT, 2017
** Piscine rect.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
	rect->left += offset;
	if (rect->left == max_value)
		rect->left = 0;
}

sfIntRect set_rect(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 110;
	rect.height = 110;
	return (rect);
}
