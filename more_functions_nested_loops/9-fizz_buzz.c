#include <stdio.h>
#include "main.h"

/**
 * main -  fun
 *
 * Return: 0
 *
 */

/**
 * fizz_buzz - this part
 *
 * multiple of 3 - print
 * multiple of 5 - print
 * multiple of the two - mut
 *
 * Return: 0
 */

int fizz_buzz(void);
int main(void)
{
	fizz_buzz();
	return (0);
}

int fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
