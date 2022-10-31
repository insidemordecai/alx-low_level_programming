#include "main.h"

/**
 * flip_bits - count number of bits needed to be changed
 *			   to get from one number to another
 * @n: the number
 * @m: the number to flip n to
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flippedbits = 0;

	while (xor > 0)
	{
		flippedbits += (xor & 1);
		xor >>= 1;
	}

	return (flippedbits);
}
