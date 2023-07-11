#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void error_file(int ff, int ft, char *argv[]);
int main(int argc, char *argv[]);

/**
 * error_file - Function
 * @ff: Parameter
 * @ft: Parameter
 * @argv: Parameter
 * Return: A value
 */
void error_file(int ff, int ft, char *argv[])
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Function
 * @argc: Parameter
 * @argv: Parameter
 *
 * Return: Value
 */

int main(int argc, char *argv[])
{
	int ff, ft, er_close;
	ssize_t nchar, nr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(ff, ft, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(ff, buff, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		nr = write(ft, buff, nchar);
		if (nr == -1)
			error_file(0, -1, argv);
	}

	er_close = close(ff);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	er_close = close(ft);
	if (er_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}

	return (0);
}

