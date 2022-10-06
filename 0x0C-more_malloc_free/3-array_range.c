#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an array of ints
 * with values from min to max (inclusive of min & max)
 * @min: lower end of range to start from
 * @max: upper end of range to end on
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1; /* inclusive of both ends */

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		array[i] = min;

	return (array);
}
