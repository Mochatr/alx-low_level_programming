#include "main.h"

/**
 * binary_to_uint - function
 * @b: parameter
 * Return: A decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int bit;

	if (!b)
		return (0);
	while (*b)
	{
		bit = *b - '0';

		if (bit != 0 && bit != 1)
			return (0);
		number = (number >> 1) | bit;
		b++;
	}

	return (number);
}
