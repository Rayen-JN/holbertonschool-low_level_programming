#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - func
 * @a: Arry
 * @size: indexx
*/

void print_diagsums(int *a, int size)
{
	int columns;
	int lines;
	int count1 = 0;
	int count2 = 0;

	for (lines = 0; lines < size; lines++)
	{
		for (columns = 0; columns < size; columns++)
		{
			if (lines == columns)
				count1 = count1 + *(a + lines * size + columns);

		}
	}
	for (lines = 0; lines <= size; lines++)
	{
		for (columns = size; columns >= 0; columns--)
		{
			if (lines == size - columns - 1)
				count2 = count2 + *(a + lines * size + columns);
		}
	}
	printf("%d, %d\n", count1, count2);
}
