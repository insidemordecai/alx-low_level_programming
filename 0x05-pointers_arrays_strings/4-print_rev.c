#include "main.h"

/**
 * print_rev - print a string in reverse
 * followed by a new line
 * @s: provided string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	/* increment until the end to get the length */
	while (s[i])
		i++;

	/* use the new value of i to decrement while printing */
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
