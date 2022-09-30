#include "main.h"

/**
 * *_strstr - locate a substring
 * @needle: substring to locate
 * @haystack: where to search
 * Return: pointer to beginning of located substring, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;

		/**
		 * if they match, loop within until the end (or end of match)
		 * so that the haystack pointer is not incremented
		 *
		 * if not, haystack is incremented thus new pointer
		 */
		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);

			i++;
		}

		haystack++;
	}

	return ('\0');
}
