#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x = 1;
	int y;

	while (x <= 10)
	{
		y = 97;
		while (y <= 122)
		{
			_putchar(y);
			y++;
		}
		x++;
		_putchar('\n');
	}
}

