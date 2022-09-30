#include "main.h"

/**
 * _abs - compute absolute value of an int
 * @n: received int
 * Return: 1
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else if (n == 0)
		return (0);
	else
		return (n);
}
