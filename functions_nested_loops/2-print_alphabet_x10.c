#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y < 'z'; y++)
			_putchar(y);
	}
	return (0);
}
