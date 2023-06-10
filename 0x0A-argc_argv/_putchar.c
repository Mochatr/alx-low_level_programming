#include "main.h"

#include <stdio.h>
/**
 * _putchar - returns a character written to stdout
 * as an unsigned char
 * @c: character to be printed
 *
 * return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
