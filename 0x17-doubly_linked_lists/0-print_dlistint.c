#include "lists.h"
#include <stdio.h>

/**
 ** print_dlistint - prints elements of  dlistint_t list.
 *@h: A pointer to the head of the list.
 *
 *Return: the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
		printf("%d\n", h->n)
			node_count++;
	h = h->next;
}
return (node_count);
}
