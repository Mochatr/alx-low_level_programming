#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two strings
 * @s1: Parameter
 * @s2: Argument
 * @n: Number of bytes to concatenate from s2 to s1
 *
 * Return: pointer to the new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;

	unsigned int a = 0, b = 0;

	unsigned int len_1 = 0, len_2 = 0;

	while (s1 && s1[len_1])
		len_1++;
	while (s2 && s2[len_2])
		len_2++;

	if (n < len_2)
		S = malloc(sizeof(char) * (len_1 + n + 1));
	else
		S = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (!S)
		return (NULL);

	while (a < len_1)
	{
		S[a] = s1[a];
		a++;
	}

	while (n < len_2 && a < (len_1 + n))
		S[a++] = s2[b++];

	while (n >= len_2 && a < (len_1 + len_2))
		S[a++] = s2[b++];

	S[a] = '\0';

	return (S);
}
