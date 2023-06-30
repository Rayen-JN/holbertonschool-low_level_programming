#include "main.h"
/**
 * leet - func
 *
 * @n: arry
 * Return: char
 */

char *leet(char *n)
{
	int count = 0;
	int count2 = 0;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (; n[count]; count++)
	{
		for (count2 = 0; letters[count2]; count2++)
		{
			if (n[count] == letters[count2])
			{
				n[count] = numbers[count2];
			}
		}
	}
	return (n);

