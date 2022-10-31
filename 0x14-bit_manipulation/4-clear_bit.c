#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: given index starting from 0
 * Return: 1 or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
