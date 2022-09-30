#include "main.h"

/**
 * _islower - check for a lowercase character
 * @c: received integer value
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (c == alphabet)
		{
			return (1);
		}
		alphabet++;
	}

	return (0);
}
