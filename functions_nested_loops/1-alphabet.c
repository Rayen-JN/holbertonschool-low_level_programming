#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all char character
 *
 * Return: 0
*/
void print_alphabet(void)
	{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}

	_putchar('\n');
}
