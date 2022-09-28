#include "main.h"

/**
 * is_prime_number - check if number is a prime number
 * @n: number to check
 * Return: 1 if it is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (checkPrime(n, 2));
}

/**
 * checkPrime - check if a number is divisible
 * @num: number to check
 * @div: divisor
 * Return: 0 if divisible, else 1
 */
int checkPrime(int num, int div)
{
	if (div >= num)
		return (1);
	else if (num % div == 0)
		return (0);

	return (checkPrime(num, div + 1));
}
