#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @index: the index starting from 0
 * @n: the number to search through
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
