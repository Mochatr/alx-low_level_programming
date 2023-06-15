#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * its_digit - verifies if a string contains a non digit character
 * @s: Parameter
 *
 * Return: 0 if a non digit is found
 * 1 otherwise
 */
int its_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlength - Returns a string's length
 * @s: Parameter
 *
 * Return: String's length
 */
int _strlength(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - deals with errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - Multiplies two positive numbers
 * @argc: Argument
 * @argv: Parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_1, len_2, len, a, carry, num1, num2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !its_digit(s1) || !its_digit(s2))
		errors();
	len_1 = _strlength(s1), len_2 = _strlength(s2);
	len = (len_1 + (len_2 + 1));
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (a = 0; a <= len_1 + len_2; a++)
		result[a] = 0;
	for (len_1 = (len_1 - 1); len_1 >= 0; len_1--)
	{
		num1 = s1[len_1] - '0';
		carry = 0;

		for (len_2 = _strlength(s2) - 1; len_2 >= 0; len_2--)
		{
			num2 = (s2[len_2] - '0');
			carry += (result[len_1 + len_2 + 1] + (num1 * num2));
			result[len_1 + len_2 + 1] += carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len_1 + len_2 + 1] += carry;
	}
	for (a = 0; a < len - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
