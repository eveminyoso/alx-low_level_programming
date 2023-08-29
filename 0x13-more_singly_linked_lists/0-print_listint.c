#include <stdio.h>

/**
 * print_listint - prints all the elements
 * @h: pointer to the head of the list
 * Return: number of nodes in the linked list
 */

size_t print_list(const Node *head)
{
	size_t cnt = 0;

	while (head != NULL)

	{
		printf("%d\n",  h->n);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
