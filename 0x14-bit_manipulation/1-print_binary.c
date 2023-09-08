#include "main.h"

/**
 * print_binary - The binary representation of a decimal number is displayed
 * @n: number to output in binary
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int emmy;

	for (j = 63; j >= 0; j--)
	{
		emmy = n >> j;

		if (emmy & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
