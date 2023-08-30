#include "lists.h"
/**
 *find_listint_loop - looking for a loop in our linked list
 *@head: pointer to pointer to our head
 *Return:nothing
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head->next;
	listint_t *fast = head->next->next;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			/**
			 * Loop detected.We move the slow pointer to head and
			 * advance both pointers at a time
			 */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
