#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case */
	if (*s1 == '\0')

	{
		/* if s2 is not empty and equals the next xharacter '*'*/
		/*recursively call wildcmp with s1 and s2 + 1*/
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		/* return 1 if the string is considered identical*/
		return (*s2 == '\0');
	}

	/* if the character in s2 is '*'*/
	/* recursively call wildcmp function with s1 + 1*/
	/*or s1 and s2+1*/

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* if the characters in  s1 and s2 are not equal*/
	/* return 0 (there is no match) */
	return (0);
}
