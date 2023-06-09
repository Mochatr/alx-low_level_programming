#include "main.h"

/**
 * factorial - returns the factorial of a number.
 * @n: the number to find the factorial of
 *
 * Return: The factorial of the given number
 * or -1 if the number is negative.
 */

int factorial(int n)
{
	/* Base case */
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
