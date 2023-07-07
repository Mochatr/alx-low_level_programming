#include "main.h"

/**
 * get_bit - Function
 * @n: Argument
 * @index: Argument
 * Return: Value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	bit_value = (n  >> index) & 1;
	return (bit_value);
}
