#include "main.h"

/**
 * get_endianness - It examines whether a machine uses little-endian or big-endian byte ordering
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *N = (char *) &b;

	return (*N);
}
