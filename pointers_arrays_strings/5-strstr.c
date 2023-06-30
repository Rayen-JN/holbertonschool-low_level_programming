#include "main.h"

/**
 * _strstr - func
 *
 * Return: numb
 * @haystack: Str
 * @needle: arry
*/

char *_strstr(char *haystack, char *needle)
{
	int slots;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		slots = 0;

		if (haystack[slots] == needle[slots])
		{
			while (haystack[slots] == needle[slots])
			{
				if (needle[slots + 1] == '\0')
				{
					return (haystack);
				}
				slots++;
			}
		}
		haystack++;
	}
	return (0);
}
