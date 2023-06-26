#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* rev_string - rev str
* @s: the str
*/

void rev_string(char *s)
{
	int j = strlen(s) - 1;
	int i = 0 ;
	while (i < j)
	{
		int t ;

		t = s[i];
		s[i] = s[j];
		s[j] = t ;
		i++;
		j--;
	}
}
