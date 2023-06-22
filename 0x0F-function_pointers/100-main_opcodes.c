#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * printOpcodes - Prints the opcodes of the main function
 * @Bytes: Number of bytes to print
 */

void printOpcodes(int Bytes)
{
	unsigned char *address = (unsigned char *)printOpcodes;

	int i = 0;

	if (i < Bytes)
	{
		i++;
		printf("%02x ", *(address + i));
		printf("\n");
	}
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success,
 * 1 if incorrect number of arguments, 2 if negative bytes
 *
 */

int main(int argc, char *argv[])
{
	int Bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	Bytes = atoi(argv[1]);

	if (Bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	printOpcodes(Bytes);
	return (0);
}
