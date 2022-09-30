#include "main.h"

/**
 * *_strcat - appends a string to another
 * overwrite the terminating null byte
 * @dest: to be appended into
 * @src: string to copy from
 * Return: dest after appending
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, destLength = 0;

	while (dest[index++])
		destLength++;

	for (index = 0; src[index]; index++)
		dest[destLength++] = src[index];

	return (dest);
}
