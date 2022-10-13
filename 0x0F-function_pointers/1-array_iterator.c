#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a paremeter
 * 		    on each element of an array
 * @array: the array to iterate
 * @size: array size
 * @action: pointer to function
 */
void array_iterator (int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
