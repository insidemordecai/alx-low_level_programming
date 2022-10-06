#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array
 * the memory is set to zero
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: pointer to allocated mem, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	/* fill memory with a constant byte - 0 */
	for (i = 0; i < nmemb * size; i++)
		filler[i] = 0;

	return (memory);
}
