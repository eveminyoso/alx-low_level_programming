#include "lists.h"
/**
 * add_node - adds a new node at the beginning of our
 * @head: pointer to the head of our linked lists
 * @str:string to be added and duplicated to the new node
 * Return: The address of our new element or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);/*duplicating our input string*/
	if (new_node->str == NULL)
	{
		free(new_node);/*Freeing new_node if str is Null*/
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;/*Setting the pointer of the new node to current head*/
	*head = new_node;/*updating head to point to the new_node*/

	return (new_node);
}
