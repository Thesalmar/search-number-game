/*
** EPITECH PROJECT, 2018
** My putnbr
** File description:
** My own version
*/

#include "number.h"

void my_putnbr(int nb)
{
	if (nb <= 9)
		my_putchar(nb + '0');
	else if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	else
	{
		my_putnbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
}
