#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Function
 * @filename: Parameter
 * @letters: Parameter
 *
 * Return: A value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	bf = malloc(sizeof(char) * letters);
	b = read(a, bf, letters);
	c = write(STDOUT_FILENO, bf, b);

	free(bf);
	close(a);
	return (c);
}

