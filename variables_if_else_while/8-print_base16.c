#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: 0
*/
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		if (num == 58)
		{
			num += 39;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
