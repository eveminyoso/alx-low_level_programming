#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h:pointer to our list head
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/*printing data of the current node*/
		h = h->next;/*moving to the next node*/
		cnt++;
	}
	return (cnt);
}
