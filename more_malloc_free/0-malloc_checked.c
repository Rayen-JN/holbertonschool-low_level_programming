#include <stdlib>
#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc.
 * @b: the size of memory
 * Return: pointer to the array or NULL pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (m);
}