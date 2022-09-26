#include "main.h"

/**
 * *_memcpy - copy memory area
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
