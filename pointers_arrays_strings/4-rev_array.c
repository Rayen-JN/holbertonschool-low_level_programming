#include "main.h"
/**
 * reverse_array - reverse array.
 * @a: array
 * @n: siz
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int s, b, i;

	b = 0;
	i = n - 1;
	while (b < i)
	{
		s = *(a + b);
		*(a + b) = *(a + i);
		*(a + i) = s;
		b++;
		i--;
	}

}
