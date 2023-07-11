#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this is a func
 * @width: the width of array
 * @height: the height of array
 * Return: True
 */

int **alloc_grid(int width, int height)
{
	int *ptr;
	int i;
	int x;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ptr = (int *)malloc((width * height) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{

		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			ptr[i][x] = 0;
		}
		return (ptr);
	}
	free(ptr);
}
