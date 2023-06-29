#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @b: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int y;
	int u;

	for (y = 0; y < n--; y++)
	{
		u = a[y];
		a[y] = a[n];
		a[n] = u;
	}
}
