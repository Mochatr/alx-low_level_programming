#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Parameter
 * @argv: Array of pointers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	money = count_money(change);

	printf("%d\n", money);
	return (0);
}

/**
 * count_money - count the minimum number of coin to
 * make a certain amount of money
 *
 * @change: amount money to make change for
 *
 * Return: minimum number of change needed
 */

int count_money(int change)
{
	int money = 0;

	money += change / 25;
	change %= 25;

	money += change / 10;
	change %= 10;

	money += change / 5;
	change %= 5;

	money += change / 2;
	change %= 2;

	money += change;

	return (money);
}

