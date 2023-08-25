#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_list - prints all elements fo linked list list_t
 * @h:pointer to the our linked list head
 *
 * Return:total count of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;/*initializing to zero*/

	while (h != NULL)
	{
		if (h->str == NULL)/*if str is null print [0] (nil)*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;/*incrementing the node counter*/
		h = h->next;/*moving to the next node*/
	}
	return (count);
}
