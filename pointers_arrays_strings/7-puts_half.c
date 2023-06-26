#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - func
* @str: str will print
*/

void puts_half(char *str)
{
	int n;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (n = len / 2; n <= (len - 1); n++)
		{
			_putchar(str[n]);
		}
	}
	else
		for (n = (len / 2) + 1; n <= (len - 1); n++)
		{
			_putchar(str[n]);
		}

	_putchar('\n');
}
