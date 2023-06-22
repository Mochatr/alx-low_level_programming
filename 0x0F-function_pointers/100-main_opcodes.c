#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints its own opcodes
 * @argc: Parameter
 * @argv: Parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int Bytes;

	int a;

	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	Bytes = atoi(argv[1]);

	if (Bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (a = 0; a < Bytes; a++)
	{
		if (a == Bytes - 1)
		{
			printf("%02hhx\n", ar[a]);
			break;
		}
		printf("%02hhx", ar[a]);
	}
	return (0);
}
