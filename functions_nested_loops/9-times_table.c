#include "main.h"
/**
 * times_table - Write a function that prints the
 *@i: this
 *@x: this
 * Return: 0
*/
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int x, r;

		for (x = 0; x < 10; x++)
		{
			r = i * x;
				if (r > 10)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');

					_putchar(',');
					_putchar(' ');
				}
				else
				{
				_putchar(r + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
