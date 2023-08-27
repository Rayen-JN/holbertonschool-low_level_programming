#include "main.h"

/**
 * clear_bit - clear bit
 * @n: pointer
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
