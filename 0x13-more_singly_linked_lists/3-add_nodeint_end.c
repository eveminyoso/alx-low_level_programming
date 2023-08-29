#include "lists.h"

/**
 *add_nodeint_end - adds new node at the end of linked list
 *@head: head of the list
 *@n:number to be added
 *Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = new;

	return (new);
}
