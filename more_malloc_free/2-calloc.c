#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
