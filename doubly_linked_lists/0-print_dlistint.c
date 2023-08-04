#include "lists.h"
/**
 * print_dlistint -  prints
 * @h:pointer
 * Return:the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int nb;

	ptr = h;
	nb = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;

		nb++;
	}
	return (nb);
}
