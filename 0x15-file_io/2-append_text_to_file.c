#include "main.h"

/**
 * append_text_to_file - Adds text to the conclusion of a file.
 * @filename: A pointer referring to the file's name.
 * @text_content: The string intended for appending at the end of the file.
 * Return: If function fails then is NULL - -1 If file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, m, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (k = 0; text_content[k];)
			k++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	m = write(n, text_content, k);

	if (n == -1 || m == -1)
		return (-1);

	close(n);

	return (1);
}

