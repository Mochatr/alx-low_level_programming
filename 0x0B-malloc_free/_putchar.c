#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function that writes character c to stdout
 * @c: Character to print
 *
 * Return: On success 1
 * On error 1 is returned, end errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
