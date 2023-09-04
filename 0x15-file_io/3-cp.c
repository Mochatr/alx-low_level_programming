#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *fname);
void cl_file(int fd);

/**
 * create_buff - function
 * @fname: parameter
 * Return: value
 */

char *create_buff(char *fname)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fname);
		exit(99);
	}

	return (buff);
}

/**
 * cl_file - function
 * @fd: parameter
 */

void cl_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: Value
 */

int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buff);
	cl_file(from);
	cl_file(to);

	return (0);
}
