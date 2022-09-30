#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to make change
 * @argc: number of arguments
 * @argv: array with args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, i = 0, coinsUsed = 0, denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= denominations[i])
		{
			cents -= denominations[i];
			coinsUsed++;
		}
		else
		{
			i++;
		}
	}

	printf("%i\n", coinsUsed);

	return (0);
}
