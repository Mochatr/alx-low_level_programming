#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function
 * @file: Parameter
 *
 * Return: A value
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)

	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Function
 * @fd: Parameter
 */

void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Function
 * @argc: Parameter
 * @argv: Parameter
 *
 * Return: Value
 * Description: desc
 */

int main(int argc, char *argv[])
{
	int a, b, c, d;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	c = read(a, buff, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (a == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		d = write(b, buff, c);
		if (b == -1 || d == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		c = read(a, buff, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);

	} while (c > 0);

	free(buff);
	close_file(a);
	close_file(b);

	return (0);
}


