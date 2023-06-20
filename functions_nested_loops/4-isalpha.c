#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alpha character.
 * @c: is char
 * Return: 0 or 1
*/
int _isalfa(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
