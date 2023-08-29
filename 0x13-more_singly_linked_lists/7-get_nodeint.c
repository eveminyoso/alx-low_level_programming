#include "lists.h"
/**
 *get_nodeint_at_index - get node at a given index
 *@head: pointer to head node
 *@index: print to a given index
 *Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
	{
		return (head);
	}

	head = head->next;
	count++;
	}

	return (NULL);
}
