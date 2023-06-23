#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - This func
 * @n: re
 *
 * Return: 0
 *
 */

void print_diagonal(int n)
{
	int times, spaces;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (spaces = 0; spaces < times; spaces++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
