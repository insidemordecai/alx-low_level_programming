#include "main.h"

/**
 * _pow_recursion - get value of x raised to the power of y
 * @x: value to be raised
 * @y: the power
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
