/*
** EPITECH PROJECT, 2017
** CSFML
** File description:
** Bootstrap
*/

#ifndef	__MY_STRUCT__
#define __MY_STRUCT__

typedef struct var {
	sfRenderWindow *window;
	sfTexture *texturebg;
	sfSprite *spritebg;
	sfTexture *texturec;
	sfSprite *spritec;
	sfClock *clock;
	sfVector2f position;
	sfTime time;
	float seconds;
} var_t;

typedef struct score {
	int score;
	int life;
	int i;
} score_t;

#endif /*__MY_STRUCT__*/
