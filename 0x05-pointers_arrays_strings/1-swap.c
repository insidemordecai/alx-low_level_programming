#include "main.h"

/**
 * swap_int - swap value of two ints
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp =  *a;

	*a = *b;
	*b = temp;
}
