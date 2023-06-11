#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks for a digit
 * @c: number to verify
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
