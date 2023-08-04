#include "lists.h"
/**
 * dlistint_len - number of elements
 * @h:pointer
 * Return:the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int nb;

	ptr = h;
	nb = 0;
	if (ptr)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		nb++;
	}
	return (nb);
}