#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: input
 *
 * Return: int
 */
int _atoi(char *s)
{
	int sign;

	sign = 1;

	unsigned int number = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s _ '0');
		}
		else if (number > 0)
		{
			break;
		}
		while (*s++)
		{
			return (number * sign);
		}
	}
}


