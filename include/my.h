/*
** EPITECH PROJECT, 2017
** Piscine my.h
** File description:
** Hugo Courthias <hcourthias>
*/
#include <stdarg.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "struct.h"
#include <stdlib.h>

#ifndef	__MY_H__
#define __MY_H__

int my_printf(char const *format, ...);
int my_strlen(char const *str);
int sum_stdarg(int i, int nb, ...);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int disp_stdarg(char *s, ...);
int my_put_nbrbase(int nb, char *base);
int my_putstr_print(char const *str);
int my_put_nbr_oct(int nb, char *base);
int my_put_nbrp(int nb, char *base);
int my_put_nbr_hexa(int nb, char *base);
int check_format_diese(char const *format, int i, va_list list);
int check_format(char const *format, int i, va_list list);
int my_put_nbr_hexa2(int nb, char *base);
void flag_base(char const *format,  int i, va_list list);
void flag_classic(char const *format,  int i, va_list list);
void analyse_events(sfRenderWindow *window, sfEvent event, sfVector2f *position,
score_t *score);
sfVector2f display(var_t var, sfVector2f position, sfIntRect rect,
score_t *score);
void helper(void);
var_t ini_struct(void);
int duck_hunt(void);
int set_position(sfVector2f *position, sfIntRect *rect, int i);
sfVector2f set_pos(sfVector2f position);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect set_rect(sfIntRect rect);
void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
sfRenderWindow *window, score_t *score);
score_t ini_score(void);

#endif /*__MY_H__*/
