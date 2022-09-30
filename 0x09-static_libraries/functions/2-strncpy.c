#include "main.h"

/**
 * *_strncpy - copies a string like standard strncpy
 * @dest: to be copied into
 * @src: source string
 * @n: max. number of bytes to copy from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLength = 0;

	while (src[i++])
		srcLength++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srcLength; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
