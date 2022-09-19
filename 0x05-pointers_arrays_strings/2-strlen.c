#include "main.h"

/**
 * _strlen - check length of a string
 * @s: provided string
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
