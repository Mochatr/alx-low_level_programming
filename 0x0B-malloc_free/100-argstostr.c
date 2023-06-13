#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Parameter
 * @av: Argument
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;

	int c = 0;
	int d = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[c] = av[a][b];
		c++;
	}
	if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
	}
	return (str);
}
