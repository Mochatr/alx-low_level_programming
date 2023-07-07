#include "main.h"

/**
 * get_endianness - Function
 * Return: Value
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
