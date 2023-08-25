#include <stdio.h>
#include "lists.h"
#include "main.h"

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}
	return (node);
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

	print_list(&node1);

	return (0);
}
