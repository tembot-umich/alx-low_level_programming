#include <stdlib.h>
#include "lists.h"

/**
 * list_len - output the no of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
	l++;
	h = h->next;
	}
	return (l);
}

