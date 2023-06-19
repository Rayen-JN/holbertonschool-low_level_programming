#include <stdio.h>
/**
 * main - Write a program that prints
 *
 * return: 0
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n')
	return (0);
}
