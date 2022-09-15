#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: provided number of time _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');
	}
}
