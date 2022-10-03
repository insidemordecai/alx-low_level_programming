#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concatString;
	int length = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* get length of both strings combined */
	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concatString = malloc(sizeof(char) * length);

	if (concatString == NULL)
		return (NULL);

	/* concatenate the strings */
	for (i = 0; s1[i]; i++, j++)
		concatString[j] = s1[i];

	for (i = 0; s2[i]; i++, j++)
		concatString[j] = s2[i];

	return (concatString);
}
