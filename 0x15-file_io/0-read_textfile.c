#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function
 * @filename: parameter
 * @letters: parameter
 * Return: A value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wr;
	ssize_t a;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	a = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, a);

	free(buffer);
	close(fd);
	return (wr);
}
