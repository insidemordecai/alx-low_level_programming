#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: provided starting number
 * numbers separated by commas followed by a space
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("%d\n", n);
}
