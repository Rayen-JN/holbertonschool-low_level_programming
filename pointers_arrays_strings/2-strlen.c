#include <stdio.h>
#include "main.h"

/**
* _strlen - len of str
* @s: the str
* Return: int str
*/

int _strlen(char *s)
{
	int x = 0;

	for (; s[x]; x++)
	;
	return (x);

}
