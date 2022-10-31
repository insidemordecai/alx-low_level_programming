#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, else 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	return (*endian);
}
