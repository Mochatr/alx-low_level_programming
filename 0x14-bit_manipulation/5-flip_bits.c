#include "main.h"

/**
 * flip_bits - Function
 * @n: Parameter
 * @m: Parameter
 * Return: A value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Result = n ^ m;
	unsigned long int Count = 0;

	while (Result)
	{
		Count += Result & 1;
		Result = Result >> 1;
	}

	return (Count);
}
