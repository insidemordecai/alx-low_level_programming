#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: string of binary characters
 * Return: converted number, or 0 if b is NULL or non-binary char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == '\0')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		decimal = (decimal << 1) + (b[i] - '0');
		i++;
	}

	return (decimal);
}
