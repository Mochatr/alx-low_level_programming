#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array
 * @size: Parameter
 * @action: Parameter
 * @array: Parameter
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)

		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
