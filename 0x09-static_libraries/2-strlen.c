#include "main.h"

/**
 * _strlen - Returns a string's length
 * @s: parameter
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
