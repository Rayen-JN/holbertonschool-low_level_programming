#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: is the number of integers passed to the function
 * @separator: separator is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), i < n - 1 ? separator : "");
	}
	va_end(args);
	printf("\n");
}
