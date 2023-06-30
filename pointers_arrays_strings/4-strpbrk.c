#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - func
 * @s: in
 * @accept: str
 * Return: nul
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, count;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[index])
			{
				return (&s[index]);
			}
		}
	}
	return (NULL);
}
