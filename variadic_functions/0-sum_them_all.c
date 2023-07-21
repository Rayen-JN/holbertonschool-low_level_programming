#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of args
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	if (n == 0)
	{
		return (0);
	}

	unsigned int i, sum = 0;
	va_list argss;
	va_start(argss, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argss, int);

		va_end(argss);
		return (sum);
	}
}
