#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list and handles loops.
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		temp->next = NULL;

		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
