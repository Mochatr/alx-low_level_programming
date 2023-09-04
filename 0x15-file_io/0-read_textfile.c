#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function
 * @filename: parameter
 * @letters: parameter
 * Return:a value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t wr, r, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (wr);
}
