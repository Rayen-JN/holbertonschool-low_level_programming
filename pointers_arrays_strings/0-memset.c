#include "main.h"

/**
 * _memset - func
 *
 * @s: char
 * @b: con
 * @n: Num
 * Return: sr
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
