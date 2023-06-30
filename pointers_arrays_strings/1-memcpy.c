#include "main.h"

/**
 * _memcpy - func
 *
 * @dest: arry
 * @src: arr
 * @n: variable
 * Return: cha
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
