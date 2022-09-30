#include <stdio.h>

/**
 * main - print all arguments received
 * @argc: no. of arguments
 * @argv: array with args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
