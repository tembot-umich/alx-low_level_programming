#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Calculates the count of distinct nodes in the linked list
 * @head: A reference to the head of the listint_t 
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *jane, *harry;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	jane = head->next;
	harry = (head->next)->next;

	while (harry)
	{
		if (jane == harry)
		{
			jane = head;
			while (jane != harry)
			{
				nodes++;
				jane = harry->next;
				harry = harry->next;
			}

			jane = jane->next;
			while (jane != harry)
			{
				nodes++;
				jane = jane->next;
			}

			return (nodes);
		}

		jane = jane->next;
		harry = (harry->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - outputs a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

