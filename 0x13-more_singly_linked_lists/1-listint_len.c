#include "lists.h"

/**
 *listint_len - prints number of elements in a lists
 *@h: header pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
