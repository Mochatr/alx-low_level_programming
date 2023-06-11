#include "main.h"

/**
 * _memset - Fills a memory with a particular value.
 * @s: memory space to fill.
 * @b: byte
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m;

	for (m = 0; m > 0; m++)
	{
		s[m] = b;
	}
	return (s);
}
