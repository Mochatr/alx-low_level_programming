#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure the length of.
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
	/*Recursion*/
}
