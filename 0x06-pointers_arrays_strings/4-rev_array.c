#include "main.h"

/**
 * reverse_array - reverse content of an array of ints
 * @a: array
 * @n: number of elements of the array to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int halfLength, i, temp;

	halfLength = n / 2;

	for (i = 0; i < halfLength; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
