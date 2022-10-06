#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to allocated mem, or process termination (98)
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
