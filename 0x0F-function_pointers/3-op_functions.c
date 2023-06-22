#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: The sum of b and a.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: First integer.
 * @b: Second integer.
 * Return: Difference between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - Returns the remainder of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - Returns the division of two integers.
 * @a: First integers.
 * @b: Second integers.
 *
 * Return: the quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

