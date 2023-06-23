#include "main.h"
#include <stdio.h>
/**
 * print_square - funcc
 * @size: num
 *
 * Return: 0
 *
 */

void print_square(int size)
{
	int times, simbol;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (times = 0; times < size; times++)
	{
		for (simbol = 0; simbol < size; simbol++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
