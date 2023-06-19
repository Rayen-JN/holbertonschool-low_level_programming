#include <stdio.h>
/**
 * main - print all char reverse
 *
 * Return: 0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')

	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
