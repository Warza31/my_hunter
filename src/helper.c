/*
** EPITECH PROJECT, 2017
** Piscine helper.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

void helper(void)
{
	my_printf("------------------------\n");
	my_printf("ANGRY BIRD's HUNT HELPER\n");
	my_printf("------------------------\n");
	my_printf("\n");
	my_printf("HOW DOES IT WORK ?\n");
	my_printf("The goal of the game is to kill as many birds as possible.");
	my_printf("\nFor this you just have to left-click on the birds.\n");
	my_printf("\nYou have the right to miss 3 shots.\n");
	my_printf("Every time you hit the bird, the score increases by 100");
	my_printf("\n\n");
}
