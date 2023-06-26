#include "main.h"
#include <stdio.h>

/**
 * print_array - print arry
 * @n: var
 * @a: var
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if((i + 1) < n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
