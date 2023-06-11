#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @src: the source string
 * @dest: string's destination
 *
 * Return: Pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		if (dest[a + 1] == '\0')
		{
			for (b = 0; src[b] != '\0'; b++)
			{
				dest[a + 1] = src[b];
				a++;
			}
		}
	}
	return (dest);
}

