#include "main.h"
/**
 * string_toupper - func
 *
 * @hi: var
 *
 * Return: hi
 */
char *string_toupper(char *hi)
{
	int i = 0;
	int y = 'a' - 'A';

	for (i = 0; hi[i] != '\0'; ++i)
	{
		if (hi[i] >= 'a' && hi[i] <= 'z')
		{
			hi[i] = hi[i] - y;
		}
	}
	return (hi);
}
