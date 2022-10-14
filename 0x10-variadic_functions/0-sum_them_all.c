#include "variadic_functions.h"

/**
 * sum_them_all - add up all parameters
 * @n: no. of parameters passed 
 * Return: sum, else if n = 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum); /* sum will remain 0 if n = 0 */
}
