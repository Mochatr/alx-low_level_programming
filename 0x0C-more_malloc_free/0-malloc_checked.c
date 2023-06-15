#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - It allocates memory using malloc
 * @b: Parameter
 *
 * Return: A Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
