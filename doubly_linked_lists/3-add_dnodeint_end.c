#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * @head:head of the list
 * @n:data
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *ptr;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->next = NULL;
	end->n = n;
	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	end->prev = ptr;
	ptr->next = end;
	return (end);
}