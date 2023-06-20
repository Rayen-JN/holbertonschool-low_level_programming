#include "main.h"
#include <stdio.h>
/**
 * main - print all char
 *
 * Return: 0
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
		_putchar(x);
		x++;
	return (0);
}
