#include "main.h"

/**
 * print_square - print a square using #
 * @size: dimensions of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* loop for the rows */
		for (i = 0; i < size; i++)
		{
			j = 0;

			/* loop for the columns */
			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
		}
	}
}
