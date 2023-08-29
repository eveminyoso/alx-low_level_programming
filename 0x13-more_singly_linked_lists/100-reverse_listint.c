#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node = NULL;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
