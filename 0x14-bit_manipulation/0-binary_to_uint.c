#include "main.h"

/**
 * binary_to_uint - Function
 * @b: parameter
 * Return: Value
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal_Value = 0;

	if (!b)
	{
		return (0);
	}

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		decimal_Value = 2 * decimal_Value + (b[a] - '0');
	}

	return (decimal_Value);
}

