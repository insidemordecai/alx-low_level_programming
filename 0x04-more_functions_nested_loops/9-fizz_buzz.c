#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of both, print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
			{
				printf("Buzz ");
			}
			else 
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}

	printf("\n");
	return (0);
}
