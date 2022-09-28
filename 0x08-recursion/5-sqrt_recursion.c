#include "main.h"

/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to work on
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (getRoot(n, 1));
}

/**
 * getRoot - get the root
 * @num: number to get root of
 * @root: numbers to try against to get root
 * Return: the root
 */
int getRoot(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root * root < num)
		return (getRoot(num, root + 1));
	else
		return (-1);
}
