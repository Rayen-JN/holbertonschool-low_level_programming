#include "lists.h"

/**
 * list_len - return the number of node
 * @h: pointer that point to a node
 * Return: number of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
