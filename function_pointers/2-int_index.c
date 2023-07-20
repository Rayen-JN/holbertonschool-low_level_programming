#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: array
 * @size: the size of array
 * @cmp: the ptr
 * Return: return (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
