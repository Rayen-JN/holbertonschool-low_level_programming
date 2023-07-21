#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of args
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);


	}
	va_end(x);

	return (sum);
}
