#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print a comn=bination of numbers.
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}



