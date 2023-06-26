#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * puts2 - the func print str
 *
 * @str: this is the arg
 */
void puts2(char *str)
{
	int i;
	int x = strlen(str);

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
