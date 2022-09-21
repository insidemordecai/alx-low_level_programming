#include "main.h"

/**
 * *string_toupper - change all lowercase letters to uppercase
 * @str: string to be changed
 * Return: changed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32; /* using ASCII */

		i++;
	}

	return (str);
}
