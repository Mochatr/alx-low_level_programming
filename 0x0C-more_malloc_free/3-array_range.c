#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: Parameter
 * @max: Input
 *
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int a, the_size;

	if (min > max)
		return (NULL);

	the_size = max - min + 1;

	p = malloc(sizeof(int) * the_size);

	for (a = 0; min <= max; a++)
		p[a] = min++;

	return (p);
}
