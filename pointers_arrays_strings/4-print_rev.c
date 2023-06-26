#include "main.h"
#include <string.h>

/**
* print_rev - func
* @s: str
*/

void print_rev(char *s)
{

	int i = 0;
	int x = strlen(s);

	while (i < x)
	{
		char y;
		y = s[i];
		s[i] = s[x];
		s[x] = y;
		i++;
		x--;
	}
}
