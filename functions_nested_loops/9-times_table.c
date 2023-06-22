#include "main.h"
/**
 * times_table - Write a function that prints the
 *@i: this
 *@x: this
 * Return: 0
*/
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			int r = i * x;
				if (r >= 10)
				{
					_putchar(r / 10);
					_putchar(r % 10);
					_putchar(', ');
				}
			_putchar(r);
			_putchar(', ');
		}
	}
}
