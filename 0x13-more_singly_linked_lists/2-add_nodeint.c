#include "lists.h"

/**
 * add_nodeint - Prepends a new node to the linked list
 * @head: pointer to the head of the linked list
 * @n: data to be stored in the new created node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


