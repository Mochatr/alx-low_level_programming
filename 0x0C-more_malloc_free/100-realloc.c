#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block using malloc and free
 * @ptr: Argument
 * @old_size: Input
 * @new_size: Parameter
 *
 * Return: Pointer to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_p = p;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p[a] = old_p[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < new_size; a++)
			p[a] = old_p[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p[a] = old_p[a];
	}
	free(ptr);
	return (p);
}


