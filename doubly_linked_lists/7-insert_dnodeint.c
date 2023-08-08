#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h:head of the file
 * @idx:index the node
 * @n:data
 * Return: 1 or -1
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new;
	unsigned int i;

	ptr = *h;
	i = 0;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL && i < idx)
	{
		ptr = ptr->next;
		i--;
	}
	new->prev = ptr;
	new->n = n;
	ptr = ptr->next;
	new->next = ptr;
	return (new);
}
