#include "3-calc.h"

/**
 * op_add - sum two numbers
 * @a: first int 
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - get the difference of two ints
 * @a: 1st int
 * @b: 2nd int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - get the product of two ints
 * @a: 1st int
 * @b: 2nd int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: 1st int
 * @b: 2nd int *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two ints
 * @a: 1st int
 * @b: 2nd int
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
