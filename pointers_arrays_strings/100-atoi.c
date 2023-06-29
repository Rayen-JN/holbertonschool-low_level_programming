#include <stdio.h>
#include "main.h"
/**
* _atoi - convert str to int
* @s: arry
* Return: int
*
*/
int _atoi(char *s)
{
unsigned int number = 0, sign = 1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');
		else if (*s == 45)
			sign = sign * -1;
		else if (number > 0)
			break;
		s++;
	}
	return (number * sing);

}
