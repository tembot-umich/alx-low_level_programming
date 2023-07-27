#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    	list_t *head;
    	list_t *new;
    	list_t hello = {"World", 5, NULL};
    	size_t l;

    	head = &hello;
    	new = malloc(sizeof(list_t));
    	if (new == NULL)
    	{
        	printf("Error\n");
        	return (1);
    	}
    	new->str = strdup("Hello");
    	new->len = 5;
    	new->next = head;
    	head = new;
    	l = list_len(head);
    	printf("-> %lu elements\n", l);
    	free(new->str);
    	free(new);
	return (0);
}