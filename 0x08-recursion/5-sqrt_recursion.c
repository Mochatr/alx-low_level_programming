#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the square root of
 *
 * Return: natural square root of n
 * or -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	/* Base case */
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - finds the square root of a number
 * @n: number to find the square root of.
 * @s: starting value for the search.
 * @e: the ending value
 *
 * Return: square root of n.
 * or -1 if n doesn't have a natural square root.
 */

int _sqrt_helper(int n, int s, int e)
{
	int midd;

	/* Base case */
	if (midd * midd == n)
		return (midd);
	if (s <= e)
	{
		midd = (s + e) / 2;

		if (midd * midd > n)
			return (_sqrt_helper(n, s, midd - 1));
		return (_sqrt_helper(n, midd + 1, e));
	}

	return (e);
}
