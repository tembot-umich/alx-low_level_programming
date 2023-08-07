#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read file text to output to STDOUT.
 * @filename: file text that is being read
 * @letters: amount of letters to be read
 * Return: h- actual no of bytes read,printed and 0 when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t p;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (p);
}

