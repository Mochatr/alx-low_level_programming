#include "main.h"

/**
 * print_binary - Function
 * @n: Parameter
 */

void print_binary(unsigned long int n)
{
	int a = 0;
	int compute = 0;

	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			compute++;
		}
		else if (compute)
		{
			_putchar('0');
		}
	}
	if (!compute)
	{
		_putchar('0');
	}
}
