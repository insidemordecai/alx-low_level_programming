#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: received number
 * Return: 1 and print + if > zero
 *	   0 & print 0 if zero
 *	  -1 & print - if < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
