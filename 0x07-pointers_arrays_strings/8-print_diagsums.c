#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diagonals of a square matrix
 * @size: size of matrix
 * @a: the matrix of ints
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
