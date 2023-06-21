#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@y: this is variabel
 *Return: 0
*/
int print_last_digit(int y)
{
int last_digit = y % 10;
_putchar(last_digit + '0');
return last_digit;
}
