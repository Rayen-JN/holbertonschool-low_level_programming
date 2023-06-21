#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@y: this is variabel
 *Return: 0
*/
int print_last_digit(int y)

{

	int a;

	if (y < 0)

		y = -y;


	a = y % 10;


	if (a < 0)

		a = -a;


	_putchar(a + '0');


	return (a);
}
