#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at given index
 *@head:pointer to pointer to the head of our list
 *@index: where we should delete
 *Return:1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;

		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
}
