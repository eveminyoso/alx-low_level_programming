#include "lists.h"
/**
 *delete_nodeint_at_index - deleting from a given index
 *@head: pointer to pointer to head node
 *@index: given position
 *Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
