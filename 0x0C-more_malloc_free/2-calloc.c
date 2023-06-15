#include "main.h"
#include <stdlib.h>

/**
 * *_memset - Fills function with a cste byte
 * @s: Parameter
 * @b: Input
 * @n: Argument
 *
 * Return: Pointer to the memory are
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - Allocates memory for an array
 * @nmemb : Parameter
 * @size: Input
 *
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
