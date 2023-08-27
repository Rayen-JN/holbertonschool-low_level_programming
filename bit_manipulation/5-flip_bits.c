#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int current;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ex >> i;
		if (current & 1)
			c++;
	}

	return (c);
}
