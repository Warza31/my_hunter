/*
** EPITECH PROJECT, 2017
** Piscine display.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

sfVector2f display(var_t var, sfVector2f position, sfIntRect rect,
score_t *score)
{
	sfEvent event;

	sfSprite_setTexture(var.spritebg, var.texturebg, sfTrue);
	analyse_events(var.window, event, &position, score);
	sfSprite_setTexture(var.spritec, var.texturec, sfTrue);
	sfSprite_setTextureRect(var.spritec, rect);
	sfSprite_setPosition(var.spritec, position);
	sfRenderWindow_clear(var.window, sfBlack);
	sfRenderWindow_drawSprite(var.window, var.spritebg, NULL);
	sfRenderWindow_drawSprite(var.window, var.spritec, NULL);
	sfRenderWindow_display(var.window);
	return(position);
}
