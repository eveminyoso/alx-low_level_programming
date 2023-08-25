#include "lists.h"
/**
 * add_node_end - adds the next node to the end
 * @head:pointer to the head of our node list list_t
 * @str:pointer to string to be duplicated
 * Return:our added node at the end of our list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;/*Traverse to the end and add the new code*/
	}
	return (new_node);
}
