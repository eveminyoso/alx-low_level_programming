#include "lists.h"
/**
 * free_list - frees memory allocated in our list
 * @head:pointer to our head node
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;/*storing our head pointer to a temp*/
		head = head->next;/*Moving to the next node*/
		free(tmp->str);/*Freeing the duplicated string*/
		free(tmp);/*Freeing our current node*/
	}
}
