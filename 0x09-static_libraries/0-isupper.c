#include "main.h"

/**
 * _isupper - check for uppercase letter.
 * @c: character to verify
 *
 * Return: 1 if c is an uppercase
 * 0 if it is not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
