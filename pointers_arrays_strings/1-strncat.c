#include "main.h"
/**
* _strncat - cat str
* @dest: destination
* @src: str sourse
* @n: count
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int c1 = 0;
int c2 = 0;

	while (dest[c2])
	{
		c2++;
	}

	while (src[c1] && c1 < n)
	{
		dest[c2++] = src[c1++];
	}
return (dest);


}
