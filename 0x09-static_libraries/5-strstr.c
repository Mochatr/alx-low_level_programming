#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: argument
 * @needle: input
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *p = needle;

		while (*j == *p && *p != '\0')
		{
			j++;
			p++;
		}

		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}



