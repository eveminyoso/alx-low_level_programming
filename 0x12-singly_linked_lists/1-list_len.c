#include "lists.h"
/**
 * list_len - prints number of elements in linked lists
 * @h:pointer to our linked lists
 *
 * Return:number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;/*incrementing to to the next element*/
		h = h->next;
	}
	return (count);
}
