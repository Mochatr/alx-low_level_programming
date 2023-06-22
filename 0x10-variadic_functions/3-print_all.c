#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Function that prints anything.
 * @format: Argument
 */

void print_all(const char * const format, ...)
{

	int a = 0;
	char *str, *separator = "";

	va_list List;

	va_start(List, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(List, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(List, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(List, double));
					break;
				case 's':
					str = va_arg(List, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}
	printf("\n");

	va_end(List);
}

