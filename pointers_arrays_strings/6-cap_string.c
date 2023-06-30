#include "main.h"

/**
 *  cap_string - func
 *
 *  @n: array
 *  Return: char
 */

char *cap_string(char *n)
{
	int count = 0;

	while (n[count])
	{
		while (!(n[count] >= 97 && n[count] <= 122))
			count++;

		if (n[count - 1] == 10 || n[count - 1] == 9 || n[count - 1] == 32 ||
		n[count - 1] == 44 || n[count - 1] == 59 || n[count - 1] == 46 ||
		n[count - 1] == 33 || n[count - 1] == 63 || n[count - 1] == 34 ||
		n[count - 1] == 40 || n[count - 1] == 40 || count == 0 ||
		n[count - 1] == 41 || n[count - 1] == 123 || n[count - 1] == 125)
		{
			n[count] = n[count] - 32;
		}

	}
return (n);
}
