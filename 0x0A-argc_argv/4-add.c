#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduce positive numbers
 * @argc: Argument
 * @argv: Array of pointers
 *
 * Return: 0 in case of success.
 * 1 in case of error
 */

int main(int argc, char *argv[])
{
	int number;

	int result = 0;

	int a, b;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (!(isdigit(argv[a][b])))
			{
				printf("Error\n");
				return (1);
			}
		}

		number = atoi(argv[a]);
		result += number;
	}

	printf("%d\n", result);
	return (0);
}
