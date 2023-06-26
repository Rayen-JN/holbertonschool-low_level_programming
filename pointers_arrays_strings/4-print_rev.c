#include <stdio.h>
#include "main.h"

/**
* print_rev - function print str in reverse order
* @s: str to print
*/

void print_rev(char *s)
{
	int x = strlen(s) -1;

	while (x >= 0)
	{
	_putchar(s[x]);
	x--;
	}
	_putchar('\n');
}

