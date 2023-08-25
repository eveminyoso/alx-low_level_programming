#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * list_len -  number of elements in a linked list_t list
 * @h:element
 * @main: element
 * Return:element number or 0
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

		return (count);
}

int main(void)
{
	list_t node1, node2, node3;

	node1.str = "Hello";
	node1.len = 5;
	node1.next = &node2;

	node2.str = "World";
	node2.len = 5;
	node2.next = &node3;

	node3.str = NULL;
	node3.len = 0;
	node3.next = NULL;

	size_t length = list_len(&node1);

	printf("Number of elements in the list: %lu\n", length);

	return (0);
}
