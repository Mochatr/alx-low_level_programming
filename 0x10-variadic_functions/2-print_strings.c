#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 * @separator: Argument
 * @n: Parameter
 * @...: Input
 * if seperator is NULL, it is not printed
 * if one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Strings;

	char *str;

	unsigned int index_num;

	va_start(Strings, n);

	for (index_num = 0; index_num < n; index_num++)
	{
		str = va_arg(Strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (index_num != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(Strings);
}
