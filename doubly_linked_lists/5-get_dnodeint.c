#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index:index of the node
 * Return:the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int n;

	n = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (n == index)
		{
			return (ptr);
		}
		n++;
		ptr = ptr->next;
	}
	return (NULL);
}
