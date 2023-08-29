#include "lists.h"
/**
 *pop_listint - deletes the head node
 *@head: pointer to pointer to our head
 *Return: data from deleted node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
