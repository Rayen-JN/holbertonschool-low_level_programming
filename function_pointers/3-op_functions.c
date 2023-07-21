#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - number
 * @a: The first number.
 * @b: The second number.
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - def numb
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the def number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return number.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: The first number.
 * @b: The second number.
 *
 * Return: /
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - op mode
 * @a: The first number.
 * @b: The second number.
 *
 * Return: %
 */
int op_mod(int a, int b)
{
	return (a % b);
}
