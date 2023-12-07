#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int p;

	for (p = 0; p < index && head->next; p++)
	{
		head = head->next;
	}
	if (p < index)
		return (NULL);
	return (head);
}
