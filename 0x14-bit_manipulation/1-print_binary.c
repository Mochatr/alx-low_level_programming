#include "main.h"

/**
 * print_binary - function
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int a, cnt = 0;
	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = n >> a;

		if (curr & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
