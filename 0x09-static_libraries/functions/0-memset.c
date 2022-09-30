#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @b: constant byte
 * @s: pointer to memory area
 * @n: max number of bytes to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}
