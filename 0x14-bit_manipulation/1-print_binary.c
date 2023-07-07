#include "main.h"

/**
 * print_binary - Function
 * @n: Parameter
 *
 * Return: Value
 */

void print_binary(unsigned long int n)
{
	unsigned long int cp = n;
	int Len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((cp >>= 1) > 0)
	{
		Len++;
	}
	while ((Len >= 0))
	{
		((n >> Len) & 1) ? _putchar('1') : _putchar('0');
		Len--;
	}
}
