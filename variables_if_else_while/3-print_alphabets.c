#include <stdio.h>
/**
 * main - print char lower and upper
 *
 * Return: 0
*/
int main(void)
{
	char ch = 'a';
	char upper = 'A';
		while (ch <= 'z')

		{
			putchar(ch);
			ch++;
		}
		while (upper <= 'Z')

		{
			putchar(upper);
			upper++;
		}
			putchar('\n');
			return (0);

}
