#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
*/
void jack_bauer(void)
{
	int h;

	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}

	h++;
	}
	_putchar('\n');
}
