#include <stdio.h>

/**
 * main - print number of passed arguments
 * @argc: no. of command line args
 * @argv: array w/ args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
