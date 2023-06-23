#include "main.h"
#include <stdio.h>
/**
 * more_numbers - This func
 *
 * Return:  0
 */

void more_numbers(void)
{
	int times, number;

	for (times = 1; times <= 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				putchar((number / 10) + '0');
			}
			putchar((number % 10) + '0');
		}
		putchar('\n');
	}
}
