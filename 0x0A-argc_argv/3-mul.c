#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: no. of arguments
 * @argv: array with args
 * Return: product or error
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}
