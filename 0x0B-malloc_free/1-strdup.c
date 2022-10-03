#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *	    - containing a copy of the string given as a parameter
 * @str: string to copy
 * Return: a pointer to duplicated string
 *	  - or NULL if str is NULL or there is insufficient memory
 */
char *_strdup(char *str)
{
	int i, length = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	/* +1 for terminating NULL at end of string*/
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
