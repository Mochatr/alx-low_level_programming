#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments received by a program
 * @argc: Parameter
 * @argv: Array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
