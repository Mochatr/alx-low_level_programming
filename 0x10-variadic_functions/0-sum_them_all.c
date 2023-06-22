#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Parameter
 * @...: Argument
 *
 * Return: if n == 0 - 0.
 * Otherwise the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
