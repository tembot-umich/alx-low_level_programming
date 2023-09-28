#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: The number to be computed.
 *
 * Return: Absolute value of number or zero
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a *-1;

		return (abs_val);
	}

	return (a);
}
