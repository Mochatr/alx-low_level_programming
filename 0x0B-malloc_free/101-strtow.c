#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - A function that splits a string into words
 * @s: Parameter
 *
 * Return: A pointer to an array of strings
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}

/**
 * **strtow - splits a string into words
 * @str: Parameter
 *
 * Return: Pointer to an array of strings
 * Or NULL
 */

char **strtow(char *str)
{
	char **x;
	char *y;

	int i, j, l = 0;
	int w, c = 0;
	int s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) * (w + 1));
	if (x == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				y = (char *) malloc(sizeof(char) * (c + 1));
				if (y == NULL)
					return (NULL);
				while (s < e)
					*y++ = str[s++];
				*y = '\0';
				x[j] = y - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
		s = i;
	}
	x[j] = NULL;
	return (x);
}


