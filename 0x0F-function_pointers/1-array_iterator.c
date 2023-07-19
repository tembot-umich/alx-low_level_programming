#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function of an array
 * @array: array
 * @size: amount of element to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
