#include <stdio.h>

/**
 * main -  Entry point
 *
 * Return: 0
 *
 */

int fizz_buzz(void);
int main(void)
{
	fizz_buzz();
	return (0);
}


/**
 * fizz_buzz - This function print the 1-100 numbers and if some number is:
 *
 * multiple of 3 - print Fizz.
 * multiple of 5 - print Buzz
 * multiple of the two - FizzBuzz
 *
 * Return:  0
 *
 */

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
