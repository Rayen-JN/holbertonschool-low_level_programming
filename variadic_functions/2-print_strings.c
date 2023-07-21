#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of arg
 * @separator: separator is the string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *ptr;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(str);
}
