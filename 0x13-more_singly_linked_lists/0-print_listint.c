#include "lists.h"

/**
 * print_listlint - outputs all elements of a linked list
 * @h: type of linked list of listlint_t to output
 *
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
