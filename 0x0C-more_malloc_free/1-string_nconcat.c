#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to copy
 * Return: pointer to concatenated string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatString;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* add length of s1 to n - get total length of concatString */
	for (i = 0; s1[i]; i++)
		length++;

	concatString = malloc(sizeof(char) * (length + 1));

	if (concatString == NULL)
		return (NULL);

	length = 0;

	/* concatenate the strings */
	for (i = 0; s1[i]; i++, length++)
		concatString[length] = s1[i];

	for (i = 0; s2[i] && i < n; i++, length++)
		concatString[length] = s2[i];

	concatString[length] = '\0';

	return (concatString);
}
