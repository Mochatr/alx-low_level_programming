#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: Parameter
 * @height: argument
 *
 * Return: a pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **a;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);

			free(a);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}

		return (a);
	}
	return (0);
}
