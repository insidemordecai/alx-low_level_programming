#include "main.h"

/**
 * *_strncat - append one string to another
 *	       use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string to be appended into
 * @src: string to copy from
 * @n: number of bytes
 * Return: string at dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLength = 0;

	while (dest[index++])
		destLength++;

	for (index = 0; src[index] && index < n; index++)
		dest[destLength++] = src[index];

	return (dest);
}
