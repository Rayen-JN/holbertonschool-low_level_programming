#include "main.h"
/**
 * sqrt1 - makesqrt
 * @a: num
 * @b: num
 *
 * Return: 1
 */
int sqrt1(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - sqrt
 * @n: Num
 *
 * Return: 1
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
