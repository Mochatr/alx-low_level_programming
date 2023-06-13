#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated memory
 * Which contains a copy of the string given as an argument
 * @str: Parameter
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *x;

	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
		a++;
	x = malloc(sizeof(char) * (a + 1));

	if (x == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
	{
		x[b] = str[b];
	}

	return (x);
}

