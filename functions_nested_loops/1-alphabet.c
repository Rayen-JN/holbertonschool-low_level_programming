#include "main.h"
#include <stdio.h>
/**
 * main - print all char character
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

	return (0);
}
