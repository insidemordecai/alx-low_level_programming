#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive integers
 * @argc: no. of arguments passed
 * @argv: array with the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
