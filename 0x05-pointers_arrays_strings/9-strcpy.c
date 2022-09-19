#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: to be copied into
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
