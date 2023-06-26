#include <stdio.h>
#include "main.h"

/**
* swap_int - swap fun
* @a: num1
* @b: num2
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
