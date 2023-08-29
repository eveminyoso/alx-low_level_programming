#include "lists.h"

/**
 *free_listint - frees our linke list
 *@head:pointer to our list's head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;/*Declaring a pointer to traverse the list*/

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
