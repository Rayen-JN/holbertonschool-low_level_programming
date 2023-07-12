#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this is function for free 2d  array
 * @height: the he
 */
void free_grid(int **grid, int height)

{
	int i = 0;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
}