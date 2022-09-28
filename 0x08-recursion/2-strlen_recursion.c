#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: the string
 * Return: length int value
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
