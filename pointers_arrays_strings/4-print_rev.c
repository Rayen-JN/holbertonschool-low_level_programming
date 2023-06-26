#include "main.h"
#include <string.h>

/**
* print_rev - func
* @s: str
*/

void print_rev(char *s)
{
	int x = strlen(s) -1;
	while (x >= 0)
	_ptchar(s[x]);
	x--;
}

