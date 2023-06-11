#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @src: Argument
 * @dest: parameter
 * @n:input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;

	int b;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

