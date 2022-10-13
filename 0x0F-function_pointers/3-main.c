#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: number of arguments passed by user
 * @argv: array with the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* check for non-matching operator */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* cant perform division or modulo if divisor is 0 */
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
