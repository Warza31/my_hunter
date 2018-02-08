/*
** EPITECH PROJECT, 2017
** Piscine analyse_events.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>

void analyse_events(sfRenderWindow *window, sfEvent event, sfVector2f *position,
score_t *score)
{
	sfRenderWindow_setFramerateLimit(window, 60);
	while (sfRenderWindow_pollEvent(window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event.type == sfEvtMouseButtonPressed)
			manage_mouse_click(event.mouseButton, position, window,
			score);
	}
}
