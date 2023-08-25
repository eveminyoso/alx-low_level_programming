#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list_alt - prints all elements of linked list list_t
 * @h: pointer to the linked list head
 *
 * Return: total count of nodes
 */
size_t print_list_alt(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str) ? h->str : "(nil)");
		count++;
		h = h->next;
	}
	return (count);
}
