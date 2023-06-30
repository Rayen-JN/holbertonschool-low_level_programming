#include "main.h"

/**
 * print_numbers - This func
 *
 * Return: 0
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
