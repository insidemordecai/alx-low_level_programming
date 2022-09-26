#include "main.h"

/**
 * _strspn - get the length of a prefrix substring
 * @s: string to scanned
 * @accept: prefix to be measured
 * Return: number of bytes in s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, bytes = 0;

	while (s[i] != '\0')
	{
		/*compare the single char in s against all in accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* check for match */
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}

			/**
			 * program reaches here ONLY if no match exist
			 * check if position j was last in accept
			 * if so end code for no match
			 */
			else if (accept[j + 1] == '\0')
				return (bytes);
		}

		i++;
	}

	return (bytes);
}
