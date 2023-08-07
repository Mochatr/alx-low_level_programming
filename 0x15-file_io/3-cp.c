#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *file_name);
void cl_file(int fd);

/**
 * create_buff - function
 * @file_name: parameter
 * Return: A value
 */

char *create_buff(char *file_name)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_name);
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
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - funtion
 * @argc: parameter
 * @argv: parameter
 * Return: Value
 */

int main(int argc, char *argv[])
{
	int fr, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || re == -1)
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

		re = read(fr, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buff);
	cl_file(fr);
	cl_file(to);

	return (0);
}
