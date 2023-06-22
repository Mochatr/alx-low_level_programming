#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Function that prints a name.
 * @name: Parameter
 * @f: Parameter
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
