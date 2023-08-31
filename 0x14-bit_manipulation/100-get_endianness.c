#include "main.h"

/**
 * get_endianness - function
 * Return: a value
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
