#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: is char
 * Return: 0 or 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
