#include <stdio.h>
/**
 * main - print all single digits of base 10 starting from 0
 *	- not allowed to use char
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		/* in ASCII, 48 is 0 */
		putchar(48 + number);
		number++;
	}

	putchar('\n');
	return (0);
}

