#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints prints numbers
 * @separator: Argument
 * @n: Parameter
 * @...: Input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	unsigned int index_num;

	va_start(numbers, n);

	for (index_num = 0; index_num < n; index_num++)
	{
		printf("%d", va_arg(numbers, int));

		if (index_num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
