#include "main.h"

/**
* _strcat - add to str
*
* @dest: destination
* @src: source
* Return: str
*/

char *_strcat(char *dest, char *src)
{
	int c1 = 0;
	int c2 = 0;

	while (dest[c2])
	{
		c2++;
	}

	while (src[c1])
	{
		dest[c2++] = src[c1++];
	}
return (dest);
}
