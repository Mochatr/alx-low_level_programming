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

	for (bit = 0; b[bit]; bit++)
	{
		if (b[bit] < '0' || b[bit] > '1')
			return (0);
		number = 2 * number + (b[bit] - '0');
	}

	return (number);
}
