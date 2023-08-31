#include "main.h"

/**
 * flip_bits - function
 * @n: parameter
 * @m: parameter
 * Return: a value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, compute = 0;

	unsigned long int curr;
	unsigned long int exclu = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = exclu >> a;
		if (curr & 1)
			compute++;
	}

	return (compute);
}
