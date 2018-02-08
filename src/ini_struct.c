/*
** EPITECH PROJECT, 2017
** Piscine ini_struct.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

var_t ini_struct(void)
{
	var_t var;
	sfVideoMode mode = { 1600, 900, 32 };

	var.window = sfRenderWindow_create(mode, "Angry Bird's Hunt", sfClose,
	NULL);
	var.texturebg = sfTexture_createFromFile("bg.png", NULL);
	var.spritebg = sfSprite_create();
	var.texturec = sfTexture_createFromFile("sprite.png", NULL);
	var.spritec = sfSprite_create();
	var.clock = sfClock_create();
	return (var);
}
