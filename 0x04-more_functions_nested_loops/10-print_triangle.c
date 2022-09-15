#include "main.h"

/**
 * print_triangle - print a triangle using #
 * @size: dimension/height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			spaces = size - i;
			hashes = i;

			/* print spaces first */
			j = 0;
			while (j < spaces)
			{
				_putchar(' ');
				j++;
			}

			/* print the hashes */
			k = 0;
			while (k < hashes)
			{
				_putchar('#');
				k++;
			}

			_putchar('\n');
		}
	}
}
