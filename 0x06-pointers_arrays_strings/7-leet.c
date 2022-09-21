#include "main.h"

/**
 * *leet - encode a string into 1337
 * for 1337 details - https://en.wikipedia.org/wiki/Leet
 * @str: string to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	/* index of letters in leet equal their 1337 form*/
	char leet[8] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}

		i++;
	}

	return (str);
}
