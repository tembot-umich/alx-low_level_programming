#include "main.h"

/**
 * create_file - writes a file.
 * @filename: pointer to name of file to be created.
 * @text_content: pointer to a string to manipulate in the file.
 * Return: If function fails - -1 Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, k, win = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (win = 0; text_content[win];)
			win++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(fd, text_content, win);

	if (fd == -1 || k == -1)
		return (-1);

	close(fd);

	return (1);
}

