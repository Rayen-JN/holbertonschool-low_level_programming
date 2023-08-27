#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int valu;

	for (i = 63; i >= 0; i--)
	{
		valu = n >> i;

		if (valu & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
