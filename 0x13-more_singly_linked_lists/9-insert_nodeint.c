#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node
 *@head:pointer to pointer to head in linked list
 *@idx: index value given
 *@n:data value to be stored in the new node
 *
 *Return:pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
