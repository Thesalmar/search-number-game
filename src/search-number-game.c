/*
** EPITECH PROJECT, 2018
** Search Number Game
** File description:
** Find a number between 1 and 100
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "number.h"

void error_check(int number)
{
	if (number == NULL)
		write(2, "Error : Number is NULL\n", 23);
	else if (number < 1 || number > 100)
		write(2, "Error : Please input a number between 1 and 100\n", 48);
}

int check_answer(int rand_number, int answer, int step)
{
	if (answer == 0 || answer == NULL)
		return (0);
	else if (answer > rand_number)
		write(1, "Program : -\n", 12);
	else if (answer < rand_number)
		write(1, "Program : +\n", 12);
	else
	{
		printf("Program: You win in %d steps\n", step);
		return (1);
	}
	return (0);
}

int game()
{
	int rand_number = (rand() % (MAX - MIN + 1)) + MIN;
	int answer = 0;
	int step = 0;
	int check_win = check_answer(rand_number, answer, step);

	while (check_win != 1)
	{
		write(1, "Try a number: ", 14);
		scanf("%d", &answer);
		my_putnbr(answer);
		my_putchar('\n');
		error_check(answer);
		step++;
		check_win = check_answer(rand_number, answer, step);
		if (check_win == 1)
			return (1);
	}
	return (0);
}

int main(void)
{
	game();
	return (0);
}
