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

	for (n = len / 2; n <= len; n++)
	{
		_putchar(str[n]);
	}
		_putchar('\n');
}
