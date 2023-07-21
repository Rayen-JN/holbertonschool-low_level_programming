#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: separator is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);
	for (i = 0; i < number; i++)
	{
		printf("%d", va_arg(number, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");
	}
	va_end(number);
}
