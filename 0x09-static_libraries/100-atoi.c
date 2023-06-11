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

	int i = 0;

	sign = 1;

	unsigned int num = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		num = (num * 10) + (s[i] - '\0');
		i++;
	}
	num *= sign;
	return (num);
}
