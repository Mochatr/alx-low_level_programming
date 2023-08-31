#include "main.h"

/**
 * get_bit - Function
 * @n: parameter
 * @index: parameter
 * Return: a value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_Value;

	if (index > 63)
	{
		return (-1);
	}

	bit_Value = (n >> index) & 1;
	return (bit_Value);
}
