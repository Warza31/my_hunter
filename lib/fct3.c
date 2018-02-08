/*
** EPITECH PROJECT, 2017
** gg
** File description:
** gg
*/
#include "../include/my.h"
#include <unistd.h>

int my_put_nbr(int nb)
{
	if (nb < -2147483647) {
		my_putstr("-2147483648");
	} else if (nb > 9)
		my_put_nbr(nb / 10);
	else if (nb < 0) {
		nb = nb * -1;
		write(1, "-", 1);
	}
	my_putchar(nb % 10 + '0');
}

int my_put_nbr_hexa(int nb, char *base)
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
	while (diviseur > 0) {
		result = (nb / diviseur) % size_of_base;
		my_putchar(base[result]);
		diviseur /= size_of_base;
	}
}

int my_put_nbr_hexa2(int nb, char *base)
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
		my_putstr("0X");
	while (diviseur > 0) {
		result = (nb / diviseur) % size_of_base;
		my_putchar(base[result]);
		diviseur /= size_of_base;
	}
}

int my_put_nbr_oct(int nb, char *base)
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
		my_putchar('0');
	while (diviseur > 0) {
		result = (nb / diviseur) % size_of_base;
		my_putchar(base[result]);
		diviseur /= size_of_base;
	}
}

int my_put_nbrbase(int nb, char *base)
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
	while (diviseur > 0) {
		result = (nb / diviseur) % size_of_base;
		my_putchar(base[result]);
		diviseur /= size_of_base;
	}
}
