#include "main.h"

int rec_Prime(int n, int m);

/**
 * is_prime_number - verifies if an integer is a prime number
 * @n: Number to verify
 *
 * Return: 1 if the number is a prime number
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (rec_Prime(n, n - 1));
}

/**
 * rec_Prime - Calculates recursively if a integer is a prime number.
 * @n: Number to verify
 * @m: iteration element
 *
 * Return: 1 if n is a prime number
 * 0 otherwise
 */

int rec_Prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (rec_Prime(n, m - 1));
}



