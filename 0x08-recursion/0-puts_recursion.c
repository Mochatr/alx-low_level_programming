#include "main.h"

/**
 * _puts_recursion -  prints a string
 * @s: the parameter
 * Return: 0
 */

void _puts_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
