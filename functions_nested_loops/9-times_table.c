#include "main.h"
/**
 * times_table - Write a function that prints the
 *
 * Return: 0
*/
void times_table(void)
{
	int x, y, a;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			a = x * y;

			if (a <= 9)
				_putchar(' ');
			else
				_putchar((a / 10) + '0');

			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
