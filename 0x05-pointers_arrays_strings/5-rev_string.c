#include "main.h"

/**
 * rev_string - reverse a string
 * @s: provided string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, halfLength, i = 0;
	char temp;

	/* get the length of the string */
	while (s[length] != '\0')
		length++;

	halfLength = length / 2;

	/* work our way from both ends thus using half the length */
	while (halfLength--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i]; /* assign first value to last */
		s[i] = temp; /* assign last value to first */
		i++;
	}
}
