#include "main.h"

/**
 * get_bit - The value of a bit at a specific index within a decimal number is retrieved
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int amount;

	if (index > 63)
		return (-1);

	amount = (n >> index) & 1;

	return (amount);
}
