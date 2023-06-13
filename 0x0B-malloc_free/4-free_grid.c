#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid -  function that frees a 2D array
 * @grid: Parameter
 * @height: Argument
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
