#include "main.h"

/**
 * _strcmp - compare two strings like standard strcmp
 * @s1: first string
 * @s2: second string
 * Return: 0 if they match
 *	   negative difference if s1 < s2
 *	   positive difference if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
