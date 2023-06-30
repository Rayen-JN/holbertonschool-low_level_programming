#include "main.h"

/**
 * _strchr - func
 *
 * @s: Array
 * @c:  str
 * Return: str
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index]; index++)
	{
		if (s[index] == c)
			return (index + s);
		if (s[index] == '\0')
			continue;
	}
	if (c == 0)
		return (index + s);
	return (0);
}
