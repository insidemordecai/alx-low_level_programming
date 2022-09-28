#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: given number
 * if n < 0 - return -1 to indicate an error
 * Return: factorial result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
