#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - Locates a character
 * @s: parameter
 * @c: input
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
