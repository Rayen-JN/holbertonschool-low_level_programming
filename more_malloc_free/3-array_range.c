#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the minimum number
 * @max: the maximum number
 * Return: pointer type int point to array of int
 */

int *array_range(int min, int max)
{
	int *ptr, len, i;

	if (min > max)
	{
		return (NULL);
	}
	len = ((max - min) + 1);

	ptr = malloc(len * sizeof(int));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
	free(ptr);
}
