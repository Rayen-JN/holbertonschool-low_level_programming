#include <stdio.h>
/**
 * main - print all digit frome 0 to 10 with putchar
 *
 * Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
