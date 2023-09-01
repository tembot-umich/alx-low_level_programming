#include "main.h"

/**
 * flip_bits -It calculates the count of bits that need to be changed
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int humphery;
	unsigned long int lucy = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		humphery = lucy >> p;
		if (humphery & 1)
			count++;
	}

	return (count);
}
