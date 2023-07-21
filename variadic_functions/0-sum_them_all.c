#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of args
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
