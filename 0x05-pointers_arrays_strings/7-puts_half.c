#include "main.h"

/**
 * puts_half - print the second half of a string
 * followed by a new line
 * if numbers of characters is odd, print the last n character of the string
 * n = (length_of_the_string - 1) / 2
 * @str: provided string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, halfLength;

	while (str[length] != '\0')
		length++;

	halfLength = (length + 1) / 2;

	while (str[halfLength] != '\0')
	{
		_putchar(str[halfLength]);
		halfLength++;
	}

	_putchar('\n');
}
