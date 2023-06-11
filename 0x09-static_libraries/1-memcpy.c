#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies n byte from memory space
 * @src: memory where its copied
 * @dest: memory where its stored
 * @n: num of bytes
 *
 * Return: pointer to the destination memory space
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
