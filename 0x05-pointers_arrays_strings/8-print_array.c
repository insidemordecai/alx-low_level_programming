#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @n: provided, number of elements to be printed
 * separated by a comma followed by a space - in same order as stored
 * @a: provided array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			break;
		}

		printf("%d, ", a[i]);
		i++;
	}

	printf("\n");
}
