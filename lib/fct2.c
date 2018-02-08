/*
** EPITECH PROJECT, 2017
** gg
** File description:
** gg
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

int my_put_nbrp(int nb, char *base)
{
	int diviseur = 1;
	int result;
	int size_of_base = my_strlen(base);

	if (nb < 0) {
		nb *= -1;
		write(1, "-", 1);
	}
	while ((nb / diviseur) >= size_of_base)
		diviseur *= size_of_base;
	if (nb != 0)
		my_putstr("0x");
	if (nb == 0) {
		my_putstr("(nil)");
		return (0);
	}
	for (; diviseur > 0; diviseur /= size_of_base) {
		result = (nb / diviseur) % size_of_base;
		my_putchar(base[result]);
	}
}

int check_format(char const *format, int i, va_list list)
{
	char *flag = "xXsSobduicsp";
	int j = 0;

	if (format[i] == '%') {
		my_putchar('%');
		i++;
		j = 0;
	} else {
		for (; flag [j] != '\0' && flag[j] != format[i]; j++) ;
		if (flag[j] != '\0') {
			flag_base(format, i, list);
			flag_classic(format, i, list);
		}
		if (flag[j] == '\0') {
			my_putchar('%');
			my_putchar(format[i]);
		}
	}
}
