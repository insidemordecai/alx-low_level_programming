#include <stdio.h>

/**
 * main - print largest prime factor of specified number
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long largestPrime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			largestPrime = divisor;
		}
		divisor++;
	}
	printf("%ld\n", largestPrime);
	return (0);
}
