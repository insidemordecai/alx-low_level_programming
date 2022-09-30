#include "main.h"

/**
 * *_strchr - locate a char in a string
 * @c: char to locate
 * @s: string
 * Return: pointer to first occurence of c or NULL (if not found)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}

	return ('\0');
}
