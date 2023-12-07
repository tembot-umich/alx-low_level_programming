#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: struct list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int b = 0;

	for (b = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
