#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function concatenate two strings.
 * @s1: the sting number one
 * @s2: the string number tow
 * @n: the number of bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}