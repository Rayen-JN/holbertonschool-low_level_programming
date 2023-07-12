#include <stdlib>

#include "main.h"
#include <stdio.h>
/**
 * free_grid - this is function for free 2d  array
 * @height: the he
 */
void free_grid(int **grid, int height)
{
	for (; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}