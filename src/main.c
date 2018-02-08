/*
** EPITECH PROJECT, 2017
** Piscine main.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

int main(int ac, char **av)
{
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		helper();
		return (0);
	} else
		duck_hunt();
	return (0);
}
