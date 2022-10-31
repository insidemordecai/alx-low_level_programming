#include "main.h"

/**
 * print_binary - converts a number and prints its binary value
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
