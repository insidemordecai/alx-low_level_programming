#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			space = i;
			j = 0;

			/* print the required spaces at first */
			while (j < space)
			{
				_putchar(' ');
				j++;
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
