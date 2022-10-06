#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocate a memory block
 * @ptr: pointer to mem block
 * @old_size: old size (size of ptr)
 * @new_size: size of new mem block
 * Return: pointer to new mem block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *clone, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	clone = ptr;
	memory = malloc(sizeof(*clone) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memory;

	/* clone the contents over to new location */
	for (i = 0; i < old_size && i < new_size; i++, *clone++)
		filler[i] = *clone;

	free(ptr);
	return (memory);
}
