#include <stdio.h>
/**
 * main - print one char
 *
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch >= 'z')

	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
