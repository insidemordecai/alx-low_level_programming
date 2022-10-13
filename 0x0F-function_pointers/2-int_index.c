#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search through
 * @size: array size
 * @cmp: funcion to compare values
 * Return: -1 on no match or size <= 0
 *	   else index of first matched element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
