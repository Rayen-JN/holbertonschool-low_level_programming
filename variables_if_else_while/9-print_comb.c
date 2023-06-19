#include <stdio.h>
/**
 * main - try to fix this
 *
 * Return: 0
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
		if (num != 58)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
