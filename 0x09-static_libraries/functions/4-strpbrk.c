#include "main.h"

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: set of bytes
 * Return: pointer to byte in s that matched, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		/* compare the single char of s against those of accept */
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
