#include "main.h"

/**
 * get_endianness - function
 * Return: Value
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *character = (char *) &a;

	return (*character);
}
