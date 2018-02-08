/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** task03
*/
#include "../include/my.h"
#include <unistd.h>

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

int my_putstr_print(char const *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < 8) {
			my_putstr("\\00");
			my_put_nbrbase(str[i], "01234567");
			i++;
		}
		if (str[i] < 32) {
			my_putstr("\\0");
			my_put_nbrbase(str[i], "01234567");
			i++;
		}
		if (str[i] >= 126) {
			my_putchar(92);
			my_put_nbrbase(str[i], "01234567");
			i++;
		}
		my_putchar(str[i]);
	}
}

void my_putchar(char c)
{
	write(1, &c, 1);
}
