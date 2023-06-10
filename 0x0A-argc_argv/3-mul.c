#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: argument
 * @argv: Array of pointers
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, result;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else

	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		result = (x * y);

		printf("%d\n", result);
	}
	return (0);
}
