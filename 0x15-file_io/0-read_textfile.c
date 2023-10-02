#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Retrieve the contents of a text file and display them on STDOUT
 * @filename: file being read
 * @letters: amount of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t kl;
	ssize_t m;
	ssize_t l;

	kl = open(filename, O_RDONLY);
	if (kl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	l = read(kl, buf, letters);
	m = write(STDOUT_FILENO, buf, l);

	free(buf);
	close(kl);
	return (m);
}
